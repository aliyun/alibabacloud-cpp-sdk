// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDATASERVICELISTRESPONSEBODYRESULTDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYDATASERVICELISTRESPONSEBODYRESULTDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryDataServiceListResponseBodyResultDataContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryDataServiceListResponseBodyResultData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDataServiceListResponseBodyResultData& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(CreatorName, creatorName_);
      DARABONBA_PTR_TO_JSON(CubeId, cubeId_);
      DARABONBA_PTR_TO_JSON(CubeName, cubeName_);
      DARABONBA_PTR_TO_JSON(Desc, desc_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(ModifierId, modifierId_);
      DARABONBA_PTR_TO_JSON(ModifierName, modifierName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
      DARABONBA_PTR_TO_JSON(Sid, sid_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(WorkspaceName, workspaceName_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDataServiceListResponseBodyResultData& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(CreatorName, creatorName_);
      DARABONBA_PTR_FROM_JSON(CubeId, cubeId_);
      DARABONBA_PTR_FROM_JSON(CubeName, cubeName_);
      DARABONBA_PTR_FROM_JSON(Desc, desc_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(ModifierId, modifierId_);
      DARABONBA_PTR_FROM_JSON(ModifierName, modifierName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
      DARABONBA_PTR_FROM_JSON(Sid, sid_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceName, workspaceName_);
    };
    QueryDataServiceListResponseBodyResultData() = default ;
    QueryDataServiceListResponseBodyResultData(const QueryDataServiceListResponseBodyResultData &) = default ;
    QueryDataServiceListResponseBodyResultData(QueryDataServiceListResponseBodyResultData &&) = default ;
    QueryDataServiceListResponseBodyResultData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDataServiceListResponseBodyResultData() = default ;
    QueryDataServiceListResponseBodyResultData& operator=(const QueryDataServiceListResponseBodyResultData &) = default ;
    QueryDataServiceListResponseBodyResultData& operator=(QueryDataServiceListResponseBodyResultData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->creatorId_ != nullptr && this->creatorName_ != nullptr && this->cubeId_ != nullptr && this->cubeName_ != nullptr && this->desc_ != nullptr
        && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->modifierId_ != nullptr && this->modifierName_ != nullptr && this->name_ != nullptr
        && this->ownerId_ != nullptr && this->ownerName_ != nullptr && this->sid_ != nullptr && this->workspaceId_ != nullptr && this->workspaceName_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const Models::QueryDataServiceListResponseBodyResultDataContent & content() const { DARABONBA_PTR_GET_CONST(content_, Models::QueryDataServiceListResponseBodyResultDataContent) };
    inline Models::QueryDataServiceListResponseBodyResultDataContent content() { DARABONBA_PTR_GET(content_, Models::QueryDataServiceListResponseBodyResultDataContent) };
    inline QueryDataServiceListResponseBodyResultData& setContent(const Models::QueryDataServiceListResponseBodyResultDataContent & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline QueryDataServiceListResponseBodyResultData& setContent(Models::QueryDataServiceListResponseBodyResultDataContent && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline QueryDataServiceListResponseBodyResultData& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // creatorName Field Functions 
    bool hasCreatorName() const { return this->creatorName_ != nullptr;};
    void deleteCreatorName() { this->creatorName_ = nullptr;};
    inline string creatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
    inline QueryDataServiceListResponseBodyResultData& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


    // cubeId Field Functions 
    bool hasCubeId() const { return this->cubeId_ != nullptr;};
    void deleteCubeId() { this->cubeId_ = nullptr;};
    inline string cubeId() const { DARABONBA_PTR_GET_DEFAULT(cubeId_, "") };
    inline QueryDataServiceListResponseBodyResultData& setCubeId(string cubeId) { DARABONBA_PTR_SET_VALUE(cubeId_, cubeId) };


    // cubeName Field Functions 
    bool hasCubeName() const { return this->cubeName_ != nullptr;};
    void deleteCubeName() { this->cubeName_ = nullptr;};
    inline string cubeName() const { DARABONBA_PTR_GET_DEFAULT(cubeName_, "") };
    inline QueryDataServiceListResponseBodyResultData& setCubeName(string cubeName) { DARABONBA_PTR_SET_VALUE(cubeName_, cubeName) };


    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline QueryDataServiceListResponseBodyResultData& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline QueryDataServiceListResponseBodyResultData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline QueryDataServiceListResponseBodyResultData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // modifierId Field Functions 
    bool hasModifierId() const { return this->modifierId_ != nullptr;};
    void deleteModifierId() { this->modifierId_ = nullptr;};
    inline string modifierId() const { DARABONBA_PTR_GET_DEFAULT(modifierId_, "") };
    inline QueryDataServiceListResponseBodyResultData& setModifierId(string modifierId) { DARABONBA_PTR_SET_VALUE(modifierId_, modifierId) };


    // modifierName Field Functions 
    bool hasModifierName() const { return this->modifierName_ != nullptr;};
    void deleteModifierName() { this->modifierName_ = nullptr;};
    inline string modifierName() const { DARABONBA_PTR_GET_DEFAULT(modifierName_, "") };
    inline QueryDataServiceListResponseBodyResultData& setModifierName(string modifierName) { DARABONBA_PTR_SET_VALUE(modifierName_, modifierName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline QueryDataServiceListResponseBodyResultData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline QueryDataServiceListResponseBodyResultData& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // ownerName Field Functions 
    bool hasOwnerName() const { return this->ownerName_ != nullptr;};
    void deleteOwnerName() { this->ownerName_ = nullptr;};
    inline string ownerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
    inline QueryDataServiceListResponseBodyResultData& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


    // sid Field Functions 
    bool hasSid() const { return this->sid_ != nullptr;};
    void deleteSid() { this->sid_ = nullptr;};
    inline string sid() const { DARABONBA_PTR_GET_DEFAULT(sid_, "") };
    inline QueryDataServiceListResponseBodyResultData& setSid(string sid) { DARABONBA_PTR_SET_VALUE(sid_, sid) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline QueryDataServiceListResponseBodyResultData& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string workspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline QueryDataServiceListResponseBodyResultData& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


  protected:
    // The model of the data service in JSON format.
    std::shared_ptr<Models::QueryDataServiceListResponseBodyResultDataContent> content_ = nullptr;
    // Creator ID.
    std::shared_ptr<string> creatorId_ = nullptr;
    // Creator\\"s name.
    std::shared_ptr<string> creatorName_ = nullptr;
    // Cube identifier ID.
    std::shared_ptr<string> cubeId_ = nullptr;
    // Dataset name.
    std::shared_ptr<string> cubeName_ = nullptr;
    // Description
    std::shared_ptr<string> desc_ = nullptr;
    // Creation time.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // Modification time.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // Modifier\\"s userId.
    std::shared_ptr<string> modifierId_ = nullptr;
    // Modifier\\"s name
    std::shared_ptr<string> modifierName_ = nullptr;
    // Data service name.
    std::shared_ptr<string> name_ = nullptr;
    // Owner ID
    std::shared_ptr<string> ownerId_ = nullptr;
    // Owner\\"s name
    std::shared_ptr<string> ownerName_ = nullptr;
    // Unique ID of the data service.
    std::shared_ptr<string> sid_ = nullptr;
    // Workspace ID.
    std::shared_ptr<string> workspaceId_ = nullptr;
    // Workspace name.
    std::shared_ptr<string> workspaceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
