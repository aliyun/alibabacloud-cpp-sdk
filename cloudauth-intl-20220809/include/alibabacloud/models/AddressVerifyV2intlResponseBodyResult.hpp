// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDRESSVERIFYV2INTLRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_ADDRESSVERIFYV2INTLRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class AddressVerifyV2IntlResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddressVerifyV2IntlResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(TransactionId, transactionId_);
    };
    friend void from_json(const Darabonba::Json& j, AddressVerifyV2IntlResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(TransactionId, transactionId_);
    };
    AddressVerifyV2IntlResponseBodyResult() = default ;
    AddressVerifyV2IntlResponseBodyResult(const AddressVerifyV2IntlResponseBodyResult &) = default ;
    AddressVerifyV2IntlResponseBodyResult(AddressVerifyV2IntlResponseBodyResult &&) = default ;
    AddressVerifyV2IntlResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddressVerifyV2IntlResponseBodyResult() = default ;
    AddressVerifyV2IntlResponseBodyResult& operator=(const AddressVerifyV2IntlResponseBodyResult &) = default ;
    AddressVerifyV2IntlResponseBodyResult& operator=(AddressVerifyV2IntlResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizCode_ != nullptr
        && this->detail_ != nullptr && this->transactionId_ != nullptr; };
    // bizCode Field Functions 
    bool hasBizCode() const { return this->bizCode_ != nullptr;};
    void deleteBizCode() { this->bizCode_ = nullptr;};
    inline string bizCode() const { DARABONBA_PTR_GET_DEFAULT(bizCode_, "") };
    inline AddressVerifyV2IntlResponseBodyResult& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline string detail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
    inline AddressVerifyV2IntlResponseBodyResult& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


    // transactionId Field Functions 
    bool hasTransactionId() const { return this->transactionId_ != nullptr;};
    void deleteTransactionId() { this->transactionId_ = nullptr;};
    inline string transactionId() const { DARABONBA_PTR_GET_DEFAULT(transactionId_, "") };
    inline AddressVerifyV2IntlResponseBodyResult& setTransactionId(string transactionId) { DARABONBA_PTR_SET_VALUE(transactionId_, transactionId) };


  protected:
    std::shared_ptr<string> bizCode_ = nullptr;
    std::shared_ptr<string> detail_ = nullptr;
    std::shared_ptr<string> transactionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
