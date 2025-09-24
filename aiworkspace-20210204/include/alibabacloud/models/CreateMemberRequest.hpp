// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateMemberRequestMembers.hpp>
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
    virtual bool empty() const override { this->members_ != nullptr; };
    // members Field Functions 
    bool hasMembers() const { return this->members_ != nullptr;};
    void deleteMembers() { this->members_ = nullptr;};
    inline const vector<CreateMemberRequestMembers> & members() const { DARABONBA_PTR_GET_CONST(members_, vector<CreateMemberRequestMembers>) };
    inline vector<CreateMemberRequestMembers> members() { DARABONBA_PTR_GET(members_, vector<CreateMemberRequestMembers>) };
    inline CreateMemberRequest& setMembers(const vector<CreateMemberRequestMembers> & members) { DARABONBA_PTR_SET_VALUE(members_, members) };
    inline CreateMemberRequest& setMembers(vector<CreateMemberRequestMembers> && members) { DARABONBA_PTR_SET_RVALUE(members_, members) };


  protected:
    // The members.
    // 
    // This parameter is required.
    std::shared_ptr<vector<CreateMemberRequestMembers>> members_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
