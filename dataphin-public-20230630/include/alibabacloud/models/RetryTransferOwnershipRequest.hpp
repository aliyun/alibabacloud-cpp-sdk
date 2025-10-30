// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RETRYTRANSFEROWNERSHIPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RETRYTRANSFEROWNERSHIPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RetryTransferOwnershipRequestPrivilegeTransferRecord.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class RetryTransferOwnershipRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RetryTransferOwnershipRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(PrivilegeTransferRecord, privilegeTransferRecord_);
    };
    friend void from_json(const Darabonba::Json& j, RetryTransferOwnershipRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(PrivilegeTransferRecord, privilegeTransferRecord_);
    };
    RetryTransferOwnershipRequest() = default ;
    RetryTransferOwnershipRequest(const RetryTransferOwnershipRequest &) = default ;
    RetryTransferOwnershipRequest(RetryTransferOwnershipRequest &&) = default ;
    RetryTransferOwnershipRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RetryTransferOwnershipRequest() = default ;
    RetryTransferOwnershipRequest& operator=(const RetryTransferOwnershipRequest &) = default ;
    RetryTransferOwnershipRequest& operator=(RetryTransferOwnershipRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && return this->privilegeTransferRecord_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline RetryTransferOwnershipRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // privilegeTransferRecord Field Functions 
    bool hasPrivilegeTransferRecord() const { return this->privilegeTransferRecord_ != nullptr;};
    void deletePrivilegeTransferRecord() { this->privilegeTransferRecord_ = nullptr;};
    inline const RetryTransferOwnershipRequestPrivilegeTransferRecord & privilegeTransferRecord() const { DARABONBA_PTR_GET_CONST(privilegeTransferRecord_, RetryTransferOwnershipRequestPrivilegeTransferRecord) };
    inline RetryTransferOwnershipRequestPrivilegeTransferRecord privilegeTransferRecord() { DARABONBA_PTR_GET(privilegeTransferRecord_, RetryTransferOwnershipRequestPrivilegeTransferRecord) };
    inline RetryTransferOwnershipRequest& setPrivilegeTransferRecord(const RetryTransferOwnershipRequestPrivilegeTransferRecord & privilegeTransferRecord) { DARABONBA_PTR_SET_VALUE(privilegeTransferRecord_, privilegeTransferRecord) };
    inline RetryTransferOwnershipRequest& setPrivilegeTransferRecord(RetryTransferOwnershipRequestPrivilegeTransferRecord && privilegeTransferRecord) { DARABONBA_PTR_SET_RVALUE(privilegeTransferRecord_, privilegeTransferRecord) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    std::shared_ptr<RetryTransferOwnershipRequestPrivilegeTransferRecord> privilegeTransferRecord_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
