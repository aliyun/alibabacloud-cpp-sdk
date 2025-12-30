// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYBAGREMAININGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYBAGREMAININGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Companyreg20200306
{
namespace Models
{
  class QueryBagRemainingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryBagRemainingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryBagRemainingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
    };
    QueryBagRemainingRequest() = default ;
    QueryBagRemainingRequest(const QueryBagRemainingRequest &) = default ;
    QueryBagRemainingRequest(QueryBagRemainingRequest &&) = default ;
    QueryBagRemainingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryBagRemainingRequest() = default ;
    QueryBagRemainingRequest& operator=(const QueryBagRemainingRequest &) = default ;
    QueryBagRemainingRequest& operator=(QueryBagRemainingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizType_ == nullptr; };
    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline QueryBagRemainingRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


  protected:
    // This parameter is required.
    shared_ptr<string> bizType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Companyreg20200306
#endif
