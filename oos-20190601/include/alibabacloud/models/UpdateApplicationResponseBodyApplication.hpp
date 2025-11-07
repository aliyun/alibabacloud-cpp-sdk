// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPLICATIONRESPONSEBODYAPPLICATION_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPLICATIONRESPONSEBODYAPPLICATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class UpdateApplicationResponseBodyApplication : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApplicationResponseBodyApplication& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedDate, createdDate_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_ANY_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(UpdatedDate, updatedDate_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApplicationResponseBodyApplication& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedDate, createdDate_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_ANY_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(UpdatedDate, updatedDate_);
    };
    UpdateApplicationResponseBodyApplication() = default ;
    UpdateApplicationResponseBodyApplication(const UpdateApplicationResponseBodyApplication &) = default ;
    UpdateApplicationResponseBodyApplication(UpdateApplicationResponseBodyApplication &&) = default ;
    UpdateApplicationResponseBodyApplication(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApplicationResponseBodyApplication() = default ;
    UpdateApplicationResponseBodyApplication& operator=(const UpdateApplicationResponseBodyApplication &) = default ;
    UpdateApplicationResponseBodyApplication& operator=(UpdateApplicationResponseBodyApplication &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdDate_ == nullptr
        && return this->description_ == nullptr && return this->name_ == nullptr && return this->resourceGroupId_ == nullptr && return this->tags_ == nullptr && return this->updatedDate_ == nullptr; };
    // createdDate Field Functions 
    bool hasCreatedDate() const { return this->createdDate_ != nullptr;};
    void deleteCreatedDate() { this->createdDate_ = nullptr;};
    inline string createdDate() const { DARABONBA_PTR_GET_DEFAULT(createdDate_, "") };
    inline UpdateApplicationResponseBodyApplication& setCreatedDate(string createdDate) { DARABONBA_PTR_SET_VALUE(createdDate_, createdDate) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateApplicationResponseBodyApplication& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateApplicationResponseBodyApplication& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline UpdateApplicationResponseBodyApplication& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline     const Darabonba::Json & tags() const { DARABONBA_GET(tags_) };
    Darabonba::Json & tags() { DARABONBA_GET(tags_) };
    inline UpdateApplicationResponseBodyApplication& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
    inline UpdateApplicationResponseBodyApplication& setTags(Darabonba::Json & tags) { DARABONBA_SET_RVALUE(tags_, tags) };


    // updatedDate Field Functions 
    bool hasUpdatedDate() const { return this->updatedDate_ != nullptr;};
    void deleteUpdatedDate() { this->updatedDate_ = nullptr;};
    inline string updatedDate() const { DARABONBA_PTR_GET_DEFAULT(updatedDate_, "") };
    inline UpdateApplicationResponseBodyApplication& setUpdatedDate(string updatedDate) { DARABONBA_PTR_SET_VALUE(updatedDate_, updatedDate) };


  protected:
    // The time when the application was created.
    std::shared_ptr<string> createdDate_ = nullptr;
    // The description of the application.
    std::shared_ptr<string> description_ = nullptr;
    // The application name.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The tags.
    Darabonba::Json tags_ = nullptr;
    // The time when the application was updated.
    std::shared_ptr<string> updatedDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
