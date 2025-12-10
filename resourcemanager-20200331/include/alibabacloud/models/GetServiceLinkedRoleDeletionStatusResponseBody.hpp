// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICELINKEDROLEDELETIONSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICELINKEDROLEDELETIONSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetServiceLinkedRoleDeletionStatusResponseBodyReason.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class GetServiceLinkedRoleDeletionStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceLinkedRoleDeletionStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceLinkedRoleDeletionStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetServiceLinkedRoleDeletionStatusResponseBody() = default ;
    GetServiceLinkedRoleDeletionStatusResponseBody(const GetServiceLinkedRoleDeletionStatusResponseBody &) = default ;
    GetServiceLinkedRoleDeletionStatusResponseBody(GetServiceLinkedRoleDeletionStatusResponseBody &&) = default ;
    GetServiceLinkedRoleDeletionStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceLinkedRoleDeletionStatusResponseBody() = default ;
    GetServiceLinkedRoleDeletionStatusResponseBody& operator=(const GetServiceLinkedRoleDeletionStatusResponseBody &) = default ;
    GetServiceLinkedRoleDeletionStatusResponseBody& operator=(GetServiceLinkedRoleDeletionStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->reason_ == nullptr
        && return this->requestId_ == nullptr && return this->status_ == nullptr; };
    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline const GetServiceLinkedRoleDeletionStatusResponseBodyReason & reason() const { DARABONBA_PTR_GET_CONST(reason_, GetServiceLinkedRoleDeletionStatusResponseBodyReason) };
    inline GetServiceLinkedRoleDeletionStatusResponseBodyReason reason() { DARABONBA_PTR_GET(reason_, GetServiceLinkedRoleDeletionStatusResponseBodyReason) };
    inline GetServiceLinkedRoleDeletionStatusResponseBody& setReason(const GetServiceLinkedRoleDeletionStatusResponseBodyReason & reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };
    inline GetServiceLinkedRoleDeletionStatusResponseBody& setReason(GetServiceLinkedRoleDeletionStatusResponseBodyReason && reason) { DARABONBA_PTR_SET_RVALUE(reason_, reason) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetServiceLinkedRoleDeletionStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetServiceLinkedRoleDeletionStatusResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The cause for the failure of the deletion task.
    std::shared_ptr<GetServiceLinkedRoleDeletionStatusResponseBodyReason> reason_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The status of the task.
    // 
    // *   SUCCEEDED
    // *   IN_PROGRESS
    // *   FAILED
    // *   NOT_STARTED
    // *   INTERNAL_ERROR
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
