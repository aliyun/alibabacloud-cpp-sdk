// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGUSERGROUPADDORUPDATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DSGUSERGROUPADDORUPDATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DsgUserGroupAddOrUpdateRequestUserGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DsgUserGroupAddOrUpdateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgUserGroupAddOrUpdateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UserGroups, userGroups_);
    };
    friend void from_json(const Darabonba::Json& j, DsgUserGroupAddOrUpdateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UserGroups, userGroups_);
    };
    DsgUserGroupAddOrUpdateRequest() = default ;
    DsgUserGroupAddOrUpdateRequest(const DsgUserGroupAddOrUpdateRequest &) = default ;
    DsgUserGroupAddOrUpdateRequest(DsgUserGroupAddOrUpdateRequest &&) = default ;
    DsgUserGroupAddOrUpdateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgUserGroupAddOrUpdateRequest() = default ;
    DsgUserGroupAddOrUpdateRequest& operator=(const DsgUserGroupAddOrUpdateRequest &) = default ;
    DsgUserGroupAddOrUpdateRequest& operator=(DsgUserGroupAddOrUpdateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->userGroups_ != nullptr; };
    // userGroups Field Functions 
    bool hasUserGroups() const { return this->userGroups_ != nullptr;};
    void deleteUserGroups() { this->userGroups_ = nullptr;};
    inline const vector<DsgUserGroupAddOrUpdateRequestUserGroups> & userGroups() const { DARABONBA_PTR_GET_CONST(userGroups_, vector<DsgUserGroupAddOrUpdateRequestUserGroups>) };
    inline vector<DsgUserGroupAddOrUpdateRequestUserGroups> userGroups() { DARABONBA_PTR_GET(userGroups_, vector<DsgUserGroupAddOrUpdateRequestUserGroups>) };
    inline DsgUserGroupAddOrUpdateRequest& setUserGroups(const vector<DsgUserGroupAddOrUpdateRequestUserGroups> & userGroups) { DARABONBA_PTR_SET_VALUE(userGroups_, userGroups) };
    inline DsgUserGroupAddOrUpdateRequest& setUserGroups(vector<DsgUserGroupAddOrUpdateRequestUserGroups> && userGroups) { DARABONBA_PTR_SET_RVALUE(userGroups_, userGroups) };


  protected:
    // The information about the user group.
    // 
    // This parameter is required.
    std::shared_ptr<vector<DsgUserGroupAddOrUpdateRequestUserGroups>> userGroups_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
