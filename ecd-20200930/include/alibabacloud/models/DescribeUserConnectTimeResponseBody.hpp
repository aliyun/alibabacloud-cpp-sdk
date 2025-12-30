// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERCONNECTTIMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERCONNECTTIMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeUserConnectTimeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserConnectTimeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserConnectTimeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeUserConnectTimeResponseBody() = default ;
    DescribeUserConnectTimeResponseBody(const DescribeUserConnectTimeResponseBody &) = default ;
    DescribeUserConnectTimeResponseBody(DescribeUserConnectTimeResponseBody &&) = default ;
    DescribeUserConnectTimeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserConnectTimeResponseBody() = default ;
    DescribeUserConnectTimeResponseBody& operator=(const DescribeUserConnectTimeResponseBody &) = default ;
    DescribeUserConnectTimeResponseBody& operator=(DescribeUserConnectTimeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(EndConnectTime, endConnectTime_);
        DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
        DARABONBA_PTR_TO_JSON(OversoldGroupId, oversoldGroupId_);
        DARABONBA_PTR_TO_JSON(StartConnectTime, startConnectTime_);
        DARABONBA_PTR_TO_JSON(UserDesktopId, userDesktopId_);
        DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(EndConnectTime, endConnectTime_);
        DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
        DARABONBA_PTR_FROM_JSON(OversoldGroupId, oversoldGroupId_);
        DARABONBA_PTR_FROM_JSON(StartConnectTime, startConnectTime_);
        DARABONBA_PTR_FROM_JSON(UserDesktopId, userDesktopId_);
        DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endConnectTime_ == nullptr
        && this->endUserId_ == nullptr && this->oversoldGroupId_ == nullptr && this->startConnectTime_ == nullptr && this->userDesktopId_ == nullptr && this->userGroupId_ == nullptr; };
      // endConnectTime Field Functions 
      bool hasEndConnectTime() const { return this->endConnectTime_ != nullptr;};
      void deleteEndConnectTime() { this->endConnectTime_ = nullptr;};
      inline string getEndConnectTime() const { DARABONBA_PTR_GET_DEFAULT(endConnectTime_, "") };
      inline Data& setEndConnectTime(string endConnectTime) { DARABONBA_PTR_SET_VALUE(endConnectTime_, endConnectTime) };


      // endUserId Field Functions 
      bool hasEndUserId() const { return this->endUserId_ != nullptr;};
      void deleteEndUserId() { this->endUserId_ = nullptr;};
      inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
      inline Data& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


      // oversoldGroupId Field Functions 
      bool hasOversoldGroupId() const { return this->oversoldGroupId_ != nullptr;};
      void deleteOversoldGroupId() { this->oversoldGroupId_ = nullptr;};
      inline string getOversoldGroupId() const { DARABONBA_PTR_GET_DEFAULT(oversoldGroupId_, "") };
      inline Data& setOversoldGroupId(string oversoldGroupId) { DARABONBA_PTR_SET_VALUE(oversoldGroupId_, oversoldGroupId) };


      // startConnectTime Field Functions 
      bool hasStartConnectTime() const { return this->startConnectTime_ != nullptr;};
      void deleteStartConnectTime() { this->startConnectTime_ = nullptr;};
      inline string getStartConnectTime() const { DARABONBA_PTR_GET_DEFAULT(startConnectTime_, "") };
      inline Data& setStartConnectTime(string startConnectTime) { DARABONBA_PTR_SET_VALUE(startConnectTime_, startConnectTime) };


      // userDesktopId Field Functions 
      bool hasUserDesktopId() const { return this->userDesktopId_ != nullptr;};
      void deleteUserDesktopId() { this->userDesktopId_ = nullptr;};
      inline string getUserDesktopId() const { DARABONBA_PTR_GET_DEFAULT(userDesktopId_, "") };
      inline Data& setUserDesktopId(string userDesktopId) { DARABONBA_PTR_SET_VALUE(userDesktopId_, userDesktopId) };


      // userGroupId Field Functions 
      bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
      void deleteUserGroupId() { this->userGroupId_ = nullptr;};
      inline string getUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
      inline Data& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


    protected:
      shared_ptr<string> endConnectTime_ {};
      shared_ptr<string> endUserId_ {};
      shared_ptr<string> oversoldGroupId_ {};
      shared_ptr<string> startConnectTime_ {};
      shared_ptr<string> userDesktopId_ {};
      shared_ptr<string> userGroupId_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->data_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeUserConnectTimeResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeUserConnectTimeResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeUserConnectTimeResponseBody::Data>) };
    inline vector<DescribeUserConnectTimeResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeUserConnectTimeResponseBody::Data>) };
    inline DescribeUserConnectTimeResponseBody& setData(const vector<DescribeUserConnectTimeResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeUserConnectTimeResponseBody& setData(vector<DescribeUserConnectTimeResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeUserConnectTimeResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserConnectTimeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<int32_t> count_ {};
    shared_ptr<vector<DescribeUserConnectTimeResponseBody::Data>> data_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
