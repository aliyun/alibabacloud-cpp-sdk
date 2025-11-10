// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRECHECKFORCONSOLIDATEDBILLINGACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PRECHECKFORCONSOLIDATEDBILLINGACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class PrecheckForConsolidatedBillingAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PrecheckForConsolidatedBillingAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BillingAccountId, billingAccountId_);
    };
    friend void from_json(const Darabonba::Json& j, PrecheckForConsolidatedBillingAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BillingAccountId, billingAccountId_);
    };
    PrecheckForConsolidatedBillingAccountRequest() = default ;
    PrecheckForConsolidatedBillingAccountRequest(const PrecheckForConsolidatedBillingAccountRequest &) = default ;
    PrecheckForConsolidatedBillingAccountRequest(PrecheckForConsolidatedBillingAccountRequest &&) = default ;
    PrecheckForConsolidatedBillingAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PrecheckForConsolidatedBillingAccountRequest() = default ;
    PrecheckForConsolidatedBillingAccountRequest& operator=(const PrecheckForConsolidatedBillingAccountRequest &) = default ;
    PrecheckForConsolidatedBillingAccountRequest& operator=(PrecheckForConsolidatedBillingAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->billingAccountId_ == nullptr; };
    // billingAccountId Field Functions 
    bool hasBillingAccountId() const { return this->billingAccountId_ != nullptr;};
    void deleteBillingAccountId() { this->billingAccountId_ = nullptr;};
    inline string billingAccountId() const { DARABONBA_PTR_GET_DEFAULT(billingAccountId_, "") };
    inline PrecheckForConsolidatedBillingAccountRequest& setBillingAccountId(string billingAccountId) { DARABONBA_PTR_SET_VALUE(billingAccountId_, billingAccountId) };


  protected:
    // The ID of the management account or member to be used as a main financial account.
    // 
    // This parameter is required.
    std::shared_ptr<string> billingAccountId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
