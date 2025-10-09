// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBUSINESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBUSINESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateBusinessRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBusinessRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessName, businessName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectIdentifier, projectIdentifier_);
      DARABONBA_PTR_TO_JSON(UseType, useType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBusinessRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessName, businessName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectIdentifier, projectIdentifier_);
      DARABONBA_PTR_FROM_JSON(UseType, useType_);
    };
    CreateBusinessRequest() = default ;
    CreateBusinessRequest(const CreateBusinessRequest &) = default ;
    CreateBusinessRequest(CreateBusinessRequest &&) = default ;
    CreateBusinessRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBusinessRequest() = default ;
    CreateBusinessRequest& operator=(const CreateBusinessRequest &) = default ;
    CreateBusinessRequest& operator=(CreateBusinessRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->businessName_ != nullptr
        && this->description_ != nullptr && this->owner_ != nullptr && this->projectId_ != nullptr && this->projectIdentifier_ != nullptr && this->useType_ != nullptr; };
    // businessName Field Functions 
    bool hasBusinessName() const { return this->businessName_ != nullptr;};
    void deleteBusinessName() { this->businessName_ = nullptr;};
    inline string businessName() const { DARABONBA_PTR_GET_DEFAULT(businessName_, "") };
    inline CreateBusinessRequest& setBusinessName(string businessName) { DARABONBA_PTR_SET_VALUE(businessName_, businessName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateBusinessRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline CreateBusinessRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateBusinessRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectIdentifier Field Functions 
    bool hasProjectIdentifier() const { return this->projectIdentifier_ != nullptr;};
    void deleteProjectIdentifier() { this->projectIdentifier_ = nullptr;};
    inline string projectIdentifier() const { DARABONBA_PTR_GET_DEFAULT(projectIdentifier_, "") };
    inline CreateBusinessRequest& setProjectIdentifier(string projectIdentifier) { DARABONBA_PTR_SET_VALUE(projectIdentifier_, projectIdentifier) };


    // useType Field Functions 
    bool hasUseType() const { return this->useType_ != nullptr;};
    void deleteUseType() { this->useType_ = nullptr;};
    inline string useType() const { DARABONBA_PTR_GET_DEFAULT(useType_, "") };
    inline CreateBusinessRequest& setUseType(string useType) { DARABONBA_PTR_SET_VALUE(useType_, useType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> businessName_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> owner_ = nullptr;
    std::shared_ptr<int64_t> projectId_ = nullptr;
    std::shared_ptr<string> projectIdentifier_ = nullptr;
    std::shared_ptr<string> useType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
