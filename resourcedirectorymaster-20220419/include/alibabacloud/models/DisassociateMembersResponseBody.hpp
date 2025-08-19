// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISASSOCIATEMEMBERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DISASSOCIATEMEMBERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DisassociateMembersResponseBodyMembers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class DisassociateMembersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisassociateMembersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Members, members_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DisassociateMembersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Members, members_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DisassociateMembersResponseBody() = default ;
    DisassociateMembersResponseBody(const DisassociateMembersResponseBody &) = default ;
    DisassociateMembersResponseBody(DisassociateMembersResponseBody &&) = default ;
    DisassociateMembersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisassociateMembersResponseBody() = default ;
    DisassociateMembersResponseBody& operator=(const DisassociateMembersResponseBody &) = default ;
    DisassociateMembersResponseBody& operator=(DisassociateMembersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->members_ != nullptr
        && this->requestId_ != nullptr; };
    // members Field Functions 
    bool hasMembers() const { return this->members_ != nullptr;};
    void deleteMembers() { this->members_ = nullptr;};
    inline const vector<DisassociateMembersResponseBodyMembers> & members() const { DARABONBA_PTR_GET_CONST(members_, vector<DisassociateMembersResponseBodyMembers>) };
    inline vector<DisassociateMembersResponseBodyMembers> members() { DARABONBA_PTR_GET(members_, vector<DisassociateMembersResponseBodyMembers>) };
    inline DisassociateMembersResponseBody& setMembers(const vector<DisassociateMembersResponseBodyMembers> & members) { DARABONBA_PTR_SET_VALUE(members_, members) };
    inline DisassociateMembersResponseBody& setMembers(vector<DisassociateMembersResponseBodyMembers> && members) { DARABONBA_PTR_SET_RVALUE(members_, members) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DisassociateMembersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The time when the contact was unbound from the object.
    std::shared_ptr<vector<DisassociateMembersResponseBodyMembers>> members_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
