// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRANTROLETOUSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GRANTROLETOUSERSREQUEST_HPP_
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
  class GrantRoleToUsersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrantRoleToUsersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(roleArn, roleArn_);
      DARABONBA_PTR_TO_JSON(userArns, userArns_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GrantRoleToUsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(roleArn, roleArn_);
      DARABONBA_PTR_FROM_JSON(userArns, userArns_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
    };
    GrantRoleToUsersRequest() = default ;
    GrantRoleToUsersRequest(const GrantRoleToUsersRequest &) = default ;
    GrantRoleToUsersRequest(GrantRoleToUsersRequest &&) = default ;
    GrantRoleToUsersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrantRoleToUsersRequest() = default ;
    GrantRoleToUsersRequest& operator=(const GrantRoleToUsersRequest &) = default ;
    GrantRoleToUsersRequest& operator=(GrantRoleToUsersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->roleArn_ != nullptr
        && this->userArns_ != nullptr && this->regionId_ != nullptr; };
    // roleArn Field Functions 
    bool hasRoleArn() const { return this->roleArn_ != nullptr;};
    void deleteRoleArn() { this->roleArn_ = nullptr;};
    inline string roleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
    inline GrantRoleToUsersRequest& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


    // userArns Field Functions 
    bool hasUserArns() const { return this->userArns_ != nullptr;};
    void deleteUserArns() { this->userArns_ = nullptr;};
    inline const vector<string> & userArns() const { DARABONBA_PTR_GET_CONST(userArns_, vector<string>) };
    inline vector<string> userArns() { DARABONBA_PTR_GET(userArns_, vector<string>) };
    inline GrantRoleToUsersRequest& setUserArns(const vector<string> & userArns) { DARABONBA_PTR_SET_VALUE(userArns_, userArns) };
    inline GrantRoleToUsersRequest& setUserArns(vector<string> && userArns) { DARABONBA_PTR_SET_RVALUE(userArns_, userArns) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GrantRoleToUsersRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The Alibaba Cloud Resource Name (ARN) of the RAM role.
    std::shared_ptr<string> roleArn_ = nullptr;
    // The user ARNs.
    std::shared_ptr<vector<string>> userArns_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
