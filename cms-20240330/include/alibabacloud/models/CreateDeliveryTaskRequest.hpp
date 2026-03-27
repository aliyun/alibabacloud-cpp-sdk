// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDELIVERYTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDELIVERYTASKREQUEST_HPP_
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
  class CreateDeliveryTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDeliveryTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(dataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(externalLabels, externalLabels_);
      DARABONBA_PTR_TO_JSON(labelFilters, labelFilters_);
      DARABONBA_PTR_TO_JSON(labelFiltersType, labelFiltersType_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(sinkList, sinkList_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(taskDescription, taskDescription_);
      DARABONBA_PTR_TO_JSON(taskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDeliveryTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(dataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(externalLabels, externalLabels_);
      DARABONBA_PTR_FROM_JSON(labelFilters, labelFilters_);
      DARABONBA_PTR_FROM_JSON(labelFiltersType, labelFiltersType_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(sinkList, sinkList_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(taskDescription, taskDescription_);
      DARABONBA_PTR_FROM_JSON(taskName, taskName_);
    };
    CreateDeliveryTaskRequest() = default ;
    CreateDeliveryTaskRequest(const CreateDeliveryTaskRequest &) = default ;
    CreateDeliveryTaskRequest(CreateDeliveryTaskRequest &&) = default ;
    CreateDeliveryTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDeliveryTaskRequest() = default ;
    CreateDeliveryTaskRequest& operator=(const CreateDeliveryTaskRequest &) = default ;
    CreateDeliveryTaskRequest& operator=(CreateDeliveryTaskRequest &&) = default ;
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
      // This parameter is required.
      shared_ptr<string> sinkType_ {};
    };

    virtual bool empty() const override { return this->dataSourceId_ == nullptr
        && this->externalLabels_ == nullptr && this->labelFilters_ == nullptr && this->labelFiltersType_ == nullptr && this->resourceGroupId_ == nullptr && this->sinkList_ == nullptr
        && this->tags_ == nullptr && this->taskDescription_ == nullptr && this->taskName_ == nullptr; };
    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline string getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
    inline CreateDeliveryTaskRequest& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // externalLabels Field Functions 
    bool hasExternalLabels() const { return this->externalLabels_ != nullptr;};
    void deleteExternalLabels() { this->externalLabels_ = nullptr;};
    inline const map<string, string> & getExternalLabels() const { DARABONBA_PTR_GET_CONST(externalLabels_, map<string, string>) };
    inline map<string, string> getExternalLabels() { DARABONBA_PTR_GET(externalLabels_, map<string, string>) };
    inline CreateDeliveryTaskRequest& setExternalLabels(const map<string, string> & externalLabels) { DARABONBA_PTR_SET_VALUE(externalLabels_, externalLabels) };
    inline CreateDeliveryTaskRequest& setExternalLabels(map<string, string> && externalLabels) { DARABONBA_PTR_SET_RVALUE(externalLabels_, externalLabels) };


    // labelFilters Field Functions 
    bool hasLabelFilters() const { return this->labelFilters_ != nullptr;};
    void deleteLabelFilters() { this->labelFilters_ = nullptr;};
    inline const map<string, string> & getLabelFilters() const { DARABONBA_PTR_GET_CONST(labelFilters_, map<string, string>) };
    inline map<string, string> getLabelFilters() { DARABONBA_PTR_GET(labelFilters_, map<string, string>) };
    inline CreateDeliveryTaskRequest& setLabelFilters(const map<string, string> & labelFilters) { DARABONBA_PTR_SET_VALUE(labelFilters_, labelFilters) };
    inline CreateDeliveryTaskRequest& setLabelFilters(map<string, string> && labelFilters) { DARABONBA_PTR_SET_RVALUE(labelFilters_, labelFilters) };


    // labelFiltersType Field Functions 
    bool hasLabelFiltersType() const { return this->labelFiltersType_ != nullptr;};
    void deleteLabelFiltersType() { this->labelFiltersType_ = nullptr;};
    inline string getLabelFiltersType() const { DARABONBA_PTR_GET_DEFAULT(labelFiltersType_, "") };
    inline CreateDeliveryTaskRequest& setLabelFiltersType(string labelFiltersType) { DARABONBA_PTR_SET_VALUE(labelFiltersType_, labelFiltersType) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateDeliveryTaskRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sinkList Field Functions 
    bool hasSinkList() const { return this->sinkList_ != nullptr;};
    void deleteSinkList() { this->sinkList_ = nullptr;};
    inline const vector<CreateDeliveryTaskRequest::SinkList> & getSinkList() const { DARABONBA_PTR_GET_CONST(sinkList_, vector<CreateDeliveryTaskRequest::SinkList>) };
    inline vector<CreateDeliveryTaskRequest::SinkList> getSinkList() { DARABONBA_PTR_GET(sinkList_, vector<CreateDeliveryTaskRequest::SinkList>) };
    inline CreateDeliveryTaskRequest& setSinkList(const vector<CreateDeliveryTaskRequest::SinkList> & sinkList) { DARABONBA_PTR_SET_VALUE(sinkList_, sinkList) };
    inline CreateDeliveryTaskRequest& setSinkList(vector<CreateDeliveryTaskRequest::SinkList> && sinkList) { DARABONBA_PTR_SET_RVALUE(sinkList_, sinkList) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateDeliveryTaskRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateDeliveryTaskRequest::Tags>) };
    inline vector<CreateDeliveryTaskRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<CreateDeliveryTaskRequest::Tags>) };
    inline CreateDeliveryTaskRequest& setTags(const vector<CreateDeliveryTaskRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateDeliveryTaskRequest& setTags(vector<CreateDeliveryTaskRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // taskDescription Field Functions 
    bool hasTaskDescription() const { return this->taskDescription_ != nullptr;};
    void deleteTaskDescription() { this->taskDescription_ = nullptr;};
    inline string getTaskDescription() const { DARABONBA_PTR_GET_DEFAULT(taskDescription_, "") };
    inline CreateDeliveryTaskRequest& setTaskDescription(string taskDescription) { DARABONBA_PTR_SET_VALUE(taskDescription_, taskDescription) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreateDeliveryTaskRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // This parameter is required.
    shared_ptr<string> dataSourceId_ {};
    shared_ptr<map<string, string>> externalLabels_ {};
    shared_ptr<map<string, string>> labelFilters_ {};
    shared_ptr<string> labelFiltersType_ {};
    shared_ptr<string> resourceGroupId_ {};
    // This parameter is required.
    shared_ptr<vector<CreateDeliveryTaskRequest::SinkList>> sinkList_ {};
    shared_ptr<vector<CreateDeliveryTaskRequest::Tags>> tags_ {};
    shared_ptr<string> taskDescription_ {};
    // This parameter is required.
    shared_ptr<string> taskName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
