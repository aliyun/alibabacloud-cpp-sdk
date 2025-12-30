// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONTENTANALYZECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONTENTANALYZECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetContentAnalyzeConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetContentAnalyzeConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ContentAnalyzeConfig, contentAnalyzeConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetContentAnalyzeConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ContentAnalyzeConfig, contentAnalyzeConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetContentAnalyzeConfigResponseBody() = default ;
    GetContentAnalyzeConfigResponseBody(const GetContentAnalyzeConfigResponseBody &) = default ;
    GetContentAnalyzeConfigResponseBody(GetContentAnalyzeConfigResponseBody &&) = default ;
    GetContentAnalyzeConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetContentAnalyzeConfigResponseBody() = default ;
    GetContentAnalyzeConfigResponseBody& operator=(const GetContentAnalyzeConfigResponseBody &) = default ;
    GetContentAnalyzeConfigResponseBody& operator=(GetContentAnalyzeConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ContentAnalyzeConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ContentAnalyzeConfig& obj) { 
        DARABONBA_PTR_TO_JSON(Auto, auto_);
        DARABONBA_PTR_TO_JSON(SaveType, saveType_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      };
      friend void from_json(const Darabonba::Json& j, ContentAnalyzeConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(Auto, auto_);
        DARABONBA_PTR_FROM_JSON(SaveType, saveType_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      };
      ContentAnalyzeConfig() = default ;
      ContentAnalyzeConfig(const ContentAnalyzeConfig &) = default ;
      ContentAnalyzeConfig(ContentAnalyzeConfig &&) = default ;
      ContentAnalyzeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ContentAnalyzeConfig() = default ;
      ContentAnalyzeConfig& operator=(const ContentAnalyzeConfig &) = default ;
      ContentAnalyzeConfig& operator=(ContentAnalyzeConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->auto_ == nullptr
        && this->saveType_ == nullptr && this->templateId_ == nullptr; };
      // auto Field Functions 
      bool hasAuto() const { return this->auto_ != nullptr;};
      void deleteAuto() { this->auto_ = nullptr;};
      inline bool getAuto() const { DARABONBA_PTR_GET_DEFAULT(auto_, false) };
      inline ContentAnalyzeConfig& setAuto(bool _auto) { DARABONBA_PTR_SET_VALUE(auto_, _auto) };


      // saveType Field Functions 
      bool hasSaveType() const { return this->saveType_ != nullptr;};
      void deleteSaveType() { this->saveType_ = nullptr;};
      inline string getSaveType() const { DARABONBA_PTR_GET_DEFAULT(saveType_, "") };
      inline ContentAnalyzeConfig& setSaveType(string saveType) { DARABONBA_PTR_SET_VALUE(saveType_, saveType) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline ContentAnalyzeConfig& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    protected:
      shared_ptr<bool> auto_ {};
      shared_ptr<string> saveType_ {};
      shared_ptr<string> templateId_ {};
    };

    virtual bool empty() const override { return this->contentAnalyzeConfig_ == nullptr
        && this->requestId_ == nullptr; };
    // contentAnalyzeConfig Field Functions 
    bool hasContentAnalyzeConfig() const { return this->contentAnalyzeConfig_ != nullptr;};
    void deleteContentAnalyzeConfig() { this->contentAnalyzeConfig_ = nullptr;};
    inline const GetContentAnalyzeConfigResponseBody::ContentAnalyzeConfig & getContentAnalyzeConfig() const { DARABONBA_PTR_GET_CONST(contentAnalyzeConfig_, GetContentAnalyzeConfigResponseBody::ContentAnalyzeConfig) };
    inline GetContentAnalyzeConfigResponseBody::ContentAnalyzeConfig getContentAnalyzeConfig() { DARABONBA_PTR_GET(contentAnalyzeConfig_, GetContentAnalyzeConfigResponseBody::ContentAnalyzeConfig) };
    inline GetContentAnalyzeConfigResponseBody& setContentAnalyzeConfig(const GetContentAnalyzeConfigResponseBody::ContentAnalyzeConfig & contentAnalyzeConfig) { DARABONBA_PTR_SET_VALUE(contentAnalyzeConfig_, contentAnalyzeConfig) };
    inline GetContentAnalyzeConfigResponseBody& setContentAnalyzeConfig(GetContentAnalyzeConfigResponseBody::ContentAnalyzeConfig && contentAnalyzeConfig) { DARABONBA_PTR_SET_RVALUE(contentAnalyzeConfig_, contentAnalyzeConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetContentAnalyzeConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetContentAnalyzeConfigResponseBody::ContentAnalyzeConfig> contentAnalyzeConfig_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
