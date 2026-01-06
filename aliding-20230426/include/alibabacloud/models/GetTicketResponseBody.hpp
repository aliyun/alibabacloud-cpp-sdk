// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTICKETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTICKETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetTicketResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTicketResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(creator, creator_);
      DARABONBA_PTR_TO_JSON(customFields, customFields_);
      DARABONBA_PTR_TO_JSON(openConversationId, openConversationId_);
      DARABONBA_PTR_TO_JSON(openTicketId, openTicketId_);
      DARABONBA_PTR_TO_JSON(processor, processor_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(scene, scene_);
      DARABONBA_PTR_TO_JSON(sceneContext, sceneContext_);
      DARABONBA_PTR_TO_JSON(stage, stage_);
      DARABONBA_PTR_TO_JSON(takers, takers_);
      DARABONBA_PTR_TO_JSON(template, template_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, GetTicketResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(creator, creator_);
      DARABONBA_PTR_FROM_JSON(customFields, customFields_);
      DARABONBA_PTR_FROM_JSON(openConversationId, openConversationId_);
      DARABONBA_PTR_FROM_JSON(openTicketId, openTicketId_);
      DARABONBA_PTR_FROM_JSON(processor, processor_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(scene, scene_);
      DARABONBA_PTR_FROM_JSON(sceneContext, sceneContext_);
      DARABONBA_PTR_FROM_JSON(stage, stage_);
      DARABONBA_PTR_FROM_JSON(takers, takers_);
      DARABONBA_PTR_FROM_JSON(template, template_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    GetTicketResponseBody() = default ;
    GetTicketResponseBody(const GetTicketResponseBody &) = default ;
    GetTicketResponseBody(GetTicketResponseBody &&) = default ;
    GetTicketResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTicketResponseBody() = default ;
    GetTicketResponseBody& operator=(const GetTicketResponseBody &) = default ;
    GetTicketResponseBody& operator=(GetTicketResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Template : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Template& obj) { 
        DARABONBA_PTR_TO_JSON(OpenTemplateBizId, openTemplateBizId_);
        DARABONBA_PTR_TO_JSON(OpenTemplateId, openTemplateId_);
        DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      };
      friend void from_json(const Darabonba::Json& j, Template& obj) { 
        DARABONBA_PTR_FROM_JSON(OpenTemplateBizId, openTemplateBizId_);
        DARABONBA_PTR_FROM_JSON(OpenTemplateId, openTemplateId_);
        DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
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
      virtual bool empty() const override { return this->openTemplateBizId_ == nullptr
        && this->openTemplateId_ == nullptr && this->templateName_ == nullptr; };
      // openTemplateBizId Field Functions 
      bool hasOpenTemplateBizId() const { return this->openTemplateBizId_ != nullptr;};
      void deleteOpenTemplateBizId() { this->openTemplateBizId_ = nullptr;};
      inline string getOpenTemplateBizId() const { DARABONBA_PTR_GET_DEFAULT(openTemplateBizId_, "") };
      inline Template& setOpenTemplateBizId(string openTemplateBizId) { DARABONBA_PTR_SET_VALUE(openTemplateBizId_, openTemplateBizId) };


      // openTemplateId Field Functions 
      bool hasOpenTemplateId() const { return this->openTemplateId_ != nullptr;};
      void deleteOpenTemplateId() { this->openTemplateId_ = nullptr;};
      inline string getOpenTemplateId() const { DARABONBA_PTR_GET_DEFAULT(openTemplateId_, "") };
      inline Template& setOpenTemplateId(string openTemplateId) { DARABONBA_PTR_SET_VALUE(openTemplateId_, openTemplateId) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline Template& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    protected:
      // OpenTemplateBizId
      shared_ptr<string> openTemplateBizId_ {};
      // OpenTemplateBizId
      shared_ptr<string> openTemplateId_ {};
      shared_ptr<string> templateName_ {};
    };

    class Takers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Takers& obj) { 
        DARABONBA_PTR_TO_JSON(NickName, nickName_);
        DARABONBA_PTR_TO_JSON(UnionId, unionId_);
      };
      friend void from_json(const Darabonba::Json& j, Takers& obj) { 
        DARABONBA_PTR_FROM_JSON(NickName, nickName_);
        DARABONBA_PTR_FROM_JSON(UnionId, unionId_);
      };
      Takers() = default ;
      Takers(const Takers &) = default ;
      Takers(Takers &&) = default ;
      Takers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Takers() = default ;
      Takers& operator=(const Takers &) = default ;
      Takers& operator=(Takers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->nickName_ == nullptr
        && this->unionId_ == nullptr; };
      // nickName Field Functions 
      bool hasNickName() const { return this->nickName_ != nullptr;};
      void deleteNickName() { this->nickName_ = nullptr;};
      inline string getNickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
      inline Takers& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


      // unionId Field Functions 
      bool hasUnionId() const { return this->unionId_ != nullptr;};
      void deleteUnionId() { this->unionId_ = nullptr;};
      inline string getUnionId() const { DARABONBA_PTR_GET_DEFAULT(unionId_, "") };
      inline Takers& setUnionId(string unionId) { DARABONBA_PTR_SET_VALUE(unionId_, unionId) };


    protected:
      shared_ptr<string> nickName_ {};
      shared_ptr<string> unionId_ {};
    };

    class Processor : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Processor& obj) { 
        DARABONBA_PTR_TO_JSON(NickName, nickName_);
        DARABONBA_PTR_TO_JSON(UnionId, unionId_);
      };
      friend void from_json(const Darabonba::Json& j, Processor& obj) { 
        DARABONBA_PTR_FROM_JSON(NickName, nickName_);
        DARABONBA_PTR_FROM_JSON(UnionId, unionId_);
      };
      Processor() = default ;
      Processor(const Processor &) = default ;
      Processor(Processor &&) = default ;
      Processor(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Processor() = default ;
      Processor& operator=(const Processor &) = default ;
      Processor& operator=(Processor &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->nickName_ == nullptr
        && this->unionId_ == nullptr; };
      // nickName Field Functions 
      bool hasNickName() const { return this->nickName_ != nullptr;};
      void deleteNickName() { this->nickName_ = nullptr;};
      inline string getNickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
      inline Processor& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


      // unionId Field Functions 
      bool hasUnionId() const { return this->unionId_ != nullptr;};
      void deleteUnionId() { this->unionId_ = nullptr;};
      inline string getUnionId() const { DARABONBA_PTR_GET_DEFAULT(unionId_, "") };
      inline Processor& setUnionId(string unionId) { DARABONBA_PTR_SET_VALUE(unionId_, unionId) };


    protected:
      shared_ptr<string> nickName_ {};
      shared_ptr<string> unionId_ {};
    };

    class Creator : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Creator& obj) { 
        DARABONBA_PTR_TO_JSON(NickName, nickName_);
        DARABONBA_PTR_TO_JSON(UnionId, unionId_);
      };
      friend void from_json(const Darabonba::Json& j, Creator& obj) { 
        DARABONBA_PTR_FROM_JSON(NickName, nickName_);
        DARABONBA_PTR_FROM_JSON(UnionId, unionId_);
      };
      Creator() = default ;
      Creator(const Creator &) = default ;
      Creator(Creator &&) = default ;
      Creator(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Creator() = default ;
      Creator& operator=(const Creator &) = default ;
      Creator& operator=(Creator &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->nickName_ == nullptr
        && this->unionId_ == nullptr; };
      // nickName Field Functions 
      bool hasNickName() const { return this->nickName_ != nullptr;};
      void deleteNickName() { this->nickName_ = nullptr;};
      inline string getNickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
      inline Creator& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


      // unionId Field Functions 
      bool hasUnionId() const { return this->unionId_ != nullptr;};
      void deleteUnionId() { this->unionId_ = nullptr;};
      inline string getUnionId() const { DARABONBA_PTR_GET_DEFAULT(unionId_, "") };
      inline Creator& setUnionId(string unionId) { DARABONBA_PTR_SET_VALUE(unionId_, unionId) };


    protected:
      shared_ptr<string> nickName_ {};
      shared_ptr<string> unionId_ {};
    };

    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->creator_ == nullptr && this->customFields_ == nullptr && this->openConversationId_ == nullptr && this->openTicketId_ == nullptr && this->processor_ == nullptr
        && this->requestId_ == nullptr && this->scene_ == nullptr && this->sceneContext_ == nullptr && this->stage_ == nullptr && this->takers_ == nullptr
        && this->template_ == nullptr && this->title_ == nullptr && this->updateTime_ == nullptr && this->vendorRequestId_ == nullptr && this->vendorType_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetTicketResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline const GetTicketResponseBody::Creator & getCreator() const { DARABONBA_PTR_GET_CONST(creator_, GetTicketResponseBody::Creator) };
    inline GetTicketResponseBody::Creator getCreator() { DARABONBA_PTR_GET(creator_, GetTicketResponseBody::Creator) };
    inline GetTicketResponseBody& setCreator(const GetTicketResponseBody::Creator & creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };
    inline GetTicketResponseBody& setCreator(GetTicketResponseBody::Creator && creator) { DARABONBA_PTR_SET_RVALUE(creator_, creator) };


    // customFields Field Functions 
    bool hasCustomFields() const { return this->customFields_ != nullptr;};
    void deleteCustomFields() { this->customFields_ = nullptr;};
    inline string getCustomFields() const { DARABONBA_PTR_GET_DEFAULT(customFields_, "") };
    inline GetTicketResponseBody& setCustomFields(string customFields) { DARABONBA_PTR_SET_VALUE(customFields_, customFields) };


    // openConversationId Field Functions 
    bool hasOpenConversationId() const { return this->openConversationId_ != nullptr;};
    void deleteOpenConversationId() { this->openConversationId_ = nullptr;};
    inline string getOpenConversationId() const { DARABONBA_PTR_GET_DEFAULT(openConversationId_, "") };
    inline GetTicketResponseBody& setOpenConversationId(string openConversationId) { DARABONBA_PTR_SET_VALUE(openConversationId_, openConversationId) };


    // openTicketId Field Functions 
    bool hasOpenTicketId() const { return this->openTicketId_ != nullptr;};
    void deleteOpenTicketId() { this->openTicketId_ = nullptr;};
    inline string getOpenTicketId() const { DARABONBA_PTR_GET_DEFAULT(openTicketId_, "") };
    inline GetTicketResponseBody& setOpenTicketId(string openTicketId) { DARABONBA_PTR_SET_VALUE(openTicketId_, openTicketId) };


    // processor Field Functions 
    bool hasProcessor() const { return this->processor_ != nullptr;};
    void deleteProcessor() { this->processor_ = nullptr;};
    inline const GetTicketResponseBody::Processor & getProcessor() const { DARABONBA_PTR_GET_CONST(processor_, GetTicketResponseBody::Processor) };
    inline GetTicketResponseBody::Processor getProcessor() { DARABONBA_PTR_GET(processor_, GetTicketResponseBody::Processor) };
    inline GetTicketResponseBody& setProcessor(const GetTicketResponseBody::Processor & processor) { DARABONBA_PTR_SET_VALUE(processor_, processor) };
    inline GetTicketResponseBody& setProcessor(GetTicketResponseBody::Processor && processor) { DARABONBA_PTR_SET_RVALUE(processor_, processor) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTicketResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline GetTicketResponseBody& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // sceneContext Field Functions 
    bool hasSceneContext() const { return this->sceneContext_ != nullptr;};
    void deleteSceneContext() { this->sceneContext_ = nullptr;};
    inline string getSceneContext() const { DARABONBA_PTR_GET_DEFAULT(sceneContext_, "") };
    inline GetTicketResponseBody& setSceneContext(string sceneContext) { DARABONBA_PTR_SET_VALUE(sceneContext_, sceneContext) };


    // stage Field Functions 
    bool hasStage() const { return this->stage_ != nullptr;};
    void deleteStage() { this->stage_ = nullptr;};
    inline string getStage() const { DARABONBA_PTR_GET_DEFAULT(stage_, "") };
    inline GetTicketResponseBody& setStage(string stage) { DARABONBA_PTR_SET_VALUE(stage_, stage) };


    // takers Field Functions 
    bool hasTakers() const { return this->takers_ != nullptr;};
    void deleteTakers() { this->takers_ = nullptr;};
    inline const vector<GetTicketResponseBody::Takers> & getTakers() const { DARABONBA_PTR_GET_CONST(takers_, vector<GetTicketResponseBody::Takers>) };
    inline vector<GetTicketResponseBody::Takers> getTakers() { DARABONBA_PTR_GET(takers_, vector<GetTicketResponseBody::Takers>) };
    inline GetTicketResponseBody& setTakers(const vector<GetTicketResponseBody::Takers> & takers) { DARABONBA_PTR_SET_VALUE(takers_, takers) };
    inline GetTicketResponseBody& setTakers(vector<GetTicketResponseBody::Takers> && takers) { DARABONBA_PTR_SET_RVALUE(takers_, takers) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline const GetTicketResponseBody::Template & getTemplate() const { DARABONBA_PTR_GET_CONST(template_, GetTicketResponseBody::Template) };
    inline GetTicketResponseBody::Template getTemplate() { DARABONBA_PTR_GET(template_, GetTicketResponseBody::Template) };
    inline GetTicketResponseBody& setTemplate(const GetTicketResponseBody::Template & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
    inline GetTicketResponseBody& setTemplate(GetTicketResponseBody::Template && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetTicketResponseBody& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetTicketResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline GetTicketResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline GetTicketResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    shared_ptr<string> createTime_ {};
    shared_ptr<GetTicketResponseBody::Creator> creator_ {};
    shared_ptr<string> customFields_ {};
    shared_ptr<string> openConversationId_ {};
    shared_ptr<string> openTicketId_ {};
    shared_ptr<GetTicketResponseBody::Processor> processor_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> scene_ {};
    shared_ptr<string> sceneContext_ {};
    shared_ptr<string> stage_ {};
    shared_ptr<vector<GetTicketResponseBody::Takers>> takers_ {};
    shared_ptr<GetTicketResponseBody::Template> template_ {};
    shared_ptr<string> title_ {};
    shared_ptr<string> updateTime_ {};
    shared_ptr<string> vendorRequestId_ {};
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
