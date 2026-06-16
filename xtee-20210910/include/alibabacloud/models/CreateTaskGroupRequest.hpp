// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETASKGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETASKGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class CreateTaskGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTaskGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegId, regId_);
      DARABONBA_PTR_TO_JSON(SampleIds, sampleIds_);
      DARABONBA_PTR_TO_JSON(Scenes, scenes_);
      DARABONBA_PTR_TO_JSON(ServiceCodes, serviceCodes_);
      DARABONBA_PTR_TO_JSON(ServiceList, serviceList_);
      DARABONBA_PTR_TO_JSON(ServiceNames, serviceNames_);
      DARABONBA_PTR_TO_JSON(Tab, tab_);
      DARABONBA_PTR_TO_JSON(TaskGroupName, taskGroupName_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTaskGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RegId, regId_);
      DARABONBA_PTR_FROM_JSON(SampleIds, sampleIds_);
      DARABONBA_PTR_FROM_JSON(Scenes, scenes_);
      DARABONBA_PTR_FROM_JSON(ServiceCodes, serviceCodes_);
      DARABONBA_PTR_FROM_JSON(ServiceList, serviceList_);
      DARABONBA_PTR_FROM_JSON(ServiceNames, serviceNames_);
      DARABONBA_PTR_FROM_JSON(Tab, tab_);
      DARABONBA_PTR_FROM_JSON(TaskGroupName, taskGroupName_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateTaskGroupRequest() = default ;
    CreateTaskGroupRequest(const CreateTaskGroupRequest &) = default ;
    CreateTaskGroupRequest(CreateTaskGroupRequest &&) = default ;
    CreateTaskGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTaskGroupRequest() = default ;
    CreateTaskGroupRequest& operator=(const CreateTaskGroupRequest &) = default ;
    CreateTaskGroupRequest& operator=(CreateTaskGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->regId_ == nullptr && this->sampleIds_ == nullptr && this->scenes_ == nullptr && this->serviceCodes_ == nullptr && this->serviceList_ == nullptr
        && this->serviceNames_ == nullptr && this->tab_ == nullptr && this->taskGroupName_ == nullptr && this->type_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateTaskGroupRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline CreateTaskGroupRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // sampleIds Field Functions 
    bool hasSampleIds() const { return this->sampleIds_ != nullptr;};
    void deleteSampleIds() { this->sampleIds_ = nullptr;};
    inline string getSampleIds() const { DARABONBA_PTR_GET_DEFAULT(sampleIds_, "") };
    inline CreateTaskGroupRequest& setSampleIds(string sampleIds) { DARABONBA_PTR_SET_VALUE(sampleIds_, sampleIds) };


    // scenes Field Functions 
    bool hasScenes() const { return this->scenes_ != nullptr;};
    void deleteScenes() { this->scenes_ = nullptr;};
    inline string getScenes() const { DARABONBA_PTR_GET_DEFAULT(scenes_, "") };
    inline CreateTaskGroupRequest& setScenes(string scenes) { DARABONBA_PTR_SET_VALUE(scenes_, scenes) };


    // serviceCodes Field Functions 
    bool hasServiceCodes() const { return this->serviceCodes_ != nullptr;};
    void deleteServiceCodes() { this->serviceCodes_ = nullptr;};
    inline string getServiceCodes() const { DARABONBA_PTR_GET_DEFAULT(serviceCodes_, "") };
    inline CreateTaskGroupRequest& setServiceCodes(string serviceCodes) { DARABONBA_PTR_SET_VALUE(serviceCodes_, serviceCodes) };


    // serviceList Field Functions 
    bool hasServiceList() const { return this->serviceList_ != nullptr;};
    void deleteServiceList() { this->serviceList_ = nullptr;};
    inline string getServiceList() const { DARABONBA_PTR_GET_DEFAULT(serviceList_, "") };
    inline CreateTaskGroupRequest& setServiceList(string serviceList) { DARABONBA_PTR_SET_VALUE(serviceList_, serviceList) };


    // serviceNames Field Functions 
    bool hasServiceNames() const { return this->serviceNames_ != nullptr;};
    void deleteServiceNames() { this->serviceNames_ = nullptr;};
    inline string getServiceNames() const { DARABONBA_PTR_GET_DEFAULT(serviceNames_, "") };
    inline CreateTaskGroupRequest& setServiceNames(string serviceNames) { DARABONBA_PTR_SET_VALUE(serviceNames_, serviceNames) };


    // tab Field Functions 
    bool hasTab() const { return this->tab_ != nullptr;};
    void deleteTab() { this->tab_ = nullptr;};
    inline string getTab() const { DARABONBA_PTR_GET_DEFAULT(tab_, "") };
    inline CreateTaskGroupRequest& setTab(string tab) { DARABONBA_PTR_SET_VALUE(tab_, tab) };


    // taskGroupName Field Functions 
    bool hasTaskGroupName() const { return this->taskGroupName_ != nullptr;};
    void deleteTaskGroupName() { this->taskGroupName_ = nullptr;};
    inline string getTaskGroupName() const { DARABONBA_PTR_GET_DEFAULT(taskGroupName_, "") };
    inline CreateTaskGroupRequest& setTaskGroupName(string taskGroupName) { DARABONBA_PTR_SET_VALUE(taskGroupName_, taskGroupName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateTaskGroupRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The language of the error message returned by the operation. Valid values:
    // - zh: Chinese.
    // - en: English.
    // 
    // Default value: en.
    shared_ptr<string> lang_ {};
    // The region code.
    shared_ptr<string> regId_ {};
    // The sample IDs.
    shared_ptr<string> sampleIds_ {};
    // The scenarios corresponding to the service.
    shared_ptr<string> scenes_ {};
    // The service codes.
    shared_ptr<string> serviceCodes_ {};
    // The service list.
    shared_ptr<string> serviceList_ {};
    // The list of service names for per-application statistics.
    shared_ptr<string> serviceNames_ {};
    // The scenario.
    shared_ptr<string> tab_ {};
    // The task group name.
    shared_ptr<string> taskGroupName_ {};
    // The access type.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
