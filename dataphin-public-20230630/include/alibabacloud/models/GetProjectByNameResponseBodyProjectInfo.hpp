// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROJECTBYNAMERESPONSEBODYPROJECTINFO_HPP_
#define ALIBABACLOUD_MODELS_GETPROJECTBYNAMERESPONSEBODYPROJECTINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetProjectByNameResponseBodyProjectInfoWhiteLists.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetProjectByNameResponseBodyProjectInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProjectByNameResponseBodyProjectInfo& obj) { 
      DARABONBA_PTR_TO_JSON(BizUnitDisplayName, bizUnitDisplayName_);
      DARABONBA_PTR_TO_JSON(BizUnitId, bizUnitId_);
      DARABONBA_PTR_TO_JSON(ComputeSourceId, computeSourceId_);
      DARABONBA_PTR_TO_JSON(ComputeSourceName, computeSourceName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NameSpaceTag, nameSpaceTag_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
      DARABONBA_PTR_TO_JSON(StreamComputeSourceId, streamComputeSourceId_);
      DARABONBA_PTR_TO_JSON(StreamComputeSourceName, streamComputeSourceName_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(WhiteLists, whiteLists_);
    };
    friend void from_json(const Darabonba::Json& j, GetProjectByNameResponseBodyProjectInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(BizUnitDisplayName, bizUnitDisplayName_);
      DARABONBA_PTR_FROM_JSON(BizUnitId, bizUnitId_);
      DARABONBA_PTR_FROM_JSON(ComputeSourceId, computeSourceId_);
      DARABONBA_PTR_FROM_JSON(ComputeSourceName, computeSourceName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NameSpaceTag, nameSpaceTag_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
      DARABONBA_PTR_FROM_JSON(StreamComputeSourceId, streamComputeSourceId_);
      DARABONBA_PTR_FROM_JSON(StreamComputeSourceName, streamComputeSourceName_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(WhiteLists, whiteLists_);
    };
    GetProjectByNameResponseBodyProjectInfo() = default ;
    GetProjectByNameResponseBodyProjectInfo(const GetProjectByNameResponseBodyProjectInfo &) = default ;
    GetProjectByNameResponseBodyProjectInfo(GetProjectByNameResponseBodyProjectInfo &&) = default ;
    GetProjectByNameResponseBodyProjectInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProjectByNameResponseBodyProjectInfo() = default ;
    GetProjectByNameResponseBodyProjectInfo& operator=(const GetProjectByNameResponseBodyProjectInfo &) = default ;
    GetProjectByNameResponseBodyProjectInfo& operator=(GetProjectByNameResponseBodyProjectInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizUnitDisplayName_ != nullptr
        && this->bizUnitId_ != nullptr && this->computeSourceId_ != nullptr && this->computeSourceName_ != nullptr && this->description_ != nullptr && this->displayName_ != nullptr
        && this->env_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->id_ != nullptr && this->mode_ != nullptr
        && this->name_ != nullptr && this->nameSpaceTag_ != nullptr && this->owner_ != nullptr && this->ownerName_ != nullptr && this->streamComputeSourceId_ != nullptr
        && this->streamComputeSourceName_ != nullptr && this->type_ != nullptr && this->whiteLists_ != nullptr; };
    // bizUnitDisplayName Field Functions 
    bool hasBizUnitDisplayName() const { return this->bizUnitDisplayName_ != nullptr;};
    void deleteBizUnitDisplayName() { this->bizUnitDisplayName_ = nullptr;};
    inline string bizUnitDisplayName() const { DARABONBA_PTR_GET_DEFAULT(bizUnitDisplayName_, "") };
    inline GetProjectByNameResponseBodyProjectInfo& setBizUnitDisplayName(string bizUnitDisplayName) { DARABONBA_PTR_SET_VALUE(bizUnitDisplayName_, bizUnitDisplayName) };


    // bizUnitId Field Functions 
    bool hasBizUnitId() const { return this->bizUnitId_ != nullptr;};
    void deleteBizUnitId() { this->bizUnitId_ = nullptr;};
    inline int64_t bizUnitId() const { DARABONBA_PTR_GET_DEFAULT(bizUnitId_, 0L) };
    inline GetProjectByNameResponseBodyProjectInfo& setBizUnitId(int64_t bizUnitId) { DARABONBA_PTR_SET_VALUE(bizUnitId_, bizUnitId) };


    // computeSourceId Field Functions 
    bool hasComputeSourceId() const { return this->computeSourceId_ != nullptr;};
    void deleteComputeSourceId() { this->computeSourceId_ = nullptr;};
    inline int64_t computeSourceId() const { DARABONBA_PTR_GET_DEFAULT(computeSourceId_, 0L) };
    inline GetProjectByNameResponseBodyProjectInfo& setComputeSourceId(int64_t computeSourceId) { DARABONBA_PTR_SET_VALUE(computeSourceId_, computeSourceId) };


    // computeSourceName Field Functions 
    bool hasComputeSourceName() const { return this->computeSourceName_ != nullptr;};
    void deleteComputeSourceName() { this->computeSourceName_ = nullptr;};
    inline string computeSourceName() const { DARABONBA_PTR_GET_DEFAULT(computeSourceName_, "") };
    inline GetProjectByNameResponseBodyProjectInfo& setComputeSourceName(string computeSourceName) { DARABONBA_PTR_SET_VALUE(computeSourceName_, computeSourceName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetProjectByNameResponseBodyProjectInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline GetProjectByNameResponseBodyProjectInfo& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string env() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline GetProjectByNameResponseBodyProjectInfo& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetProjectByNameResponseBodyProjectInfo& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetProjectByNameResponseBodyProjectInfo& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetProjectByNameResponseBodyProjectInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline GetProjectByNameResponseBodyProjectInfo& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetProjectByNameResponseBodyProjectInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nameSpaceTag Field Functions 
    bool hasNameSpaceTag() const { return this->nameSpaceTag_ != nullptr;};
    void deleteNameSpaceTag() { this->nameSpaceTag_ = nullptr;};
    inline string nameSpaceTag() const { DARABONBA_PTR_GET_DEFAULT(nameSpaceTag_, "") };
    inline GetProjectByNameResponseBodyProjectInfo& setNameSpaceTag(string nameSpaceTag) { DARABONBA_PTR_SET_VALUE(nameSpaceTag_, nameSpaceTag) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline GetProjectByNameResponseBodyProjectInfo& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // ownerName Field Functions 
    bool hasOwnerName() const { return this->ownerName_ != nullptr;};
    void deleteOwnerName() { this->ownerName_ = nullptr;};
    inline string ownerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
    inline GetProjectByNameResponseBodyProjectInfo& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


    // streamComputeSourceId Field Functions 
    bool hasStreamComputeSourceId() const { return this->streamComputeSourceId_ != nullptr;};
    void deleteStreamComputeSourceId() { this->streamComputeSourceId_ = nullptr;};
    inline int64_t streamComputeSourceId() const { DARABONBA_PTR_GET_DEFAULT(streamComputeSourceId_, 0L) };
    inline GetProjectByNameResponseBodyProjectInfo& setStreamComputeSourceId(int64_t streamComputeSourceId) { DARABONBA_PTR_SET_VALUE(streamComputeSourceId_, streamComputeSourceId) };


    // streamComputeSourceName Field Functions 
    bool hasStreamComputeSourceName() const { return this->streamComputeSourceName_ != nullptr;};
    void deleteStreamComputeSourceName() { this->streamComputeSourceName_ = nullptr;};
    inline string streamComputeSourceName() const { DARABONBA_PTR_GET_DEFAULT(streamComputeSourceName_, "") };
    inline GetProjectByNameResponseBodyProjectInfo& setStreamComputeSourceName(string streamComputeSourceName) { DARABONBA_PTR_SET_VALUE(streamComputeSourceName_, streamComputeSourceName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetProjectByNameResponseBodyProjectInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // whiteLists Field Functions 
    bool hasWhiteLists() const { return this->whiteLists_ != nullptr;};
    void deleteWhiteLists() { this->whiteLists_ = nullptr;};
    inline const vector<Models::GetProjectByNameResponseBodyProjectInfoWhiteLists> & whiteLists() const { DARABONBA_PTR_GET_CONST(whiteLists_, vector<Models::GetProjectByNameResponseBodyProjectInfoWhiteLists>) };
    inline vector<Models::GetProjectByNameResponseBodyProjectInfoWhiteLists> whiteLists() { DARABONBA_PTR_GET(whiteLists_, vector<Models::GetProjectByNameResponseBodyProjectInfoWhiteLists>) };
    inline GetProjectByNameResponseBodyProjectInfo& setWhiteLists(const vector<Models::GetProjectByNameResponseBodyProjectInfoWhiteLists> & whiteLists) { DARABONBA_PTR_SET_VALUE(whiteLists_, whiteLists) };
    inline GetProjectByNameResponseBodyProjectInfo& setWhiteLists(vector<Models::GetProjectByNameResponseBodyProjectInfoWhiteLists> && whiteLists) { DARABONBA_PTR_SET_RVALUE(whiteLists_, whiteLists) };


  protected:
    std::shared_ptr<string> bizUnitDisplayName_ = nullptr;
    std::shared_ptr<int64_t> bizUnitId_ = nullptr;
    std::shared_ptr<int64_t> computeSourceId_ = nullptr;
    std::shared_ptr<string> computeSourceName_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> env_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> mode_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> nameSpaceTag_ = nullptr;
    std::shared_ptr<string> owner_ = nullptr;
    std::shared_ptr<string> ownerName_ = nullptr;
    std::shared_ptr<int64_t> streamComputeSourceId_ = nullptr;
    std::shared_ptr<string> streamComputeSourceName_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<vector<Models::GetProjectByNameResponseBodyProjectInfoWhiteLists>> whiteLists_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
