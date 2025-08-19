// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSOCIATEMEMBERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ASSOCIATEMEMBERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AssociateMembersResponseBodyMembers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class AssociateMembersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssociateMembersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Members, members_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AssociateMembersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Members, members_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AssociateMembersResponseBody() = default ;
    AssociateMembersResponseBody(const AssociateMembersResponseBody &) = default ;
    AssociateMembersResponseBody(AssociateMembersResponseBody &&) = default ;
    AssociateMembersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssociateMembersResponseBody() = default ;
    AssociateMembersResponseBody& operator=(const AssociateMembersResponseBody &) = default ;
    AssociateMembersResponseBody& operator=(AssociateMembersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->members_ != nullptr
        && this->requestId_ != nullptr; };
    // members Field Functions 
    bool hasMembers() const { return this->members_ != nullptr;};
    void deleteMembers() { this->members_ = nullptr;};
    inline const vector<AssociateMembersResponseBodyMembers> & members() const { DARABONBA_PTR_GET_CONST(members_, vector<AssociateMembersResponseBodyMembers>) };
    inline vector<AssociateMembersResponseBodyMembers> members() { DARABONBA_PTR_GET(members_, vector<AssociateMembersResponseBodyMembers>) };
    inline AssociateMembersResponseBody& setMembers(const vector<AssociateMembersResponseBodyMembers> & members) { DARABONBA_PTR_SET_VALUE(members_, members) };
    inline AssociateMembersResponseBody& setMembers(vector<AssociateMembersResponseBodyMembers> && members) { DARABONBA_PTR_SET_RVALUE(members_, members) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AssociateMembersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The time when the contact was bound to the object.
    std::shared_ptr<vector<AssociateMembersResponseBodyMembers>> members_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
