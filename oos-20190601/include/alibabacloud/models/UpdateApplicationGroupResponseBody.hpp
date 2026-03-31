// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPLICATIONGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPLICATIONGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class UpdateApplicationGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApplicationGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationGroup, applicationGroup_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApplicationGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationGroup, applicationGroup_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateApplicationGroupResponseBody() = default ;
    UpdateApplicationGroupResponseBody(const UpdateApplicationGroupResponseBody &) = default ;
    UpdateApplicationGroupResponseBody(UpdateApplicationGroupResponseBody &&) = default ;
    UpdateApplicationGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApplicationGroupResponseBody() = default ;
    UpdateApplicationGroupResponseBody& operator=(const UpdateApplicationGroupResponseBody &) = default ;
    UpdateApplicationGroupResponseBody& operator=(UpdateApplicationGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApplicationGroup : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApplicationGroup& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
        DARABONBA_PTR_TO_JSON(CreatedDate, createdDate_);
        DARABONBA_PTR_TO_JSON(DeployRegionId, deployRegionId_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ImportTagKey, importTagKey_);
        DARABONBA_PTR_TO_JSON(ImportTagValue, importTagValue_);
        DARABONBA_PTR_TO_JSON(MonitorMetadata, monitorMetadata_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(UpdatedDate, updatedDate_);
      };
      friend void from_json(const Darabonba::Json& j, ApplicationGroup& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
        DARABONBA_PTR_FROM_JSON(CreatedDate, createdDate_);
        DARABONBA_PTR_FROM_JSON(DeployRegionId, deployRegionId_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ImportTagKey, importTagKey_);
        DARABONBA_PTR_FROM_JSON(ImportTagValue, importTagValue_);
        DARABONBA_PTR_FROM_JSON(MonitorMetadata, monitorMetadata_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(UpdatedDate, updatedDate_);
      };
      ApplicationGroup() = default ;
      ApplicationGroup(const ApplicationGroup &) = default ;
      ApplicationGroup(ApplicationGroup &&) = default ;
      ApplicationGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApplicationGroup() = default ;
      ApplicationGroup& operator=(const ApplicationGroup &) = default ;
      ApplicationGroup& operator=(ApplicationGroup &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->applicationName_ == nullptr
        && this->createdDate_ == nullptr && this->deployRegionId_ == nullptr && this->description_ == nullptr && this->importTagKey_ == nullptr && this->importTagValue_ == nullptr
        && this->monitorMetadata_ == nullptr && this->name_ == nullptr && this->updatedDate_ == nullptr; };
      // applicationName Field Functions 
      bool hasApplicationName() const { return this->applicationName_ != nullptr;};
      void deleteApplicationName() { this->applicationName_ = nullptr;};
      inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
      inline ApplicationGroup& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


      // createdDate Field Functions 
      bool hasCreatedDate() const { return this->createdDate_ != nullptr;};
      void deleteCreatedDate() { this->createdDate_ = nullptr;};
      inline string getCreatedDate() const { DARABONBA_PTR_GET_DEFAULT(createdDate_, "") };
      inline ApplicationGroup& setCreatedDate(string createdDate) { DARABONBA_PTR_SET_VALUE(createdDate_, createdDate) };


      // deployRegionId Field Functions 
      bool hasDeployRegionId() const { return this->deployRegionId_ != nullptr;};
      void deleteDeployRegionId() { this->deployRegionId_ = nullptr;};
      inline string getDeployRegionId() const { DARABONBA_PTR_GET_DEFAULT(deployRegionId_, "") };
      inline ApplicationGroup& setDeployRegionId(string deployRegionId) { DARABONBA_PTR_SET_VALUE(deployRegionId_, deployRegionId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ApplicationGroup& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // importTagKey Field Functions 
      bool hasImportTagKey() const { return this->importTagKey_ != nullptr;};
      void deleteImportTagKey() { this->importTagKey_ = nullptr;};
      inline string getImportTagKey() const { DARABONBA_PTR_GET_DEFAULT(importTagKey_, "") };
      inline ApplicationGroup& setImportTagKey(string importTagKey) { DARABONBA_PTR_SET_VALUE(importTagKey_, importTagKey) };


      // importTagValue Field Functions 
      bool hasImportTagValue() const { return this->importTagValue_ != nullptr;};
      void deleteImportTagValue() { this->importTagValue_ = nullptr;};
      inline string getImportTagValue() const { DARABONBA_PTR_GET_DEFAULT(importTagValue_, "") };
      inline ApplicationGroup& setImportTagValue(string importTagValue) { DARABONBA_PTR_SET_VALUE(importTagValue_, importTagValue) };


      // monitorMetadata Field Functions 
      bool hasMonitorMetadata() const { return this->monitorMetadata_ != nullptr;};
      void deleteMonitorMetadata() { this->monitorMetadata_ = nullptr;};
      inline string getMonitorMetadata() const { DARABONBA_PTR_GET_DEFAULT(monitorMetadata_, "") };
      inline ApplicationGroup& setMonitorMetadata(string monitorMetadata) { DARABONBA_PTR_SET_VALUE(monitorMetadata_, monitorMetadata) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ApplicationGroup& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // updatedDate Field Functions 
      bool hasUpdatedDate() const { return this->updatedDate_ != nullptr;};
      void deleteUpdatedDate() { this->updatedDate_ = nullptr;};
      inline string getUpdatedDate() const { DARABONBA_PTR_GET_DEFAULT(updatedDate_, "") };
      inline ApplicationGroup& setUpdatedDate(string updatedDate) { DARABONBA_PTR_SET_VALUE(updatedDate_, updatedDate) };


    protected:
      // The application name.
      shared_ptr<string> applicationName_ {};
      // The time when the application group was created.
      shared_ptr<string> createdDate_ {};
      // The ID of the region in which the related resources reside.
      shared_ptr<string> deployRegionId_ {};
      // The description of the application group.
      shared_ptr<string> description_ {};
      // The key of the tag.
      shared_ptr<string> importTagKey_ {};
      // The value of the tag.
      shared_ptr<string> importTagValue_ {};
      shared_ptr<string> monitorMetadata_ {};
      // The name of the application group.
      shared_ptr<string> name_ {};
      // The time when the application group was updated.
      shared_ptr<string> updatedDate_ {};
    };

    virtual bool empty() const override { return this->applicationGroup_ == nullptr
        && this->requestId_ == nullptr; };
    // applicationGroup Field Functions 
    bool hasApplicationGroup() const { return this->applicationGroup_ != nullptr;};
    void deleteApplicationGroup() { this->applicationGroup_ = nullptr;};
    inline const UpdateApplicationGroupResponseBody::ApplicationGroup & getApplicationGroup() const { DARABONBA_PTR_GET_CONST(applicationGroup_, UpdateApplicationGroupResponseBody::ApplicationGroup) };
    inline UpdateApplicationGroupResponseBody::ApplicationGroup getApplicationGroup() { DARABONBA_PTR_GET(applicationGroup_, UpdateApplicationGroupResponseBody::ApplicationGroup) };
    inline UpdateApplicationGroupResponseBody& setApplicationGroup(const UpdateApplicationGroupResponseBody::ApplicationGroup & applicationGroup) { DARABONBA_PTR_SET_VALUE(applicationGroup_, applicationGroup) };
    inline UpdateApplicationGroupResponseBody& setApplicationGroup(UpdateApplicationGroupResponseBody::ApplicationGroup && applicationGroup) { DARABONBA_PTR_SET_RVALUE(applicationGroup_, applicationGroup) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateApplicationGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the application group.
    shared_ptr<UpdateApplicationGroupResponseBody::ApplicationGroup> applicationGroup_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
