// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSINRECYCLEBINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSINRECYCLEBINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListUsersInRecycleBinResponseBodyUsers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListUsersInRecycleBinResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUsersInRecycleBinResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_TO_JSON(Marker, marker_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, ListUsersInRecycleBinResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_FROM_JSON(Marker, marker_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    ListUsersInRecycleBinResponseBody() = default ;
    ListUsersInRecycleBinResponseBody(const ListUsersInRecycleBinResponseBody &) = default ;
    ListUsersInRecycleBinResponseBody(ListUsersInRecycleBinResponseBody &&) = default ;
    ListUsersInRecycleBinResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUsersInRecycleBinResponseBody() = default ;
    ListUsersInRecycleBinResponseBody& operator=(const ListUsersInRecycleBinResponseBody &) = default ;
    ListUsersInRecycleBinResponseBody& operator=(ListUsersInRecycleBinResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isTruncated_ != nullptr
        && this->marker_ != nullptr && this->requestId_ != nullptr && this->users_ != nullptr; };
    // isTruncated Field Functions 
    bool hasIsTruncated() const { return this->isTruncated_ != nullptr;};
    void deleteIsTruncated() { this->isTruncated_ = nullptr;};
    inline bool isTruncated() const { DARABONBA_PTR_GET_DEFAULT(isTruncated_, false) };
    inline ListUsersInRecycleBinResponseBody& setIsTruncated(bool isTruncated) { DARABONBA_PTR_SET_VALUE(isTruncated_, isTruncated) };


    // marker Field Functions 
    bool hasMarker() const { return this->marker_ != nullptr;};
    void deleteMarker() { this->marker_ = nullptr;};
    inline string marker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
    inline ListUsersInRecycleBinResponseBody& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUsersInRecycleBinResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const ListUsersInRecycleBinResponseBodyUsers & users() const { DARABONBA_PTR_GET_CONST(users_, ListUsersInRecycleBinResponseBodyUsers) };
    inline ListUsersInRecycleBinResponseBodyUsers users() { DARABONBA_PTR_GET(users_, ListUsersInRecycleBinResponseBodyUsers) };
    inline ListUsersInRecycleBinResponseBody& setUsers(const ListUsersInRecycleBinResponseBodyUsers & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline ListUsersInRecycleBinResponseBody& setUsers(ListUsersInRecycleBinResponseBodyUsers && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // Indicates whether the response is truncated. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> isTruncated_ = nullptr;
    // The parameter that is used to obtain the truncated part. It takes effect only when `IsTruncated` is set to `true`.
    std::shared_ptr<string> marker_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the RAM users.
    std::shared_ptr<ListUsersInRecycleBinResponseBodyUsers> users_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
