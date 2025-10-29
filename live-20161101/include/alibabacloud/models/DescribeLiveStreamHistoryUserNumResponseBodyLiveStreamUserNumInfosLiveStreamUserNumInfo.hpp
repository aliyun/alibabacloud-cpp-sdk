// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMHISTORYUSERNUMRESPONSEBODYLIVESTREAMUSERNUMINFOSLIVESTREAMUSERNUMINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMHISTORYUSERNUMRESPONSEBODYLIVESTREAMUSERNUMINFOSLIVESTREAMUSERNUMINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamHistoryUserNumResponseBodyLiveStreamUserNumInfosLiveStreamUserNumInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamHistoryUserNumResponseBodyLiveStreamUserNumInfosLiveStreamUserNumInfo& obj) { 
      DARABONBA_PTR_TO_JSON(StreamTime, streamTime_);
      DARABONBA_PTR_TO_JSON(UserNum, userNum_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamHistoryUserNumResponseBodyLiveStreamUserNumInfosLiveStreamUserNumInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(StreamTime, streamTime_);
      DARABONBA_PTR_FROM_JSON(UserNum, userNum_);
    };
    DescribeLiveStreamHistoryUserNumResponseBodyLiveStreamUserNumInfosLiveStreamUserNumInfo() = default ;
    DescribeLiveStreamHistoryUserNumResponseBodyLiveStreamUserNumInfosLiveStreamUserNumInfo(const DescribeLiveStreamHistoryUserNumResponseBodyLiveStreamUserNumInfosLiveStreamUserNumInfo &) = default ;
    DescribeLiveStreamHistoryUserNumResponseBodyLiveStreamUserNumInfosLiveStreamUserNumInfo(DescribeLiveStreamHistoryUserNumResponseBodyLiveStreamUserNumInfosLiveStreamUserNumInfo &&) = default ;
    DescribeLiveStreamHistoryUserNumResponseBodyLiveStreamUserNumInfosLiveStreamUserNumInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamHistoryUserNumResponseBodyLiveStreamUserNumInfosLiveStreamUserNumInfo() = default ;
    DescribeLiveStreamHistoryUserNumResponseBodyLiveStreamUserNumInfosLiveStreamUserNumInfo& operator=(const DescribeLiveStreamHistoryUserNumResponseBodyLiveStreamUserNumInfosLiveStreamUserNumInfo &) = default ;
    DescribeLiveStreamHistoryUserNumResponseBodyLiveStreamUserNumInfosLiveStreamUserNumInfo& operator=(DescribeLiveStreamHistoryUserNumResponseBodyLiveStreamUserNumInfosLiveStreamUserNumInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->streamTime_ == nullptr
        && return this->userNum_ == nullptr; };
    // streamTime Field Functions 
    bool hasStreamTime() const { return this->streamTime_ != nullptr;};
    void deleteStreamTime() { this->streamTime_ = nullptr;};
    inline string streamTime() const { DARABONBA_PTR_GET_DEFAULT(streamTime_, "") };
    inline DescribeLiveStreamHistoryUserNumResponseBodyLiveStreamUserNumInfosLiveStreamUserNumInfo& setStreamTime(string streamTime) { DARABONBA_PTR_SET_VALUE(streamTime_, streamTime) };


    // userNum Field Functions 
    bool hasUserNum() const { return this->userNum_ != nullptr;};
    void deleteUserNum() { this->userNum_ = nullptr;};
    inline string userNum() const { DARABONBA_PTR_GET_DEFAULT(userNum_, "") };
    inline DescribeLiveStreamHistoryUserNumResponseBodyLiveStreamUserNumInfosLiveStreamUserNumInfo& setUserNum(string userNum) { DARABONBA_PTR_SET_VALUE(userNum_, userNum) };


  protected:
    // The time when the stream started. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> streamTime_ = nullptr;
    // The number of users at the current point in time.
    std::shared_ptr<string> userNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
