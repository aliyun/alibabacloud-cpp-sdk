// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICELINKEDROLEDELETIONSTATUSRESPONSEBODYREASON_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICELINKEDROLEDELETIONSTATUSRESPONSEBODYREASON_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class GetServiceLinkedRoleDeletionStatusResponseBodyReason : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceLinkedRoleDeletionStatusResponseBodyReason& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RoleUsages, roleUsages_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceLinkedRoleDeletionStatusResponseBodyReason& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RoleUsages, roleUsages_);
    };
    GetServiceLinkedRoleDeletionStatusResponseBodyReason() = default ;
    GetServiceLinkedRoleDeletionStatusResponseBodyReason(const GetServiceLinkedRoleDeletionStatusResponseBodyReason &) = default ;
    GetServiceLinkedRoleDeletionStatusResponseBodyReason(GetServiceLinkedRoleDeletionStatusResponseBodyReason &&) = default ;
    GetServiceLinkedRoleDeletionStatusResponseBodyReason(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceLinkedRoleDeletionStatusResponseBodyReason() = default ;
    GetServiceLinkedRoleDeletionStatusResponseBodyReason& operator=(const GetServiceLinkedRoleDeletionStatusResponseBodyReason &) = default ;
    GetServiceLinkedRoleDeletionStatusResponseBodyReason& operator=(GetServiceLinkedRoleDeletionStatusResponseBodyReason &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->message_ == nullptr
        && return this->roleUsages_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetServiceLinkedRoleDeletionStatusResponseBodyReason& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // roleUsages Field Functions 
    bool hasRoleUsages() const { return this->roleUsages_ != nullptr;};
    void deleteRoleUsages() { this->roleUsages_ = nullptr;};
    inline const Models::GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsages & roleUsages() const { DARABONBA_PTR_GET_CONST(roleUsages_, Models::GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsages) };
    inline Models::GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsages roleUsages() { DARABONBA_PTR_GET(roleUsages_, Models::GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsages) };
    inline GetServiceLinkedRoleDeletionStatusResponseBodyReason& setRoleUsages(const Models::GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsages & roleUsages) { DARABONBA_PTR_SET_VALUE(roleUsages_, roleUsages) };
    inline GetServiceLinkedRoleDeletionStatusResponseBodyReason& setRoleUsages(Models::GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsages && roleUsages) { DARABONBA_PTR_SET_RVALUE(roleUsages_, roleUsages) };


  protected:
    // The failure information.
    std::shared_ptr<string> message_ = nullptr;
    // The information about the resources that the service-linked role can use.
    std::shared_ptr<Models::GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsages> roleUsages_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
