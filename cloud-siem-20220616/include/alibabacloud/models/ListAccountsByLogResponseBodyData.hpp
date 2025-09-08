// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCOUNTSBYLOGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTACCOUNTSBYLOGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListAccountsByLogResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccountsByLogResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(Imported, imported_);
      DARABONBA_PTR_TO_JSON(LogCode, logCode_);
      DARABONBA_PTR_TO_JSON(MainUserId, mainUserId_);
      DARABONBA_PTR_TO_JSON(ProdCode, prodCode_);
      DARABONBA_PTR_TO_JSON(SubUserId, subUserId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccountsByLogResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(Imported, imported_);
      DARABONBA_PTR_FROM_JSON(LogCode, logCode_);
      DARABONBA_PTR_FROM_JSON(MainUserId, mainUserId_);
      DARABONBA_PTR_FROM_JSON(ProdCode, prodCode_);
      DARABONBA_PTR_FROM_JSON(SubUserId, subUserId_);
    };
    ListAccountsByLogResponseBodyData() = default ;
    ListAccountsByLogResponseBodyData(const ListAccountsByLogResponseBodyData &) = default ;
    ListAccountsByLogResponseBodyData(ListAccountsByLogResponseBodyData &&) = default ;
    ListAccountsByLogResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccountsByLogResponseBodyData() = default ;
    ListAccountsByLogResponseBodyData& operator=(const ListAccountsByLogResponseBodyData &) = default ;
    ListAccountsByLogResponseBodyData& operator=(ListAccountsByLogResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountId_ != nullptr
        && this->accountName_ != nullptr && this->imported_ != nullptr && this->logCode_ != nullptr && this->mainUserId_ != nullptr && this->prodCode_ != nullptr
        && this->subUserId_ != nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline ListAccountsByLogResponseBodyData& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline ListAccountsByLogResponseBodyData& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // imported Field Functions 
    bool hasImported() const { return this->imported_ != nullptr;};
    void deleteImported() { this->imported_ = nullptr;};
    inline int32_t imported() const { DARABONBA_PTR_GET_DEFAULT(imported_, 0) };
    inline ListAccountsByLogResponseBodyData& setImported(int32_t imported) { DARABONBA_PTR_SET_VALUE(imported_, imported) };


    // logCode Field Functions 
    bool hasLogCode() const { return this->logCode_ != nullptr;};
    void deleteLogCode() { this->logCode_ = nullptr;};
    inline string logCode() const { DARABONBA_PTR_GET_DEFAULT(logCode_, "") };
    inline ListAccountsByLogResponseBodyData& setLogCode(string logCode) { DARABONBA_PTR_SET_VALUE(logCode_, logCode) };


    // mainUserId Field Functions 
    bool hasMainUserId() const { return this->mainUserId_ != nullptr;};
    void deleteMainUserId() { this->mainUserId_ = nullptr;};
    inline int64_t mainUserId() const { DARABONBA_PTR_GET_DEFAULT(mainUserId_, 0L) };
    inline ListAccountsByLogResponseBodyData& setMainUserId(int64_t mainUserId) { DARABONBA_PTR_SET_VALUE(mainUserId_, mainUserId) };


    // prodCode Field Functions 
    bool hasProdCode() const { return this->prodCode_ != nullptr;};
    void deleteProdCode() { this->prodCode_ = nullptr;};
    inline string prodCode() const { DARABONBA_PTR_GET_DEFAULT(prodCode_, "") };
    inline ListAccountsByLogResponseBodyData& setProdCode(string prodCode) { DARABONBA_PTR_SET_VALUE(prodCode_, prodCode) };


    // subUserId Field Functions 
    bool hasSubUserId() const { return this->subUserId_ != nullptr;};
    void deleteSubUserId() { this->subUserId_ = nullptr;};
    inline int64_t subUserId() const { DARABONBA_PTR_GET_DEFAULT(subUserId_, 0L) };
    inline ListAccountsByLogResponseBodyData& setSubUserId(int64_t subUserId) { DARABONBA_PTR_SET_VALUE(subUserId_, subUserId) };


  protected:
    // The ID of the cloud account.
    std::shared_ptr<string> accountId_ = nullptr;
    // The name of the cloud account.
    std::shared_ptr<string> accountName_ = nullptr;
    // Indicates whether the account is added. Valid values: -1: yes -0: no
    std::shared_ptr<int32_t> imported_ = nullptr;
    // The code of the log.
    std::shared_ptr<string> logCode_ = nullptr;
    // The ID of the Alibaba Cloud account that is used to purchase the threat analysis feature.
    std::shared_ptr<int64_t> mainUserId_ = nullptr;
    // The code of the service.
    std::shared_ptr<string> prodCode_ = nullptr;
    // The ID of the Alibaba Cloud account for which the threat analysis feature is enabled.
    std::shared_ptr<int64_t> subUserId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
