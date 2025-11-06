// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEBATCHTASKFORCREATINGORDERRENEWREQUESTORDERRENEWPARAM_HPP_
#define ALIBABACLOUD_MODELS_SAVEBATCHTASKFORCREATINGORDERRENEWREQUESTORDERRENEWPARAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class SaveBatchTaskForCreatingOrderRenewRequestOrderRenewParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveBatchTaskForCreatingOrderRenewRequestOrderRenewParam& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentExpirationDate, currentExpirationDate_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(SubscriptionDuration, subscriptionDuration_);
    };
    friend void from_json(const Darabonba::Json& j, SaveBatchTaskForCreatingOrderRenewRequestOrderRenewParam& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentExpirationDate, currentExpirationDate_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(SubscriptionDuration, subscriptionDuration_);
    };
    SaveBatchTaskForCreatingOrderRenewRequestOrderRenewParam() = default ;
    SaveBatchTaskForCreatingOrderRenewRequestOrderRenewParam(const SaveBatchTaskForCreatingOrderRenewRequestOrderRenewParam &) = default ;
    SaveBatchTaskForCreatingOrderRenewRequestOrderRenewParam(SaveBatchTaskForCreatingOrderRenewRequestOrderRenewParam &&) = default ;
    SaveBatchTaskForCreatingOrderRenewRequestOrderRenewParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveBatchTaskForCreatingOrderRenewRequestOrderRenewParam() = default ;
    SaveBatchTaskForCreatingOrderRenewRequestOrderRenewParam& operator=(const SaveBatchTaskForCreatingOrderRenewRequestOrderRenewParam &) = default ;
    SaveBatchTaskForCreatingOrderRenewRequestOrderRenewParam& operator=(SaveBatchTaskForCreatingOrderRenewRequestOrderRenewParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentExpirationDate_ == nullptr
        && return this->domainName_ == nullptr && return this->subscriptionDuration_ == nullptr; };
    // currentExpirationDate Field Functions 
    bool hasCurrentExpirationDate() const { return this->currentExpirationDate_ != nullptr;};
    void deleteCurrentExpirationDate() { this->currentExpirationDate_ = nullptr;};
    inline int64_t currentExpirationDate() const { DARABONBA_PTR_GET_DEFAULT(currentExpirationDate_, 0L) };
    inline SaveBatchTaskForCreatingOrderRenewRequestOrderRenewParam& setCurrentExpirationDate(int64_t currentExpirationDate) { DARABONBA_PTR_SET_VALUE(currentExpirationDate_, currentExpirationDate) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SaveBatchTaskForCreatingOrderRenewRequestOrderRenewParam& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // subscriptionDuration Field Functions 
    bool hasSubscriptionDuration() const { return this->subscriptionDuration_ != nullptr;};
    void deleteSubscriptionDuration() { this->subscriptionDuration_ = nullptr;};
    inline int32_t subscriptionDuration() const { DARABONBA_PTR_GET_DEFAULT(subscriptionDuration_, 0) };
    inline SaveBatchTaskForCreatingOrderRenewRequestOrderRenewParam& setSubscriptionDuration(int32_t subscriptionDuration) { DARABONBA_PTR_SET_VALUE(subscriptionDuration_, subscriptionDuration) };


  protected:
    std::shared_ptr<int64_t> currentExpirationDate_ = nullptr;
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<int32_t> subscriptionDuration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
