// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROPERTYUSAGETOPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROPERTYUSAGETOPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribePropertyUsageTopRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePropertyUsageTopRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePropertyUsageTopRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribePropertyUsageTopRequest() = default ;
    DescribePropertyUsageTopRequest(const DescribePropertyUsageTopRequest &) = default ;
    DescribePropertyUsageTopRequest(DescribePropertyUsageTopRequest &&) = default ;
    DescribePropertyUsageTopRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePropertyUsageTopRequest() = default ;
    DescribePropertyUsageTopRequest& operator=(const DescribePropertyUsageTopRequest &) = default ;
    DescribePropertyUsageTopRequest& operator=(DescribePropertyUsageTopRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->type_ != nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribePropertyUsageTopRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The type of the asset fingerprint. Valid value:
    // 
    // *   **port**: port
    // *   **process**: process
    // *   **software**: software
    // *   **user**: account
    // *   **sca**: middleware
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
