// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPAYERFORACCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPAYERFORACCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class GetPayerForAccountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPayerForAccountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PayerAccountId, payerAccountId_);
      DARABONBA_PTR_TO_JSON(PayerAccountName, payerAccountName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPayerForAccountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PayerAccountId, payerAccountId_);
      DARABONBA_PTR_FROM_JSON(PayerAccountName, payerAccountName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPayerForAccountResponseBody() = default ;
    GetPayerForAccountResponseBody(const GetPayerForAccountResponseBody &) = default ;
    GetPayerForAccountResponseBody(GetPayerForAccountResponseBody &&) = default ;
    GetPayerForAccountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPayerForAccountResponseBody() = default ;
    GetPayerForAccountResponseBody& operator=(const GetPayerForAccountResponseBody &) = default ;
    GetPayerForAccountResponseBody& operator=(GetPayerForAccountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->payerAccountId_ == nullptr
        && return this->payerAccountName_ == nullptr && return this->requestId_ == nullptr; };
    // payerAccountId Field Functions 
    bool hasPayerAccountId() const { return this->payerAccountId_ != nullptr;};
    void deletePayerAccountId() { this->payerAccountId_ = nullptr;};
    inline string payerAccountId() const { DARABONBA_PTR_GET_DEFAULT(payerAccountId_, "") };
    inline GetPayerForAccountResponseBody& setPayerAccountId(string payerAccountId) { DARABONBA_PTR_SET_VALUE(payerAccountId_, payerAccountId) };


    // payerAccountName Field Functions 
    bool hasPayerAccountName() const { return this->payerAccountName_ != nullptr;};
    void deletePayerAccountName() { this->payerAccountName_ = nullptr;};
    inline string payerAccountName() const { DARABONBA_PTR_GET_DEFAULT(payerAccountName_, "") };
    inline GetPayerForAccountResponseBody& setPayerAccountName(string payerAccountName) { DARABONBA_PTR_SET_VALUE(payerAccountName_, payerAccountName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPayerForAccountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the billing account.
    std::shared_ptr<string> payerAccountId_ = nullptr;
    // The name of the billing account.
    std::shared_ptr<string> payerAccountName_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
