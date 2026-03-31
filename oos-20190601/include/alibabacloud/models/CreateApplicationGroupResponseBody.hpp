// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class CreateApplicationGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationGroup, applicationGroup_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApplicationGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationGroup, applicationGroup_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateApplicationGroupResponseBody() = default ;
    CreateApplicationGroupResponseBody(const CreateApplicationGroupResponseBody &) = default ;
    CreateApplicationGroupResponseBody(CreateApplicationGroupResponseBody &&) = default ;
    CreateApplicationGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApplicationGroupResponseBody() = default ;
    CreateApplicationGroupResponseBody& operator=(const CreateApplicationGroupResponseBody &) = default ;
    CreateApplicationGroupResponseBody& operator=(CreateApplicationGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApplicationGroup : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApplicationGroup& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
        DARABONBA_PTR_TO_JSON(CmsGroupId, cmsGroupId_);
        DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
        DARABONBA_PTR_TO_JSON(DeployRegionId, deployRegionId_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ImportTagKey, importTagKey_);
        DARABONBA_PTR_TO_JSON(ImportTagValue, importTagValue_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(UpdateDate, updateDate_);
      };
      friend void from_json(const Darabonba::Json& j, ApplicationGroup& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
        DARABONBA_PTR_FROM_JSON(CmsGroupId, cmsGroupId_);
        DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
        DARABONBA_PTR_FROM_JSON(DeployRegionId, deployRegionId_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ImportTagKey, importTagKey_);
        DARABONBA_PTR_FROM_JSON(ImportTagValue, importTagValue_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(UpdateDate, updateDate_);
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
        && this->cmsGroupId_ == nullptr && this->createDate_ == nullptr && this->deployRegionId_ == nullptr && this->description_ == nullptr && this->importTagKey_ == nullptr
        && this->importTagValue_ == nullptr && this->name_ == nullptr && this->updateDate_ == nullptr; };
      // applicationName Field Functions 
      bool hasApplicationName() const { return this->applicationName_ != nullptr;};
      void deleteApplicationName() { this->applicationName_ = nullptr;};
      inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
      inline ApplicationGroup& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


      // cmsGroupId Field Functions 
      bool hasCmsGroupId() const { return this->cmsGroupId_ != nullptr;};
      void deleteCmsGroupId() { this->cmsGroupId_ = nullptr;};
      inline string getCmsGroupId() const { DARABONBA_PTR_GET_DEFAULT(cmsGroupId_, "") };
      inline ApplicationGroup& setCmsGroupId(string cmsGroupId) { DARABONBA_PTR_SET_VALUE(cmsGroupId_, cmsGroupId) };


      // createDate Field Functions 
      bool hasCreateDate() const { return this->createDate_ != nullptr;};
      void deleteCreateDate() { this->createDate_ = nullptr;};
      inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
      inline ApplicationGroup& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


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


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ApplicationGroup& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // updateDate Field Functions 
      bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
      void deleteUpdateDate() { this->updateDate_ = nullptr;};
      inline string getUpdateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
      inline ApplicationGroup& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


    protected:
      // The application name.
      shared_ptr<string> applicationName_ {};
      // The ID of the application group in CloudMonitor.
      shared_ptr<string> cmsGroupId_ {};
      // The time when the application group was created.
      shared_ptr<string> createDate_ {};
      // The ID of the region in which the related sources reside.
      shared_ptr<string> deployRegionId_ {};
      // The description of the application group.
      shared_ptr<string> description_ {};
      // The key of the tag.
      shared_ptr<string> importTagKey_ {};
      // The value of the tag.
      shared_ptr<string> importTagValue_ {};
      // The name of the application group.
      shared_ptr<string> name_ {};
      // The time when the application group was updated.
      shared_ptr<string> updateDate_ {};
    };

    virtual bool empty() const override { return this->applicationGroup_ == nullptr
        && this->requestId_ == nullptr; };
    // applicationGroup Field Functions 
    bool hasApplicationGroup() const { return this->applicationGroup_ != nullptr;};
    void deleteApplicationGroup() { this->applicationGroup_ = nullptr;};
    inline const CreateApplicationGroupResponseBody::ApplicationGroup & getApplicationGroup() const { DARABONBA_PTR_GET_CONST(applicationGroup_, CreateApplicationGroupResponseBody::ApplicationGroup) };
    inline CreateApplicationGroupResponseBody::ApplicationGroup getApplicationGroup() { DARABONBA_PTR_GET(applicationGroup_, CreateApplicationGroupResponseBody::ApplicationGroup) };
    inline CreateApplicationGroupResponseBody& setApplicationGroup(const CreateApplicationGroupResponseBody::ApplicationGroup & applicationGroup) { DARABONBA_PTR_SET_VALUE(applicationGroup_, applicationGroup) };
    inline CreateApplicationGroupResponseBody& setApplicationGroup(CreateApplicationGroupResponseBody::ApplicationGroup && applicationGroup) { DARABONBA_PTR_SET_RVALUE(applicationGroup_, applicationGroup) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateApplicationGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the application group.
    shared_ptr<CreateApplicationGroupResponseBody::ApplicationGroup> applicationGroup_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
