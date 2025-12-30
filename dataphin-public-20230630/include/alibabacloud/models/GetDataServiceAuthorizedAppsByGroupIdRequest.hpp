// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASERVICEAUTHORIZEDAPPSBYGROUPIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDATASERVICEAUTHORIZEDAPPSBYGROUPIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetDataServiceAuthorizedAppsByGroupIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataServiceAuthorizedAppsByGroupIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataServiceAuthorizedAppsByGroupIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    GetDataServiceAuthorizedAppsByGroupIdRequest() = default ;
    GetDataServiceAuthorizedAppsByGroupIdRequest(const GetDataServiceAuthorizedAppsByGroupIdRequest &) = default ;
    GetDataServiceAuthorizedAppsByGroupIdRequest(GetDataServiceAuthorizedAppsByGroupIdRequest &&) = default ;
    GetDataServiceAuthorizedAppsByGroupIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataServiceAuthorizedAppsByGroupIdRequest() = default ;
    GetDataServiceAuthorizedAppsByGroupIdRequest& operator=(const GetDataServiceAuthorizedAppsByGroupIdRequest &) = default ;
    GetDataServiceAuthorizedAppsByGroupIdRequest& operator=(GetDataServiceAuthorizedAppsByGroupIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupId_ == nullptr
        && this->opTenantId_ == nullptr && this->projectId_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int32_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0) };
    inline GetDataServiceAuthorizedAppsByGroupIdRequest& setGroupId(int32_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetDataServiceAuthorizedAppsByGroupIdRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int32_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0) };
    inline GetDataServiceAuthorizedAppsByGroupIdRequest& setProjectId(int32_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // This parameter is required.
    shared_ptr<int32_t> groupId_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<int32_t> projectId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
