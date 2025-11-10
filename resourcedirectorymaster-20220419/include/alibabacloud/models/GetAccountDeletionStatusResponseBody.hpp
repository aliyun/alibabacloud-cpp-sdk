// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCOUNTDELETIONSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETACCOUNTDELETIONSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAccountDeletionStatusResponseBodyRdAccountDeletionStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class GetAccountDeletionStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccountDeletionStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RdAccountDeletionStatus, rdAccountDeletionStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccountDeletionStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RdAccountDeletionStatus, rdAccountDeletionStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAccountDeletionStatusResponseBody() = default ;
    GetAccountDeletionStatusResponseBody(const GetAccountDeletionStatusResponseBody &) = default ;
    GetAccountDeletionStatusResponseBody(GetAccountDeletionStatusResponseBody &&) = default ;
    GetAccountDeletionStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccountDeletionStatusResponseBody() = default ;
    GetAccountDeletionStatusResponseBody& operator=(const GetAccountDeletionStatusResponseBody &) = default ;
    GetAccountDeletionStatusResponseBody& operator=(GetAccountDeletionStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->rdAccountDeletionStatus_ == nullptr
        && return this->requestId_ == nullptr; };
    // rdAccountDeletionStatus Field Functions 
    bool hasRdAccountDeletionStatus() const { return this->rdAccountDeletionStatus_ != nullptr;};
    void deleteRdAccountDeletionStatus() { this->rdAccountDeletionStatus_ = nullptr;};
    inline const GetAccountDeletionStatusResponseBodyRdAccountDeletionStatus & rdAccountDeletionStatus() const { DARABONBA_PTR_GET_CONST(rdAccountDeletionStatus_, GetAccountDeletionStatusResponseBodyRdAccountDeletionStatus) };
    inline GetAccountDeletionStatusResponseBodyRdAccountDeletionStatus rdAccountDeletionStatus() { DARABONBA_PTR_GET(rdAccountDeletionStatus_, GetAccountDeletionStatusResponseBodyRdAccountDeletionStatus) };
    inline GetAccountDeletionStatusResponseBody& setRdAccountDeletionStatus(const GetAccountDeletionStatusResponseBodyRdAccountDeletionStatus & rdAccountDeletionStatus) { DARABONBA_PTR_SET_VALUE(rdAccountDeletionStatus_, rdAccountDeletionStatus) };
    inline GetAccountDeletionStatusResponseBody& setRdAccountDeletionStatus(GetAccountDeletionStatusResponseBodyRdAccountDeletionStatus && rdAccountDeletionStatus) { DARABONBA_PTR_SET_RVALUE(rdAccountDeletionStatus_, rdAccountDeletionStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAccountDeletionStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The deletion status of the member.
    std::shared_ptr<GetAccountDeletionStatusResponseBodyRdAccountDeletionStatus> rdAccountDeletionStatus_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
