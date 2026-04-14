// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEDICATEDIPAUTORENEWALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DEDICATEDIPAUTORENEWALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class DedicatedIpAutoRenewalRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DedicatedIpAutoRenewalRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRenewal, autoRenewal_);
      DARABONBA_PTR_TO_JSON(BuyResourceIds, buyResourceIds_);
    };
    friend void from_json(const Darabonba::Json& j, DedicatedIpAutoRenewalRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRenewal, autoRenewal_);
      DARABONBA_PTR_FROM_JSON(BuyResourceIds, buyResourceIds_);
    };
    DedicatedIpAutoRenewalRequest() = default ;
    DedicatedIpAutoRenewalRequest(const DedicatedIpAutoRenewalRequest &) = default ;
    DedicatedIpAutoRenewalRequest(DedicatedIpAutoRenewalRequest &&) = default ;
    DedicatedIpAutoRenewalRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DedicatedIpAutoRenewalRequest() = default ;
    DedicatedIpAutoRenewalRequest& operator=(const DedicatedIpAutoRenewalRequest &) = default ;
    DedicatedIpAutoRenewalRequest& operator=(DedicatedIpAutoRenewalRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRenewal_ == nullptr
        && this->buyResourceIds_ == nullptr; };
    // autoRenewal Field Functions 
    bool hasAutoRenewal() const { return this->autoRenewal_ != nullptr;};
    void deleteAutoRenewal() { this->autoRenewal_ = nullptr;};
    inline string getAutoRenewal() const { DARABONBA_PTR_GET_DEFAULT(autoRenewal_, "") };
    inline DedicatedIpAutoRenewalRequest& setAutoRenewal(string autoRenewal) { DARABONBA_PTR_SET_VALUE(autoRenewal_, autoRenewal) };


    // buyResourceIds Field Functions 
    bool hasBuyResourceIds() const { return this->buyResourceIds_ != nullptr;};
    void deleteBuyResourceIds() { this->buyResourceIds_ = nullptr;};
    inline string getBuyResourceIds() const { DARABONBA_PTR_GET_DEFAULT(buyResourceIds_, "") };
    inline DedicatedIpAutoRenewalRequest& setBuyResourceIds(string buyResourceIds) { DARABONBA_PTR_SET_VALUE(buyResourceIds_, buyResourceIds) };


  protected:
    // Whether to enable auto-renewal
    // 
    // This parameter is required.
    shared_ptr<string> autoRenewal_ {};
    // Purchase instance ID, separated by English commas if multiple.
    // 
    // This parameter is required.
    shared_ptr<string> buyResourceIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
