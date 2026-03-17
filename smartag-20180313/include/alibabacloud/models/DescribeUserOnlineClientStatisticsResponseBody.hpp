// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERONLINECLIENTSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERONLINECLIENTSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class DescribeUserOnlineClientStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserOnlineClientStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserStatistics, userStatistics_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserOnlineClientStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserStatistics, userStatistics_);
    };
    DescribeUserOnlineClientStatisticsResponseBody() = default ;
    DescribeUserOnlineClientStatisticsResponseBody(const DescribeUserOnlineClientStatisticsResponseBody &) = default ;
    DescribeUserOnlineClientStatisticsResponseBody(DescribeUserOnlineClientStatisticsResponseBody &&) = default ;
    DescribeUserOnlineClientStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserOnlineClientStatisticsResponseBody() = default ;
    DescribeUserOnlineClientStatisticsResponseBody& operator=(const DescribeUserOnlineClientStatisticsResponseBody &) = default ;
    DescribeUserOnlineClientStatisticsResponseBody& operator=(DescribeUserOnlineClientStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserStatistics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserStatistics& obj) { 
        DARABONBA_PTR_TO_JSON(Statistics, statistics_);
      };
      friend void from_json(const Darabonba::Json& j, UserStatistics& obj) { 
        DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
      };
      UserStatistics() = default ;
      UserStatistics(const UserStatistics &) = default ;
      UserStatistics(UserStatistics &&) = default ;
      UserStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserStatistics() = default ;
      UserStatistics& operator=(const UserStatistics &) = default ;
      UserStatistics& operator=(UserStatistics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Statistics : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Statistics& obj) { 
          DARABONBA_PTR_TO_JSON(OnlineCount, onlineCount_);
          DARABONBA_PTR_TO_JSON(UserName, userName_);
        };
        friend void from_json(const Darabonba::Json& j, Statistics& obj) { 
          DARABONBA_PTR_FROM_JSON(OnlineCount, onlineCount_);
          DARABONBA_PTR_FROM_JSON(UserName, userName_);
        };
        Statistics() = default ;
        Statistics(const Statistics &) = default ;
        Statistics(Statistics &&) = default ;
        Statistics(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Statistics() = default ;
        Statistics& operator=(const Statistics &) = default ;
        Statistics& operator=(Statistics &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->onlineCount_ == nullptr
        && this->userName_ == nullptr; };
        // onlineCount Field Functions 
        bool hasOnlineCount() const { return this->onlineCount_ != nullptr;};
        void deleteOnlineCount() { this->onlineCount_ = nullptr;};
        inline string getOnlineCount() const { DARABONBA_PTR_GET_DEFAULT(onlineCount_, "") };
        inline Statistics& setOnlineCount(string onlineCount) { DARABONBA_PTR_SET_VALUE(onlineCount_, onlineCount) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
        inline Statistics& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      protected:
        shared_ptr<string> onlineCount_ {};
        shared_ptr<string> userName_ {};
      };

      virtual bool empty() const override { return this->statistics_ == nullptr; };
      // statistics Field Functions 
      bool hasStatistics() const { return this->statistics_ != nullptr;};
      void deleteStatistics() { this->statistics_ = nullptr;};
      inline const vector<UserStatistics::Statistics> & getStatistics() const { DARABONBA_PTR_GET_CONST(statistics_, vector<UserStatistics::Statistics>) };
      inline vector<UserStatistics::Statistics> getStatistics() { DARABONBA_PTR_GET(statistics_, vector<UserStatistics::Statistics>) };
      inline UserStatistics& setStatistics(const vector<UserStatistics::Statistics> & statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };
      inline UserStatistics& setStatistics(vector<UserStatistics::Statistics> && statistics) { DARABONBA_PTR_SET_RVALUE(statistics_, statistics) };


    protected:
      shared_ptr<vector<UserStatistics::Statistics>> statistics_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->userStatistics_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserOnlineClientStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userStatistics Field Functions 
    bool hasUserStatistics() const { return this->userStatistics_ != nullptr;};
    void deleteUserStatistics() { this->userStatistics_ = nullptr;};
    inline const DescribeUserOnlineClientStatisticsResponseBody::UserStatistics & getUserStatistics() const { DARABONBA_PTR_GET_CONST(userStatistics_, DescribeUserOnlineClientStatisticsResponseBody::UserStatistics) };
    inline DescribeUserOnlineClientStatisticsResponseBody::UserStatistics getUserStatistics() { DARABONBA_PTR_GET(userStatistics_, DescribeUserOnlineClientStatisticsResponseBody::UserStatistics) };
    inline DescribeUserOnlineClientStatisticsResponseBody& setUserStatistics(const DescribeUserOnlineClientStatisticsResponseBody::UserStatistics & userStatistics) { DARABONBA_PTR_SET_VALUE(userStatistics_, userStatistics) };
    inline DescribeUserOnlineClientStatisticsResponseBody& setUserStatistics(DescribeUserOnlineClientStatisticsResponseBody::UserStatistics && userStatistics) { DARABONBA_PTR_SET_RVALUE(userStatistics_, userStatistics) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeUserOnlineClientStatisticsResponseBody::UserStatistics> userStatistics_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
