// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALIPAYTRANSFERSTATUSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETALIPAYTRANSFERSTATUSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class GetAlipayTransferStatusResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlipayTransferStatusResponseBodyData& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetAlipayTransferStatusResponseBodyData& obj) { 
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
    GetAlipayTransferStatusResponseBodyData() = default ;
    GetAlipayTransferStatusResponseBodyData(const GetAlipayTransferStatusResponseBodyData &) = default ;
    GetAlipayTransferStatusResponseBodyData(GetAlipayTransferStatusResponseBodyData &&) = default ;
    GetAlipayTransferStatusResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlipayTransferStatusResponseBodyData() = default ;
    GetAlipayTransferStatusResponseBodyData& operator=(const GetAlipayTransferStatusResponseBodyData &) = default ;
    GetAlipayTransferStatusResponseBodyData& operator=(GetAlipayTransferStatusResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->alipayOrderDetail_ == nullptr && return this->alipayOrderId_ == nullptr && return this->code_ == nullptr && return this->creator_ == nullptr && return this->mainAccountId_ == nullptr
        && return this->modifier_ == nullptr && return this->qrURL_ == nullptr && return this->scope_ == nullptr && return this->status_ == nullptr && return this->title_ == nullptr
        && return this->transAmount_ == nullptr && return this->walletItemCode_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline GetAlipayTransferStatusResponseBodyData& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // alipayOrderDetail Field Functions 
    bool hasAlipayOrderDetail() const { return this->alipayOrderDetail_ != nullptr;};
    void deleteAlipayOrderDetail() { this->alipayOrderDetail_ = nullptr;};
    inline string alipayOrderDetail() const { DARABONBA_PTR_GET_DEFAULT(alipayOrderDetail_, "") };
    inline GetAlipayTransferStatusResponseBodyData& setAlipayOrderDetail(string alipayOrderDetail) { DARABONBA_PTR_SET_VALUE(alipayOrderDetail_, alipayOrderDetail) };


    // alipayOrderId Field Functions 
    bool hasAlipayOrderId() const { return this->alipayOrderId_ != nullptr;};
    void deleteAlipayOrderId() { this->alipayOrderId_ = nullptr;};
    inline string alipayOrderId() const { DARABONBA_PTR_GET_DEFAULT(alipayOrderId_, "") };
    inline GetAlipayTransferStatusResponseBodyData& setAlipayOrderId(string alipayOrderId) { DARABONBA_PTR_SET_VALUE(alipayOrderId_, alipayOrderId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAlipayTransferStatusResponseBodyData& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline GetAlipayTransferStatusResponseBodyData& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // mainAccountId Field Functions 
    bool hasMainAccountId() const { return this->mainAccountId_ != nullptr;};
    void deleteMainAccountId() { this->mainAccountId_ = nullptr;};
    inline string mainAccountId() const { DARABONBA_PTR_GET_DEFAULT(mainAccountId_, "") };
    inline GetAlipayTransferStatusResponseBodyData& setMainAccountId(string mainAccountId) { DARABONBA_PTR_SET_VALUE(mainAccountId_, mainAccountId) };


    // modifier Field Functions 
    bool hasModifier() const { return this->modifier_ != nullptr;};
    void deleteModifier() { this->modifier_ = nullptr;};
    inline string modifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
    inline GetAlipayTransferStatusResponseBodyData& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


    // qrURL Field Functions 
    bool hasQrURL() const { return this->qrURL_ != nullptr;};
    void deleteQrURL() { this->qrURL_ = nullptr;};
    inline string qrURL() const { DARABONBA_PTR_GET_DEFAULT(qrURL_, "") };
    inline GetAlipayTransferStatusResponseBodyData& setQrURL(string qrURL) { DARABONBA_PTR_SET_VALUE(qrURL_, qrURL) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline GetAlipayTransferStatusResponseBodyData& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int64_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
    inline GetAlipayTransferStatusResponseBodyData& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetAlipayTransferStatusResponseBodyData& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // transAmount Field Functions 
    bool hasTransAmount() const { return this->transAmount_ != nullptr;};
    void deleteTransAmount() { this->transAmount_ = nullptr;};
    inline string transAmount() const { DARABONBA_PTR_GET_DEFAULT(transAmount_, "") };
    inline GetAlipayTransferStatusResponseBodyData& setTransAmount(string transAmount) { DARABONBA_PTR_SET_VALUE(transAmount_, transAmount) };


    // walletItemCode Field Functions 
    bool hasWalletItemCode() const { return this->walletItemCode_ != nullptr;};
    void deleteWalletItemCode() { this->walletItemCode_ = nullptr;};
    inline string walletItemCode() const { DARABONBA_PTR_GET_DEFAULT(walletItemCode_, "") };
    inline GetAlipayTransferStatusResponseBodyData& setWalletItemCode(string walletItemCode) { DARABONBA_PTR_SET_VALUE(walletItemCode_, walletItemCode) };


  protected:
    std::shared_ptr<string> accountId_ = nullptr;
    std::shared_ptr<string> alipayOrderDetail_ = nullptr;
    std::shared_ptr<string> alipayOrderId_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<string> mainAccountId_ = nullptr;
    std::shared_ptr<string> modifier_ = nullptr;
    std::shared_ptr<string> qrURL_ = nullptr;
    std::shared_ptr<string> scope_ = nullptr;
    std::shared_ptr<int64_t> status_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> transAmount_ = nullptr;
    std::shared_ptr<string> walletItemCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
