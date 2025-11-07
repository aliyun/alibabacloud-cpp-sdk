// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONGROUPRESPONSEBODYAPPLICATIONGROUP_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONGROUPRESPONSEBODYAPPLICATIONGROUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class CreateApplicationGroupResponseBodyApplicationGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationGroupResponseBodyApplicationGroup& obj) { 
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
    friend void from_json(const Darabonba::Json& j, CreateApplicationGroupResponseBodyApplicationGroup& obj) { 
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
    CreateApplicationGroupResponseBodyApplicationGroup() = default ;
    CreateApplicationGroupResponseBodyApplicationGroup(const CreateApplicationGroupResponseBodyApplicationGroup &) = default ;
    CreateApplicationGroupResponseBodyApplicationGroup(CreateApplicationGroupResponseBodyApplicationGroup &&) = default ;
    CreateApplicationGroupResponseBodyApplicationGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApplicationGroupResponseBodyApplicationGroup() = default ;
    CreateApplicationGroupResponseBodyApplicationGroup& operator=(const CreateApplicationGroupResponseBodyApplicationGroup &) = default ;
    CreateApplicationGroupResponseBodyApplicationGroup& operator=(CreateApplicationGroupResponseBodyApplicationGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationName_ == nullptr
        && return this->cmsGroupId_ == nullptr && return this->createDate_ == nullptr && return this->deployRegionId_ == nullptr && return this->description_ == nullptr && return this->importTagKey_ == nullptr
        && return this->importTagValue_ == nullptr && return this->name_ == nullptr && return this->updateDate_ == nullptr; };
    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string applicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline CreateApplicationGroupResponseBodyApplicationGroup& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // cmsGroupId Field Functions 
    bool hasCmsGroupId() const { return this->cmsGroupId_ != nullptr;};
    void deleteCmsGroupId() { this->cmsGroupId_ = nullptr;};
    inline string cmsGroupId() const { DARABONBA_PTR_GET_DEFAULT(cmsGroupId_, "") };
    inline CreateApplicationGroupResponseBodyApplicationGroup& setCmsGroupId(string cmsGroupId) { DARABONBA_PTR_SET_VALUE(cmsGroupId_, cmsGroupId) };


    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string createDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline CreateApplicationGroupResponseBodyApplicationGroup& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // deployRegionId Field Functions 
    bool hasDeployRegionId() const { return this->deployRegionId_ != nullptr;};
    void deleteDeployRegionId() { this->deployRegionId_ = nullptr;};
    inline string deployRegionId() const { DARABONBA_PTR_GET_DEFAULT(deployRegionId_, "") };
    inline CreateApplicationGroupResponseBodyApplicationGroup& setDeployRegionId(string deployRegionId) { DARABONBA_PTR_SET_VALUE(deployRegionId_, deployRegionId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateApplicationGroupResponseBodyApplicationGroup& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // importTagKey Field Functions 
    bool hasImportTagKey() const { return this->importTagKey_ != nullptr;};
    void deleteImportTagKey() { this->importTagKey_ = nullptr;};
    inline string importTagKey() const { DARABONBA_PTR_GET_DEFAULT(importTagKey_, "") };
    inline CreateApplicationGroupResponseBodyApplicationGroup& setImportTagKey(string importTagKey) { DARABONBA_PTR_SET_VALUE(importTagKey_, importTagKey) };


    // importTagValue Field Functions 
    bool hasImportTagValue() const { return this->importTagValue_ != nullptr;};
    void deleteImportTagValue() { this->importTagValue_ = nullptr;};
    inline string importTagValue() const { DARABONBA_PTR_GET_DEFAULT(importTagValue_, "") };
    inline CreateApplicationGroupResponseBodyApplicationGroup& setImportTagValue(string importTagValue) { DARABONBA_PTR_SET_VALUE(importTagValue_, importTagValue) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateApplicationGroupResponseBodyApplicationGroup& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // updateDate Field Functions 
    bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
    void deleteUpdateDate() { this->updateDate_ = nullptr;};
    inline string updateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
    inline CreateApplicationGroupResponseBodyApplicationGroup& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


  protected:
    // The application name.
    std::shared_ptr<string> applicationName_ = nullptr;
    // The ID of the application group in CloudMonitor.
    std::shared_ptr<string> cmsGroupId_ = nullptr;
    // The time when the application group was created.
    std::shared_ptr<string> createDate_ = nullptr;
    // The ID of the region in which the related sources reside.
    std::shared_ptr<string> deployRegionId_ = nullptr;
    // The description of the application group.
    std::shared_ptr<string> description_ = nullptr;
    // The key of the tag.
    std::shared_ptr<string> importTagKey_ = nullptr;
    // The value of the tag.
    std::shared_ptr<string> importTagValue_ = nullptr;
    // The name of the application group.
    std::shared_ptr<string> name_ = nullptr;
    // The time when the application group was updated.
    std::shared_ptr<string> updateDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
