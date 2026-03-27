// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDELIVERYTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDELIVERYTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListDeliveryTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeliveryTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(deliveryTasks, deliveryTasks_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeliveryTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(deliveryTasks, deliveryTasks_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListDeliveryTasksResponseBody() = default ;
    ListDeliveryTasksResponseBody(const ListDeliveryTasksResponseBody &) = default ;
    ListDeliveryTasksResponseBody(ListDeliveryTasksResponseBody &&) = default ;
    ListDeliveryTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeliveryTasksResponseBody() = default ;
    ListDeliveryTasksResponseBody& operator=(const ListDeliveryTasksResponseBody &) = default ;
    ListDeliveryTasksResponseBody& operator=(ListDeliveryTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeliveryTasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeliveryTasks& obj) { 
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(dataSourceId, dataSourceId_);
        DARABONBA_PTR_TO_JSON(externalLabels, externalLabels_);
        DARABONBA_PTR_TO_JSON(extraInfo, extraInfo_);
        DARABONBA_PTR_TO_JSON(labelFilters, labelFilters_);
        DARABONBA_PTR_TO_JSON(labelFiltersType, labelFiltersType_);
        DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(sinkList, sinkList_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(tags, tags_);
        DARABONBA_PTR_TO_JSON(taskDescription, taskDescription_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
        DARABONBA_PTR_TO_JSON(taskName, taskName_);
        DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, DeliveryTasks& obj) { 
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(dataSourceId, dataSourceId_);
        DARABONBA_PTR_FROM_JSON(externalLabels, externalLabels_);
        DARABONBA_PTR_FROM_JSON(extraInfo, extraInfo_);
        DARABONBA_PTR_FROM_JSON(labelFilters, labelFilters_);
        DARABONBA_PTR_FROM_JSON(labelFiltersType, labelFiltersType_);
        DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(sinkList, sinkList_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(tags, tags_);
        DARABONBA_PTR_FROM_JSON(taskDescription, taskDescription_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
        DARABONBA_PTR_FROM_JSON(taskName, taskName_);
        DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      };
      DeliveryTasks() = default ;
      DeliveryTasks(const DeliveryTasks &) = default ;
      DeliveryTasks(DeliveryTasks &&) = default ;
      DeliveryTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeliveryTasks() = default ;
      DeliveryTasks& operator=(const DeliveryTasks &) = default ;
      DeliveryTasks& operator=(DeliveryTasks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(key, key_);
          DARABONBA_PTR_TO_JSON(value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(key, key_);
          DARABONBA_PTR_FROM_JSON(value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> key_ {};
        shared_ptr<string> value_ {};
      };

      class SinkList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SinkList& obj) { 
          DARABONBA_PTR_TO_JSON(sinkConfigs, sinkConfigs_);
          DARABONBA_PTR_TO_JSON(sinkType, sinkType_);
        };
        friend void from_json(const Darabonba::Json& j, SinkList& obj) { 
          DARABONBA_PTR_FROM_JSON(sinkConfigs, sinkConfigs_);
          DARABONBA_PTR_FROM_JSON(sinkType, sinkType_);
        };
        SinkList() = default ;
        SinkList(const SinkList &) = default ;
        SinkList(SinkList &&) = default ;
        SinkList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SinkList() = default ;
        SinkList& operator=(const SinkList &) = default ;
        SinkList& operator=(SinkList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->sinkConfigs_ == nullptr
        && this->sinkType_ == nullptr; };
        // sinkConfigs Field Functions 
        bool hasSinkConfigs() const { return this->sinkConfigs_ != nullptr;};
        void deleteSinkConfigs() { this->sinkConfigs_ = nullptr;};
        inline const map<string, string> & getSinkConfigs() const { DARABONBA_PTR_GET_CONST(sinkConfigs_, map<string, string>) };
        inline map<string, string> getSinkConfigs() { DARABONBA_PTR_GET(sinkConfigs_, map<string, string>) };
        inline SinkList& setSinkConfigs(const map<string, string> & sinkConfigs) { DARABONBA_PTR_SET_VALUE(sinkConfigs_, sinkConfigs) };
        inline SinkList& setSinkConfigs(map<string, string> && sinkConfigs) { DARABONBA_PTR_SET_RVALUE(sinkConfigs_, sinkConfigs) };


        // sinkType Field Functions 
        bool hasSinkType() const { return this->sinkType_ != nullptr;};
        void deleteSinkType() { this->sinkType_ = nullptr;};
        inline string getSinkType() const { DARABONBA_PTR_GET_DEFAULT(sinkType_, "") };
        inline SinkList& setSinkType(string sinkType) { DARABONBA_PTR_SET_VALUE(sinkType_, sinkType) };


      protected:
        shared_ptr<map<string, string>> sinkConfigs_ {};
        shared_ptr<string> sinkType_ {};
      };

      class ExtraInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ExtraInfo& obj) { 
          DARABONBA_PTR_TO_JSON(taskNameList, taskNameList_);
        };
        friend void from_json(const Darabonba::Json& j, ExtraInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(taskNameList, taskNameList_);
        };
        ExtraInfo() = default ;
        ExtraInfo(const ExtraInfo &) = default ;
        ExtraInfo(ExtraInfo &&) = default ;
        ExtraInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ExtraInfo() = default ;
        ExtraInfo& operator=(const ExtraInfo &) = default ;
        ExtraInfo& operator=(ExtraInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->taskNameList_ == nullptr; };
        // taskNameList Field Functions 
        bool hasTaskNameList() const { return this->taskNameList_ != nullptr;};
        void deleteTaskNameList() { this->taskNameList_ = nullptr;};
        inline const vector<string> & getTaskNameList() const { DARABONBA_PTR_GET_CONST(taskNameList_, vector<string>) };
        inline vector<string> getTaskNameList() { DARABONBA_PTR_GET(taskNameList_, vector<string>) };
        inline ExtraInfo& setTaskNameList(const vector<string> & taskNameList) { DARABONBA_PTR_SET_VALUE(taskNameList_, taskNameList) };
        inline ExtraInfo& setTaskNameList(vector<string> && taskNameList) { DARABONBA_PTR_SET_RVALUE(taskNameList_, taskNameList) };


      protected:
        shared_ptr<vector<string>> taskNameList_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->dataSourceId_ == nullptr && this->externalLabels_ == nullptr && this->extraInfo_ == nullptr && this->labelFilters_ == nullptr && this->labelFiltersType_ == nullptr
        && this->resourceGroupId_ == nullptr && this->sinkList_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr && this->taskDescription_ == nullptr
        && this->taskId_ == nullptr && this->taskName_ == nullptr && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline DeliveryTasks& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // dataSourceId Field Functions 
      bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
      void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
      inline string getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
      inline DeliveryTasks& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


      // externalLabels Field Functions 
      bool hasExternalLabels() const { return this->externalLabels_ != nullptr;};
      void deleteExternalLabels() { this->externalLabels_ = nullptr;};
      inline const map<string, string> & getExternalLabels() const { DARABONBA_PTR_GET_CONST(externalLabels_, map<string, string>) };
      inline map<string, string> getExternalLabels() { DARABONBA_PTR_GET(externalLabels_, map<string, string>) };
      inline DeliveryTasks& setExternalLabels(const map<string, string> & externalLabels) { DARABONBA_PTR_SET_VALUE(externalLabels_, externalLabels) };
      inline DeliveryTasks& setExternalLabels(map<string, string> && externalLabels) { DARABONBA_PTR_SET_RVALUE(externalLabels_, externalLabels) };


      // extraInfo Field Functions 
      bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
      void deleteExtraInfo() { this->extraInfo_ = nullptr;};
      inline const DeliveryTasks::ExtraInfo & getExtraInfo() const { DARABONBA_PTR_GET_CONST(extraInfo_, DeliveryTasks::ExtraInfo) };
      inline DeliveryTasks::ExtraInfo getExtraInfo() { DARABONBA_PTR_GET(extraInfo_, DeliveryTasks::ExtraInfo) };
      inline DeliveryTasks& setExtraInfo(const DeliveryTasks::ExtraInfo & extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };
      inline DeliveryTasks& setExtraInfo(DeliveryTasks::ExtraInfo && extraInfo) { DARABONBA_PTR_SET_RVALUE(extraInfo_, extraInfo) };


      // labelFilters Field Functions 
      bool hasLabelFilters() const { return this->labelFilters_ != nullptr;};
      void deleteLabelFilters() { this->labelFilters_ = nullptr;};
      inline const map<string, string> & getLabelFilters() const { DARABONBA_PTR_GET_CONST(labelFilters_, map<string, string>) };
      inline map<string, string> getLabelFilters() { DARABONBA_PTR_GET(labelFilters_, map<string, string>) };
      inline DeliveryTasks& setLabelFilters(const map<string, string> & labelFilters) { DARABONBA_PTR_SET_VALUE(labelFilters_, labelFilters) };
      inline DeliveryTasks& setLabelFilters(map<string, string> && labelFilters) { DARABONBA_PTR_SET_RVALUE(labelFilters_, labelFilters) };


      // labelFiltersType Field Functions 
      bool hasLabelFiltersType() const { return this->labelFiltersType_ != nullptr;};
      void deleteLabelFiltersType() { this->labelFiltersType_ = nullptr;};
      inline string getLabelFiltersType() const { DARABONBA_PTR_GET_DEFAULT(labelFiltersType_, "") };
      inline DeliveryTasks& setLabelFiltersType(string labelFiltersType) { DARABONBA_PTR_SET_VALUE(labelFiltersType_, labelFiltersType) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline DeliveryTasks& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // sinkList Field Functions 
      bool hasSinkList() const { return this->sinkList_ != nullptr;};
      void deleteSinkList() { this->sinkList_ = nullptr;};
      inline const vector<DeliveryTasks::SinkList> & getSinkList() const { DARABONBA_PTR_GET_CONST(sinkList_, vector<DeliveryTasks::SinkList>) };
      inline vector<DeliveryTasks::SinkList> getSinkList() { DARABONBA_PTR_GET(sinkList_, vector<DeliveryTasks::SinkList>) };
      inline DeliveryTasks& setSinkList(const vector<DeliveryTasks::SinkList> & sinkList) { DARABONBA_PTR_SET_VALUE(sinkList_, sinkList) };
      inline DeliveryTasks& setSinkList(vector<DeliveryTasks::SinkList> && sinkList) { DARABONBA_PTR_SET_RVALUE(sinkList_, sinkList) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline DeliveryTasks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<DeliveryTasks::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<DeliveryTasks::Tags>) };
      inline vector<DeliveryTasks::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<DeliveryTasks::Tags>) };
      inline DeliveryTasks& setTags(const vector<DeliveryTasks::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline DeliveryTasks& setTags(vector<DeliveryTasks::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // taskDescription Field Functions 
      bool hasTaskDescription() const { return this->taskDescription_ != nullptr;};
      void deleteTaskDescription() { this->taskDescription_ = nullptr;};
      inline string getTaskDescription() const { DARABONBA_PTR_GET_DEFAULT(taskDescription_, "") };
      inline DeliveryTasks& setTaskDescription(string taskDescription) { DARABONBA_PTR_SET_VALUE(taskDescription_, taskDescription) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline DeliveryTasks& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskName Field Functions 
      bool hasTaskName() const { return this->taskName_ != nullptr;};
      void deleteTaskName() { this->taskName_ = nullptr;};
      inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
      inline DeliveryTasks& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline DeliveryTasks& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
      shared_ptr<string> createTime_ {};
      shared_ptr<string> dataSourceId_ {};
      shared_ptr<map<string, string>> externalLabels_ {};
      shared_ptr<DeliveryTasks::ExtraInfo> extraInfo_ {};
      shared_ptr<map<string, string>> labelFilters_ {};
      shared_ptr<string> labelFiltersType_ {};
      shared_ptr<string> resourceGroupId_ {};
      shared_ptr<vector<DeliveryTasks::SinkList>> sinkList_ {};
      shared_ptr<string> status_ {};
      shared_ptr<vector<DeliveryTasks::Tags>> tags_ {};
      shared_ptr<string> taskDescription_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<string> taskName_ {};
      // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->deliveryTasks_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // deliveryTasks Field Functions 
    bool hasDeliveryTasks() const { return this->deliveryTasks_ != nullptr;};
    void deleteDeliveryTasks() { this->deliveryTasks_ = nullptr;};
    inline const vector<ListDeliveryTasksResponseBody::DeliveryTasks> & getDeliveryTasks() const { DARABONBA_PTR_GET_CONST(deliveryTasks_, vector<ListDeliveryTasksResponseBody::DeliveryTasks>) };
    inline vector<ListDeliveryTasksResponseBody::DeliveryTasks> getDeliveryTasks() { DARABONBA_PTR_GET(deliveryTasks_, vector<ListDeliveryTasksResponseBody::DeliveryTasks>) };
    inline ListDeliveryTasksResponseBody& setDeliveryTasks(const vector<ListDeliveryTasksResponseBody::DeliveryTasks> & deliveryTasks) { DARABONBA_PTR_SET_VALUE(deliveryTasks_, deliveryTasks) };
    inline ListDeliveryTasksResponseBody& setDeliveryTasks(vector<ListDeliveryTasksResponseBody::DeliveryTasks> && deliveryTasks) { DARABONBA_PTR_SET_RVALUE(deliveryTasks_, deliveryTasks) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDeliveryTasksResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDeliveryTasksResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDeliveryTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDeliveryTasksResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListDeliveryTasksResponseBody::DeliveryTasks>> deliveryTasks_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
