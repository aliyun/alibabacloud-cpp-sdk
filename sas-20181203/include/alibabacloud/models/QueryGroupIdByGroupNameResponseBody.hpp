// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYGROUPIDBYGROUPNAMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYGROUPIDBYGROUPNAMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class QueryGroupIdByGroupNameResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryGroupIdByGroupNameResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryGroupIdByGroupNameResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryGroupIdByGroupNameResponseBody() = default ;
    QueryGroupIdByGroupNameResponseBody(const QueryGroupIdByGroupNameResponseBody &) = default ;
    QueryGroupIdByGroupNameResponseBody(QueryGroupIdByGroupNameResponseBody &&) = default ;
    QueryGroupIdByGroupNameResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryGroupIdByGroupNameResponseBody() = default ;
    QueryGroupIdByGroupNameResponseBody& operator=(const QueryGroupIdByGroupNameResponseBody &) = default ;
    QueryGroupIdByGroupNameResponseBody& operator=(QueryGroupIdByGroupNameResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupId_ == nullptr
        && this->requestId_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline QueryGroupIdByGroupNameResponseBody& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryGroupIdByGroupNameResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the asset group.
    shared_ptr<int64_t> groupId_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
