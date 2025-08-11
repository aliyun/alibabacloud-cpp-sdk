// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYREADABLERESOURCESLISTBYUSERIDV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYREADABLERESOURCESLISTBYUSERIDV2REQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryReadableResourcesListByUserIdV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryReadableResourcesListByUserIdV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(WorkType, workType_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryReadableResourcesListByUserIdV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(WorkType, workType_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    QueryReadableResourcesListByUserIdV2Request() = default ;
    QueryReadableResourcesListByUserIdV2Request(const QueryReadableResourcesListByUserIdV2Request &) = default ;
    QueryReadableResourcesListByUserIdV2Request(QueryReadableResourcesListByUserIdV2Request &&) = default ;
    QueryReadableResourcesListByUserIdV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryReadableResourcesListByUserIdV2Request() = default ;
    QueryReadableResourcesListByUserIdV2Request& operator=(const QueryReadableResourcesListByUserIdV2Request &) = default ;
    QueryReadableResourcesListByUserIdV2Request& operator=(QueryReadableResourcesListByUserIdV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->userId_ != nullptr
        && this->workType_ != nullptr && this->workspaceId_ != nullptr; };
    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline QueryReadableResourcesListByUserIdV2Request& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // workType Field Functions 
    bool hasWorkType() const { return this->workType_ != nullptr;};
    void deleteWorkType() { this->workType_ = nullptr;};
    inline string workType() const { DARABONBA_PTR_GET_DEFAULT(workType_, "") };
    inline QueryReadableResourcesListByUserIdV2Request& setWorkType(string workType) { DARABONBA_PTR_SET_VALUE(workType_, workType) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline QueryReadableResourcesListByUserIdV2Request& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // User ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
    // Work type. Possible values:
    // - DATAPRODUCT: Data Portal
    // - PAGE: Dashboard
    // - REPORT: Spreadsheet
    // - dashboardOfflineQuery: Self-service Data Extraction
    // - SCREEN: Data Wall
    // - DATAFORM: Data Entry
    // - ANALYSIS: Ad-hoc Analysis
    std::shared_ptr<string> workType_ = nullptr;
    // Workspace ID.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
