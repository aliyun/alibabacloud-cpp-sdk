// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMULTIUSERINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMULTIUSERINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateMultiUserInstancesRequestMemberInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdateMultiUserInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMultiUserInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MemberInstances, memberInstances_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMultiUserInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MemberInstances, memberInstances_);
    };
    UpdateMultiUserInstancesRequest() = default ;
    UpdateMultiUserInstancesRequest(const UpdateMultiUserInstancesRequest &) = default ;
    UpdateMultiUserInstancesRequest(UpdateMultiUserInstancesRequest &&) = default ;
    UpdateMultiUserInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMultiUserInstancesRequest() = default ;
    UpdateMultiUserInstancesRequest& operator=(const UpdateMultiUserInstancesRequest &) = default ;
    UpdateMultiUserInstancesRequest& operator=(UpdateMultiUserInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->memberInstances_ == nullptr; };
    // memberInstances Field Functions 
    bool hasMemberInstances() const { return this->memberInstances_ != nullptr;};
    void deleteMemberInstances() { this->memberInstances_ = nullptr;};
    inline const vector<UpdateMultiUserInstancesRequestMemberInstances> & memberInstances() const { DARABONBA_PTR_GET_CONST(memberInstances_, vector<UpdateMultiUserInstancesRequestMemberInstances>) };
    inline vector<UpdateMultiUserInstancesRequestMemberInstances> memberInstances() { DARABONBA_PTR_GET(memberInstances_, vector<UpdateMultiUserInstancesRequestMemberInstances>) };
    inline UpdateMultiUserInstancesRequest& setMemberInstances(const vector<UpdateMultiUserInstancesRequestMemberInstances> & memberInstances) { DARABONBA_PTR_SET_VALUE(memberInstances_, memberInstances) };
    inline UpdateMultiUserInstancesRequest& setMemberInstances(vector<UpdateMultiUserInstancesRequestMemberInstances> && memberInstances) { DARABONBA_PTR_SET_RVALUE(memberInstances_, memberInstances) };


  protected:
    std::shared_ptr<vector<UpdateMultiUserInstancesRequestMemberInstances>> memberInstances_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
