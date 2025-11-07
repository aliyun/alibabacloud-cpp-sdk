// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONRESPONSEBODYAPPLICATION_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONRESPONSEBODYAPPLICATION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetApplicationResponseBodyApplicationAlarmConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class GetApplicationResponseBodyApplication : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationResponseBodyApplication& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmConfig, alarmConfig_);
      DARABONBA_PTR_TO_JSON(ApplicationSource, applicationSource_);
      DARABONBA_PTR_TO_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_ANY_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(UpdateDate, updateDate_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationResponseBodyApplication& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmConfig, alarmConfig_);
      DARABONBA_PTR_FROM_JSON(ApplicationSource, applicationSource_);
      DARABONBA_PTR_FROM_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_ANY_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(UpdateDate, updateDate_);
    };
    GetApplicationResponseBodyApplication() = default ;
    GetApplicationResponseBodyApplication(const GetApplicationResponseBodyApplication &) = default ;
    GetApplicationResponseBodyApplication(GetApplicationResponseBodyApplication &&) = default ;
    GetApplicationResponseBodyApplication(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationResponseBodyApplication() = default ;
    GetApplicationResponseBodyApplication& operator=(const GetApplicationResponseBodyApplication &) = default ;
    GetApplicationResponseBodyApplication& operator=(GetApplicationResponseBodyApplication &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alarmConfig_ == nullptr
        && return this->applicationSource_ == nullptr && return this->applicationType_ == nullptr && return this->createDate_ == nullptr && return this->description_ == nullptr && return this->name_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->serviceId_ == nullptr && return this->tags_ == nullptr && return this->updateDate_ == nullptr; };
    // alarmConfig Field Functions 
    bool hasAlarmConfig() const { return this->alarmConfig_ != nullptr;};
    void deleteAlarmConfig() { this->alarmConfig_ = nullptr;};
    inline const Models::GetApplicationResponseBodyApplicationAlarmConfig & alarmConfig() const { DARABONBA_PTR_GET_CONST(alarmConfig_, Models::GetApplicationResponseBodyApplicationAlarmConfig) };
    inline Models::GetApplicationResponseBodyApplicationAlarmConfig alarmConfig() { DARABONBA_PTR_GET(alarmConfig_, Models::GetApplicationResponseBodyApplicationAlarmConfig) };
    inline GetApplicationResponseBodyApplication& setAlarmConfig(const Models::GetApplicationResponseBodyApplicationAlarmConfig & alarmConfig) { DARABONBA_PTR_SET_VALUE(alarmConfig_, alarmConfig) };
    inline GetApplicationResponseBodyApplication& setAlarmConfig(Models::GetApplicationResponseBodyApplicationAlarmConfig && alarmConfig) { DARABONBA_PTR_SET_RVALUE(alarmConfig_, alarmConfig) };


    // applicationSource Field Functions 
    bool hasApplicationSource() const { return this->applicationSource_ != nullptr;};
    void deleteApplicationSource() { this->applicationSource_ = nullptr;};
    inline string applicationSource() const { DARABONBA_PTR_GET_DEFAULT(applicationSource_, "") };
    inline GetApplicationResponseBodyApplication& setApplicationSource(string applicationSource) { DARABONBA_PTR_SET_VALUE(applicationSource_, applicationSource) };


    // applicationType Field Functions 
    bool hasApplicationType() const { return this->applicationType_ != nullptr;};
    void deleteApplicationType() { this->applicationType_ = nullptr;};
    inline string applicationType() const { DARABONBA_PTR_GET_DEFAULT(applicationType_, "") };
    inline GetApplicationResponseBodyApplication& setApplicationType(string applicationType) { DARABONBA_PTR_SET_VALUE(applicationType_, applicationType) };


    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string createDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline GetApplicationResponseBodyApplication& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetApplicationResponseBodyApplication& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetApplicationResponseBodyApplication& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetApplicationResponseBodyApplication& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline GetApplicationResponseBodyApplication& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline     const Darabonba::Json & tags() const { DARABONBA_GET(tags_) };
    Darabonba::Json & tags() { DARABONBA_GET(tags_) };
    inline GetApplicationResponseBodyApplication& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
    inline GetApplicationResponseBodyApplication& setTags(Darabonba::Json & tags) { DARABONBA_SET_RVALUE(tags_, tags) };


    // updateDate Field Functions 
    bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
    void deleteUpdateDate() { this->updateDate_ = nullptr;};
    inline string updateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
    inline GetApplicationResponseBodyApplication& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


  protected:
    // The configurations of application alerts.
    std::shared_ptr<Models::GetApplicationResponseBodyApplicationAlarmConfig> alarmConfig_ = nullptr;
    // The source of application.
    std::shared_ptr<string> applicationSource_ = nullptr;
    // The type of the application.
    // 
    // Valid values:
    // 
    // *   ComputeNest
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Custom
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   DingTalk
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> applicationType_ = nullptr;
    // The time when the application was created.
    std::shared_ptr<string> createDate_ = nullptr;
    // The description of the application.
    std::shared_ptr<string> description_ = nullptr;
    // The application name.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the Compute Nest service that corresponds to the application template.
    std::shared_ptr<string> serviceId_ = nullptr;
    // The tags.
    Darabonba::Json tags_ = nullptr;
    // The time when the application was updated.
    std::shared_ptr<string> updateDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
