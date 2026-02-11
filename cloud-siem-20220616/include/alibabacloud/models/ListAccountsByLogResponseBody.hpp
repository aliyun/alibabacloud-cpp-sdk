// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCOUNTSBYLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTACCOUNTSBYLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListAccountsByLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccountsByLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccountsByLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAccountsByLogResponseBody() = default ;
    ListAccountsByLogResponseBody(const ListAccountsByLogResponseBody &) = default ;
    ListAccountsByLogResponseBody(ListAccountsByLogResponseBody &&) = default ;
    ListAccountsByLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccountsByLogResponseBody() = default ;
    ListAccountsByLogResponseBody& operator=(const ListAccountsByLogResponseBody &) = default ;
    ListAccountsByLogResponseBody& operator=(ListAccountsByLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(AccountName, accountName_);
        DARABONBA_PTR_TO_JSON(Imported, imported_);
        DARABONBA_PTR_TO_JSON(LogCode, logCode_);
        DARABONBA_PTR_TO_JSON(MainUserId, mainUserId_);
        DARABONBA_PTR_TO_JSON(ProdCode, prodCode_);
        DARABONBA_PTR_TO_JSON(SubUserId, subUserId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
        DARABONBA_PTR_FROM_JSON(Imported, imported_);
        DARABONBA_PTR_FROM_JSON(LogCode, logCode_);
        DARABONBA_PTR_FROM_JSON(MainUserId, mainUserId_);
        DARABONBA_PTR_FROM_JSON(ProdCode, prodCode_);
        DARABONBA_PTR_FROM_JSON(SubUserId, subUserId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->accountName_ == nullptr && this->imported_ == nullptr && this->logCode_ == nullptr && this->mainUserId_ == nullptr && this->prodCode_ == nullptr
        && this->subUserId_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline Data& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // accountName Field Functions 
      bool hasAccountName() const { return this->accountName_ != nullptr;};
      void deleteAccountName() { this->accountName_ = nullptr;};
      inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
      inline Data& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


      // imported Field Functions 
      bool hasImported() const { return this->imported_ != nullptr;};
      void deleteImported() { this->imported_ = nullptr;};
      inline int32_t getImported() const { DARABONBA_PTR_GET_DEFAULT(imported_, 0) };
      inline Data& setImported(int32_t imported) { DARABONBA_PTR_SET_VALUE(imported_, imported) };


      // logCode Field Functions 
      bool hasLogCode() const { return this->logCode_ != nullptr;};
      void deleteLogCode() { this->logCode_ = nullptr;};
      inline string getLogCode() const { DARABONBA_PTR_GET_DEFAULT(logCode_, "") };
      inline Data& setLogCode(string logCode) { DARABONBA_PTR_SET_VALUE(logCode_, logCode) };


      // mainUserId Field Functions 
      bool hasMainUserId() const { return this->mainUserId_ != nullptr;};
      void deleteMainUserId() { this->mainUserId_ = nullptr;};
      inline int64_t getMainUserId() const { DARABONBA_PTR_GET_DEFAULT(mainUserId_, 0L) };
      inline Data& setMainUserId(int64_t mainUserId) { DARABONBA_PTR_SET_VALUE(mainUserId_, mainUserId) };


      // prodCode Field Functions 
      bool hasProdCode() const { return this->prodCode_ != nullptr;};
      void deleteProdCode() { this->prodCode_ = nullptr;};
      inline string getProdCode() const { DARABONBA_PTR_GET_DEFAULT(prodCode_, "") };
      inline Data& setProdCode(string prodCode) { DARABONBA_PTR_SET_VALUE(prodCode_, prodCode) };


      // subUserId Field Functions 
      bool hasSubUserId() const { return this->subUserId_ != nullptr;};
      void deleteSubUserId() { this->subUserId_ = nullptr;};
      inline int64_t getSubUserId() const { DARABONBA_PTR_GET_DEFAULT(subUserId_, 0L) };
      inline Data& setSubUserId(int64_t subUserId) { DARABONBA_PTR_SET_VALUE(subUserId_, subUserId) };


    protected:
      // The ID of the cloud account.
      shared_ptr<string> accountId_ {};
      // The name of the cloud account.
      shared_ptr<string> accountName_ {};
      // Indicates whether the account is added. Valid values: -1: yes -0: no
      shared_ptr<int32_t> imported_ {};
      // The code of the log.
      shared_ptr<string> logCode_ {};
      // The ID of the Alibaba Cloud account that is used to purchase the threat analysis feature.
      shared_ptr<int64_t> mainUserId_ {};
      // The code of the service.
      shared_ptr<string> prodCode_ {};
      // The ID of the Alibaba Cloud account for which the threat analysis feature is enabled.
      shared_ptr<int64_t> subUserId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListAccountsByLogResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListAccountsByLogResponseBody::Data>) };
    inline vector<ListAccountsByLogResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListAccountsByLogResponseBody::Data>) };
    inline ListAccountsByLogResponseBody& setData(const vector<ListAccountsByLogResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAccountsByLogResponseBody& setData(vector<ListAccountsByLogResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAccountsByLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<vector<ListAccountsByLogResponseBody::Data>> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
