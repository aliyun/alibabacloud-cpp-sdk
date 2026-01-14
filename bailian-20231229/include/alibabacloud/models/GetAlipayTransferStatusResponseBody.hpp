// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALIPAYTRANSFERSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETALIPAYTRANSFERSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class GetAlipayTransferStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlipayTransferStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlipayTransferStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetAlipayTransferStatusResponseBody() = default ;
    GetAlipayTransferStatusResponseBody(const GetAlipayTransferStatusResponseBody &) = default ;
    GetAlipayTransferStatusResponseBody(GetAlipayTransferStatusResponseBody &&) = default ;
    GetAlipayTransferStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlipayTransferStatusResponseBody() = default ;
    GetAlipayTransferStatusResponseBody& operator=(const GetAlipayTransferStatusResponseBody &) = default ;
    GetAlipayTransferStatusResponseBody& operator=(GetAlipayTransferStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(accountId, accountId_);
        DARABONBA_PTR_TO_JSON(alipayOrderDetail, alipayOrderDetail_);
        DARABONBA_PTR_TO_JSON(alipayOrderId, alipayOrderId_);
        DARABONBA_PTR_TO_JSON(code, code_);
        DARABONBA_PTR_TO_JSON(creator, creator_);
        DARABONBA_PTR_TO_JSON(mainAccountId, mainAccountId_);
        DARABONBA_PTR_TO_JSON(modifier, modifier_);
        DARABONBA_PTR_TO_JSON(qrURL, qrURL_);
        DARABONBA_PTR_TO_JSON(scope, scope_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(title, title_);
        DARABONBA_PTR_TO_JSON(transAmount, transAmount_);
        DARABONBA_PTR_TO_JSON(walletItemCode, walletItemCode_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(accountId, accountId_);
        DARABONBA_PTR_FROM_JSON(alipayOrderDetail, alipayOrderDetail_);
        DARABONBA_PTR_FROM_JSON(alipayOrderId, alipayOrderId_);
        DARABONBA_PTR_FROM_JSON(code, code_);
        DARABONBA_PTR_FROM_JSON(creator, creator_);
        DARABONBA_PTR_FROM_JSON(mainAccountId, mainAccountId_);
        DARABONBA_PTR_FROM_JSON(modifier, modifier_);
        DARABONBA_PTR_FROM_JSON(qrURL, qrURL_);
        DARABONBA_PTR_FROM_JSON(scope, scope_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(title, title_);
        DARABONBA_PTR_FROM_JSON(transAmount, transAmount_);
        DARABONBA_PTR_FROM_JSON(walletItemCode, walletItemCode_);
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
        && this->alipayOrderDetail_ == nullptr && this->alipayOrderId_ == nullptr && this->code_ == nullptr && this->creator_ == nullptr && this->mainAccountId_ == nullptr
        && this->modifier_ == nullptr && this->qrURL_ == nullptr && this->scope_ == nullptr && this->status_ == nullptr && this->title_ == nullptr
        && this->transAmount_ == nullptr && this->walletItemCode_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline Data& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // alipayOrderDetail Field Functions 
      bool hasAlipayOrderDetail() const { return this->alipayOrderDetail_ != nullptr;};
      void deleteAlipayOrderDetail() { this->alipayOrderDetail_ = nullptr;};
      inline string getAlipayOrderDetail() const { DARABONBA_PTR_GET_DEFAULT(alipayOrderDetail_, "") };
      inline Data& setAlipayOrderDetail(string alipayOrderDetail) { DARABONBA_PTR_SET_VALUE(alipayOrderDetail_, alipayOrderDetail) };


      // alipayOrderId Field Functions 
      bool hasAlipayOrderId() const { return this->alipayOrderId_ != nullptr;};
      void deleteAlipayOrderId() { this->alipayOrderId_ = nullptr;};
      inline string getAlipayOrderId() const { DARABONBA_PTR_GET_DEFAULT(alipayOrderId_, "") };
      inline Data& setAlipayOrderId(string alipayOrderId) { DARABONBA_PTR_SET_VALUE(alipayOrderId_, alipayOrderId) };


      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Data& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
      inline Data& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


      // mainAccountId Field Functions 
      bool hasMainAccountId() const { return this->mainAccountId_ != nullptr;};
      void deleteMainAccountId() { this->mainAccountId_ = nullptr;};
      inline string getMainAccountId() const { DARABONBA_PTR_GET_DEFAULT(mainAccountId_, "") };
      inline Data& setMainAccountId(string mainAccountId) { DARABONBA_PTR_SET_VALUE(mainAccountId_, mainAccountId) };


      // modifier Field Functions 
      bool hasModifier() const { return this->modifier_ != nullptr;};
      void deleteModifier() { this->modifier_ = nullptr;};
      inline string getModifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
      inline Data& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


      // qrURL Field Functions 
      bool hasQrURL() const { return this->qrURL_ != nullptr;};
      void deleteQrURL() { this->qrURL_ = nullptr;};
      inline string getQrURL() const { DARABONBA_PTR_GET_DEFAULT(qrURL_, "") };
      inline Data& setQrURL(string qrURL) { DARABONBA_PTR_SET_VALUE(qrURL_, qrURL) };


      // scope Field Functions 
      bool hasScope() const { return this->scope_ != nullptr;};
      void deleteScope() { this->scope_ = nullptr;};
      inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
      inline Data& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
      inline Data& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Data& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // transAmount Field Functions 
      bool hasTransAmount() const { return this->transAmount_ != nullptr;};
      void deleteTransAmount() { this->transAmount_ = nullptr;};
      inline string getTransAmount() const { DARABONBA_PTR_GET_DEFAULT(transAmount_, "") };
      inline Data& setTransAmount(string transAmount) { DARABONBA_PTR_SET_VALUE(transAmount_, transAmount) };


      // walletItemCode Field Functions 
      bool hasWalletItemCode() const { return this->walletItemCode_ != nullptr;};
      void deleteWalletItemCode() { this->walletItemCode_ = nullptr;};
      inline string getWalletItemCode() const { DARABONBA_PTR_GET_DEFAULT(walletItemCode_, "") };
      inline Data& setWalletItemCode(string walletItemCode) { DARABONBA_PTR_SET_VALUE(walletItemCode_, walletItemCode) };


    protected:
      shared_ptr<string> accountId_ {};
      shared_ptr<string> alipayOrderDetail_ {};
      shared_ptr<string> alipayOrderId_ {};
      shared_ptr<string> code_ {};
      shared_ptr<string> creator_ {};
      shared_ptr<string> mainAccountId_ {};
      shared_ptr<string> modifier_ {};
      shared_ptr<string> qrURL_ {};
      shared_ptr<string> scope_ {};
      shared_ptr<int64_t> status_ {};
      shared_ptr<string> title_ {};
      shared_ptr<string> transAmount_ {};
      shared_ptr<string> walletItemCode_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAlipayTransferStatusResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAlipayTransferStatusResponseBody::Data) };
    inline GetAlipayTransferStatusResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAlipayTransferStatusResponseBody::Data) };
    inline GetAlipayTransferStatusResponseBody& setData(const GetAlipayTransferStatusResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAlipayTransferStatusResponseBody& setData(GetAlipayTransferStatusResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAlipayTransferStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetAlipayTransferStatusResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
