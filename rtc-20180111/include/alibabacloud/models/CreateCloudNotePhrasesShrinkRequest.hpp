// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLOUDNOTEPHRASESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECLOUDNOTEPHRASESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class CreateCloudNotePhrasesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCloudNotePhrasesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Phrase, phraseShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCloudNotePhrasesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Phrase, phraseShrink_);
    };
    CreateCloudNotePhrasesShrinkRequest() = default ;
    CreateCloudNotePhrasesShrinkRequest(const CreateCloudNotePhrasesShrinkRequest &) = default ;
    CreateCloudNotePhrasesShrinkRequest(CreateCloudNotePhrasesShrinkRequest &&) = default ;
    CreateCloudNotePhrasesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCloudNotePhrasesShrinkRequest() = default ;
    CreateCloudNotePhrasesShrinkRequest& operator=(const CreateCloudNotePhrasesShrinkRequest &) = default ;
    CreateCloudNotePhrasesShrinkRequest& operator=(CreateCloudNotePhrasesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->phraseShrink_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateCloudNotePhrasesShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // phraseShrink Field Functions 
    bool hasPhraseShrink() const { return this->phraseShrink_ != nullptr;};
    void deletePhraseShrink() { this->phraseShrink_ = nullptr;};
    inline string phraseShrink() const { DARABONBA_PTR_GET_DEFAULT(phraseShrink_, "") };
    inline CreateCloudNotePhrasesShrinkRequest& setPhraseShrink(string phraseShrink) { DARABONBA_PTR_SET_VALUE(phraseShrink_, phraseShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> phraseShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
