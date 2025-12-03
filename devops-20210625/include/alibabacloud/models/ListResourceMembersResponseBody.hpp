// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEMEMBERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEMEMBERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListResourceMembersResponseBodyResourceMembers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListResourceMembersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceMembersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(resourceMembers, resourceMembers_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceMembersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resourceMembers, resourceMembers_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    ListResourceMembersResponseBody() = default ;
    ListResourceMembersResponseBody(const ListResourceMembersResponseBody &) = default ;
    ListResourceMembersResponseBody(ListResourceMembersResponseBody &&) = default ;
    ListResourceMembersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceMembersResponseBody() = default ;
    ListResourceMembersResponseBody& operator=(const ListResourceMembersResponseBody &) = default ;
    ListResourceMembersResponseBody& operator=(ListResourceMembersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && return this->errorMessage_ == nullptr && return this->requestId_ == nullptr && return this->resourceMembers_ == nullptr && return this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListResourceMembersResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListResourceMembersResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListResourceMembersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceMembers Field Functions 
    bool hasResourceMembers() const { return this->resourceMembers_ != nullptr;};
    void deleteResourceMembers() { this->resourceMembers_ = nullptr;};
    inline const vector<ListResourceMembersResponseBodyResourceMembers> & resourceMembers() const { DARABONBA_PTR_GET_CONST(resourceMembers_, vector<ListResourceMembersResponseBodyResourceMembers>) };
    inline vector<ListResourceMembersResponseBodyResourceMembers> resourceMembers() { DARABONBA_PTR_GET(resourceMembers_, vector<ListResourceMembersResponseBodyResourceMembers>) };
    inline ListResourceMembersResponseBody& setResourceMembers(const vector<ListResourceMembersResponseBodyResourceMembers> & resourceMembers) { DARABONBA_PTR_SET_VALUE(resourceMembers_, resourceMembers) };
    inline ListResourceMembersResponseBody& setResourceMembers(vector<ListResourceMembersResponseBodyResourceMembers> && resourceMembers) { DARABONBA_PTR_SET_RVALUE(resourceMembers_, resourceMembers) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListResourceMembersResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<ListResourceMembersResponseBodyResourceMembers>> resourceMembers_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
