// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDETECTLANGUAGEVPCRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDETECTLANGUAGEVPCRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alimt20181012
{
namespace Models
{
  class GetDetectLanguageVpcResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDetectLanguageVpcResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DetectedLanguage, detectedLanguage_);
      DARABONBA_PTR_TO_JSON(LanguageProbabilities, languageProbabilities_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDetectLanguageVpcResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DetectedLanguage, detectedLanguage_);
      DARABONBA_PTR_FROM_JSON(LanguageProbabilities, languageProbabilities_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDetectLanguageVpcResponseBody() = default ;
    GetDetectLanguageVpcResponseBody(const GetDetectLanguageVpcResponseBody &) = default ;
    GetDetectLanguageVpcResponseBody(GetDetectLanguageVpcResponseBody &&) = default ;
    GetDetectLanguageVpcResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDetectLanguageVpcResponseBody() = default ;
    GetDetectLanguageVpcResponseBody& operator=(const GetDetectLanguageVpcResponseBody &) = default ;
    GetDetectLanguageVpcResponseBody& operator=(GetDetectLanguageVpcResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->detectedLanguage_ == nullptr
        && return this->languageProbabilities_ == nullptr && return this->requestId_ == nullptr; };
    // detectedLanguage Field Functions 
    bool hasDetectedLanguage() const { return this->detectedLanguage_ != nullptr;};
    void deleteDetectedLanguage() { this->detectedLanguage_ = nullptr;};
    inline string detectedLanguage() const { DARABONBA_PTR_GET_DEFAULT(detectedLanguage_, "") };
    inline GetDetectLanguageVpcResponseBody& setDetectedLanguage(string detectedLanguage) { DARABONBA_PTR_SET_VALUE(detectedLanguage_, detectedLanguage) };


    // languageProbabilities Field Functions 
    bool hasLanguageProbabilities() const { return this->languageProbabilities_ != nullptr;};
    void deleteLanguageProbabilities() { this->languageProbabilities_ = nullptr;};
    inline string languageProbabilities() const { DARABONBA_PTR_GET_DEFAULT(languageProbabilities_, "") };
    inline GetDetectLanguageVpcResponseBody& setLanguageProbabilities(string languageProbabilities) { DARABONBA_PTR_SET_VALUE(languageProbabilities_, languageProbabilities) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDetectLanguageVpcResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> detectedLanguage_ = nullptr;
    std::shared_ptr<string> languageProbabilities_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alimt20181012
#endif
