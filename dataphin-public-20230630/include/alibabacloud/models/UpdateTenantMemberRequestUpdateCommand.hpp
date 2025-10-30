// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETENANTMEMBERREQUESTUPDATECOMMAND_HPP_
#define ALIBABACLOUD_MODELS_UPDATETENANTMEMBERREQUESTUPDATECOMMAND_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateTenantMemberRequestUpdateCommandMemberList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class UpdateTenantMemberRequestUpdateCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTenantMemberRequestUpdateCommand& obj) { 
      DARABONBA_PTR_TO_JSON(MemberList, memberList_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTenantMemberRequestUpdateCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(MemberList, memberList_);
    };
    UpdateTenantMemberRequestUpdateCommand() = default ;
    UpdateTenantMemberRequestUpdateCommand(const UpdateTenantMemberRequestUpdateCommand &) = default ;
    UpdateTenantMemberRequestUpdateCommand(UpdateTenantMemberRequestUpdateCommand &&) = default ;
    UpdateTenantMemberRequestUpdateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTenantMemberRequestUpdateCommand() = default ;
    UpdateTenantMemberRequestUpdateCommand& operator=(const UpdateTenantMemberRequestUpdateCommand &) = default ;
    UpdateTenantMemberRequestUpdateCommand& operator=(UpdateTenantMemberRequestUpdateCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->memberList_ == nullptr; };
    // memberList Field Functions 
    bool hasMemberList() const { return this->memberList_ != nullptr;};
    void deleteMemberList() { this->memberList_ = nullptr;};
    inline const vector<Models::UpdateTenantMemberRequestUpdateCommandMemberList> & memberList() const { DARABONBA_PTR_GET_CONST(memberList_, vector<Models::UpdateTenantMemberRequestUpdateCommandMemberList>) };
    inline vector<Models::UpdateTenantMemberRequestUpdateCommandMemberList> memberList() { DARABONBA_PTR_GET(memberList_, vector<Models::UpdateTenantMemberRequestUpdateCommandMemberList>) };
    inline UpdateTenantMemberRequestUpdateCommand& setMemberList(const vector<Models::UpdateTenantMemberRequestUpdateCommandMemberList> & memberList) { DARABONBA_PTR_SET_VALUE(memberList_, memberList) };
    inline UpdateTenantMemberRequestUpdateCommand& setMemberList(vector<Models::UpdateTenantMemberRequestUpdateCommandMemberList> && memberList) { DARABONBA_PTR_SET_RVALUE(memberList_, memberList) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<Models::UpdateTenantMemberRequestUpdateCommandMemberList>> memberList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
