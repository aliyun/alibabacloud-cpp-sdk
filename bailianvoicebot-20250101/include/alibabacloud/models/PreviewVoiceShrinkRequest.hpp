// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREVIEWVOICESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PREVIEWVOICESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BailianVoiceBot20250101
{
namespace Models
{
  class PreviewVoiceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreviewVoiceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessUnitId, businessUnitId_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(NlsAccessType, nlsAccessType_);
      DARABONBA_PTR_TO_JSON(NlsEngine, nlsEngine_);
      DARABONBA_PTR_TO_JSON(Params, paramsShrink_);
      DARABONBA_PTR_TO_JSON(Text, text_);
      DARABONBA_PTR_TO_JSON(Voice, voice_);
    };
    friend void from_json(const Darabonba::Json& j, PreviewVoiceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessUnitId, businessUnitId_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(NlsAccessType, nlsAccessType_);
      DARABONBA_PTR_FROM_JSON(NlsEngine, nlsEngine_);
      DARABONBA_PTR_FROM_JSON(Params, paramsShrink_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
      DARABONBA_PTR_FROM_JSON(Voice, voice_);
    };
    PreviewVoiceShrinkRequest() = default ;
    PreviewVoiceShrinkRequest(const PreviewVoiceShrinkRequest &) = default ;
    PreviewVoiceShrinkRequest(PreviewVoiceShrinkRequest &&) = default ;
    PreviewVoiceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreviewVoiceShrinkRequest() = default ;
    PreviewVoiceShrinkRequest& operator=(const PreviewVoiceShrinkRequest &) = default ;
    PreviewVoiceShrinkRequest& operator=(PreviewVoiceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessUnitId_ == nullptr
        && this->model_ == nullptr && this->nlsAccessType_ == nullptr && this->nlsEngine_ == nullptr && this->paramsShrink_ == nullptr && this->text_ == nullptr
        && this->voice_ == nullptr; };
    // businessUnitId Field Functions 
    bool hasBusinessUnitId() const { return this->businessUnitId_ != nullptr;};
    void deleteBusinessUnitId() { this->businessUnitId_ = nullptr;};
    inline string getBusinessUnitId() const { DARABONBA_PTR_GET_DEFAULT(businessUnitId_, "") };
    inline PreviewVoiceShrinkRequest& setBusinessUnitId(string businessUnitId) { DARABONBA_PTR_SET_VALUE(businessUnitId_, businessUnitId) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline PreviewVoiceShrinkRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // nlsAccessType Field Functions 
    bool hasNlsAccessType() const { return this->nlsAccessType_ != nullptr;};
    void deleteNlsAccessType() { this->nlsAccessType_ = nullptr;};
    inline string getNlsAccessType() const { DARABONBA_PTR_GET_DEFAULT(nlsAccessType_, "") };
    inline PreviewVoiceShrinkRequest& setNlsAccessType(string nlsAccessType) { DARABONBA_PTR_SET_VALUE(nlsAccessType_, nlsAccessType) };


    // nlsEngine Field Functions 
    bool hasNlsEngine() const { return this->nlsEngine_ != nullptr;};
    void deleteNlsEngine() { this->nlsEngine_ = nullptr;};
    inline string getNlsEngine() const { DARABONBA_PTR_GET_DEFAULT(nlsEngine_, "") };
    inline PreviewVoiceShrinkRequest& setNlsEngine(string nlsEngine) { DARABONBA_PTR_SET_VALUE(nlsEngine_, nlsEngine) };


    // paramsShrink Field Functions 
    bool hasParamsShrink() const { return this->paramsShrink_ != nullptr;};
    void deleteParamsShrink() { this->paramsShrink_ = nullptr;};
    inline string getParamsShrink() const { DARABONBA_PTR_GET_DEFAULT(paramsShrink_, "") };
    inline PreviewVoiceShrinkRequest& setParamsShrink(string paramsShrink) { DARABONBA_PTR_SET_VALUE(paramsShrink_, paramsShrink) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline PreviewVoiceShrinkRequest& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // voice Field Functions 
    bool hasVoice() const { return this->voice_ != nullptr;};
    void deleteVoice() { this->voice_ = nullptr;};
    inline string getVoice() const { DARABONBA_PTR_GET_DEFAULT(voice_, "") };
    inline PreviewVoiceShrinkRequest& setVoice(string voice) { DARABONBA_PTR_SET_VALUE(voice_, voice) };


  protected:
    shared_ptr<string> businessUnitId_ {};
    shared_ptr<string> model_ {};
    shared_ptr<string> nlsAccessType_ {};
    shared_ptr<string> nlsEngine_ {};
    shared_ptr<string> paramsShrink_ {};
    shared_ptr<string> text_ {};
    shared_ptr<string> voice_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BailianVoiceBot20250101
#endif
