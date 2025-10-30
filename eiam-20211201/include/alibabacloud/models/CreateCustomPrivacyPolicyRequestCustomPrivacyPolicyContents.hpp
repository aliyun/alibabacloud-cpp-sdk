// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMPRIVACYPOLICYREQUESTCUSTOMPRIVACYPOLICYCONTENTS_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMPRIVACYPOLICYREQUESTCUSTOMPRIVACYPOLICYCONTENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateCustomPrivacyPolicyRequestCustomPrivacyPolicyContentsCustomPrivacyPolicyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateCustomPrivacyPolicyRequestCustomPrivacyPolicyContents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomPrivacyPolicyRequestCustomPrivacyPolicyContents& obj) { 
      DARABONBA_PTR_TO_JSON(CustomPrivacyPolicyItems, customPrivacyPolicyItems_);
      DARABONBA_PTR_TO_JSON(CustomPrivacyPolicyTip, customPrivacyPolicyTip_);
      DARABONBA_PTR_TO_JSON(LanguageCode, languageCode_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomPrivacyPolicyRequestCustomPrivacyPolicyContents& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomPrivacyPolicyItems, customPrivacyPolicyItems_);
      DARABONBA_PTR_FROM_JSON(CustomPrivacyPolicyTip, customPrivacyPolicyTip_);
      DARABONBA_PTR_FROM_JSON(LanguageCode, languageCode_);
    };
    CreateCustomPrivacyPolicyRequestCustomPrivacyPolicyContents() = default ;
    CreateCustomPrivacyPolicyRequestCustomPrivacyPolicyContents(const CreateCustomPrivacyPolicyRequestCustomPrivacyPolicyContents &) = default ;
    CreateCustomPrivacyPolicyRequestCustomPrivacyPolicyContents(CreateCustomPrivacyPolicyRequestCustomPrivacyPolicyContents &&) = default ;
    CreateCustomPrivacyPolicyRequestCustomPrivacyPolicyContents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomPrivacyPolicyRequestCustomPrivacyPolicyContents() = default ;
    CreateCustomPrivacyPolicyRequestCustomPrivacyPolicyContents& operator=(const CreateCustomPrivacyPolicyRequestCustomPrivacyPolicyContents &) = default ;
    CreateCustomPrivacyPolicyRequestCustomPrivacyPolicyContents& operator=(CreateCustomPrivacyPolicyRequestCustomPrivacyPolicyContents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customPrivacyPolicyItems_ == nullptr
        && return this->customPrivacyPolicyTip_ == nullptr && return this->languageCode_ == nullptr; };
    // customPrivacyPolicyItems Field Functions 
    bool hasCustomPrivacyPolicyItems() const { return this->customPrivacyPolicyItems_ != nullptr;};
    void deleteCustomPrivacyPolicyItems() { this->customPrivacyPolicyItems_ = nullptr;};
    inline const vector<Models::CreateCustomPrivacyPolicyRequestCustomPrivacyPolicyContentsCustomPrivacyPolicyItems> & customPrivacyPolicyItems() const { DARABONBA_PTR_GET_CONST(customPrivacyPolicyItems_, vector<Models::CreateCustomPrivacyPolicyRequestCustomPrivacyPolicyContentsCustomPrivacyPolicyItems>) };
    inline vector<Models::CreateCustomPrivacyPolicyRequestCustomPrivacyPolicyContentsCustomPrivacyPolicyItems> customPrivacyPolicyItems() { DARABONBA_PTR_GET(customPrivacyPolicyItems_, vector<Models::CreateCustomPrivacyPolicyRequestCustomPrivacyPolicyContentsCustomPrivacyPolicyItems>) };
    inline CreateCustomPrivacyPolicyRequestCustomPrivacyPolicyContents& setCustomPrivacyPolicyItems(const vector<Models::CreateCustomPrivacyPolicyRequestCustomPrivacyPolicyContentsCustomPrivacyPolicyItems> & customPrivacyPolicyItems) { DARABONBA_PTR_SET_VALUE(customPrivacyPolicyItems_, customPrivacyPolicyItems) };
    inline CreateCustomPrivacyPolicyRequestCustomPrivacyPolicyContents& setCustomPrivacyPolicyItems(vector<Models::CreateCustomPrivacyPolicyRequestCustomPrivacyPolicyContentsCustomPrivacyPolicyItems> && customPrivacyPolicyItems) { DARABONBA_PTR_SET_RVALUE(customPrivacyPolicyItems_, customPrivacyPolicyItems) };


    // customPrivacyPolicyTip Field Functions 
    bool hasCustomPrivacyPolicyTip() const { return this->customPrivacyPolicyTip_ != nullptr;};
    void deleteCustomPrivacyPolicyTip() { this->customPrivacyPolicyTip_ = nullptr;};
    inline string customPrivacyPolicyTip() const { DARABONBA_PTR_GET_DEFAULT(customPrivacyPolicyTip_, "") };
    inline CreateCustomPrivacyPolicyRequestCustomPrivacyPolicyContents& setCustomPrivacyPolicyTip(string customPrivacyPolicyTip) { DARABONBA_PTR_SET_VALUE(customPrivacyPolicyTip_, customPrivacyPolicyTip) };


    // languageCode Field Functions 
    bool hasLanguageCode() const { return this->languageCode_ != nullptr;};
    void deleteLanguageCode() { this->languageCode_ = nullptr;};
    inline string languageCode() const { DARABONBA_PTR_GET_DEFAULT(languageCode_, "") };
    inline CreateCustomPrivacyPolicyRequestCustomPrivacyPolicyContents& setLanguageCode(string languageCode) { DARABONBA_PTR_SET_VALUE(languageCode_, languageCode) };


  protected:
    // 自定义条款项
    std::shared_ptr<vector<Models::CreateCustomPrivacyPolicyRequestCustomPrivacyPolicyContentsCustomPrivacyPolicyItems>> customPrivacyPolicyItems_ = nullptr;
    // 自定义条款提示
    std::shared_ptr<string> customPrivacyPolicyTip_ = nullptr;
    // 自定义条款所属语言
    std::shared_ptr<string> languageCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
