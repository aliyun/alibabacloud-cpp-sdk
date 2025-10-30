// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCUSTOMPRIVACYPOLICYRESPONSEBODYCUSTOMPRIVACYPOLICYCUSTOMPRIVACYPOLICYCONTENTS_HPP_
#define ALIBABACLOUD_MODELS_GETCUSTOMPRIVACYPOLICYRESPONSEBODYCUSTOMPRIVACYPOLICYCUSTOMPRIVACYPOLICYCONTENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetCustomPrivacyPolicyResponseBodyCustomPrivacyPolicyCustomPrivacyPolicyContentsCustomPrivacyPolicyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetCustomPrivacyPolicyResponseBodyCustomPrivacyPolicyCustomPrivacyPolicyContents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCustomPrivacyPolicyResponseBodyCustomPrivacyPolicyCustomPrivacyPolicyContents& obj) { 
      DARABONBA_PTR_TO_JSON(CustomPrivacyPolicyItems, customPrivacyPolicyItems_);
      DARABONBA_PTR_TO_JSON(CustomPrivacyPolicyTip, customPrivacyPolicyTip_);
      DARABONBA_PTR_TO_JSON(LanguageCode, languageCode_);
    };
    friend void from_json(const Darabonba::Json& j, GetCustomPrivacyPolicyResponseBodyCustomPrivacyPolicyCustomPrivacyPolicyContents& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomPrivacyPolicyItems, customPrivacyPolicyItems_);
      DARABONBA_PTR_FROM_JSON(CustomPrivacyPolicyTip, customPrivacyPolicyTip_);
      DARABONBA_PTR_FROM_JSON(LanguageCode, languageCode_);
    };
    GetCustomPrivacyPolicyResponseBodyCustomPrivacyPolicyCustomPrivacyPolicyContents() = default ;
    GetCustomPrivacyPolicyResponseBodyCustomPrivacyPolicyCustomPrivacyPolicyContents(const GetCustomPrivacyPolicyResponseBodyCustomPrivacyPolicyCustomPrivacyPolicyContents &) = default ;
    GetCustomPrivacyPolicyResponseBodyCustomPrivacyPolicyCustomPrivacyPolicyContents(GetCustomPrivacyPolicyResponseBodyCustomPrivacyPolicyCustomPrivacyPolicyContents &&) = default ;
    GetCustomPrivacyPolicyResponseBodyCustomPrivacyPolicyCustomPrivacyPolicyContents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCustomPrivacyPolicyResponseBodyCustomPrivacyPolicyCustomPrivacyPolicyContents() = default ;
    GetCustomPrivacyPolicyResponseBodyCustomPrivacyPolicyCustomPrivacyPolicyContents& operator=(const GetCustomPrivacyPolicyResponseBodyCustomPrivacyPolicyCustomPrivacyPolicyContents &) = default ;
    GetCustomPrivacyPolicyResponseBodyCustomPrivacyPolicyCustomPrivacyPolicyContents& operator=(GetCustomPrivacyPolicyResponseBodyCustomPrivacyPolicyCustomPrivacyPolicyContents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customPrivacyPolicyItems_ == nullptr
        && return this->customPrivacyPolicyTip_ == nullptr && return this->languageCode_ == nullptr; };
    // customPrivacyPolicyItems Field Functions 
    bool hasCustomPrivacyPolicyItems() const { return this->customPrivacyPolicyItems_ != nullptr;};
    void deleteCustomPrivacyPolicyItems() { this->customPrivacyPolicyItems_ = nullptr;};
    inline const vector<Models::GetCustomPrivacyPolicyResponseBodyCustomPrivacyPolicyCustomPrivacyPolicyContentsCustomPrivacyPolicyItems> & customPrivacyPolicyItems() const { DARABONBA_PTR_GET_CONST(customPrivacyPolicyItems_, vector<Models::GetCustomPrivacyPolicyResponseBodyCustomPrivacyPolicyCustomPrivacyPolicyContentsCustomPrivacyPolicyItems>) };
    inline vector<Models::GetCustomPrivacyPolicyResponseBodyCustomPrivacyPolicyCustomPrivacyPolicyContentsCustomPrivacyPolicyItems> customPrivacyPolicyItems() { DARABONBA_PTR_GET(customPrivacyPolicyItems_, vector<Models::GetCustomPrivacyPolicyResponseBodyCustomPrivacyPolicyCustomPrivacyPolicyContentsCustomPrivacyPolicyItems>) };
    inline GetCustomPrivacyPolicyResponseBodyCustomPrivacyPolicyCustomPrivacyPolicyContents& setCustomPrivacyPolicyItems(const vector<Models::GetCustomPrivacyPolicyResponseBodyCustomPrivacyPolicyCustomPrivacyPolicyContentsCustomPrivacyPolicyItems> & customPrivacyPolicyItems) { DARABONBA_PTR_SET_VALUE(customPrivacyPolicyItems_, customPrivacyPolicyItems) };
    inline GetCustomPrivacyPolicyResponseBodyCustomPrivacyPolicyCustomPrivacyPolicyContents& setCustomPrivacyPolicyItems(vector<Models::GetCustomPrivacyPolicyResponseBodyCustomPrivacyPolicyCustomPrivacyPolicyContentsCustomPrivacyPolicyItems> && customPrivacyPolicyItems) { DARABONBA_PTR_SET_RVALUE(customPrivacyPolicyItems_, customPrivacyPolicyItems) };


    // customPrivacyPolicyTip Field Functions 
    bool hasCustomPrivacyPolicyTip() const { return this->customPrivacyPolicyTip_ != nullptr;};
    void deleteCustomPrivacyPolicyTip() { this->customPrivacyPolicyTip_ = nullptr;};
    inline string customPrivacyPolicyTip() const { DARABONBA_PTR_GET_DEFAULT(customPrivacyPolicyTip_, "") };
    inline GetCustomPrivacyPolicyResponseBodyCustomPrivacyPolicyCustomPrivacyPolicyContents& setCustomPrivacyPolicyTip(string customPrivacyPolicyTip) { DARABONBA_PTR_SET_VALUE(customPrivacyPolicyTip_, customPrivacyPolicyTip) };


    // languageCode Field Functions 
    bool hasLanguageCode() const { return this->languageCode_ != nullptr;};
    void deleteLanguageCode() { this->languageCode_ = nullptr;};
    inline string languageCode() const { DARABONBA_PTR_GET_DEFAULT(languageCode_, "") };
    inline GetCustomPrivacyPolicyResponseBodyCustomPrivacyPolicyCustomPrivacyPolicyContents& setLanguageCode(string languageCode) { DARABONBA_PTR_SET_VALUE(languageCode_, languageCode) };


  protected:
    std::shared_ptr<vector<Models::GetCustomPrivacyPolicyResponseBodyCustomPrivacyPolicyCustomPrivacyPolicyContentsCustomPrivacyPolicyItems>> customPrivacyPolicyItems_ = nullptr;
    std::shared_ptr<string> customPrivacyPolicyTip_ = nullptr;
    std::shared_ptr<string> languageCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
