// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREDENTIALRECOGNITIONINTLRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_CREDENTIALRECOGNITIONINTLRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class CredentialRecognitionIntlResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CredentialRecognitionIntlResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(ExtIdInfo, extIdInfo_);
      DARABONBA_PTR_TO_JSON(SubCode, subCode_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CredentialRecognitionIntlResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ExtIdInfo, extIdInfo_);
      DARABONBA_PTR_FROM_JSON(SubCode, subCode_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CredentialRecognitionIntlResponseBodyResult() = default ;
    CredentialRecognitionIntlResponseBodyResult(const CredentialRecognitionIntlResponseBodyResult &) = default ;
    CredentialRecognitionIntlResponseBodyResult(CredentialRecognitionIntlResponseBodyResult &&) = default ;
    CredentialRecognitionIntlResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CredentialRecognitionIntlResponseBodyResult() = default ;
    CredentialRecognitionIntlResponseBodyResult& operator=(const CredentialRecognitionIntlResponseBodyResult &) = default ;
    CredentialRecognitionIntlResponseBodyResult& operator=(CredentialRecognitionIntlResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->extIdInfo_ != nullptr
        && this->subCode_ != nullptr && this->success_ != nullptr; };
    // extIdInfo Field Functions 
    bool hasExtIdInfo() const { return this->extIdInfo_ != nullptr;};
    void deleteExtIdInfo() { this->extIdInfo_ = nullptr;};
    inline string extIdInfo() const { DARABONBA_PTR_GET_DEFAULT(extIdInfo_, "") };
    inline CredentialRecognitionIntlResponseBodyResult& setExtIdInfo(string extIdInfo) { DARABONBA_PTR_SET_VALUE(extIdInfo_, extIdInfo) };


    // subCode Field Functions 
    bool hasSubCode() const { return this->subCode_ != nullptr;};
    void deleteSubCode() { this->subCode_ = nullptr;};
    inline string subCode() const { DARABONBA_PTR_GET_DEFAULT(subCode_, "") };
    inline CredentialRecognitionIntlResponseBodyResult& setSubCode(string subCode) { DARABONBA_PTR_SET_VALUE(subCode_, subCode) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline CredentialRecognitionIntlResponseBodyResult& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Identified key information in JSON format.
    std::shared_ptr<string> extIdInfo_ = nullptr;
    // Authentication result description
    std::shared_ptr<string> subCode_ = nullptr;
    // Extraction result. Values:
    // - S: Success.
    // - F: Failure.
    std::shared_ptr<string> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
