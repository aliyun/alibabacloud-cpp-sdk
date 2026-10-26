// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAASSETACCOUNTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAASSETACCOUNTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20260120
{
namespace Models
{
  class ListDataAssetAccountsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataAssetAccountsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AuthDb, authDb_);
      DARABONBA_PTR_TO_JSON(AuthRole, authRole_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductIds, productIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataAssetAccountsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AuthDb, authDb_);
      DARABONBA_PTR_FROM_JSON(AuthRole, authRole_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductIds, productIds_);
    };
    ListDataAssetAccountsRequest() = default ;
    ListDataAssetAccountsRequest(const ListDataAssetAccountsRequest &) = default ;
    ListDataAssetAccountsRequest(ListDataAssetAccountsRequest &&) = default ;
    ListDataAssetAccountsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataAssetAccountsRequest() = default ;
    ListDataAssetAccountsRequest& operator=(const ListDataAssetAccountsRequest &) = default ;
    ListDataAssetAccountsRequest& operator=(ListDataAssetAccountsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountName_ == nullptr
        && this->authDb_ == nullptr && this->authRole_ == nullptr && this->bizType_ == nullptr && this->currentPage_ == nullptr && this->instanceId_ == nullptr
        && this->lang_ == nullptr && this->pageSize_ == nullptr && this->productCode_ == nullptr && this->productIds_ == nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline ListDataAssetAccountsRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // authDb Field Functions 
    bool hasAuthDb() const { return this->authDb_ != nullptr;};
    void deleteAuthDb() { this->authDb_ = nullptr;};
    inline string getAuthDb() const { DARABONBA_PTR_GET_DEFAULT(authDb_, "") };
    inline ListDataAssetAccountsRequest& setAuthDb(string authDb) { DARABONBA_PTR_SET_VALUE(authDb_, authDb) };


    // authRole Field Functions 
    bool hasAuthRole() const { return this->authRole_ != nullptr;};
    void deleteAuthRole() { this->authRole_ = nullptr;};
    inline string getAuthRole() const { DARABONBA_PTR_GET_DEFAULT(authRole_, "") };
    inline ListDataAssetAccountsRequest& setAuthRole(string authRole) { DARABONBA_PTR_SET_VALUE(authRole_, authRole) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline ListDataAssetAccountsRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListDataAssetAccountsRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListDataAssetAccountsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListDataAssetAccountsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataAssetAccountsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline ListDataAssetAccountsRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productIds Field Functions 
    bool hasProductIds() const { return this->productIds_ != nullptr;};
    void deleteProductIds() { this->productIds_ = nullptr;};
    inline string getProductIds() const { DARABONBA_PTR_GET_DEFAULT(productIds_, "") };
    inline ListDataAssetAccountsRequest& setProductIds(string productIds) { DARABONBA_PTR_SET_VALUE(productIds_, productIds) };


  protected:
    // The database account name. The system filters accounts by the exact account name.
    shared_ptr<string> accountName_ {};
    // The authentication database of the MongoDB account. This parameter is used to distinguish accounts with the same name in different authentication databases.
    shared_ptr<string> authDb_ {};
    // The column encryption access permissions. Valid values:
    // - fullAccess: plaintext access
    // - restrictedAccess: restricted access
    // - noneAccess: decryption prohibited. This value applies only to ApsaraDB RDS for MySQL instances whose current effective key mode is client_key.
    shared_ptr<string> authRole_ {};
    // The business scenario for the query. Set this parameter to DataMasking for the column encryption scenario. Note that the value is case-sensitive.
    shared_ptr<string> bizType_ {};
    // The page number of the current page. Pages start from 1.
    shared_ptr<int32_t> currentPage_ {};
    // The database instance ID. You can obtain this value from the Items[].InstanceId parameter in the response of the ListDataMaskingInstances operation.
    shared_ptr<string> instanceId_ {};
    // The language of the response message. Valid values:
    // - zh: Chinese
    // - en: English
    shared_ptr<string> lang_ {};
    // The number of entries to return on each page. Keep other filter conditions consistent when querying the next page.
    shared_ptr<int32_t> pageSize_ {};
    // The cloud service code. Column encryption supports RDS, POLARDB, and PolarDBX2. If ProductId is also specified, the two parameters must match.
    shared_ptr<string> productCode_ {};
    // The list of cloud service type IDs. Separate multiple values with commas (,). For the column encryption scenario, the valid values are 5 (RDS), 8 (POLARDB), and 27 (PolarDBX2).
    shared_ptr<string> productIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20260120
#endif
