// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERMEMBERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERMEMBERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListClusterMembersResponseBodyClusterMemberPage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListClusterMembersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterMembersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterMemberPage, clusterMemberPage_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterMembersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterMemberPage, clusterMemberPage_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListClusterMembersResponseBody() = default ;
    ListClusterMembersResponseBody(const ListClusterMembersResponseBody &) = default ;
    ListClusterMembersResponseBody(ListClusterMembersResponseBody &&) = default ;
    ListClusterMembersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterMembersResponseBody() = default ;
    ListClusterMembersResponseBody& operator=(const ListClusterMembersResponseBody &) = default ;
    ListClusterMembersResponseBody& operator=(ListClusterMembersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterMemberPage_ == nullptr
        && return this->code_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr; };
    // clusterMemberPage Field Functions 
    bool hasClusterMemberPage() const { return this->clusterMemberPage_ != nullptr;};
    void deleteClusterMemberPage() { this->clusterMemberPage_ = nullptr;};
    inline const ListClusterMembersResponseBodyClusterMemberPage & clusterMemberPage() const { DARABONBA_PTR_GET_CONST(clusterMemberPage_, ListClusterMembersResponseBodyClusterMemberPage) };
    inline ListClusterMembersResponseBodyClusterMemberPage clusterMemberPage() { DARABONBA_PTR_GET(clusterMemberPage_, ListClusterMembersResponseBodyClusterMemberPage) };
    inline ListClusterMembersResponseBody& setClusterMemberPage(const ListClusterMembersResponseBodyClusterMemberPage & clusterMemberPage) { DARABONBA_PTR_SET_VALUE(clusterMemberPage_, clusterMemberPage) };
    inline ListClusterMembersResponseBody& setClusterMemberPage(ListClusterMembersResponseBodyClusterMemberPage && clusterMemberPage) { DARABONBA_PTR_SET_RVALUE(clusterMemberPage_, clusterMemberPage) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListClusterMembersResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListClusterMembersResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListClusterMembersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the ECS instances in the cluster.
    std::shared_ptr<ListClusterMembersResponseBodyClusterMemberPage> clusterMemberPage_ = nullptr;
    // The HTTP status code that is returned.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The message that is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
