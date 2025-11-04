// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHOTWORDLIBRARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEHOTWORDLIBRARYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Hotword.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateHotwordLibraryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHotwordLibraryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Hotwords, hotwords_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(UsageScenario, usageScenario_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHotwordLibraryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Hotwords, hotwords_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(UsageScenario, usageScenario_);
    };
    CreateHotwordLibraryRequest() = default ;
    CreateHotwordLibraryRequest(const CreateHotwordLibraryRequest &) = default ;
    CreateHotwordLibraryRequest(CreateHotwordLibraryRequest &&) = default ;
    CreateHotwordLibraryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHotwordLibraryRequest() = default ;
    CreateHotwordLibraryRequest& operator=(const CreateHotwordLibraryRequest &) = default ;
    CreateHotwordLibraryRequest& operator=(CreateHotwordLibraryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->hotwords_ == nullptr && return this->name_ == nullptr && return this->usageScenario_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateHotwordLibraryRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // hotwords Field Functions 
    bool hasHotwords() const { return this->hotwords_ != nullptr;};
    void deleteHotwords() { this->hotwords_ = nullptr;};
    inline const vector<Hotword> & hotwords() const { DARABONBA_PTR_GET_CONST(hotwords_, vector<Hotword>) };
    inline vector<Hotword> hotwords() { DARABONBA_PTR_GET(hotwords_, vector<Hotword>) };
    inline CreateHotwordLibraryRequest& setHotwords(const vector<Hotword> & hotwords) { DARABONBA_PTR_SET_VALUE(hotwords_, hotwords) };
    inline CreateHotwordLibraryRequest& setHotwords(vector<Hotword> && hotwords) { DARABONBA_PTR_SET_RVALUE(hotwords_, hotwords) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateHotwordLibraryRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // usageScenario Field Functions 
    bool hasUsageScenario() const { return this->usageScenario_ != nullptr;};
    void deleteUsageScenario() { this->usageScenario_ = nullptr;};
    inline string usageScenario() const { DARABONBA_PTR_GET_DEFAULT(usageScenario_, "") };
    inline CreateHotwordLibraryRequest& setUsageScenario(string usageScenario) { DARABONBA_PTR_SET_VALUE(usageScenario_, usageScenario) };


  protected:
    // The description of the hotword library. It can be up to 200 characters in length.
    std::shared_ptr<string> description_ = nullptr;
    // The hotword list. You can add up to 300 hotword entries to a single library.
    // 
    // This parameter is required.
    std::shared_ptr<vector<Hotword>> hotwords_ = nullptr;
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
