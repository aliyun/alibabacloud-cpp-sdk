// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LANGUAGEDETECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LANGUAGEDETECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class LanguageDetectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LanguageDetectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Scene, scene_);
      DARABONBA_PTR_TO_JSON(SourceText, sourceText_);
    };
    friend void from_json(const Darabonba::Json& j, LanguageDetectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Scene, scene_);
      DARABONBA_PTR_FROM_JSON(SourceText, sourceText_);
    };
    LanguageDetectRequest() = default ;
    LanguageDetectRequest(const LanguageDetectRequest &) = default ;
    LanguageDetectRequest(LanguageDetectRequest &&) = default ;
    LanguageDetectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LanguageDetectRequest() = default ;
    LanguageDetectRequest& operator=(const LanguageDetectRequest &) = default ;
    LanguageDetectRequest& operator=(LanguageDetectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->scene_ == nullptr
        && this->sourceText_ == nullptr; };
    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline LanguageDetectRequest& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // sourceText Field Functions 
    bool hasSourceText() const { return this->sourceText_ != nullptr;};
    void deleteSourceText() { this->sourceText_ = nullptr;};
    inline string getSourceText() const { DARABONBA_PTR_GET_DEFAULT(sourceText_, "") };
    inline LanguageDetectRequest& setSourceText(string sourceText) { DARABONBA_PTR_SET_VALUE(sourceText_, sourceText) };


  protected:
    // The detection scenario. Default value: common. If you are using a search phrase scenario, set this parameter to query. If an incorrect value is passed or the parameter is not specified, the common general identification is used. Note: pass query in lowercase.
    shared_ptr<string> scene_ {};
    // The source text to be identified. This parameter is required.
    // 
    // This parameter is required.
    shared_ptr<string> sourceText_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
