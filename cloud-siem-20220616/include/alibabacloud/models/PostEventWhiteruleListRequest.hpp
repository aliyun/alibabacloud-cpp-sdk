// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_POSTEVENTWHITERULELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_POSTEVENTWHITERULELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class PostEventWhiteruleListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PostEventWhiteruleListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IncidentUuid, incidentUuid_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
      DARABONBA_PTR_TO_JSON(WhiteruleList, whiteruleList_);
    };
    friend void from_json(const Darabonba::Json& j, PostEventWhiteruleListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IncidentUuid, incidentUuid_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
      DARABONBA_PTR_FROM_JSON(WhiteruleList, whiteruleList_);
    };
    PostEventWhiteruleListRequest() = default ;
    PostEventWhiteruleListRequest(const PostEventWhiteruleListRequest &) = default ;
    PostEventWhiteruleListRequest(PostEventWhiteruleListRequest &&) = default ;
    PostEventWhiteruleListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PostEventWhiteruleListRequest() = default ;
    PostEventWhiteruleListRequest& operator=(const PostEventWhiteruleListRequest &) = default ;
    PostEventWhiteruleListRequest& operator=(PostEventWhiteruleListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->incidentUuid_ == nullptr
        && this->regionId_ == nullptr && this->roleFor_ == nullptr && this->roleType_ == nullptr && this->whiteruleList_ == nullptr; };
    // incidentUuid Field Functions 
    bool hasIncidentUuid() const { return this->incidentUuid_ != nullptr;};
    void deleteIncidentUuid() { this->incidentUuid_ = nullptr;};
    inline string getIncidentUuid() const { DARABONBA_PTR_GET_DEFAULT(incidentUuid_, "") };
    inline PostEventWhiteruleListRequest& setIncidentUuid(string incidentUuid) { DARABONBA_PTR_SET_VALUE(incidentUuid_, incidentUuid) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline PostEventWhiteruleListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline PostEventWhiteruleListRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline int32_t getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, 0) };
    inline PostEventWhiteruleListRequest& setRoleType(int32_t roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


    // whiteruleList Field Functions 
    bool hasWhiteruleList() const { return this->whiteruleList_ != nullptr;};
    void deleteWhiteruleList() { this->whiteruleList_ = nullptr;};
    inline string getWhiteruleList() const { DARABONBA_PTR_GET_DEFAULT(whiteruleList_, "") };
    inline PostEventWhiteruleListRequest& setWhiteruleList(string whiteruleList) { DARABONBA_PTR_SET_VALUE(whiteruleList_, whiteruleList) };


  protected:
    // The globally unique ID of the event.
    shared_ptr<string> incidentUuid_ {};
    // The region where the threat analysis feature is deployed. Select the region where your assets are located. Valid values:
    // 
    // - cn-hangzhou: For assets in the Chinese mainland or China (Hong Kong).
    // 
    // - ap-southeast-1: For assets in regions outside the Chinese mainland.
    shared_ptr<string> regionId_ {};
    // The ID of a member account. An administrator can use this parameter to switch to the perspective of the member account.
    shared_ptr<int64_t> roleFor_ {};
    // The account scope to which the rule applies. Valid values:
    // 
    // - 0: The current Alibaba Cloud account.
    // 
    // - 1: All accounts within the enterprise.
    shared_ptr<int32_t> roleType_ {};
    // The alert whitelisting rule, which is a JSON object.
    // 
    // This parameter is required.
    shared_ptr<string> whiteruleList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
