// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPVIEWTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPVIEWTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class CreateAppViewTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppViewTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Template, template_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppViewTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Template, template_);
    };
    CreateAppViewTemplateRequest() = default ;
    CreateAppViewTemplateRequest(const CreateAppViewTemplateRequest &) = default ;
    CreateAppViewTemplateRequest(CreateAppViewTemplateRequest &&) = default ;
    CreateAppViewTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppViewTemplateRequest() = default ;
    CreateAppViewTemplateRequest& operator=(const CreateAppViewTemplateRequest &) = default ;
    CreateAppViewTemplateRequest& operator=(CreateAppViewTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Template : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Template& obj) { 
        DARABONBA_PTR_TO_JSON(LayoutIds, layoutIds_);
        DARABONBA_PTR_TO_JSON(MediaEncode, mediaEncode_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Template& obj) { 
        DARABONBA_PTR_FROM_JSON(LayoutIds, layoutIds_);
        DARABONBA_PTR_FROM_JSON(MediaEncode, mediaEncode_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      Template() = default ;
      Template(const Template &) = default ;
      Template(Template &&) = default ;
      Template(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Template() = default ;
      Template& operator=(const Template &) = default ;
      Template& operator=(Template &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->layoutIds_ == nullptr
        && this->mediaEncode_ == nullptr && this->name_ == nullptr; };
      // layoutIds Field Functions 
      bool hasLayoutIds() const { return this->layoutIds_ != nullptr;};
      void deleteLayoutIds() { this->layoutIds_ = nullptr;};
      inline const vector<string> & getLayoutIds() const { DARABONBA_PTR_GET_CONST(layoutIds_, vector<string>) };
      inline vector<string> getLayoutIds() { DARABONBA_PTR_GET(layoutIds_, vector<string>) };
      inline Template& setLayoutIds(const vector<string> & layoutIds) { DARABONBA_PTR_SET_VALUE(layoutIds_, layoutIds) };
      inline Template& setLayoutIds(vector<string> && layoutIds) { DARABONBA_PTR_SET_RVALUE(layoutIds_, layoutIds) };


      // mediaEncode Field Functions 
      bool hasMediaEncode() const { return this->mediaEncode_ != nullptr;};
      void deleteMediaEncode() { this->mediaEncode_ = nullptr;};
      inline int32_t getMediaEncode() const { DARABONBA_PTR_GET_DEFAULT(mediaEncode_, 0) };
      inline Template& setMediaEncode(int32_t mediaEncode) { DARABONBA_PTR_SET_VALUE(mediaEncode_, mediaEncode) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Template& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // This parameter is required.
      shared_ptr<vector<string>> layoutIds_ {};
      // This parameter is required.
      shared_ptr<int32_t> mediaEncode_ {};
      // This parameter is required.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->appId_ == nullptr
        && this->template_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateAppViewTemplateRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline const CreateAppViewTemplateRequest::Template & getTemplate() const { DARABONBA_PTR_GET_CONST(template_, CreateAppViewTemplateRequest::Template) };
    inline CreateAppViewTemplateRequest::Template getTemplate() { DARABONBA_PTR_GET(template_, CreateAppViewTemplateRequest::Template) };
    inline CreateAppViewTemplateRequest& setTemplate(const CreateAppViewTemplateRequest::Template & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
    inline CreateAppViewTemplateRequest& setTemplate(CreateAppViewTemplateRequest::Template && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // This parameter is required.
    shared_ptr<CreateAppViewTemplateRequest::Template> template_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
