// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTICKETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTICKETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTicketResponseBodyCreator.hpp>
#include <alibabacloud/models/GetTicketResponseBodyProcessor.hpp>
#include <vector>
#include <alibabacloud/models/GetTicketResponseBodyTakers.hpp>
#include <alibabacloud/models/GetTicketResponseBodyTemplate.hpp>
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
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->creator_ == nullptr && return this->customFields_ == nullptr && return this->openConversationId_ == nullptr && return this->openTicketId_ == nullptr && return this->processor_ == nullptr
        && return this->requestId_ == nullptr && return this->scene_ == nullptr && return this->sceneContext_ == nullptr && return this->stage_ == nullptr && return this->takers_ == nullptr
        && return this->template_ == nullptr && return this->title_ == nullptr && return this->updateTime_ == nullptr && return this->vendorRequestId_ == nullptr && return this->vendorType_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetTicketResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline const GetTicketResponseBodyCreator & creator() const { DARABONBA_PTR_GET_CONST(creator_, GetTicketResponseBodyCreator) };
    inline GetTicketResponseBodyCreator creator() { DARABONBA_PTR_GET(creator_, GetTicketResponseBodyCreator) };
    inline GetTicketResponseBody& setCreator(const GetTicketResponseBodyCreator & creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };
    inline GetTicketResponseBody& setCreator(GetTicketResponseBodyCreator && creator) { DARABONBA_PTR_SET_RVALUE(creator_, creator) };


    // customFields Field Functions 
    bool hasCustomFields() const { return this->customFields_ != nullptr;};
    void deleteCustomFields() { this->customFields_ = nullptr;};
    inline string customFields() const { DARABONBA_PTR_GET_DEFAULT(customFields_, "") };
    inline GetTicketResponseBody& setCustomFields(string customFields) { DARABONBA_PTR_SET_VALUE(customFields_, customFields) };


    // openConversationId Field Functions 
    bool hasOpenConversationId() const { return this->openConversationId_ != nullptr;};
    void deleteOpenConversationId() { this->openConversationId_ = nullptr;};
    inline string openConversationId() const { DARABONBA_PTR_GET_DEFAULT(openConversationId_, "") };
    inline GetTicketResponseBody& setOpenConversationId(string openConversationId) { DARABONBA_PTR_SET_VALUE(openConversationId_, openConversationId) };


    // openTicketId Field Functions 
    bool hasOpenTicketId() const { return this->openTicketId_ != nullptr;};
    void deleteOpenTicketId() { this->openTicketId_ = nullptr;};
    inline string openTicketId() const { DARABONBA_PTR_GET_DEFAULT(openTicketId_, "") };
    inline GetTicketResponseBody& setOpenTicketId(string openTicketId) { DARABONBA_PTR_SET_VALUE(openTicketId_, openTicketId) };


    // processor Field Functions 
    bool hasProcessor() const { return this->processor_ != nullptr;};
    void deleteProcessor() { this->processor_ = nullptr;};
    inline const GetTicketResponseBodyProcessor & processor() const { DARABONBA_PTR_GET_CONST(processor_, GetTicketResponseBodyProcessor) };
    inline GetTicketResponseBodyProcessor processor() { DARABONBA_PTR_GET(processor_, GetTicketResponseBodyProcessor) };
    inline GetTicketResponseBody& setProcessor(const GetTicketResponseBodyProcessor & processor) { DARABONBA_PTR_SET_VALUE(processor_, processor) };
    inline GetTicketResponseBody& setProcessor(GetTicketResponseBodyProcessor && processor) { DARABONBA_PTR_SET_RVALUE(processor_, processor) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTicketResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline GetTicketResponseBody& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // sceneContext Field Functions 
    bool hasSceneContext() const { return this->sceneContext_ != nullptr;};
    void deleteSceneContext() { this->sceneContext_ = nullptr;};
    inline string sceneContext() const { DARABONBA_PTR_GET_DEFAULT(sceneContext_, "") };
    inline GetTicketResponseBody& setSceneContext(string sceneContext) { DARABONBA_PTR_SET_VALUE(sceneContext_, sceneContext) };


    // stage Field Functions 
    bool hasStage() const { return this->stage_ != nullptr;};
    void deleteStage() { this->stage_ = nullptr;};
    inline string stage() const { DARABONBA_PTR_GET_DEFAULT(stage_, "") };
    inline GetTicketResponseBody& setStage(string stage) { DARABONBA_PTR_SET_VALUE(stage_, stage) };


    // takers Field Functions 
    bool hasTakers() const { return this->takers_ != nullptr;};
    void deleteTakers() { this->takers_ = nullptr;};
    inline const vector<GetTicketResponseBodyTakers> & takers() const { DARABONBA_PTR_GET_CONST(takers_, vector<GetTicketResponseBodyTakers>) };
    inline vector<GetTicketResponseBodyTakers> takers() { DARABONBA_PTR_GET(takers_, vector<GetTicketResponseBodyTakers>) };
    inline GetTicketResponseBody& setTakers(const vector<GetTicketResponseBodyTakers> & takers) { DARABONBA_PTR_SET_VALUE(takers_, takers) };
    inline GetTicketResponseBody& setTakers(vector<GetTicketResponseBodyTakers> && takers) { DARABONBA_PTR_SET_RVALUE(takers_, takers) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline const GetTicketResponseBodyTemplate & _template() const { DARABONBA_PTR_GET_CONST(template_, GetTicketResponseBodyTemplate) };
    inline GetTicketResponseBodyTemplate _template() { DARABONBA_PTR_GET(template_, GetTicketResponseBodyTemplate) };
    inline GetTicketResponseBody& setTemplate(const GetTicketResponseBodyTemplate & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
    inline GetTicketResponseBody& setTemplate(GetTicketResponseBodyTemplate && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetTicketResponseBody& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetTicketResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string vendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline GetTicketResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string vendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline GetTicketResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<GetTicketResponseBodyCreator> creator_ = nullptr;
    std::shared_ptr<string> customFields_ = nullptr;
    std::shared_ptr<string> openConversationId_ = nullptr;
    std::shared_ptr<string> openTicketId_ = nullptr;
    std::shared_ptr<GetTicketResponseBodyProcessor> processor_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> scene_ = nullptr;
    std::shared_ptr<string> sceneContext_ = nullptr;
    std::shared_ptr<string> stage_ = nullptr;
    std::shared_ptr<vector<GetTicketResponseBodyTakers>> takers_ = nullptr;
    std::shared_ptr<GetTicketResponseBodyTemplate> template_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<string> vendorRequestId_ = nullptr;
    std::shared_ptr<string> vendorType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
