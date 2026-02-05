// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTENTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINTENTIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListIntentionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntentionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AnnotationMissionDataSourceType, annotationMissionDataSourceType_);
      DARABONBA_PTR_TO_JSON(BotId, botId_);
      DARABONBA_PTR_TO_JSON(Environment, environment_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IntentId, intentId_);
      DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(UserNick, userNick_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntentionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AnnotationMissionDataSourceType, annotationMissionDataSourceType_);
      DARABONBA_PTR_FROM_JSON(BotId, botId_);
      DARABONBA_PTR_FROM_JSON(Environment, environment_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IntentId, intentId_);
      DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(UserNick, userNick_);
    };
    ListIntentionsRequest() = default ;
    ListIntentionsRequest(const ListIntentionsRequest &) = default ;
    ListIntentionsRequest(ListIntentionsRequest &&) = default ;
    ListIntentionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntentionsRequest() = default ;
    ListIntentionsRequest& operator=(const ListIntentionsRequest &) = default ;
    ListIntentionsRequest& operator=(ListIntentionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->annotationMissionDataSourceType_ == nullptr
        && this->botId_ == nullptr && this->environment_ == nullptr && this->instanceId_ == nullptr && this->intentId_ == nullptr && this->pageIndex_ == nullptr
        && this->pageSize_ == nullptr && this->scriptId_ == nullptr && this->userNick_ == nullptr; };
    // annotationMissionDataSourceType Field Functions 
    bool hasAnnotationMissionDataSourceType() const { return this->annotationMissionDataSourceType_ != nullptr;};
    void deleteAnnotationMissionDataSourceType() { this->annotationMissionDataSourceType_ = nullptr;};
    inline int64_t getAnnotationMissionDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionDataSourceType_, 0L) };
    inline ListIntentionsRequest& setAnnotationMissionDataSourceType(int64_t annotationMissionDataSourceType) { DARABONBA_PTR_SET_VALUE(annotationMissionDataSourceType_, annotationMissionDataSourceType) };


    // botId Field Functions 
    bool hasBotId() const { return this->botId_ != nullptr;};
    void deleteBotId() { this->botId_ = nullptr;};
    inline string getBotId() const { DARABONBA_PTR_GET_DEFAULT(botId_, "") };
    inline ListIntentionsRequest& setBotId(string botId) { DARABONBA_PTR_SET_VALUE(botId_, botId) };


    // environment Field Functions 
    bool hasEnvironment() const { return this->environment_ != nullptr;};
    void deleteEnvironment() { this->environment_ = nullptr;};
    inline int64_t getEnvironment() const { DARABONBA_PTR_GET_DEFAULT(environment_, 0L) };
    inline ListIntentionsRequest& setEnvironment(int64_t environment) { DARABONBA_PTR_SET_VALUE(environment_, environment) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListIntentionsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // intentId Field Functions 
    bool hasIntentId() const { return this->intentId_ != nullptr;};
    void deleteIntentId() { this->intentId_ = nullptr;};
    inline int64_t getIntentId() const { DARABONBA_PTR_GET_DEFAULT(intentId_, 0L) };
    inline ListIntentionsRequest& setIntentId(int64_t intentId) { DARABONBA_PTR_SET_VALUE(intentId_, intentId) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline ListIntentionsRequest& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListIntentionsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline ListIntentionsRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // userNick Field Functions 
    bool hasUserNick() const { return this->userNick_ != nullptr;};
    void deleteUserNick() { this->userNick_ = nullptr;};
    inline string getUserNick() const { DARABONBA_PTR_GET_DEFAULT(userNick_, "") };
    inline ListIntentionsRequest& setUserNick(string userNick) { DARABONBA_PTR_SET_VALUE(userNick_, userNick) };


  protected:
    shared_ptr<int64_t> annotationMissionDataSourceType_ {};
    shared_ptr<string> botId_ {};
    shared_ptr<int64_t> environment_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<int64_t> intentId_ {};
    shared_ptr<int32_t> pageIndex_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> scriptId_ {};
    shared_ptr<string> userNick_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
