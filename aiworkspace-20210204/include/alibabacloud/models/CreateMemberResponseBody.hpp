// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEMBERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEMBERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateMemberResponseBodyMembers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class CreateMemberResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMemberResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Members, members_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMemberResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Members, members_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateMemberResponseBody() = default ;
    CreateMemberResponseBody(const CreateMemberResponseBody &) = default ;
    CreateMemberResponseBody(CreateMemberResponseBody &&) = default ;
    CreateMemberResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMemberResponseBody() = default ;
    CreateMemberResponseBody& operator=(const CreateMemberResponseBody &) = default ;
    CreateMemberResponseBody& operator=(CreateMemberResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->members_ == nullptr
        && return this->requestId_ == nullptr; };
    // members Field Functions 
    bool hasMembers() const { return this->members_ != nullptr;};
    void deleteMembers() { this->members_ = nullptr;};
    inline const vector<CreateMemberResponseBodyMembers> & members() const { DARABONBA_PTR_GET_CONST(members_, vector<CreateMemberResponseBodyMembers>) };
    inline vector<CreateMemberResponseBodyMembers> members() { DARABONBA_PTR_GET(members_, vector<CreateMemberResponseBodyMembers>) };
    inline CreateMemberResponseBody& setMembers(const vector<CreateMemberResponseBodyMembers> & members) { DARABONBA_PTR_SET_VALUE(members_, members) };
    inline CreateMemberResponseBody& setMembers(vector<CreateMemberResponseBodyMembers> && members) { DARABONBA_PTR_SET_RVALUE(members_, members) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateMemberResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned members.
    std::shared_ptr<vector<CreateMemberResponseBodyMembers>> members_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
