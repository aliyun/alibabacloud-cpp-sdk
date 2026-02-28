// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTCUSERCNTDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTCUSERCNTDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeRtcUserCntDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRtcUserCntDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserCntDataPerInterval, userCntDataPerInterval_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRtcUserCntDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserCntDataPerInterval, userCntDataPerInterval_);
    };
    DescribeRtcUserCntDataResponseBody() = default ;
    DescribeRtcUserCntDataResponseBody(const DescribeRtcUserCntDataResponseBody &) = default ;
    DescribeRtcUserCntDataResponseBody(DescribeRtcUserCntDataResponseBody &&) = default ;
    DescribeRtcUserCntDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRtcUserCntDataResponseBody() = default ;
    DescribeRtcUserCntDataResponseBody& operator=(const DescribeRtcUserCntDataResponseBody &) = default ;
    DescribeRtcUserCntDataResponseBody& operator=(DescribeRtcUserCntDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserCntDataPerInterval : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserCntDataPerInterval& obj) { 
        DARABONBA_PTR_TO_JSON(UserCntModule, userCntModule_);
      };
      friend void from_json(const Darabonba::Json& j, UserCntDataPerInterval& obj) { 
        DARABONBA_PTR_FROM_JSON(UserCntModule, userCntModule_);
      };
      UserCntDataPerInterval() = default ;
      UserCntDataPerInterval(const UserCntDataPerInterval &) = default ;
      UserCntDataPerInterval(UserCntDataPerInterval &&) = default ;
      UserCntDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserCntDataPerInterval() = default ;
      UserCntDataPerInterval& operator=(const UserCntDataPerInterval &) = default ;
      UserCntDataPerInterval& operator=(UserCntDataPerInterval &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UserCntModule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UserCntModule& obj) { 
          DARABONBA_PTR_TO_JSON(ActiveUserCnt, activeUserCnt_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
        };
        friend void from_json(const Darabonba::Json& j, UserCntModule& obj) { 
          DARABONBA_PTR_FROM_JSON(ActiveUserCnt, activeUserCnt_);
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
        };
        UserCntModule() = default ;
        UserCntModule(const UserCntModule &) = default ;
        UserCntModule(UserCntModule &&) = default ;
        UserCntModule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UserCntModule() = default ;
        UserCntModule& operator=(const UserCntModule &) = default ;
        UserCntModule& operator=(UserCntModule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->activeUserCnt_ == nullptr
        && this->timeStamp_ == nullptr; };
        // activeUserCnt Field Functions 
        bool hasActiveUserCnt() const { return this->activeUserCnt_ != nullptr;};
        void deleteActiveUserCnt() { this->activeUserCnt_ = nullptr;};
        inline int64_t getActiveUserCnt() const { DARABONBA_PTR_GET_DEFAULT(activeUserCnt_, 0L) };
        inline UserCntModule& setActiveUserCnt(int64_t activeUserCnt) { DARABONBA_PTR_SET_VALUE(activeUserCnt_, activeUserCnt) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline UserCntModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      protected:
        shared_ptr<int64_t> activeUserCnt_ {};
        shared_ptr<string> timeStamp_ {};
      };

      virtual bool empty() const override { return this->userCntModule_ == nullptr; };
      // userCntModule Field Functions 
      bool hasUserCntModule() const { return this->userCntModule_ != nullptr;};
      void deleteUserCntModule() { this->userCntModule_ = nullptr;};
      inline const vector<UserCntDataPerInterval::UserCntModule> & getUserCntModule() const { DARABONBA_PTR_GET_CONST(userCntModule_, vector<UserCntDataPerInterval::UserCntModule>) };
      inline vector<UserCntDataPerInterval::UserCntModule> getUserCntModule() { DARABONBA_PTR_GET(userCntModule_, vector<UserCntDataPerInterval::UserCntModule>) };
      inline UserCntDataPerInterval& setUserCntModule(const vector<UserCntDataPerInterval::UserCntModule> & userCntModule) { DARABONBA_PTR_SET_VALUE(userCntModule_, userCntModule) };
      inline UserCntDataPerInterval& setUserCntModule(vector<UserCntDataPerInterval::UserCntModule> && userCntModule) { DARABONBA_PTR_SET_RVALUE(userCntModule_, userCntModule) };


    protected:
      shared_ptr<vector<UserCntDataPerInterval::UserCntModule>> userCntModule_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->userCntDataPerInterval_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRtcUserCntDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userCntDataPerInterval Field Functions 
    bool hasUserCntDataPerInterval() const { return this->userCntDataPerInterval_ != nullptr;};
    void deleteUserCntDataPerInterval() { this->userCntDataPerInterval_ = nullptr;};
    inline const DescribeRtcUserCntDataResponseBody::UserCntDataPerInterval & getUserCntDataPerInterval() const { DARABONBA_PTR_GET_CONST(userCntDataPerInterval_, DescribeRtcUserCntDataResponseBody::UserCntDataPerInterval) };
    inline DescribeRtcUserCntDataResponseBody::UserCntDataPerInterval getUserCntDataPerInterval() { DARABONBA_PTR_GET(userCntDataPerInterval_, DescribeRtcUserCntDataResponseBody::UserCntDataPerInterval) };
    inline DescribeRtcUserCntDataResponseBody& setUserCntDataPerInterval(const DescribeRtcUserCntDataResponseBody::UserCntDataPerInterval & userCntDataPerInterval) { DARABONBA_PTR_SET_VALUE(userCntDataPerInterval_, userCntDataPerInterval) };
    inline DescribeRtcUserCntDataResponseBody& setUserCntDataPerInterval(DescribeRtcUserCntDataResponseBody::UserCntDataPerInterval && userCntDataPerInterval) { DARABONBA_PTR_SET_RVALUE(userCntDataPerInterval_, userCntDataPerInterval) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeRtcUserCntDataResponseBody::UserCntDataPerInterval> userCntDataPerInterval_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
