// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECUBEBYSQLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECUBEBYSQLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class UpdateCubeBySqlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCubeBySqlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CubeId, cubeId_);
      DARABONBA_PTR_TO_JSON(CustomSql, customSql_);
      DARABONBA_PTR_TO_JSON(DsId, dsId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCubeBySqlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CubeId, cubeId_);
      DARABONBA_PTR_FROM_JSON(CustomSql, customSql_);
      DARABONBA_PTR_FROM_JSON(DsId, dsId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UpdateCubeBySqlRequest() = default ;
    UpdateCubeBySqlRequest(const UpdateCubeBySqlRequest &) = default ;
    UpdateCubeBySqlRequest(UpdateCubeBySqlRequest &&) = default ;
    UpdateCubeBySqlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCubeBySqlRequest() = default ;
    UpdateCubeBySqlRequest& operator=(const UpdateCubeBySqlRequest &) = default ;
    UpdateCubeBySqlRequest& operator=(UpdateCubeBySqlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cubeId_ != nullptr
        && this->customSql_ != nullptr && this->dsId_ != nullptr && this->userId_ != nullptr && this->workspaceId_ != nullptr; };
    // cubeId Field Functions 
    bool hasCubeId() const { return this->cubeId_ != nullptr;};
    void deleteCubeId() { this->cubeId_ = nullptr;};
    inline string cubeId() const { DARABONBA_PTR_GET_DEFAULT(cubeId_, "") };
    inline UpdateCubeBySqlRequest& setCubeId(string cubeId) { DARABONBA_PTR_SET_VALUE(cubeId_, cubeId) };


    // customSql Field Functions 
    bool hasCustomSql() const { return this->customSql_ != nullptr;};
    void deleteCustomSql() { this->customSql_ = nullptr;};
    inline string customSql() const { DARABONBA_PTR_GET_DEFAULT(customSql_, "") };
    inline UpdateCubeBySqlRequest& setCustomSql(string customSql) { DARABONBA_PTR_SET_VALUE(customSql_, customSql) };


    // dsId Field Functions 
    bool hasDsId() const { return this->dsId_ != nullptr;};
    void deleteDsId() { this->dsId_ = nullptr;};
    inline string dsId() const { DARABONBA_PTR_GET_DEFAULT(dsId_, "") };
    inline UpdateCubeBySqlRequest& setDsId(string dsId) { DARABONBA_PTR_SET_VALUE(dsId_, dsId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline UpdateCubeBySqlRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateCubeBySqlRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> cubeId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> customSql_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> dsId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
