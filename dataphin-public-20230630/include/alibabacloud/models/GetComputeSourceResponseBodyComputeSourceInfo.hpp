// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMPUTESOURCERESPONSEBODYCOMPUTESOURCEINFO_HPP_
#define ALIBABACLOUD_MODELS_GETCOMPUTESOURCERESPONSEBODYCOMPUTESOURCEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetComputeSourceResponseBodyComputeSourceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetComputeSourceResponseBodyComputeSourceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(BindProject, bindProject_);
      DARABONBA_PTR_TO_JSON(BindProjectId, bindProjectId_);
      DARABONBA_PTR_TO_JSON(BindProjectName, bindProjectName_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(CreatorName, creatorName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetComputeSourceResponseBodyComputeSourceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(BindProject, bindProject_);
      DARABONBA_PTR_FROM_JSON(BindProjectId, bindProjectId_);
      DARABONBA_PTR_FROM_JSON(BindProjectName, bindProjectName_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(CreatorName, creatorName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetComputeSourceResponseBodyComputeSourceInfo() = default ;
    GetComputeSourceResponseBodyComputeSourceInfo(const GetComputeSourceResponseBodyComputeSourceInfo &) = default ;
    GetComputeSourceResponseBodyComputeSourceInfo(GetComputeSourceResponseBodyComputeSourceInfo &&) = default ;
    GetComputeSourceResponseBodyComputeSourceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetComputeSourceResponseBodyComputeSourceInfo() = default ;
    GetComputeSourceResponseBodyComputeSourceInfo& operator=(const GetComputeSourceResponseBodyComputeSourceInfo &) = default ;
    GetComputeSourceResponseBodyComputeSourceInfo& operator=(GetComputeSourceResponseBodyComputeSourceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bindProject_ == nullptr
        && return this->bindProjectId_ == nullptr && return this->bindProjectName_ == nullptr && return this->creator_ == nullptr && return this->creatorName_ == nullptr && return this->description_ == nullptr
        && return this->displayName_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr
        && return this->owner_ == nullptr && return this->ownerName_ == nullptr && return this->type_ == nullptr; };
    // bindProject Field Functions 
    bool hasBindProject() const { return this->bindProject_ != nullptr;};
    void deleteBindProject() { this->bindProject_ = nullptr;};
    inline bool bindProject() const { DARABONBA_PTR_GET_DEFAULT(bindProject_, false) };
    inline GetComputeSourceResponseBodyComputeSourceInfo& setBindProject(bool bindProject) { DARABONBA_PTR_SET_VALUE(bindProject_, bindProject) };


    // bindProjectId Field Functions 
    bool hasBindProjectId() const { return this->bindProjectId_ != nullptr;};
    void deleteBindProjectId() { this->bindProjectId_ = nullptr;};
    inline int64_t bindProjectId() const { DARABONBA_PTR_GET_DEFAULT(bindProjectId_, 0L) };
    inline GetComputeSourceResponseBodyComputeSourceInfo& setBindProjectId(int64_t bindProjectId) { DARABONBA_PTR_SET_VALUE(bindProjectId_, bindProjectId) };


    // bindProjectName Field Functions 
    bool hasBindProjectName() const { return this->bindProjectName_ != nullptr;};
    void deleteBindProjectName() { this->bindProjectName_ = nullptr;};
    inline string bindProjectName() const { DARABONBA_PTR_GET_DEFAULT(bindProjectName_, "") };
    inline GetComputeSourceResponseBodyComputeSourceInfo& setBindProjectName(string bindProjectName) { DARABONBA_PTR_SET_VALUE(bindProjectName_, bindProjectName) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline GetComputeSourceResponseBodyComputeSourceInfo& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // creatorName Field Functions 
    bool hasCreatorName() const { return this->creatorName_ != nullptr;};
    void deleteCreatorName() { this->creatorName_ = nullptr;};
    inline string creatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
    inline GetComputeSourceResponseBodyComputeSourceInfo& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetComputeSourceResponseBodyComputeSourceInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline GetComputeSourceResponseBodyComputeSourceInfo& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetComputeSourceResponseBodyComputeSourceInfo& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetComputeSourceResponseBodyComputeSourceInfo& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetComputeSourceResponseBodyComputeSourceInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetComputeSourceResponseBodyComputeSourceInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline GetComputeSourceResponseBodyComputeSourceInfo& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // ownerName Field Functions 
    bool hasOwnerName() const { return this->ownerName_ != nullptr;};
    void deleteOwnerName() { this->ownerName_ = nullptr;};
    inline string ownerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
    inline GetComputeSourceResponseBodyComputeSourceInfo& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetComputeSourceResponseBodyComputeSourceInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<bool> bindProject_ = nullptr;
    std::shared_ptr<int64_t> bindProjectId_ = nullptr;
    std::shared_ptr<string> bindProjectName_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<string> creatorName_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> owner_ = nullptr;
    std::shared_ptr<string> ownerName_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
