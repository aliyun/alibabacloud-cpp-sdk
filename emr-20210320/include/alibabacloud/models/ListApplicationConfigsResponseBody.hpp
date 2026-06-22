// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONCONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONCONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListApplicationConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationConfigs, applicationConfigs_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationConfigs, applicationConfigs_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListApplicationConfigsResponseBody() = default ;
    ListApplicationConfigsResponseBody(const ListApplicationConfigsResponseBody &) = default ;
    ListApplicationConfigsResponseBody(ListApplicationConfigsResponseBody &&) = default ;
    ListApplicationConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationConfigsResponseBody() = default ;
    ListApplicationConfigsResponseBody& operator=(const ListApplicationConfigsResponseBody &) = default ;
    ListApplicationConfigsResponseBody& operator=(ListApplicationConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApplicationConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApplicationConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
        DARABONBA_PTR_TO_JSON(ConfigEffectState, configEffectState_);
        DARABONBA_PTR_TO_JSON(ConfigFileName, configFileName_);
        DARABONBA_PTR_TO_JSON(ConfigItemKey, configItemKey_);
        DARABONBA_PTR_TO_JSON(ConfigItemValue, configItemValue_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Custom, custom_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(InitValue, initValue_);
        DARABONBA_PTR_TO_JSON(Modifier, modifier_);
        DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, ApplicationConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
        DARABONBA_PTR_FROM_JSON(ConfigEffectState, configEffectState_);
        DARABONBA_PTR_FROM_JSON(ConfigFileName, configFileName_);
        DARABONBA_PTR_FROM_JSON(ConfigItemKey, configItemKey_);
        DARABONBA_PTR_FROM_JSON(ConfigItemValue, configItemValue_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Custom, custom_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(InitValue, initValue_);
        DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
        DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      ApplicationConfigs() = default ;
      ApplicationConfigs(const ApplicationConfigs &) = default ;
      ApplicationConfigs(ApplicationConfigs &&) = default ;
      ApplicationConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApplicationConfigs() = default ;
      ApplicationConfigs& operator=(const ApplicationConfigs &) = default ;
      ApplicationConfigs& operator=(ApplicationConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->applicationName_ == nullptr
        && this->configEffectState_ == nullptr && this->configFileName_ == nullptr && this->configItemKey_ == nullptr && this->configItemValue_ == nullptr && this->createTime_ == nullptr
        && this->custom_ == nullptr && this->description_ == nullptr && this->initValue_ == nullptr && this->modifier_ == nullptr && this->nodeGroupId_ == nullptr
        && this->nodeId_ == nullptr && this->updateTime_ == nullptr; };
      // applicationName Field Functions 
      bool hasApplicationName() const { return this->applicationName_ != nullptr;};
      void deleteApplicationName() { this->applicationName_ = nullptr;};
      inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
      inline ApplicationConfigs& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


      // configEffectState Field Functions 
      bool hasConfigEffectState() const { return this->configEffectState_ != nullptr;};
      void deleteConfigEffectState() { this->configEffectState_ = nullptr;};
      inline string getConfigEffectState() const { DARABONBA_PTR_GET_DEFAULT(configEffectState_, "") };
      inline ApplicationConfigs& setConfigEffectState(string configEffectState) { DARABONBA_PTR_SET_VALUE(configEffectState_, configEffectState) };


      // configFileName Field Functions 
      bool hasConfigFileName() const { return this->configFileName_ != nullptr;};
      void deleteConfigFileName() { this->configFileName_ = nullptr;};
      inline string getConfigFileName() const { DARABONBA_PTR_GET_DEFAULT(configFileName_, "") };
      inline ApplicationConfigs& setConfigFileName(string configFileName) { DARABONBA_PTR_SET_VALUE(configFileName_, configFileName) };


      // configItemKey Field Functions 
      bool hasConfigItemKey() const { return this->configItemKey_ != nullptr;};
      void deleteConfigItemKey() { this->configItemKey_ = nullptr;};
      inline string getConfigItemKey() const { DARABONBA_PTR_GET_DEFAULT(configItemKey_, "") };
      inline ApplicationConfigs& setConfigItemKey(string configItemKey) { DARABONBA_PTR_SET_VALUE(configItemKey_, configItemKey) };


      // configItemValue Field Functions 
      bool hasConfigItemValue() const { return this->configItemValue_ != nullptr;};
      void deleteConfigItemValue() { this->configItemValue_ = nullptr;};
      inline string getConfigItemValue() const { DARABONBA_PTR_GET_DEFAULT(configItemValue_, "") };
      inline ApplicationConfigs& setConfigItemValue(string configItemValue) { DARABONBA_PTR_SET_VALUE(configItemValue_, configItemValue) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline ApplicationConfigs& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // custom Field Functions 
      bool hasCustom() const { return this->custom_ != nullptr;};
      void deleteCustom() { this->custom_ = nullptr;};
      inline bool getCustom() const { DARABONBA_PTR_GET_DEFAULT(custom_, false) };
      inline ApplicationConfigs& setCustom(bool custom) { DARABONBA_PTR_SET_VALUE(custom_, custom) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ApplicationConfigs& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // initValue Field Functions 
      bool hasInitValue() const { return this->initValue_ != nullptr;};
      void deleteInitValue() { this->initValue_ = nullptr;};
      inline string getInitValue() const { DARABONBA_PTR_GET_DEFAULT(initValue_, "") };
      inline ApplicationConfigs& setInitValue(string initValue) { DARABONBA_PTR_SET_VALUE(initValue_, initValue) };


      // modifier Field Functions 
      bool hasModifier() const { return this->modifier_ != nullptr;};
      void deleteModifier() { this->modifier_ = nullptr;};
      inline string getModifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
      inline ApplicationConfigs& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


      // nodeGroupId Field Functions 
      bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
      void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
      inline string getNodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
      inline ApplicationConfigs& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline ApplicationConfigs& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline ApplicationConfigs& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The name of the application.
      shared_ptr<string> applicationName_ {};
      // The status of the configuration value.
      shared_ptr<string> configEffectState_ {};
      // The name of the configuration file.
      shared_ptr<string> configFileName_ {};
      // The key of the configuration item.
      shared_ptr<string> configItemKey_ {};
      // The value of the configuration item.
      shared_ptr<string> configItemValue_ {};
      // The creation time.
      shared_ptr<int64_t> createTime_ {};
      // Indicates whether the configurations are custom.
      shared_ptr<bool> custom_ {};
      // The description.
      shared_ptr<string> description_ {};
      // The initial value.
      shared_ptr<string> initValue_ {};
      // The person who modified the configurations.
      shared_ptr<string> modifier_ {};
      // The node group ID.
      shared_ptr<string> nodeGroupId_ {};
      // The node ID.
      shared_ptr<string> nodeId_ {};
      // The update time.
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->applicationConfigs_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // applicationConfigs Field Functions 
    bool hasApplicationConfigs() const { return this->applicationConfigs_ != nullptr;};
    void deleteApplicationConfigs() { this->applicationConfigs_ = nullptr;};
    inline const vector<ListApplicationConfigsResponseBody::ApplicationConfigs> & getApplicationConfigs() const { DARABONBA_PTR_GET_CONST(applicationConfigs_, vector<ListApplicationConfigsResponseBody::ApplicationConfigs>) };
    inline vector<ListApplicationConfigsResponseBody::ApplicationConfigs> getApplicationConfigs() { DARABONBA_PTR_GET(applicationConfigs_, vector<ListApplicationConfigsResponseBody::ApplicationConfigs>) };
    inline ListApplicationConfigsResponseBody& setApplicationConfigs(const vector<ListApplicationConfigsResponseBody::ApplicationConfigs> & applicationConfigs) { DARABONBA_PTR_SET_VALUE(applicationConfigs_, applicationConfigs) };
    inline ListApplicationConfigsResponseBody& setApplicationConfigs(vector<ListApplicationConfigsResponseBody::ApplicationConfigs> && applicationConfigs) { DARABONBA_PTR_SET_RVALUE(applicationConfigs_, applicationConfigs) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListApplicationConfigsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListApplicationConfigsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApplicationConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListApplicationConfigsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The application configurations.
    shared_ptr<vector<ListApplicationConfigsResponseBody::ApplicationConfigs>> applicationConfigs_ {};
    // The number of entries per page.
    shared_ptr<int32_t> maxResults_ {};
    // The page number of the next page returned.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of pages returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
