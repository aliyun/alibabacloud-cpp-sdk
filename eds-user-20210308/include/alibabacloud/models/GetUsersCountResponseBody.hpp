// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERSCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERSCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class GetUsersCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUsersCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GroupCount, groupCount_);
      DARABONBA_PTR_TO_JSON(MaxUserNumber, maxUserNumber_);
      DARABONBA_PTR_TO_JSON(OrgCount, orgCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserCount, userCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetUsersCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupCount, groupCount_);
      DARABONBA_PTR_FROM_JSON(MaxUserNumber, maxUserNumber_);
      DARABONBA_PTR_FROM_JSON(OrgCount, orgCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserCount, userCount_);
    };
    GetUsersCountResponseBody() = default ;
    GetUsersCountResponseBody(const GetUsersCountResponseBody &) = default ;
    GetUsersCountResponseBody(GetUsersCountResponseBody &&) = default ;
    GetUsersCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUsersCountResponseBody() = default ;
    GetUsersCountResponseBody& operator=(const GetUsersCountResponseBody &) = default ;
    GetUsersCountResponseBody& operator=(GetUsersCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupCount_ == nullptr
        && this->maxUserNumber_ == nullptr && this->orgCount_ == nullptr && this->requestId_ == nullptr && this->userCount_ == nullptr; };
    // groupCount Field Functions 
    bool hasGroupCount() const { return this->groupCount_ != nullptr;};
    void deleteGroupCount() { this->groupCount_ = nullptr;};
    inline int32_t getGroupCount() const { DARABONBA_PTR_GET_DEFAULT(groupCount_, 0) };
    inline GetUsersCountResponseBody& setGroupCount(int32_t groupCount) { DARABONBA_PTR_SET_VALUE(groupCount_, groupCount) };


    // maxUserNumber Field Functions 
    bool hasMaxUserNumber() const { return this->maxUserNumber_ != nullptr;};
    void deleteMaxUserNumber() { this->maxUserNumber_ = nullptr;};
    inline int32_t getMaxUserNumber() const { DARABONBA_PTR_GET_DEFAULT(maxUserNumber_, 0) };
    inline GetUsersCountResponseBody& setMaxUserNumber(int32_t maxUserNumber) { DARABONBA_PTR_SET_VALUE(maxUserNumber_, maxUserNumber) };


    // orgCount Field Functions 
    bool hasOrgCount() const { return this->orgCount_ != nullptr;};
    void deleteOrgCount() { this->orgCount_ = nullptr;};
    inline int32_t getOrgCount() const { DARABONBA_PTR_GET_DEFAULT(orgCount_, 0) };
    inline GetUsersCountResponseBody& setOrgCount(int32_t orgCount) { DARABONBA_PTR_SET_VALUE(orgCount_, orgCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUsersCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userCount Field Functions 
    bool hasUserCount() const { return this->userCount_ != nullptr;};
    void deleteUserCount() { this->userCount_ = nullptr;};
    inline int32_t getUserCount() const { DARABONBA_PTR_GET_DEFAULT(userCount_, 0) };
    inline GetUsersCountResponseBody& setUserCount(int32_t userCount) { DARABONBA_PTR_SET_VALUE(userCount_, userCount) };


  protected:
    shared_ptr<int32_t> groupCount_ {};
    shared_ptr<int32_t> maxUserNumber_ {};
    shared_ptr<int32_t> orgCount_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> userCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
