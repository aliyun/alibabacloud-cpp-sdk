// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLHSPACEBYNAMERESPONSEBODYLAKEHOUSESPACE_HPP_
#define ALIBABACLOUD_MODELS_GETLHSPACEBYNAMERESPONSEBODYLAKEHOUSESPACE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetLhSpaceByNameResponseBodyLakehouseSpace : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLhSpaceByNameResponseBodyLakehouseSpace& obj) { 
      DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DevDbId, devDbId_);
      DARABONBA_PTR_TO_JSON(DwDbType, dwDbType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IsDeleted, isDeleted_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(ProdDbId, prodDbId_);
      DARABONBA_PTR_TO_JSON(SpaceConfig, spaceConfig_);
      DARABONBA_PTR_TO_JSON(SpaceName, spaceName_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLhSpaceByNameResponseBodyLakehouseSpace& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DevDbId, devDbId_);
      DARABONBA_PTR_FROM_JSON(DwDbType, dwDbType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IsDeleted, isDeleted_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(ProdDbId, prodDbId_);
      DARABONBA_PTR_FROM_JSON(SpaceConfig, spaceConfig_);
      DARABONBA_PTR_FROM_JSON(SpaceName, spaceName_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    GetLhSpaceByNameResponseBodyLakehouseSpace() = default ;
    GetLhSpaceByNameResponseBodyLakehouseSpace(const GetLhSpaceByNameResponseBodyLakehouseSpace &) = default ;
    GetLhSpaceByNameResponseBodyLakehouseSpace(GetLhSpaceByNameResponseBodyLakehouseSpace &&) = default ;
    GetLhSpaceByNameResponseBodyLakehouseSpace(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLhSpaceByNameResponseBodyLakehouseSpace() = default ;
    GetLhSpaceByNameResponseBodyLakehouseSpace& operator=(const GetLhSpaceByNameResponseBodyLakehouseSpace &) = default ;
    GetLhSpaceByNameResponseBodyLakehouseSpace& operator=(GetLhSpaceByNameResponseBodyLakehouseSpace &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creatorId_ == nullptr
        && return this->description_ == nullptr && return this->devDbId_ == nullptr && return this->dwDbType_ == nullptr && return this->id_ == nullptr && return this->isDeleted_ == nullptr
        && return this->mode_ == nullptr && return this->prodDbId_ == nullptr && return this->spaceConfig_ == nullptr && return this->spaceName_ == nullptr && return this->tenantId_ == nullptr; };
    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline GetLhSpaceByNameResponseBodyLakehouseSpace& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetLhSpaceByNameResponseBodyLakehouseSpace& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // devDbId Field Functions 
    bool hasDevDbId() const { return this->devDbId_ != nullptr;};
    void deleteDevDbId() { this->devDbId_ = nullptr;};
    inline int32_t devDbId() const { DARABONBA_PTR_GET_DEFAULT(devDbId_, 0) };
    inline GetLhSpaceByNameResponseBodyLakehouseSpace& setDevDbId(int32_t devDbId) { DARABONBA_PTR_SET_VALUE(devDbId_, devDbId) };


    // dwDbType Field Functions 
    bool hasDwDbType() const { return this->dwDbType_ != nullptr;};
    void deleteDwDbType() { this->dwDbType_ = nullptr;};
    inline string dwDbType() const { DARABONBA_PTR_GET_DEFAULT(dwDbType_, "") };
    inline GetLhSpaceByNameResponseBodyLakehouseSpace& setDwDbType(string dwDbType) { DARABONBA_PTR_SET_VALUE(dwDbType_, dwDbType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetLhSpaceByNameResponseBodyLakehouseSpace& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isDeleted Field Functions 
    bool hasIsDeleted() const { return this->isDeleted_ != nullptr;};
    void deleteIsDeleted() { this->isDeleted_ = nullptr;};
    inline bool isDeleted() const { DARABONBA_PTR_GET_DEFAULT(isDeleted_, false) };
    inline GetLhSpaceByNameResponseBodyLakehouseSpace& setIsDeleted(bool isDeleted) { DARABONBA_PTR_SET_VALUE(isDeleted_, isDeleted) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline int32_t mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, 0) };
    inline GetLhSpaceByNameResponseBodyLakehouseSpace& setMode(int32_t mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // prodDbId Field Functions 
    bool hasProdDbId() const { return this->prodDbId_ != nullptr;};
    void deleteProdDbId() { this->prodDbId_ = nullptr;};
    inline int32_t prodDbId() const { DARABONBA_PTR_GET_DEFAULT(prodDbId_, 0) };
    inline GetLhSpaceByNameResponseBodyLakehouseSpace& setProdDbId(int32_t prodDbId) { DARABONBA_PTR_SET_VALUE(prodDbId_, prodDbId) };


    // spaceConfig Field Functions 
    bool hasSpaceConfig() const { return this->spaceConfig_ != nullptr;};
    void deleteSpaceConfig() { this->spaceConfig_ = nullptr;};
    inline string spaceConfig() const { DARABONBA_PTR_GET_DEFAULT(spaceConfig_, "") };
    inline GetLhSpaceByNameResponseBodyLakehouseSpace& setSpaceConfig(string spaceConfig) { DARABONBA_PTR_SET_VALUE(spaceConfig_, spaceConfig) };


    // spaceName Field Functions 
    bool hasSpaceName() const { return this->spaceName_ != nullptr;};
    void deleteSpaceName() { this->spaceName_ = nullptr;};
    inline string spaceName() const { DARABONBA_PTR_GET_DEFAULT(spaceName_, "") };
    inline GetLhSpaceByNameResponseBodyLakehouseSpace& setSpaceName(string spaceName) { DARABONBA_PTR_SET_VALUE(spaceName_, spaceName) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetLhSpaceByNameResponseBodyLakehouseSpace& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The ID of the user who creates the workspace.
    std::shared_ptr<string> creatorId_ = nullptr;
    // The description of the workspace.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the development database.
    std::shared_ptr<int32_t> devDbId_ = nullptr;
    // The type of the database. Valid values:
    // 
    // *   **14**: AnalyticDB for MySQL
    // *   **18**: AnalyticDB for PostgreSQL
    std::shared_ptr<string> dwDbType_ = nullptr;
    // The ID of the workspace.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Indicates whether the workspace is deleted. Valid values:
    // 
    // *   **true**: The workspace is deleted.
    // *   **false**: The workspace is not deleted.
    std::shared_ptr<bool> isDeleted_ = nullptr;
    // The mode in which the workspace runs. Valid values:
    // 
    // *   **0**: basic mode
    // *   **1**: standard mode
    std::shared_ptr<int32_t> mode_ = nullptr;
    // The ID of the production database.
    std::shared_ptr<int32_t> prodDbId_ = nullptr;
    // The configuration of the workspace. Valid values:
    // 
    // *   **skipManualRunCheck**: No security rule check is required in the trial run phase.
    // *   **skipPublishApprove**: No approval is required for publishing and O\\&M.
    std::shared_ptr<string> spaceConfig_ = nullptr;
    // The name of the workspace.
    std::shared_ptr<string> spaceName_ = nullptr;
    // The ID of the tenant to which the workspace belongs.
    std::shared_ptr<string> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
