// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLHSPACEBYNAMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLHSPACEBYNAMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetLhSpaceByNameResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLhSpaceByNameResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(LakehouseSpace, lakehouseSpace_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetLhSpaceByNameResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(LakehouseSpace, lakehouseSpace_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetLhSpaceByNameResponseBody() = default ;
    GetLhSpaceByNameResponseBody(const GetLhSpaceByNameResponseBody &) = default ;
    GetLhSpaceByNameResponseBody(GetLhSpaceByNameResponseBody &&) = default ;
    GetLhSpaceByNameResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLhSpaceByNameResponseBody() = default ;
    GetLhSpaceByNameResponseBody& operator=(const GetLhSpaceByNameResponseBody &) = default ;
    GetLhSpaceByNameResponseBody& operator=(GetLhSpaceByNameResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LakehouseSpace : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LakehouseSpace& obj) { 
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
      friend void from_json(const Darabonba::Json& j, LakehouseSpace& obj) { 
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
      LakehouseSpace() = default ;
      LakehouseSpace(const LakehouseSpace &) = default ;
      LakehouseSpace(LakehouseSpace &&) = default ;
      LakehouseSpace(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LakehouseSpace() = default ;
      LakehouseSpace& operator=(const LakehouseSpace &) = default ;
      LakehouseSpace& operator=(LakehouseSpace &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->creatorId_ == nullptr
        && this->description_ == nullptr && this->devDbId_ == nullptr && this->dwDbType_ == nullptr && this->id_ == nullptr && this->isDeleted_ == nullptr
        && this->mode_ == nullptr && this->prodDbId_ == nullptr && this->spaceConfig_ == nullptr && this->spaceName_ == nullptr && this->tenantId_ == nullptr; };
      // creatorId Field Functions 
      bool hasCreatorId() const { return this->creatorId_ != nullptr;};
      void deleteCreatorId() { this->creatorId_ = nullptr;};
      inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
      inline LakehouseSpace& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline LakehouseSpace& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // devDbId Field Functions 
      bool hasDevDbId() const { return this->devDbId_ != nullptr;};
      void deleteDevDbId() { this->devDbId_ = nullptr;};
      inline int32_t getDevDbId() const { DARABONBA_PTR_GET_DEFAULT(devDbId_, 0) };
      inline LakehouseSpace& setDevDbId(int32_t devDbId) { DARABONBA_PTR_SET_VALUE(devDbId_, devDbId) };


      // dwDbType Field Functions 
      bool hasDwDbType() const { return this->dwDbType_ != nullptr;};
      void deleteDwDbType() { this->dwDbType_ = nullptr;};
      inline string getDwDbType() const { DARABONBA_PTR_GET_DEFAULT(dwDbType_, "") };
      inline LakehouseSpace& setDwDbType(string dwDbType) { DARABONBA_PTR_SET_VALUE(dwDbType_, dwDbType) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline LakehouseSpace& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // isDeleted Field Functions 
      bool hasIsDeleted() const { return this->isDeleted_ != nullptr;};
      void deleteIsDeleted() { this->isDeleted_ = nullptr;};
      inline bool getIsDeleted() const { DARABONBA_PTR_GET_DEFAULT(isDeleted_, false) };
      inline LakehouseSpace& setIsDeleted(bool isDeleted) { DARABONBA_PTR_SET_VALUE(isDeleted_, isDeleted) };


      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline int32_t getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, 0) };
      inline LakehouseSpace& setMode(int32_t mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      // prodDbId Field Functions 
      bool hasProdDbId() const { return this->prodDbId_ != nullptr;};
      void deleteProdDbId() { this->prodDbId_ = nullptr;};
      inline int32_t getProdDbId() const { DARABONBA_PTR_GET_DEFAULT(prodDbId_, 0) };
      inline LakehouseSpace& setProdDbId(int32_t prodDbId) { DARABONBA_PTR_SET_VALUE(prodDbId_, prodDbId) };


      // spaceConfig Field Functions 
      bool hasSpaceConfig() const { return this->spaceConfig_ != nullptr;};
      void deleteSpaceConfig() { this->spaceConfig_ = nullptr;};
      inline string getSpaceConfig() const { DARABONBA_PTR_GET_DEFAULT(spaceConfig_, "") };
      inline LakehouseSpace& setSpaceConfig(string spaceConfig) { DARABONBA_PTR_SET_VALUE(spaceConfig_, spaceConfig) };


      // spaceName Field Functions 
      bool hasSpaceName() const { return this->spaceName_ != nullptr;};
      void deleteSpaceName() { this->spaceName_ = nullptr;};
      inline string getSpaceName() const { DARABONBA_PTR_GET_DEFAULT(spaceName_, "") };
      inline LakehouseSpace& setSpaceName(string spaceName) { DARABONBA_PTR_SET_VALUE(spaceName_, spaceName) };


      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline LakehouseSpace& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    protected:
      // The ID of the user who creates the workspace.
      shared_ptr<string> creatorId_ {};
      // The description of the workspace.
      shared_ptr<string> description_ {};
      // The ID of the development database.
      shared_ptr<int32_t> devDbId_ {};
      // The type of the database. Valid values:
      // 
      // *   **14**: AnalyticDB for MySQL
      // *   **18**: AnalyticDB for PostgreSQL
      shared_ptr<string> dwDbType_ {};
      // The ID of the workspace.
      shared_ptr<int64_t> id_ {};
      // Indicates whether the workspace is deleted. Valid values:
      // 
      // *   **true**: The workspace is deleted.
      // *   **false**: The workspace is not deleted.
      shared_ptr<bool> isDeleted_ {};
      // The mode in which the workspace runs. Valid values:
      // 
      // *   **0**: basic mode
      // *   **1**: standard mode
      shared_ptr<int32_t> mode_ {};
      // The ID of the production database.
      shared_ptr<int32_t> prodDbId_ {};
      // The configuration of the workspace. Valid values:
      // 
      // *   **skipManualRunCheck**: No security rule check is required in the trial run phase.
      // *   **skipPublishApprove**: No approval is required for publishing and O\\&M.
      shared_ptr<string> spaceConfig_ {};
      // The name of the workspace.
      shared_ptr<string> spaceName_ {};
      // The ID of the tenant to which the workspace belongs.
      shared_ptr<string> tenantId_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->lakehouseSpace_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetLhSpaceByNameResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetLhSpaceByNameResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // lakehouseSpace Field Functions 
    bool hasLakehouseSpace() const { return this->lakehouseSpace_ != nullptr;};
    void deleteLakehouseSpace() { this->lakehouseSpace_ = nullptr;};
    inline const GetLhSpaceByNameResponseBody::LakehouseSpace & getLakehouseSpace() const { DARABONBA_PTR_GET_CONST(lakehouseSpace_, GetLhSpaceByNameResponseBody::LakehouseSpace) };
    inline GetLhSpaceByNameResponseBody::LakehouseSpace getLakehouseSpace() { DARABONBA_PTR_GET(lakehouseSpace_, GetLhSpaceByNameResponseBody::LakehouseSpace) };
    inline GetLhSpaceByNameResponseBody& setLakehouseSpace(const GetLhSpaceByNameResponseBody::LakehouseSpace & lakehouseSpace) { DARABONBA_PTR_SET_VALUE(lakehouseSpace_, lakehouseSpace) };
    inline GetLhSpaceByNameResponseBody& setLakehouseSpace(GetLhSpaceByNameResponseBody::LakehouseSpace && lakehouseSpace) { DARABONBA_PTR_SET_RVALUE(lakehouseSpace_, lakehouseSpace) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLhSpaceByNameResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetLhSpaceByNameResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned if the request fails.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request fails.
    shared_ptr<string> errorMessage_ {};
    // The workspace for data warehouse development.
    shared_ptr<GetLhSpaceByNameResponseBody::LakehouseSpace> lakehouseSpace_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // *   **true**: The request is successful.
    // *   **false**: The request fails.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
