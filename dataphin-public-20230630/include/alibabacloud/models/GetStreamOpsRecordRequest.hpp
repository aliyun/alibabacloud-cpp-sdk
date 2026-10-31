// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTREAMOPSRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSTREAMOPSRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetStreamOpsRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStreamOpsRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_TO_JSON(OpsRecordId, opsRecordId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, GetStreamOpsRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_FROM_JSON(OpsRecordId, opsRecordId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    GetStreamOpsRecordRequest() = default ;
    GetStreamOpsRecordRequest(const GetStreamOpsRecordRequest &) = default ;
    GetStreamOpsRecordRequest(GetStreamOpsRecordRequest &&) = default ;
    GetStreamOpsRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStreamOpsRecordRequest() = default ;
    GetStreamOpsRecordRequest& operator=(const GetStreamOpsRecordRequest &) = default ;
    GetStreamOpsRecordRequest& operator=(GetStreamOpsRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->opUserId_ == nullptr && this->opsRecordId_ == nullptr && this->projectId_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetStreamOpsRecordRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline GetStreamOpsRecordRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


    // opsRecordId Field Functions 
    bool hasOpsRecordId() const { return this->opsRecordId_ != nullptr;};
    void deleteOpsRecordId() { this->opsRecordId_ = nullptr;};
    inline string getOpsRecordId() const { DARABONBA_PTR_GET_DEFAULT(opsRecordId_, "") };
    inline GetStreamOpsRecordRequest& setOpsRecordId(string opsRecordId) { DARABONBA_PTR_SET_VALUE(opsRecordId_, opsRecordId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetStreamOpsRecordRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The ID of the operator.
    shared_ptr<string> opUserId_ {};
    // The ID of the operation record. Set this parameter to the opsRecordId value returned by the ListStreamOpsRecords operation.
    // 
    // This parameter is required.
    shared_ptr<string> opsRecordId_ {};
    // The ID of the Dataphin project to which the task belongs. This parameter is used for permission verification in the production environment.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
