// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEUSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEUSERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class DeleteUsersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteUsersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UserNames, userNames_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteUsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UserNames, userNames_);
    };
    DeleteUsersRequest() = default ;
    DeleteUsersRequest(const DeleteUsersRequest &) = default ;
    DeleteUsersRequest(DeleteUsersRequest &&) = default ;
    DeleteUsersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteUsersRequest() = default ;
    DeleteUsersRequest& operator=(const DeleteUsersRequest &) = default ;
    DeleteUsersRequest& operator=(DeleteUsersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->regionId_ != nullptr && this->userNames_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DeleteUsersRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteUsersRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // userNames Field Functions 
    bool hasUserNames() const { return this->userNames_ != nullptr;};
    void deleteUserNames() { this->userNames_ = nullptr;};
    inline const vector<string> & userNames() const { DARABONBA_PTR_GET_CONST(userNames_, vector<string>) };
    inline vector<string> userNames() { DARABONBA_PTR_GET(userNames_, vector<string>) };
    inline DeleteUsersRequest& setUserNames(const vector<string> & userNames) { DARABONBA_PTR_SET_VALUE(userNames_, userNames) };
    inline DeleteUsersRequest& setUserNames(vector<string> && userNames) { DARABONBA_PTR_SET_RVALUE(userNames_, userNames) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The usernames. Number of elements in the array: 0 to 10.
    std::shared_ptr<vector<string>> userNames_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
