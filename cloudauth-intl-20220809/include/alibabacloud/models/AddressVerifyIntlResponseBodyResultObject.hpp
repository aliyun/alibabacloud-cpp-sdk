// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDRESSVERIFYINTLRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_ADDRESSVERIFYINTLRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class AddressVerifyIntlResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddressVerifyIntlResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(AddressInfo, addressInfo_);
      DARABONBA_PTR_TO_JSON(IspName, ispName_);
      DARABONBA_PTR_TO_JSON(Passed, passed_);
      DARABONBA_PTR_TO_JSON(SubCode, subCode_);
      DARABONBA_PTR_TO_JSON(TransactionId, transactionId_);
    };
    friend void from_json(const Darabonba::Json& j, AddressVerifyIntlResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressInfo, addressInfo_);
      DARABONBA_PTR_FROM_JSON(IspName, ispName_);
      DARABONBA_PTR_FROM_JSON(Passed, passed_);
      DARABONBA_PTR_FROM_JSON(SubCode, subCode_);
      DARABONBA_PTR_FROM_JSON(TransactionId, transactionId_);
    };
    AddressVerifyIntlResponseBodyResultObject() = default ;
    AddressVerifyIntlResponseBodyResultObject(const AddressVerifyIntlResponseBodyResultObject &) = default ;
    AddressVerifyIntlResponseBodyResultObject(AddressVerifyIntlResponseBodyResultObject &&) = default ;
    AddressVerifyIntlResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddressVerifyIntlResponseBodyResultObject() = default ;
    AddressVerifyIntlResponseBodyResultObject& operator=(const AddressVerifyIntlResponseBodyResultObject &) = default ;
    AddressVerifyIntlResponseBodyResultObject& operator=(AddressVerifyIntlResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addressInfo_ == nullptr
        && return this->ispName_ == nullptr && return this->passed_ == nullptr && return this->subCode_ == nullptr && return this->transactionId_ == nullptr; };
    // addressInfo Field Functions 
    bool hasAddressInfo() const { return this->addressInfo_ != nullptr;};
    void deleteAddressInfo() { this->addressInfo_ = nullptr;};
    inline string addressInfo() const { DARABONBA_PTR_GET_DEFAULT(addressInfo_, "") };
    inline AddressVerifyIntlResponseBodyResultObject& setAddressInfo(string addressInfo) { DARABONBA_PTR_SET_VALUE(addressInfo_, addressInfo) };


    // ispName Field Functions 
    bool hasIspName() const { return this->ispName_ != nullptr;};
    void deleteIspName() { this->ispName_ = nullptr;};
    inline string ispName() const { DARABONBA_PTR_GET_DEFAULT(ispName_, "") };
    inline AddressVerifyIntlResponseBodyResultObject& setIspName(string ispName) { DARABONBA_PTR_SET_VALUE(ispName_, ispName) };


    // passed Field Functions 
    bool hasPassed() const { return this->passed_ != nullptr;};
    void deletePassed() { this->passed_ = nullptr;};
    inline string passed() const { DARABONBA_PTR_GET_DEFAULT(passed_, "") };
    inline AddressVerifyIntlResponseBodyResultObject& setPassed(string passed) { DARABONBA_PTR_SET_VALUE(passed_, passed) };


    // subCode Field Functions 
    bool hasSubCode() const { return this->subCode_ != nullptr;};
    void deleteSubCode() { this->subCode_ = nullptr;};
    inline string subCode() const { DARABONBA_PTR_GET_DEFAULT(subCode_, "") };
    inline AddressVerifyIntlResponseBodyResultObject& setSubCode(string subCode) { DARABONBA_PTR_SET_VALUE(subCode_, subCode) };


    // transactionId Field Functions 
    bool hasTransactionId() const { return this->transactionId_ != nullptr;};
    void deleteTransactionId() { this->transactionId_ = nullptr;};
    inline string transactionId() const { DARABONBA_PTR_GET_DEFAULT(transactionId_, "") };
    inline AddressVerifyIntlResponseBodyResultObject& setTransactionId(string transactionId) { DARABONBA_PTR_SET_VALUE(transactionId_, transactionId) };


  protected:
    // Address verification details.
    std::shared_ptr<string> addressInfo_ = nullptr;
    // Operator name:
    // - CMCC: China Mobile
    // - CTCC: China Telecom
    // - CUCC: China Unicom
    std::shared_ptr<string> ispName_ = nullptr;
    // Verification result, values:
    // - Y: Yes, the verified address distance is less than or equal to 10KM.
    // - N: No, the verified address distance is greater than 10KM.
    std::shared_ptr<string> passed_ = nullptr;
    // Authentication result description.
    std::shared_ptr<string> subCode_ = nullptr;
    // Unique identifier for the authentication request.
    std::shared_ptr<string> transactionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
