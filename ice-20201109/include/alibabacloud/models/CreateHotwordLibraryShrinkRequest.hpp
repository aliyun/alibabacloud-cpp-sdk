// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHOTWORDLIBRARYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEHOTWORDLIBRARYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateHotwordLibraryShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHotwordLibraryShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Hotwords, hotwordsShrink_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(UsageScenario, usageScenario_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHotwordLibraryShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Hotwords, hotwordsShrink_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(UsageScenario, usageScenario_);
    };
    CreateHotwordLibraryShrinkRequest() = default ;
    CreateHotwordLibraryShrinkRequest(const CreateHotwordLibraryShrinkRequest &) = default ;
    CreateHotwordLibraryShrinkRequest(CreateHotwordLibraryShrinkRequest &&) = default ;
    CreateHotwordLibraryShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHotwordLibraryShrinkRequest() = default ;
    CreateHotwordLibraryShrinkRequest& operator=(const CreateHotwordLibraryShrinkRequest &) = default ;
    CreateHotwordLibraryShrinkRequest& operator=(CreateHotwordLibraryShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->hotwordsShrink_ == nullptr && return this->name_ == nullptr && return this->usageScenario_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateHotwordLibraryShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // hotwordsShrink Field Functions 
    bool hasHotwordsShrink() const { return this->hotwordsShrink_ != nullptr;};
    void deleteHotwordsShrink() { this->hotwordsShrink_ = nullptr;};
    inline string hotwordsShrink() const { DARABONBA_PTR_GET_DEFAULT(hotwordsShrink_, "") };
    inline CreateHotwordLibraryShrinkRequest& setHotwordsShrink(string hotwordsShrink) { DARABONBA_PTR_SET_VALUE(hotwordsShrink_, hotwordsShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateHotwordLibraryShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // usageScenario Field Functions 
    bool hasUsageScenario() const { return this->usageScenario_ != nullptr;};
    void deleteUsageScenario() { this->usageScenario_ = nullptr;};
    inline string usageScenario() const { DARABONBA_PTR_GET_DEFAULT(usageScenario_, "") };
    inline CreateHotwordLibraryShrinkRequest& setUsageScenario(string usageScenario) { DARABONBA_PTR_SET_VALUE(usageScenario_, usageScenario) };


  protected:
    // The description of the hotword library. It can be up to 200 characters in length.
    std::shared_ptr<string> description_ = nullptr;
    // The hotword list. You can add up to 300 hotword entries to a single library.
    // 
    // This parameter is required.
    std::shared_ptr<string> hotwordsShrink_ = nullptr;
    // The name of the hotword library. It can be up to 100 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The usage scenario of the hotword library. Valid values:
    // 
    // · ASR: Automatic Speech Recognition
    // 
    // · StructuredMediaAssets: structured media analysis
    // 
    // · VideoTranslation: Video translation.
    // 
    // This field cannot be modified after the hotword library is created.
    // 
    // This parameter is required.
    std::shared_ptr<string> usageScenario_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
