// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELAKEHOUSESPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELAKEHOUSESPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateLakeHouseSpaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLakeHouseSpaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DevDbId, devDbId_);
      DARABONBA_PTR_TO_JSON(DwDbType, dwDbType_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(ProdDbId, prodDbId_);
      DARABONBA_PTR_TO_JSON(SpaceConfig, spaceConfig_);
      DARABONBA_PTR_TO_JSON(SpaceName, spaceName_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLakeHouseSpaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DevDbId, devDbId_);
      DARABONBA_PTR_FROM_JSON(DwDbType, dwDbType_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(ProdDbId, prodDbId_);
      DARABONBA_PTR_FROM_JSON(SpaceConfig, spaceConfig_);
      DARABONBA_PTR_FROM_JSON(SpaceName, spaceName_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    CreateLakeHouseSpaceRequest() = default ;
    CreateLakeHouseSpaceRequest(const CreateLakeHouseSpaceRequest &) = default ;
    CreateLakeHouseSpaceRequest(CreateLakeHouseSpaceRequest &&) = default ;
    CreateLakeHouseSpaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLakeHouseSpaceRequest() = default ;
    CreateLakeHouseSpaceRequest& operator=(const CreateLakeHouseSpaceRequest &) = default ;
    CreateLakeHouseSpaceRequest& operator=(CreateLakeHouseSpaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->devDbId_ == nullptr && return this->dwDbType_ == nullptr && return this->mode_ == nullptr && return this->prodDbId_ == nullptr && return this->spaceConfig_ == nullptr
        && return this->spaceName_ == nullptr && return this->tid_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateLakeHouseSpaceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // devDbId Field Functions 
    bool hasDevDbId() const { return this->devDbId_ != nullptr;};
    void deleteDevDbId() { this->devDbId_ = nullptr;};
    inline string devDbId() const { DARABONBA_PTR_GET_DEFAULT(devDbId_, "") };
    inline CreateLakeHouseSpaceRequest& setDevDbId(string devDbId) { DARABONBA_PTR_SET_VALUE(devDbId_, devDbId) };


    // dwDbType Field Functions 
    bool hasDwDbType() const { return this->dwDbType_ != nullptr;};
    void deleteDwDbType() { this->dwDbType_ = nullptr;};
    inline string dwDbType() const { DARABONBA_PTR_GET_DEFAULT(dwDbType_, "") };
    inline CreateLakeHouseSpaceRequest& setDwDbType(string dwDbType) { DARABONBA_PTR_SET_VALUE(dwDbType_, dwDbType) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline CreateLakeHouseSpaceRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // prodDbId Field Functions 
    bool hasProdDbId() const { return this->prodDbId_ != nullptr;};
    void deleteProdDbId() { this->prodDbId_ = nullptr;};
    inline string prodDbId() const { DARABONBA_PTR_GET_DEFAULT(prodDbId_, "") };
    inline CreateLakeHouseSpaceRequest& setProdDbId(string prodDbId) { DARABONBA_PTR_SET_VALUE(prodDbId_, prodDbId) };


    // spaceConfig Field Functions 
    bool hasSpaceConfig() const { return this->spaceConfig_ != nullptr;};
    void deleteSpaceConfig() { this->spaceConfig_ = nullptr;};
    inline string spaceConfig() const { DARABONBA_PTR_GET_DEFAULT(spaceConfig_, "") };
    inline CreateLakeHouseSpaceRequest& setSpaceConfig(string spaceConfig) { DARABONBA_PTR_SET_VALUE(spaceConfig_, spaceConfig) };


    // spaceName Field Functions 
    bool hasSpaceName() const { return this->spaceName_ != nullptr;};
    void deleteSpaceName() { this->spaceName_ = nullptr;};
    inline string spaceName() const { DARABONBA_PTR_GET_DEFAULT(spaceName_, "") };
    inline CreateLakeHouseSpaceRequest& setSpaceName(string spaceName) { DARABONBA_PTR_SET_VALUE(spaceName_, spaceName) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline CreateLakeHouseSpaceRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The description of the workspace.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the development database. You can call the [ListDatabases](https://help.aliyun.com/document_detail/141873.html) or [SearchDatabase](https://help.aliyun.com/document_detail/141876.html) operation to obtain the ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> devDbId_ = nullptr;
    // The type of the database. Valid values:
    // 
    // *   **14**: AnalyticDB for MySQL
    // *   **18**: AnalyticDB for PostgreSQL
    // 
    // This parameter is required.
    std::shared_ptr<string> dwDbType_ = nullptr;
    // The mode in which the workspace runs. Valid values:
    // 
    // *   **0**: basic mode. This mode is unavailable.
    // *   **1**: standard mode.
    // 
    // This parameter is required.
    std::shared_ptr<string> mode_ = nullptr;
    // The ID of the production database. You can call the [ListDatabases](https://help.aliyun.com/document_detail/141873.html) or [SearchDatabase](https://help.aliyun.com/document_detail/141876.html) operation to obtain the ID.
    std::shared_ptr<string> prodDbId_ = nullptr;
    // The configuration of the workspace. Valid values:
    // 
    // *   **skipManualRunCheck**: No security rule check is required in the trial run phase.
    // *   **skipPublishApprove**: No approval is required for publishing and O\\&M.
    // 
    // This parameter is required.
    std::shared_ptr<string> spaceConfig_ = nullptr;
    // The name of the workspace.
    // 
    // This parameter is required.
    std::shared_ptr<string> spaceName_ = nullptr;
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) or [ListUserTenants](https://help.aliyun.com/document_detail/198074.html) operation to obtain the tenant ID.
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
