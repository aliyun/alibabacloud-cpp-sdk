// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RETRYTRANSFEROWNERSHIPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RETRYTRANSFEROWNERSHIPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class RetryTransferOwnershipShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RetryTransferOwnershipShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(PrivilegeTransferRecord, privilegeTransferRecordShrink_);
    };
    friend void from_json(const Darabonba::Json& j, RetryTransferOwnershipShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(PrivilegeTransferRecord, privilegeTransferRecordShrink_);
    };
    RetryTransferOwnershipShrinkRequest() = default ;
    RetryTransferOwnershipShrinkRequest(const RetryTransferOwnershipShrinkRequest &) = default ;
    RetryTransferOwnershipShrinkRequest(RetryTransferOwnershipShrinkRequest &&) = default ;
    RetryTransferOwnershipShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RetryTransferOwnershipShrinkRequest() = default ;
    RetryTransferOwnershipShrinkRequest& operator=(const RetryTransferOwnershipShrinkRequest &) = default ;
    RetryTransferOwnershipShrinkRequest& operator=(RetryTransferOwnershipShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->opTenantId_ != nullptr
        && this->privilegeTransferRecordShrink_ != nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline RetryTransferOwnershipShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // privilegeTransferRecordShrink Field Functions 
    bool hasPrivilegeTransferRecordShrink() const { return this->privilegeTransferRecordShrink_ != nullptr;};
    void deletePrivilegeTransferRecordShrink() { this->privilegeTransferRecordShrink_ = nullptr;};
    inline string privilegeTransferRecordShrink() const { DARABONBA_PTR_GET_DEFAULT(privilegeTransferRecordShrink_, "") };
    inline RetryTransferOwnershipShrinkRequest& setPrivilegeTransferRecordShrink(string privilegeTransferRecordShrink) { DARABONBA_PTR_SET_VALUE(privilegeTransferRecordShrink_, privilegeTransferRecordShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    std::shared_ptr<string> privilegeTransferRecordShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
