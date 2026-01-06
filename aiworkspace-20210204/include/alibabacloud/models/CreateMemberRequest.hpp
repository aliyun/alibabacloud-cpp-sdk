// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class CreateMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Members, members_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Members, members_);
    };
    CreateMemberRequest() = default ;
    CreateMemberRequest(const CreateMemberRequest &) = default ;
    CreateMemberRequest(CreateMemberRequest &&) = default ;
    CreateMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMemberRequest() = default ;
    CreateMemberRequest& operator=(const CreateMemberRequest &) = default ;
    CreateMemberRequest& operator=(CreateMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Members : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Members& obj) { 
        DARABONBA_PTR_TO_JSON(Roles, roles_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Members& obj) { 
        DARABONBA_PTR_FROM_JSON(Roles, roles_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      Members() = default ;
      Members(const Members &) = default ;
      Members(Members &&) = default ;
      Members(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Members() = default ;
      Members& operator=(const Members &) = default ;
      Members& operator=(Members &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->roles_ == nullptr
        && this->userId_ == nullptr; };
      // roles Field Functions 
      bool hasRoles() const { return this->roles_ != nullptr;};
      void deleteRoles() { this->roles_ = nullptr;};
      inline const vector<string> & getRoles() const { DARABONBA_PTR_GET_CONST(roles_, vector<string>) };
      inline vector<string> getRoles() { DARABONBA_PTR_GET(roles_, vector<string>) };
      inline Members& setRoles(const vector<string> & roles) { DARABONBA_PTR_SET_VALUE(roles_, roles) };
      inline Members& setRoles(vector<string> && roles) { DARABONBA_PTR_SET_RVALUE(roles_, roles) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Members& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The list of roles.
      // 
      // This parameter is required.
      shared_ptr<vector<string>> roles_ {};
      // The member IDs. Multiple member IDs are separated by commas (,). You can call [ListMembers](https://help.aliyun.com/document_detail/449135.html) to obtain the member IDs.
      // 
      // This parameter is required.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->members_ == nullptr; };
    // members Field Functions 
    bool hasMembers() const { return this->members_ != nullptr;};
    void deleteMembers() { this->members_ = nullptr;};
    inline const vector<CreateMemberRequest::Members> & getMembers() const { DARABONBA_PTR_GET_CONST(members_, vector<CreateMemberRequest::Members>) };
    inline vector<CreateMemberRequest::Members> getMembers() { DARABONBA_PTR_GET(members_, vector<CreateMemberRequest::Members>) };
    inline CreateMemberRequest& setMembers(const vector<CreateMemberRequest::Members> & members) { DARABONBA_PTR_SET_VALUE(members_, members) };
    inline CreateMemberRequest& setMembers(vector<CreateMemberRequest::Members> && members) { DARABONBA_PTR_SET_RVALUE(members_, members) };


  protected:
    // The members.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateMemberRequest::Members>> members_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
