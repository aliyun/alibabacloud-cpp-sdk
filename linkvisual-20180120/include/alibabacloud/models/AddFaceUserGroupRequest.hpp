// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDFACEUSERGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDFACEUSERGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class AddFaceUserGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddFaceUserGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IsolationId, isolationId_);
      DARABONBA_PTR_TO_JSON(UserGroupName, userGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, AddFaceUserGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IsolationId, isolationId_);
      DARABONBA_PTR_FROM_JSON(UserGroupName, userGroupName_);
    };
    AddFaceUserGroupRequest() = default ;
    AddFaceUserGroupRequest(const AddFaceUserGroupRequest &) = default ;
    AddFaceUserGroupRequest(AddFaceUserGroupRequest &&) = default ;
    AddFaceUserGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddFaceUserGroupRequest() = default ;
    AddFaceUserGroupRequest& operator=(const AddFaceUserGroupRequest &) = default ;
    AddFaceUserGroupRequest& operator=(AddFaceUserGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isolationId_ == nullptr
        && this->userGroupName_ == nullptr; };
    // isolationId Field Functions 
    bool hasIsolationId() const { return this->isolationId_ != nullptr;};
    void deleteIsolationId() { this->isolationId_ = nullptr;};
    inline string getIsolationId() const { DARABONBA_PTR_GET_DEFAULT(isolationId_, "") };
    inline AddFaceUserGroupRequest& setIsolationId(string isolationId) { DARABONBA_PTR_SET_VALUE(isolationId_, isolationId) };


    // userGroupName Field Functions 
    bool hasUserGroupName() const { return this->userGroupName_ != nullptr;};
    void deleteUserGroupName() { this->userGroupName_ = nullptr;};
    inline string getUserGroupName() const { DARABONBA_PTR_GET_DEFAULT(userGroupName_, "") };
    inline AddFaceUserGroupRequest& setUserGroupName(string userGroupName) { DARABONBA_PTR_SET_VALUE(userGroupName_, userGroupName) };


  protected:
    // The business isolation ID. It is used to isolate data between different business applications under the same Alibaba Cloud account. It supports uppercase and lowercase English letters and digits.
    // 
    // For example, if you have facial recognition businesses in Region A and Region B, you can set different business isolation IDs to distinguish the facial recognition businesses in Region A and Region B.
    // 
    // >Notice: 
    // Save the business isolation ID properly for use when you call other API operations in this business isolation zone.
    // 
    // This parameter is required.
    shared_ptr<string> isolationId_ {};
    // The name of the user group. Specify a custom value. The value can be up to 128 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> userGroupName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
