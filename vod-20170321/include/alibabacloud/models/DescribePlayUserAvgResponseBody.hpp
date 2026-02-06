// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYUSERAVGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYUSERAVGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribePlayUserAvgResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlayUserAvgResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserPlayStatisAvgs, userPlayStatisAvgs_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlayUserAvgResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserPlayStatisAvgs, userPlayStatisAvgs_);
    };
    DescribePlayUserAvgResponseBody() = default ;
    DescribePlayUserAvgResponseBody(const DescribePlayUserAvgResponseBody &) = default ;
    DescribePlayUserAvgResponseBody(DescribePlayUserAvgResponseBody &&) = default ;
    DescribePlayUserAvgResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlayUserAvgResponseBody() = default ;
    DescribePlayUserAvgResponseBody& operator=(const DescribePlayUserAvgResponseBody &) = default ;
    DescribePlayUserAvgResponseBody& operator=(DescribePlayUserAvgResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserPlayStatisAvgs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserPlayStatisAvgs& obj) { 
        DARABONBA_PTR_TO_JSON(UserPlayStatisAvg, userPlayStatisAvg_);
      };
      friend void from_json(const Darabonba::Json& j, UserPlayStatisAvgs& obj) { 
        DARABONBA_PTR_FROM_JSON(UserPlayStatisAvg, userPlayStatisAvg_);
      };
      UserPlayStatisAvgs() = default ;
      UserPlayStatisAvgs(const UserPlayStatisAvgs &) = default ;
      UserPlayStatisAvgs(UserPlayStatisAvgs &&) = default ;
      UserPlayStatisAvgs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserPlayStatisAvgs() = default ;
      UserPlayStatisAvgs& operator=(const UserPlayStatisAvgs &) = default ;
      UserPlayStatisAvgs& operator=(UserPlayStatisAvgs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UserPlayStatisAvg : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UserPlayStatisAvg& obj) { 
          DARABONBA_PTR_TO_JSON(AvgPlayCount, avgPlayCount_);
          DARABONBA_PTR_TO_JSON(AvgPlayDuration, avgPlayDuration_);
          DARABONBA_PTR_TO_JSON(Date, date_);
        };
        friend void from_json(const Darabonba::Json& j, UserPlayStatisAvg& obj) { 
          DARABONBA_PTR_FROM_JSON(AvgPlayCount, avgPlayCount_);
          DARABONBA_PTR_FROM_JSON(AvgPlayDuration, avgPlayDuration_);
          DARABONBA_PTR_FROM_JSON(Date, date_);
        };
        UserPlayStatisAvg() = default ;
        UserPlayStatisAvg(const UserPlayStatisAvg &) = default ;
        UserPlayStatisAvg(UserPlayStatisAvg &&) = default ;
        UserPlayStatisAvg(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UserPlayStatisAvg() = default ;
        UserPlayStatisAvg& operator=(const UserPlayStatisAvg &) = default ;
        UserPlayStatisAvg& operator=(UserPlayStatisAvg &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->avgPlayCount_ == nullptr
        && this->avgPlayDuration_ == nullptr && this->date_ == nullptr; };
        // avgPlayCount Field Functions 
        bool hasAvgPlayCount() const { return this->avgPlayCount_ != nullptr;};
        void deleteAvgPlayCount() { this->avgPlayCount_ = nullptr;};
        inline string getAvgPlayCount() const { DARABONBA_PTR_GET_DEFAULT(avgPlayCount_, "") };
        inline UserPlayStatisAvg& setAvgPlayCount(string avgPlayCount) { DARABONBA_PTR_SET_VALUE(avgPlayCount_, avgPlayCount) };


        // avgPlayDuration Field Functions 
        bool hasAvgPlayDuration() const { return this->avgPlayDuration_ != nullptr;};
        void deleteAvgPlayDuration() { this->avgPlayDuration_ = nullptr;};
        inline string getAvgPlayDuration() const { DARABONBA_PTR_GET_DEFAULT(avgPlayDuration_, "") };
        inline UserPlayStatisAvg& setAvgPlayDuration(string avgPlayDuration) { DARABONBA_PTR_SET_VALUE(avgPlayDuration_, avgPlayDuration) };


        // date Field Functions 
        bool hasDate() const { return this->date_ != nullptr;};
        void deleteDate() { this->date_ = nullptr;};
        inline string getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
        inline UserPlayStatisAvg& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


      protected:
        // The average number of video views.
        shared_ptr<string> avgPlayCount_ {};
        // The average playback duration. Unit: milliseconds.
        shared_ptr<string> avgPlayDuration_ {};
        // The date when the statistics were generated. The date follows the *yyyy-MM-dd* format.
        shared_ptr<string> date_ {};
      };

      virtual bool empty() const override { return this->userPlayStatisAvg_ == nullptr; };
      // userPlayStatisAvg Field Functions 
      bool hasUserPlayStatisAvg() const { return this->userPlayStatisAvg_ != nullptr;};
      void deleteUserPlayStatisAvg() { this->userPlayStatisAvg_ = nullptr;};
      inline const vector<UserPlayStatisAvgs::UserPlayStatisAvg> & getUserPlayStatisAvg() const { DARABONBA_PTR_GET_CONST(userPlayStatisAvg_, vector<UserPlayStatisAvgs::UserPlayStatisAvg>) };
      inline vector<UserPlayStatisAvgs::UserPlayStatisAvg> getUserPlayStatisAvg() { DARABONBA_PTR_GET(userPlayStatisAvg_, vector<UserPlayStatisAvgs::UserPlayStatisAvg>) };
      inline UserPlayStatisAvgs& setUserPlayStatisAvg(const vector<UserPlayStatisAvgs::UserPlayStatisAvg> & userPlayStatisAvg) { DARABONBA_PTR_SET_VALUE(userPlayStatisAvg_, userPlayStatisAvg) };
      inline UserPlayStatisAvgs& setUserPlayStatisAvg(vector<UserPlayStatisAvgs::UserPlayStatisAvg> && userPlayStatisAvg) { DARABONBA_PTR_SET_RVALUE(userPlayStatisAvg_, userPlayStatisAvg) };


    protected:
      shared_ptr<vector<UserPlayStatisAvgs::UserPlayStatisAvg>> userPlayStatisAvg_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->userPlayStatisAvgs_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePlayUserAvgResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userPlayStatisAvgs Field Functions 
    bool hasUserPlayStatisAvgs() const { return this->userPlayStatisAvgs_ != nullptr;};
    void deleteUserPlayStatisAvgs() { this->userPlayStatisAvgs_ = nullptr;};
    inline const DescribePlayUserAvgResponseBody::UserPlayStatisAvgs & getUserPlayStatisAvgs() const { DARABONBA_PTR_GET_CONST(userPlayStatisAvgs_, DescribePlayUserAvgResponseBody::UserPlayStatisAvgs) };
    inline DescribePlayUserAvgResponseBody::UserPlayStatisAvgs getUserPlayStatisAvgs() { DARABONBA_PTR_GET(userPlayStatisAvgs_, DescribePlayUserAvgResponseBody::UserPlayStatisAvgs) };
    inline DescribePlayUserAvgResponseBody& setUserPlayStatisAvgs(const DescribePlayUserAvgResponseBody::UserPlayStatisAvgs & userPlayStatisAvgs) { DARABONBA_PTR_SET_VALUE(userPlayStatisAvgs_, userPlayStatisAvgs) };
    inline DescribePlayUserAvgResponseBody& setUserPlayStatisAvgs(DescribePlayUserAvgResponseBody::UserPlayStatisAvgs && userPlayStatisAvgs) { DARABONBA_PTR_SET_RVALUE(userPlayStatisAvgs_, userPlayStatisAvgs) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The statistics on average playback each day.
    shared_ptr<DescribePlayUserAvgResponseBody::UserPlayStatisAvgs> userPlayStatisAvgs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
