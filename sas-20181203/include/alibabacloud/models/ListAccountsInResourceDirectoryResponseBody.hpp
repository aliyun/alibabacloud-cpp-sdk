// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCOUNTSINRESOURCEDIRECTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTACCOUNTSINRESOURCEDIRECTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListAccountsInResourceDirectoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccountsInResourceDirectoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Accounts, accounts_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccountsInResourceDirectoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Accounts, accounts_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAccountsInResourceDirectoryResponseBody() = default ;
    ListAccountsInResourceDirectoryResponseBody(const ListAccountsInResourceDirectoryResponseBody &) = default ;
    ListAccountsInResourceDirectoryResponseBody(ListAccountsInResourceDirectoryResponseBody &&) = default ;
    ListAccountsInResourceDirectoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccountsInResourceDirectoryResponseBody() = default ;
    ListAccountsInResourceDirectoryResponseBody& operator=(const ListAccountsInResourceDirectoryResponseBody &) = default ;
    ListAccountsInResourceDirectoryResponseBody& operator=(ListAccountsInResourceDirectoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Accounts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Accounts& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Accounts& obj) { 
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
      Accounts() = default ;
      Accounts(const Accounts &) = default ;
      Accounts(Accounts &&) = default ;
      Accounts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Accounts() = default ;
      Accounts& operator=(const Accounts &) = default ;
      Accounts& operator=(Accounts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->buySas_ == nullptr && this->buySasNew_ == nullptr && this->chargeType_ == nullptr && this->displayName_ == nullptr && this->folderId_ == nullptr
        && this->instanceBuyType_ == nullptr && this->isMaAccount_ == nullptr && this->isMarked_ == nullptr && this->isSasDaAccount_ == nullptr && this->isSiemControlAccount_ == nullptr
        && this->isSiemDaAccount_ == nullptr && this->postBasicService_ == nullptr && this->postPayModuleSwitch_ == nullptr && this->saleInstance_ == nullptr && this->sasVersion_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline Accounts& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // buySas Field Functions 
      bool hasBuySas() const { return this->buySas_ != nullptr;};
      void deleteBuySas() { this->buySas_ = nullptr;};
      inline int32_t getBuySas() const { DARABONBA_PTR_GET_DEFAULT(buySas_, 0) };
      inline Accounts& setBuySas(int32_t buySas) { DARABONBA_PTR_SET_VALUE(buySas_, buySas) };


      // buySasNew Field Functions 
      bool hasBuySasNew() const { return this->buySasNew_ != nullptr;};
      void deleteBuySasNew() { this->buySasNew_ = nullptr;};
      inline bool getBuySasNew() const { DARABONBA_PTR_GET_DEFAULT(buySasNew_, false) };
      inline Accounts& setBuySasNew(bool buySasNew) { DARABONBA_PTR_SET_VALUE(buySasNew_, buySasNew) };


      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline int32_t getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, 0) };
      inline Accounts& setChargeType(int32_t chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Accounts& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // folderId Field Functions 
      bool hasFolderId() const { return this->folderId_ != nullptr;};
      void deleteFolderId() { this->folderId_ = nullptr;};
      inline string getFolderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
      inline Accounts& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


      // instanceBuyType Field Functions 
      bool hasInstanceBuyType() const { return this->instanceBuyType_ != nullptr;};
      void deleteInstanceBuyType() { this->instanceBuyType_ = nullptr;};
      inline int32_t getInstanceBuyType() const { DARABONBA_PTR_GET_DEFAULT(instanceBuyType_, 0) };
      inline Accounts& setInstanceBuyType(int32_t instanceBuyType) { DARABONBA_PTR_SET_VALUE(instanceBuyType_, instanceBuyType) };


      // isMaAccount Field Functions 
      bool hasIsMaAccount() const { return this->isMaAccount_ != nullptr;};
      void deleteIsMaAccount() { this->isMaAccount_ = nullptr;};
      inline string getIsMaAccount() const { DARABONBA_PTR_GET_DEFAULT(isMaAccount_, "") };
      inline Accounts& setIsMaAccount(string isMaAccount) { DARABONBA_PTR_SET_VALUE(isMaAccount_, isMaAccount) };


      // isMarked Field Functions 
      bool hasIsMarked() const { return this->isMarked_ != nullptr;};
      void deleteIsMarked() { this->isMarked_ = nullptr;};
      inline string getIsMarked() const { DARABONBA_PTR_GET_DEFAULT(isMarked_, "") };
      inline Accounts& setIsMarked(string isMarked) { DARABONBA_PTR_SET_VALUE(isMarked_, isMarked) };


      // isSasDaAccount Field Functions 
      bool hasIsSasDaAccount() const { return this->isSasDaAccount_ != nullptr;};
      void deleteIsSasDaAccount() { this->isSasDaAccount_ = nullptr;};
      inline string getIsSasDaAccount() const { DARABONBA_PTR_GET_DEFAULT(isSasDaAccount_, "") };
      inline Accounts& setIsSasDaAccount(string isSasDaAccount) { DARABONBA_PTR_SET_VALUE(isSasDaAccount_, isSasDaAccount) };


      // isSiemControlAccount Field Functions 
      bool hasIsSiemControlAccount() const { return this->isSiemControlAccount_ != nullptr;};
      void deleteIsSiemControlAccount() { this->isSiemControlAccount_ = nullptr;};
      inline string getIsSiemControlAccount() const { DARABONBA_PTR_GET_DEFAULT(isSiemControlAccount_, "") };
      inline Accounts& setIsSiemControlAccount(string isSiemControlAccount) { DARABONBA_PTR_SET_VALUE(isSiemControlAccount_, isSiemControlAccount) };


      // isSiemDaAccount Field Functions 
      bool hasIsSiemDaAccount() const { return this->isSiemDaAccount_ != nullptr;};
      void deleteIsSiemDaAccount() { this->isSiemDaAccount_ = nullptr;};
      inline string getIsSiemDaAccount() const { DARABONBA_PTR_GET_DEFAULT(isSiemDaAccount_, "") };
      inline Accounts& setIsSiemDaAccount(string isSiemDaAccount) { DARABONBA_PTR_SET_VALUE(isSiemDaAccount_, isSiemDaAccount) };


      // postBasicService Field Functions 
      bool hasPostBasicService() const { return this->postBasicService_ != nullptr;};
      void deletePostBasicService() { this->postBasicService_ = nullptr;};
      inline int32_t getPostBasicService() const { DARABONBA_PTR_GET_DEFAULT(postBasicService_, 0) };
      inline Accounts& setPostBasicService(int32_t postBasicService) { DARABONBA_PTR_SET_VALUE(postBasicService_, postBasicService) };


      // postPayModuleSwitch Field Functions 
      bool hasPostPayModuleSwitch() const { return this->postPayModuleSwitch_ != nullptr;};
      void deletePostPayModuleSwitch() { this->postPayModuleSwitch_ = nullptr;};
      inline string getPostPayModuleSwitch() const { DARABONBA_PTR_GET_DEFAULT(postPayModuleSwitch_, "") };
      inline Accounts& setPostPayModuleSwitch(string postPayModuleSwitch) { DARABONBA_PTR_SET_VALUE(postPayModuleSwitch_, postPayModuleSwitch) };


      // saleInstance Field Functions 
      bool hasSaleInstance() const { return this->saleInstance_ != nullptr;};
      void deleteSaleInstance() { this->saleInstance_ = nullptr;};
      inline string getSaleInstance() const { DARABONBA_PTR_GET_DEFAULT(saleInstance_, "") };
      inline Accounts& setSaleInstance(string saleInstance) { DARABONBA_PTR_SET_VALUE(saleInstance_, saleInstance) };


      // sasVersion Field Functions 
      bool hasSasVersion() const { return this->sasVersion_ != nullptr;};
      void deleteSasVersion() { this->sasVersion_ = nullptr;};
      inline string getSasVersion() const { DARABONBA_PTR_GET_DEFAULT(sasVersion_, "") };
      inline Accounts& setSasVersion(string sasVersion) { DARABONBA_PTR_SET_VALUE(sasVersion_, sasVersion) };


    protected:
      // The Alibaba Cloud account ID of the member.
      shared_ptr<string> accountId_ {};
      // This parameter is deprecated and should be ignored.
      shared_ptr<int32_t> buySas_ {};
      // Whether a yearly or monthly subscription of Cloud Security Center is purchased. Values:
      // - **true**: Yes
      // - **false**: No
      shared_ptr<bool> buySasNew_ {};
      // Subscription type. Values:
      // * **0**: Prepaid
      // * **1**: Pay-As-You-Go
      shared_ptr<int32_t> chargeType_ {};
      // The name of the member.
      shared_ptr<string> displayName_ {};
      // The ID of the folder in the resource directory.
      shared_ptr<string> folderId_ {};
      // Instance purchase type. Values:
      // - **0**: Self-purchased
      // - **1**: Multi-account allocation
      shared_ptr<int32_t> instanceBuyType_ {};
      // Indicates whether the member is an administrator account of the resource directory. Valid values:
      // 
      // *   **yes**
      // *   **no**
      shared_ptr<string> isMaAccount_ {};
      // Indicates whether the member is marked as followed.
      shared_ptr<string> isMarked_ {};
      // Indicates whether the member is a delegated administrator account of Security Center. Valid values:
      // 
      // *   **yes**
      // *   **no**
      shared_ptr<string> isSasDaAccount_ {};
      // Indicates whether the member is an account of the threat analysis and response feature. Valid values:
      // 
      // *   **yes**
      // *   **no**
      shared_ptr<string> isSiemControlAccount_ {};
      // Indicates whether the member is a delegated administrator account of the threat analysis and response feature. Valid values:
      // 
      // *   **yes**
      // *   **no**
      shared_ptr<string> isSiemDaAccount_ {};
      // Post-paid module switch. Values:
      // - **0**: Off
      // - **1**: On
      shared_ptr<int32_t> postBasicService_ {};
      // The switch status of the pay-as-you-go module. The value is a JSON string. Valid values:
      // 
      // *   Key:
      // 
      //     *   **VUL**: vulnerability fixing module
      //     *   **CSPM**: cloud service configuration check module
      //     *   **AGENTLESS**: agentless detection module
      //     *   **SERVERLESS**: serverless asset module
      // 
      // *   Value: A value of 0 specifies disabled. A value of 1 specifies enabled.
      // 
      // >  If you do not specify a value for a module, the original value of the module is retained.
      shared_ptr<string> postPayModuleSwitch_ {};
      // Cloud Security Center Instance ID.
      shared_ptr<string> saleInstance_ {};
      // The edition of Security Center that you use. Valid value:
      // 
      // *   **0** or **1**: Basic
      // *   **2** or **3**: Enterprise
      // *   **5**: Advanced
      // *   **6**: Anti-virus
      // *   **7**: Ultimate
      shared_ptr<string> sasVersion_ {};
    };

    virtual bool empty() const override { return this->accounts_ == nullptr
        && this->requestId_ == nullptr; };
    // accounts Field Functions 
    bool hasAccounts() const { return this->accounts_ != nullptr;};
    void deleteAccounts() { this->accounts_ = nullptr;};
    inline const vector<ListAccountsInResourceDirectoryResponseBody::Accounts> & getAccounts() const { DARABONBA_PTR_GET_CONST(accounts_, vector<ListAccountsInResourceDirectoryResponseBody::Accounts>) };
    inline vector<ListAccountsInResourceDirectoryResponseBody::Accounts> getAccounts() { DARABONBA_PTR_GET(accounts_, vector<ListAccountsInResourceDirectoryResponseBody::Accounts>) };
    inline ListAccountsInResourceDirectoryResponseBody& setAccounts(const vector<ListAccountsInResourceDirectoryResponseBody::Accounts> & accounts) { DARABONBA_PTR_SET_VALUE(accounts_, accounts) };
    inline ListAccountsInResourceDirectoryResponseBody& setAccounts(vector<ListAccountsInResourceDirectoryResponseBody::Accounts> && accounts) { DARABONBA_PTR_SET_RVALUE(accounts_, accounts) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAccountsInResourceDirectoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The members in the resource directory.
    shared_ptr<vector<ListAccountsInResourceDirectoryResponseBody::Accounts>> accounts_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
