// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENEEDASYNCQUERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENEEDASYNCQUERYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeNeedAsyncQueryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNeedAsyncQueryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNeedAsyncQueryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeNeedAsyncQueryRequest() = default ;
    DescribeNeedAsyncQueryRequest(const DescribeNeedAsyncQueryRequest &) = default ;
    DescribeNeedAsyncQueryRequest(DescribeNeedAsyncQueryRequest &&) = default ;
    DescribeNeedAsyncQueryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNeedAsyncQueryRequest() = default ;
    DescribeNeedAsyncQueryRequest& operator=(const DescribeNeedAsyncQueryRequest &) = default ;
    DescribeNeedAsyncQueryRequest& operator=(DescribeNeedAsyncQueryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->type_ != nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeNeedAsyncQueryRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The type of the query. Valid values:
    // 
    // *   **suspicious**: alerts
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
