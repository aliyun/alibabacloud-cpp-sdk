// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECOMPUTERESOURCEAUTHUSERMAPPINGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECOMPUTERESOURCEAUTHUSERMAPPINGSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateComputeResourceAuthUserMappingsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateComputeResourceAuthUserMappingsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ComputeResourceId, computeResourceId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RemoveUserIds, removeUserIds_);
      DARABONBA_PTR_TO_JSON(Upserts, upserts_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateComputeResourceAuthUserMappingsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ComputeResourceId, computeResourceId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RemoveUserIds, removeUserIds_);
      DARABONBA_PTR_FROM_JSON(Upserts, upserts_);
    };
    UpdateComputeResourceAuthUserMappingsRequest() = default ;
    UpdateComputeResourceAuthUserMappingsRequest(const UpdateComputeResourceAuthUserMappingsRequest &) = default ;
    UpdateComputeResourceAuthUserMappingsRequest(UpdateComputeResourceAuthUserMappingsRequest &&) = default ;
    UpdateComputeResourceAuthUserMappingsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateComputeResourceAuthUserMappingsRequest() = default ;
    UpdateComputeResourceAuthUserMappingsRequest& operator=(const UpdateComputeResourceAuthUserMappingsRequest &) = default ;
    UpdateComputeResourceAuthUserMappingsRequest& operator=(UpdateComputeResourceAuthUserMappingsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Upserts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Upserts& obj) { 
        DARABONBA_PTR_TO_JSON(Password, password_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
        DARABONBA_PTR_TO_JSON(Username, username_);
      };
      friend void from_json(const Darabonba::Json& j, Upserts& obj) { 
        DARABONBA_PTR_FROM_JSON(Password, password_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
        DARABONBA_PTR_FROM_JSON(Username, username_);
      };
      Upserts() = default ;
      Upserts(const Upserts &) = default ;
      Upserts(Upserts &&) = default ;
      Upserts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Upserts() = default ;
      Upserts& operator=(const Upserts &) = default ;
      Upserts& operator=(Upserts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->password_ == nullptr
        && this->userId_ == nullptr && this->username_ == nullptr; };
      // password Field Functions 
      bool hasPassword() const { return this->password_ != nullptr;};
      void deletePassword() { this->password_ = nullptr;};
      inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
      inline Upserts& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Upserts& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // username Field Functions 
      bool hasUsername() const { return this->username_ != nullptr;};
      void deleteUsername() { this->username_ = nullptr;};
      inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
      inline Upserts& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    protected:
      // The password of the target system for the mapping, such as an LDAP password.
      shared_ptr<string> password_ {};
      // The Alibaba Cloud UID.
      shared_ptr<string> userId_ {};
      // The username of the target system for the mapping, such as an LDAP username.
      shared_ptr<string> username_ {};
    };

    virtual bool empty() const override { return this->computeResourceId_ == nullptr
        && this->projectId_ == nullptr && this->removeUserIds_ == nullptr && this->upserts_ == nullptr; };
    // computeResourceId Field Functions 
    bool hasComputeResourceId() const { return this->computeResourceId_ != nullptr;};
    void deleteComputeResourceId() { this->computeResourceId_ = nullptr;};
    inline int64_t getComputeResourceId() const { DARABONBA_PTR_GET_DEFAULT(computeResourceId_, 0L) };
    inline UpdateComputeResourceAuthUserMappingsRequest& setComputeResourceId(int64_t computeResourceId) { DARABONBA_PTR_SET_VALUE(computeResourceId_, computeResourceId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline UpdateComputeResourceAuthUserMappingsRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // removeUserIds Field Functions 
    bool hasRemoveUserIds() const { return this->removeUserIds_ != nullptr;};
    void deleteRemoveUserIds() { this->removeUserIds_ = nullptr;};
    inline const vector<string> & getRemoveUserIds() const { DARABONBA_PTR_GET_CONST(removeUserIds_, vector<string>) };
    inline vector<string> getRemoveUserIds() { DARABONBA_PTR_GET(removeUserIds_, vector<string>) };
    inline UpdateComputeResourceAuthUserMappingsRequest& setRemoveUserIds(const vector<string> & removeUserIds) { DARABONBA_PTR_SET_VALUE(removeUserIds_, removeUserIds) };
    inline UpdateComputeResourceAuthUserMappingsRequest& setRemoveUserIds(vector<string> && removeUserIds) { DARABONBA_PTR_SET_RVALUE(removeUserIds_, removeUserIds) };


    // upserts Field Functions 
    bool hasUpserts() const { return this->upserts_ != nullptr;};
    void deleteUpserts() { this->upserts_ = nullptr;};
    inline const vector<UpdateComputeResourceAuthUserMappingsRequest::Upserts> & getUpserts() const { DARABONBA_PTR_GET_CONST(upserts_, vector<UpdateComputeResourceAuthUserMappingsRequest::Upserts>) };
    inline vector<UpdateComputeResourceAuthUserMappingsRequest::Upserts> getUpserts() { DARABONBA_PTR_GET(upserts_, vector<UpdateComputeResourceAuthUserMappingsRequest::Upserts>) };
    inline UpdateComputeResourceAuthUserMappingsRequest& setUpserts(const vector<UpdateComputeResourceAuthUserMappingsRequest::Upserts> & upserts) { DARABONBA_PTR_SET_VALUE(upserts_, upserts) };
    inline UpdateComputeResourceAuthUserMappingsRequest& setUpserts(vector<UpdateComputeResourceAuthUserMappingsRequest::Upserts> && upserts) { DARABONBA_PTR_SET_RVALUE(upserts_, upserts) };


  protected:
    // The compute resource ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> computeResourceId_ {};
    // The workspace ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
    // The list of user mappings to remove.
    shared_ptr<vector<string>> removeUserIds_ {};
    // The list of objects to update.
    shared_ptr<vector<UpdateComputeResourceAuthUserMappingsRequest::Upserts>> upserts_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
