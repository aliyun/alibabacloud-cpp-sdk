// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDMEMBERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDMEMBERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class AddMembersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddMembersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(memberArns, memberArns_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, AddMembersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(memberArns, memberArns_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
    };
    AddMembersRequest() = default ;
    AddMembersRequest(const AddMembersRequest &) = default ;
    AddMembersRequest(AddMembersRequest &&) = default ;
    AddMembersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddMembersRequest() = default ;
    AddMembersRequest& operator=(const AddMembersRequest &) = default ;
    AddMembersRequest& operator=(AddMembersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->memberArns_ != nullptr
        && this->workspaceId_ != nullptr && this->regionId_ != nullptr; };
    // memberArns Field Functions 
    bool hasMemberArns() const { return this->memberArns_ != nullptr;};
    void deleteMemberArns() { this->memberArns_ = nullptr;};
    inline const vector<string> & memberArns() const { DARABONBA_PTR_GET_CONST(memberArns_, vector<string>) };
    inline vector<string> memberArns() { DARABONBA_PTR_GET(memberArns_, vector<string>) };
    inline AddMembersRequest& setMemberArns(const vector<string> & memberArns) { DARABONBA_PTR_SET_VALUE(memberArns_, memberArns) };
    inline AddMembersRequest& setMemberArns(vector<string> && memberArns) { DARABONBA_PTR_SET_RVALUE(memberArns_, memberArns) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline AddMembersRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddMembersRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> memberArns_ = nullptr;
    // The workspace ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
