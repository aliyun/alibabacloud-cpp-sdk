// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYREFUNDPRICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYREFUNDPRICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class QueryRefundPriceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRefundPriceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(billingInstanceIds, billingInstanceIds_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRefundPriceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(billingInstanceIds, billingInstanceIds_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
    };
    QueryRefundPriceRequest() = default ;
    QueryRefundPriceRequest(const QueryRefundPriceRequest &) = default ;
    QueryRefundPriceRequest(QueryRefundPriceRequest &&) = default ;
    QueryRefundPriceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRefundPriceRequest() = default ;
    QueryRefundPriceRequest& operator=(const QueryRefundPriceRequest &) = default ;
    QueryRefundPriceRequest& operator=(QueryRefundPriceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->billingInstanceIds_ == nullptr
        && this->instanceId_ == nullptr; };
    // billingInstanceIds Field Functions 
    bool hasBillingInstanceIds() const { return this->billingInstanceIds_ != nullptr;};
    void deleteBillingInstanceIds() { this->billingInstanceIds_ = nullptr;};
    inline string getBillingInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(billingInstanceIds_, "") };
    inline QueryRefundPriceRequest& setBillingInstanceIds(string billingInstanceIds) { DARABONBA_PTR_SET_VALUE(billingInstanceIds_, billingInstanceIds) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryRefundPriceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    shared_ptr<string> billingInstanceIds_ {};
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
