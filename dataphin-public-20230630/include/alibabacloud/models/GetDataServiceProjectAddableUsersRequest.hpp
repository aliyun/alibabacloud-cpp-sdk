// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASERVICEPROJECTADDABLEUSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDATASERVICEPROJECTADDABLEUSERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetDataServiceProjectAddableUsersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataServiceProjectAddableUsersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataServiceProjectAddableUsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    GetDataServiceProjectAddableUsersRequest() = default ;
    GetDataServiceProjectAddableUsersRequest(const GetDataServiceProjectAddableUsersRequest &) = default ;
    GetDataServiceProjectAddableUsersRequest(GetDataServiceProjectAddableUsersRequest &&) = default ;
    GetDataServiceProjectAddableUsersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataServiceProjectAddableUsersRequest() = default ;
    GetDataServiceProjectAddableUsersRequest& operator=(const GetDataServiceProjectAddableUsersRequest &) = default ;
    GetDataServiceProjectAddableUsersRequest& operator=(GetDataServiceProjectAddableUsersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && return this->projectId_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetDataServiceProjectAddableUsersRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int32_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0) };
    inline GetDataServiceProjectAddableUsersRequest& setProjectId(int32_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
