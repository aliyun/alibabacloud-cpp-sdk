// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class GetInstanceJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceJobId, instanceJobId_);
      DARABONBA_PTR_TO_JSON(ReasonMessage, reasonMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceJobId, instanceJobId_);
      DARABONBA_PTR_FROM_JSON(ReasonMessage, reasonMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetInstanceJobResponseBody() = default ;
    GetInstanceJobResponseBody(const GetInstanceJobResponseBody &) = default ;
    GetInstanceJobResponseBody(GetInstanceJobResponseBody &&) = default ;
    GetInstanceJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceJobResponseBody() = default ;
    GetInstanceJobResponseBody& operator=(const GetInstanceJobResponseBody &) = default ;
    GetInstanceJobResponseBody& operator=(GetInstanceJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gmtCreateTime_ == nullptr
        && this->instanceId_ == nullptr && this->instanceJobId_ == nullptr && this->reasonMessage_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr
        && this->type_ == nullptr; };
    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline GetInstanceJobResponseBody& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetInstanceJobResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceJobId Field Functions 
    bool hasInstanceJobId() const { return this->instanceJobId_ != nullptr;};
    void deleteInstanceJobId() { this->instanceJobId_ = nullptr;};
    inline string getInstanceJobId() const { DARABONBA_PTR_GET_DEFAULT(instanceJobId_, "") };
    inline GetInstanceJobResponseBody& setInstanceJobId(string instanceJobId) { DARABONBA_PTR_SET_VALUE(instanceJobId_, instanceJobId) };


    // reasonMessage Field Functions 
    bool hasReasonMessage() const { return this->reasonMessage_ != nullptr;};
    void deleteReasonMessage() { this->reasonMessage_ = nullptr;};
    inline string getReasonMessage() const { DARABONBA_PTR_GET_DEFAULT(reasonMessage_, "") };
    inline GetInstanceJobResponseBody& setReasonMessage(string reasonMessage) { DARABONBA_PTR_SET_VALUE(reasonMessage_, reasonMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetInstanceJobResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetInstanceJobResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The creation time in UTC, in ISO 8601 format.
    shared_ptr<string> gmtCreateTime_ {};
    // The instance ID. For example, if a job creates a custom role, this parameter returns the corresponding role ID.
    shared_ptr<string> instanceId_ {};
    // The job ID.
    shared_ptr<string> instanceJobId_ {};
    // A message providing details about the job.
    shared_ptr<string> reasonMessage_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The status of the job. Valid values:
    // 
    // - Creating: The job is being created.
    // 
    // - Updating: The job is being updated.
    // 
    // - Deleting: The job is being deleted.
    // 
    // - Successful: The job completed successfully (a final state).
    // 
    // - Failed: The job failed (a final state).
    shared_ptr<string> status_ {};
    // The job type. Valid values:
    // 
    // - CreateWorkspaceCustomRole
    // 
    // - UpdateWorkspaceCustomRole
    // 
    // - DeleteWorkspaceCustomRole
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
