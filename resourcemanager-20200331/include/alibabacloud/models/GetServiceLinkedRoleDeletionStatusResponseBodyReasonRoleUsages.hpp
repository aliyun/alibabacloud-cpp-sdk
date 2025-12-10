// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICELINKEDROLEDELETIONSTATUSRESPONSEBODYREASONROLEUSAGES_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICELINKEDROLEDELETIONSTATUSRESPONSEBODYREASONROLEUSAGES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsages& obj) { 
      DARABONBA_PTR_TO_JSON(RoleUsage, roleUsage_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsages& obj) { 
      DARABONBA_PTR_FROM_JSON(RoleUsage, roleUsage_);
    };
    GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsages() = default ;
    GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsages(const GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsages &) = default ;
    GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsages(GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsages &&) = default ;
    GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsages() = default ;
    GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsages& operator=(const GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsages &) = default ;
    GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsages& operator=(GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->roleUsage_ == nullptr; };
    // roleUsage Field Functions 
    bool hasRoleUsage() const { return this->roleUsage_ != nullptr;};
    void deleteRoleUsage() { this->roleUsage_ = nullptr;};
    inline const vector<Models::GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsage> & roleUsage() const { DARABONBA_PTR_GET_CONST(roleUsage_, vector<Models::GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsage>) };
    inline vector<Models::GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsage> roleUsage() { DARABONBA_PTR_GET(roleUsage_, vector<Models::GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsage>) };
    inline GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsages& setRoleUsage(const vector<Models::GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsage> & roleUsage) { DARABONBA_PTR_SET_VALUE(roleUsage_, roleUsage) };
    inline GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsages& setRoleUsage(vector<Models::GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsage> && roleUsage) { DARABONBA_PTR_SET_RVALUE(roleUsage_, roleUsage) };


  protected:
    std::shared_ptr<vector<Models::GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsage>> roleUsage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
