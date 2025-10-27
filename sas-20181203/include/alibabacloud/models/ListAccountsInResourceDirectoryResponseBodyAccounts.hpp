// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCOUNTSINRESOURCEDIRECTORYRESPONSEBODYACCOUNTS_HPP_
#define ALIBABACLOUD_MODELS_LISTACCOUNTSINRESOURCEDIRECTORYRESPONSEBODYACCOUNTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListAccountsInResourceDirectoryResponseBodyAccounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccountsInResourceDirectoryResponseBodyAccounts& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(BuySas, buySas_);
      DARABONBA_PTR_TO_JSON(BuySasNew, buySasNew_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(FolderId, folderId_);
      DARABONBA_PTR_TO_JSON(InstanceBuyType, instanceBuyType_);
      DARABONBA_PTR_TO_JSON(IsMaAccount, isMaAccount_);
      DARABONBA_PTR_TO_JSON(IsMarked, isMarked_);
      DARABONBA_PTR_TO_JSON(IsSasDaAccount, isSasDaAccount_);
      DARABONBA_PTR_TO_JSON(IsSiemControlAccount, isSiemControlAccount_);
      DARABONBA_PTR_TO_JSON(IsSiemDaAccount, isSiemDaAccount_);
      DARABONBA_PTR_TO_JSON(PostBasicService, postBasicService_);
      DARABONBA_PTR_TO_JSON(PostPayModuleSwitch, postPayModuleSwitch_);
      DARABONBA_PTR_TO_JSON(SaleInstance, saleInstance_);
      DARABONBA_PTR_TO_JSON(SasVersion, sasVersion_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccountsInResourceDirectoryResponseBodyAccounts& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(BuySas, buySas_);
      DARABONBA_PTR_FROM_JSON(BuySasNew, buySasNew_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
      DARABONBA_PTR_FROM_JSON(InstanceBuyType, instanceBuyType_);
      DARABONBA_PTR_FROM_JSON(IsMaAccount, isMaAccount_);
      DARABONBA_PTR_FROM_JSON(IsMarked, isMarked_);
      DARABONBA_PTR_FROM_JSON(IsSasDaAccount, isSasDaAccount_);
      DARABONBA_PTR_FROM_JSON(IsSiemControlAccount, isSiemControlAccount_);
      DARABONBA_PTR_FROM_JSON(IsSiemDaAccount, isSiemDaAccount_);
      DARABONBA_PTR_FROM_JSON(PostBasicService, postBasicService_);
      DARABONBA_PTR_FROM_JSON(PostPayModuleSwitch, postPayModuleSwitch_);
      DARABONBA_PTR_FROM_JSON(SaleInstance, saleInstance_);
      DARABONBA_PTR_FROM_JSON(SasVersion, sasVersion_);
    };
    ListAccountsInResourceDirectoryResponseBodyAccounts() = default ;
    ListAccountsInResourceDirectoryResponseBodyAccounts(const ListAccountsInResourceDirectoryResponseBodyAccounts &) = default ;
    ListAccountsInResourceDirectoryResponseBodyAccounts(ListAccountsInResourceDirectoryResponseBodyAccounts &&) = default ;
    ListAccountsInResourceDirectoryResponseBodyAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccountsInResourceDirectoryResponseBodyAccounts() = default ;
    ListAccountsInResourceDirectoryResponseBodyAccounts& operator=(const ListAccountsInResourceDirectoryResponseBodyAccounts &) = default ;
    ListAccountsInResourceDirectoryResponseBodyAccounts& operator=(ListAccountsInResourceDirectoryResponseBodyAccounts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->buySas_ == nullptr && return this->buySasNew_ == nullptr && return this->chargeType_ == nullptr && return this->displayName_ == nullptr && return this->folderId_ == nullptr
        && return this->instanceBuyType_ == nullptr && return this->isMaAccount_ == nullptr && return this->isMarked_ == nullptr && return this->isSasDaAccount_ == nullptr && return this->isSiemControlAccount_ == nullptr
        && return this->isSiemDaAccount_ == nullptr && return this->postBasicService_ == nullptr && return this->postPayModuleSwitch_ == nullptr && return this->saleInstance_ == nullptr && return this->sasVersion_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline ListAccountsInResourceDirectoryResponseBodyAccounts& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // buySas Field Functions 
    bool hasBuySas() const { return this->buySas_ != nullptr;};
    void deleteBuySas() { this->buySas_ = nullptr;};
    inline int32_t buySas() const { DARABONBA_PTR_GET_DEFAULT(buySas_, 0) };
    inline ListAccountsInResourceDirectoryResponseBodyAccounts& setBuySas(int32_t buySas) { DARABONBA_PTR_SET_VALUE(buySas_, buySas) };


    // buySasNew Field Functions 
    bool hasBuySasNew() const { return this->buySasNew_ != nullptr;};
    void deleteBuySasNew() { this->buySasNew_ = nullptr;};
    inline bool buySasNew() const { DARABONBA_PTR_GET_DEFAULT(buySasNew_, false) };
    inline ListAccountsInResourceDirectoryResponseBodyAccounts& setBuySasNew(bool buySasNew) { DARABONBA_PTR_SET_VALUE(buySasNew_, buySasNew) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline int32_t chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, 0) };
    inline ListAccountsInResourceDirectoryResponseBodyAccounts& setChargeType(int32_t chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListAccountsInResourceDirectoryResponseBodyAccounts& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string folderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline ListAccountsInResourceDirectoryResponseBodyAccounts& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // instanceBuyType Field Functions 
    bool hasInstanceBuyType() const { return this->instanceBuyType_ != nullptr;};
    void deleteInstanceBuyType() { this->instanceBuyType_ = nullptr;};
    inline int32_t instanceBuyType() const { DARABONBA_PTR_GET_DEFAULT(instanceBuyType_, 0) };
    inline ListAccountsInResourceDirectoryResponseBodyAccounts& setInstanceBuyType(int32_t instanceBuyType) { DARABONBA_PTR_SET_VALUE(instanceBuyType_, instanceBuyType) };


    // isMaAccount Field Functions 
    bool hasIsMaAccount() const { return this->isMaAccount_ != nullptr;};
    void deleteIsMaAccount() { this->isMaAccount_ = nullptr;};
    inline string isMaAccount() const { DARABONBA_PTR_GET_DEFAULT(isMaAccount_, "") };
    inline ListAccountsInResourceDirectoryResponseBodyAccounts& setIsMaAccount(string isMaAccount) { DARABONBA_PTR_SET_VALUE(isMaAccount_, isMaAccount) };


    // isMarked Field Functions 
    bool hasIsMarked() const { return this->isMarked_ != nullptr;};
    void deleteIsMarked() { this->isMarked_ = nullptr;};
    inline string isMarked() const { DARABONBA_PTR_GET_DEFAULT(isMarked_, "") };
    inline ListAccountsInResourceDirectoryResponseBodyAccounts& setIsMarked(string isMarked) { DARABONBA_PTR_SET_VALUE(isMarked_, isMarked) };


    // isSasDaAccount Field Functions 
    bool hasIsSasDaAccount() const { return this->isSasDaAccount_ != nullptr;};
    void deleteIsSasDaAccount() { this->isSasDaAccount_ = nullptr;};
    inline string isSasDaAccount() const { DARABONBA_PTR_GET_DEFAULT(isSasDaAccount_, "") };
    inline ListAccountsInResourceDirectoryResponseBodyAccounts& setIsSasDaAccount(string isSasDaAccount) { DARABONBA_PTR_SET_VALUE(isSasDaAccount_, isSasDaAccount) };


    // isSiemControlAccount Field Functions 
    bool hasIsSiemControlAccount() const { return this->isSiemControlAccount_ != nullptr;};
    void deleteIsSiemControlAccount() { this->isSiemControlAccount_ = nullptr;};
    inline string isSiemControlAccount() const { DARABONBA_PTR_GET_DEFAULT(isSiemControlAccount_, "") };
    inline ListAccountsInResourceDirectoryResponseBodyAccounts& setIsSiemControlAccount(string isSiemControlAccount) { DARABONBA_PTR_SET_VALUE(isSiemControlAccount_, isSiemControlAccount) };


    // isSiemDaAccount Field Functions 
    bool hasIsSiemDaAccount() const { return this->isSiemDaAccount_ != nullptr;};
    void deleteIsSiemDaAccount() { this->isSiemDaAccount_ = nullptr;};
    inline string isSiemDaAccount() const { DARABONBA_PTR_GET_DEFAULT(isSiemDaAccount_, "") };
    inline ListAccountsInResourceDirectoryResponseBodyAccounts& setIsSiemDaAccount(string isSiemDaAccount) { DARABONBA_PTR_SET_VALUE(isSiemDaAccount_, isSiemDaAccount) };


    // postBasicService Field Functions 
    bool hasPostBasicService() const { return this->postBasicService_ != nullptr;};
    void deletePostBasicService() { this->postBasicService_ = nullptr;};
    inline int32_t postBasicService() const { DARABONBA_PTR_GET_DEFAULT(postBasicService_, 0) };
    inline ListAccountsInResourceDirectoryResponseBodyAccounts& setPostBasicService(int32_t postBasicService) { DARABONBA_PTR_SET_VALUE(postBasicService_, postBasicService) };


    // postPayModuleSwitch Field Functions 
    bool hasPostPayModuleSwitch() const { return this->postPayModuleSwitch_ != nullptr;};
    void deletePostPayModuleSwitch() { this->postPayModuleSwitch_ = nullptr;};
    inline string postPayModuleSwitch() const { DARABONBA_PTR_GET_DEFAULT(postPayModuleSwitch_, "") };
    inline ListAccountsInResourceDirectoryResponseBodyAccounts& setPostPayModuleSwitch(string postPayModuleSwitch) { DARABONBA_PTR_SET_VALUE(postPayModuleSwitch_, postPayModuleSwitch) };


    // saleInstance Field Functions 
    bool hasSaleInstance() const { return this->saleInstance_ != nullptr;};
    void deleteSaleInstance() { this->saleInstance_ = nullptr;};
    inline string saleInstance() const { DARABONBA_PTR_GET_DEFAULT(saleInstance_, "") };
    inline ListAccountsInResourceDirectoryResponseBodyAccounts& setSaleInstance(string saleInstance) { DARABONBA_PTR_SET_VALUE(saleInstance_, saleInstance) };


    // sasVersion Field Functions 
    bool hasSasVersion() const { return this->sasVersion_ != nullptr;};
    void deleteSasVersion() { this->sasVersion_ = nullptr;};
    inline string sasVersion() const { DARABONBA_PTR_GET_DEFAULT(sasVersion_, "") };
    inline ListAccountsInResourceDirectoryResponseBodyAccounts& setSasVersion(string sasVersion) { DARABONBA_PTR_SET_VALUE(sasVersion_, sasVersion) };


  protected:
    // The Alibaba Cloud account ID of the member.
    std::shared_ptr<string> accountId_ = nullptr;
    std::shared_ptr<int32_t> buySas_ = nullptr;
    std::shared_ptr<bool> buySasNew_ = nullptr;
    std::shared_ptr<int32_t> chargeType_ = nullptr;
    // The name of the member.
    std::shared_ptr<string> displayName_ = nullptr;
    // The ID of the folder in the resource directory.
    std::shared_ptr<string> folderId_ = nullptr;
    std::shared_ptr<int32_t> instanceBuyType_ = nullptr;
    // Indicates whether the member is an administrator account of the resource directory. Valid values:
    // 
    // *   **yes**
    // *   **no**
    std::shared_ptr<string> isMaAccount_ = nullptr;
    // Indicates whether the member is marked as followed.
    std::shared_ptr<string> isMarked_ = nullptr;
    // Indicates whether the member is a delegated administrator account of Security Center. Valid values:
    // 
    // *   **yes**
    // *   **no**
    std::shared_ptr<string> isSasDaAccount_ = nullptr;
    // Indicates whether the member is an account of the threat analysis and response feature. Valid values:
    // 
    // *   **yes**
    // *   **no**
    std::shared_ptr<string> isSiemControlAccount_ = nullptr;
    // Indicates whether the member is a delegated administrator account of the threat analysis and response feature. Valid values:
    // 
    // *   **yes**
    // *   **no**
    std::shared_ptr<string> isSiemDaAccount_ = nullptr;
    std::shared_ptr<int32_t> postBasicService_ = nullptr;
    std::shared_ptr<string> postPayModuleSwitch_ = nullptr;
    std::shared_ptr<string> saleInstance_ = nullptr;
    // The edition of Security Center that you use. Valid value:
    // 
    // *   **0** or **1**: Basic
    // *   **2** or **3**: Enterprise
    // *   **5**: Advanced
    // *   **6**: Anti-virus
    // *   **7**: Ultimate
    std::shared_ptr<string> sasVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
