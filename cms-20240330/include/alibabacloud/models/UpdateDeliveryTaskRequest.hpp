// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDELIVERYTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDELIVERYTASKREQUEST_HPP_
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
  class UpdateDeliveryTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDeliveryTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(dataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(externalLabels, externalLabels_);
      DARABONBA_PTR_TO_JSON(labelFilters, labelFilters_);
      DARABONBA_PTR_TO_JSON(labelFiltersType, labelFiltersType_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(sinkList, sinkList_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(taskDescription, taskDescription_);
      DARABONBA_PTR_TO_JSON(taskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDeliveryTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(dataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(externalLabels, externalLabels_);
      DARABONBA_PTR_FROM_JSON(labelFilters, labelFilters_);
      DARABONBA_PTR_FROM_JSON(labelFiltersType, labelFiltersType_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(sinkList, sinkList_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(taskDescription, taskDescription_);
      DARABONBA_PTR_FROM_JSON(taskName, taskName_);
    };
    UpdateDeliveryTaskRequest() = default ;
    UpdateDeliveryTaskRequest(const UpdateDeliveryTaskRequest &) = default ;
    UpdateDeliveryTaskRequest(UpdateDeliveryTaskRequest &&) = default ;
    UpdateDeliveryTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDeliveryTaskRequest() = default ;
    UpdateDeliveryTaskRequest& operator=(const UpdateDeliveryTaskRequest &) = default ;
    UpdateDeliveryTaskRequest& operator=(UpdateDeliveryTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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

    virtual bool empty() const override { return this->dataSourceId_ == nullptr
        && this->externalLabels_ == nullptr && this->labelFilters_ == nullptr && this->labelFiltersType_ == nullptr && this->resourceGroupId_ == nullptr && this->sinkList_ == nullptr
        && this->status_ == nullptr && this->taskDescription_ == nullptr && this->taskName_ == nullptr; };
    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline string getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
    inline UpdateDeliveryTaskRequest& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // externalLabels Field Functions 
    bool hasExternalLabels() const { return this->externalLabels_ != nullptr;};
    void deleteExternalLabels() { this->externalLabels_ = nullptr;};
    inline const map<string, string> & getExternalLabels() const { DARABONBA_PTR_GET_CONST(externalLabels_, map<string, string>) };
    inline map<string, string> getExternalLabels() { DARABONBA_PTR_GET(externalLabels_, map<string, string>) };
    inline UpdateDeliveryTaskRequest& setExternalLabels(const map<string, string> & externalLabels) { DARABONBA_PTR_SET_VALUE(externalLabels_, externalLabels) };
    inline UpdateDeliveryTaskRequest& setExternalLabels(map<string, string> && externalLabels) { DARABONBA_PTR_SET_RVALUE(externalLabels_, externalLabels) };


    // labelFilters Field Functions 
    bool hasLabelFilters() const { return this->labelFilters_ != nullptr;};
    void deleteLabelFilters() { this->labelFilters_ = nullptr;};
    inline const map<string, string> & getLabelFilters() const { DARABONBA_PTR_GET_CONST(labelFilters_, map<string, string>) };
    inline map<string, string> getLabelFilters() { DARABONBA_PTR_GET(labelFilters_, map<string, string>) };
    inline UpdateDeliveryTaskRequest& setLabelFilters(const map<string, string> & labelFilters) { DARABONBA_PTR_SET_VALUE(labelFilters_, labelFilters) };
    inline UpdateDeliveryTaskRequest& setLabelFilters(map<string, string> && labelFilters) { DARABONBA_PTR_SET_RVALUE(labelFilters_, labelFilters) };


    // labelFiltersType Field Functions 
    bool hasLabelFiltersType() const { return this->labelFiltersType_ != nullptr;};
    void deleteLabelFiltersType() { this->labelFiltersType_ = nullptr;};
    inline string getLabelFiltersType() const { DARABONBA_PTR_GET_DEFAULT(labelFiltersType_, "") };
    inline UpdateDeliveryTaskRequest& setLabelFiltersType(string labelFiltersType) { DARABONBA_PTR_SET_VALUE(labelFiltersType_, labelFiltersType) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline UpdateDeliveryTaskRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sinkList Field Functions 
    bool hasSinkList() const { return this->sinkList_ != nullptr;};
    void deleteSinkList() { this->sinkList_ = nullptr;};
    inline const vector<UpdateDeliveryTaskRequest::SinkList> & getSinkList() const { DARABONBA_PTR_GET_CONST(sinkList_, vector<UpdateDeliveryTaskRequest::SinkList>) };
    inline vector<UpdateDeliveryTaskRequest::SinkList> getSinkList() { DARABONBA_PTR_GET(sinkList_, vector<UpdateDeliveryTaskRequest::SinkList>) };
    inline UpdateDeliveryTaskRequest& setSinkList(const vector<UpdateDeliveryTaskRequest::SinkList> & sinkList) { DARABONBA_PTR_SET_VALUE(sinkList_, sinkList) };
    inline UpdateDeliveryTaskRequest& setSinkList(vector<UpdateDeliveryTaskRequest::SinkList> && sinkList) { DARABONBA_PTR_SET_RVALUE(sinkList_, sinkList) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateDeliveryTaskRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskDescription Field Functions 
    bool hasTaskDescription() const { return this->taskDescription_ != nullptr;};
    void deleteTaskDescription() { this->taskDescription_ = nullptr;};
    inline string getTaskDescription() const { DARABONBA_PTR_GET_DEFAULT(taskDescription_, "") };
    inline UpdateDeliveryTaskRequest& setTaskDescription(string taskDescription) { DARABONBA_PTR_SET_VALUE(taskDescription_, taskDescription) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline UpdateDeliveryTaskRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    shared_ptr<string> dataSourceId_ {};
    shared_ptr<map<string, string>> externalLabels_ {};
    shared_ptr<map<string, string>> labelFilters_ {};
    shared_ptr<string> labelFiltersType_ {};
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<vector<UpdateDeliveryTaskRequest::SinkList>> sinkList_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> taskDescription_ {};
    shared_ptr<string> taskName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
