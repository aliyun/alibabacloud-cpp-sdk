// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPLICATIONGROUPRESPONSEBODYAPPLICATIONGROUP_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPLICATIONGROUPRESPONSEBODYAPPLICATIONGROUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class UpdateApplicationGroupResponseBodyApplicationGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApplicationGroupResponseBodyApplicationGroup& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(CreatedDate, createdDate_);
      DARABONBA_PTR_TO_JSON(DeployRegionId, deployRegionId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ImportTagKey, importTagKey_);
      DARABONBA_PTR_TO_JSON(ImportTagValue, importTagValue_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(UpdatedDate, updatedDate_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApplicationGroupResponseBodyApplicationGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(CreatedDate, createdDate_);
      DARABONBA_PTR_FROM_JSON(DeployRegionId, deployRegionId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ImportTagKey, importTagKey_);
      DARABONBA_PTR_FROM_JSON(ImportTagValue, importTagValue_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(UpdatedDate, updatedDate_);
    };
    UpdateApplicationGroupResponseBodyApplicationGroup() = default ;
    UpdateApplicationGroupResponseBodyApplicationGroup(const UpdateApplicationGroupResponseBodyApplicationGroup &) = default ;
    UpdateApplicationGroupResponseBodyApplicationGroup(UpdateApplicationGroupResponseBodyApplicationGroup &&) = default ;
    UpdateApplicationGroupResponseBodyApplicationGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApplicationGroupResponseBodyApplicationGroup() = default ;
    UpdateApplicationGroupResponseBodyApplicationGroup& operator=(const UpdateApplicationGroupResponseBodyApplicationGroup &) = default ;
    UpdateApplicationGroupResponseBodyApplicationGroup& operator=(UpdateApplicationGroupResponseBodyApplicationGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationName_ == nullptr
        && return this->createdDate_ == nullptr && return this->deployRegionId_ == nullptr && return this->description_ == nullptr && return this->importTagKey_ == nullptr && return this->importTagValue_ == nullptr
        && return this->name_ == nullptr && return this->updatedDate_ == nullptr; };
    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string applicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline UpdateApplicationGroupResponseBodyApplicationGroup& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // createdDate Field Functions 
    bool hasCreatedDate() const { return this->createdDate_ != nullptr;};
    void deleteCreatedDate() { this->createdDate_ = nullptr;};
    inline string createdDate() const { DARABONBA_PTR_GET_DEFAULT(createdDate_, "") };
    inline UpdateApplicationGroupResponseBodyApplicationGroup& setCreatedDate(string createdDate) { DARABONBA_PTR_SET_VALUE(createdDate_, createdDate) };


    // deployRegionId Field Functions 
    bool hasDeployRegionId() const { return this->deployRegionId_ != nullptr;};
    void deleteDeployRegionId() { this->deployRegionId_ = nullptr;};
    inline string deployRegionId() const { DARABONBA_PTR_GET_DEFAULT(deployRegionId_, "") };
    inline UpdateApplicationGroupResponseBodyApplicationGroup& setDeployRegionId(string deployRegionId) { DARABONBA_PTR_SET_VALUE(deployRegionId_, deployRegionId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateApplicationGroupResponseBodyApplicationGroup& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // importTagKey Field Functions 
    bool hasImportTagKey() const { return this->importTagKey_ != nullptr;};
    void deleteImportTagKey() { this->importTagKey_ = nullptr;};
    inline string importTagKey() const { DARABONBA_PTR_GET_DEFAULT(importTagKey_, "") };
    inline UpdateApplicationGroupResponseBodyApplicationGroup& setImportTagKey(string importTagKey) { DARABONBA_PTR_SET_VALUE(importTagKey_, importTagKey) };


    // importTagValue Field Functions 
    bool hasImportTagValue() const { return this->importTagValue_ != nullptr;};
    void deleteImportTagValue() { this->importTagValue_ = nullptr;};
    inline string importTagValue() const { DARABONBA_PTR_GET_DEFAULT(importTagValue_, "") };
    inline UpdateApplicationGroupResponseBodyApplicationGroup& setImportTagValue(string importTagValue) { DARABONBA_PTR_SET_VALUE(importTagValue_, importTagValue) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateApplicationGroupResponseBodyApplicationGroup& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // updatedDate Field Functions 
    bool hasUpdatedDate() const { return this->updatedDate_ != nullptr;};
    void deleteUpdatedDate() { this->updatedDate_ = nullptr;};
    inline string updatedDate() const { DARABONBA_PTR_GET_DEFAULT(updatedDate_, "") };
    inline UpdateApplicationGroupResponseBodyApplicationGroup& setUpdatedDate(string updatedDate) { DARABONBA_PTR_SET_VALUE(updatedDate_, updatedDate) };


  protected:
    // The application name.
    std::shared_ptr<string> applicationName_ = nullptr;
    // The time when the application group was created.
    std::shared_ptr<string> createdDate_ = nullptr;
    // The ID of the region in which the related resources reside.
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
    std::shared_ptr<string> updatedDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
