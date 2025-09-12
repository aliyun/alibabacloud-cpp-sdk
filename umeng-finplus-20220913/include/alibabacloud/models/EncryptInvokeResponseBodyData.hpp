// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENCRYPTINVOKERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_ENCRYPTINVOKERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengFinplus20220913
{
namespace Models
{
  class EncryptInvokeResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EncryptInvokeResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(encryptData, encryptData_);
      DARABONBA_PTR_TO_JSON(encryptKey, encryptKey_);
      DARABONBA_PTR_TO_JSON(sign, sign_);
    };
    friend void from_json(const Darabonba::Json& j, EncryptInvokeResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(encryptData, encryptData_);
      DARABONBA_PTR_FROM_JSON(encryptKey, encryptKey_);
      DARABONBA_PTR_FROM_JSON(sign, sign_);
    };
    EncryptInvokeResponseBodyData() = default ;
    EncryptInvokeResponseBodyData(const EncryptInvokeResponseBodyData &) = default ;
    EncryptInvokeResponseBodyData(EncryptInvokeResponseBodyData &&) = default ;
    EncryptInvokeResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EncryptInvokeResponseBodyData() = default ;
    EncryptInvokeResponseBodyData& operator=(const EncryptInvokeResponseBodyData &) = default ;
    EncryptInvokeResponseBodyData& operator=(EncryptInvokeResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->encryptData_ != nullptr
        && this->encryptKey_ != nullptr && this->sign_ != nullptr; };
    // encryptData Field Functions 
    bool hasEncryptData() const { return this->encryptData_ != nullptr;};
    void deleteEncryptData() { this->encryptData_ = nullptr;};
    inline string encryptData() const { DARABONBA_PTR_GET_DEFAULT(encryptData_, "") };
    inline EncryptInvokeResponseBodyData& setEncryptData(string encryptData) { DARABONBA_PTR_SET_VALUE(encryptData_, encryptData) };


    // encryptKey Field Functions 
    bool hasEncryptKey() const { return this->encryptKey_ != nullptr;};
    void deleteEncryptKey() { this->encryptKey_ = nullptr;};
    inline string encryptKey() const { DARABONBA_PTR_GET_DEFAULT(encryptKey_, "") };
    inline EncryptInvokeResponseBodyData& setEncryptKey(string encryptKey) { DARABONBA_PTR_SET_VALUE(encryptKey_, encryptKey) };


    // sign Field Functions 
    bool hasSign() const { return this->sign_ != nullptr;};
    void deleteSign() { this->sign_ = nullptr;};
    inline string sign() const { DARABONBA_PTR_GET_DEFAULT(sign_, "") };
    inline EncryptInvokeResponseBodyData& setSign(string sign) { DARABONBA_PTR_SET_VALUE(sign_, sign) };


  protected:
    std::shared_ptr<string> encryptData_ = nullptr;
    std::shared_ptr<string> encryptKey_ = nullptr;
    std::shared_ptr<string> sign_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengFinplus20220913
#endif
