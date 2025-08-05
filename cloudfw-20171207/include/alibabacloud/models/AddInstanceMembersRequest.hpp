// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDINSTANCEMEMBERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDINSTANCEMEMBERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddInstanceMembersRequestMembers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class AddInstanceMembersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddInstanceMembersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Members, members_);
    };
    friend void from_json(const Darabonba::Json& j, AddInstanceMembersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Members, members_);
    };
    AddInstanceMembersRequest() = default ;
    AddInstanceMembersRequest(const AddInstanceMembersRequest &) = default ;
    AddInstanceMembersRequest(AddInstanceMembersRequest &&) = default ;
    AddInstanceMembersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddInstanceMembersRequest() = default ;
    AddInstanceMembersRequest& operator=(const AddInstanceMembersRequest &) = default ;
    AddInstanceMembersRequest& operator=(AddInstanceMembersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->members_ != nullptr; };
    // members Field Functions 
    bool hasMembers() const { return this->members_ != nullptr;};
    void deleteMembers() { this->members_ = nullptr;};
    inline const vector<AddInstanceMembersRequestMembers> & members() const { DARABONBA_PTR_GET_CONST(members_, vector<AddInstanceMembersRequestMembers>) };
    inline vector<AddInstanceMembersRequestMembers> members() { DARABONBA_PTR_GET(members_, vector<AddInstanceMembersRequestMembers>) };
    inline AddInstanceMembersRequest& setMembers(const vector<AddInstanceMembersRequestMembers> & members) { DARABONBA_PTR_SET_VALUE(members_, members) };
    inline AddInstanceMembersRequest& setMembers(vector<AddInstanceMembersRequestMembers> && members) { DARABONBA_PTR_SET_RVALUE(members_, members) };


  protected:
    // The members.
    // 
    // This parameter is required.
    std::shared_ptr<vector<AddInstanceMembersRequestMembers>> members_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
