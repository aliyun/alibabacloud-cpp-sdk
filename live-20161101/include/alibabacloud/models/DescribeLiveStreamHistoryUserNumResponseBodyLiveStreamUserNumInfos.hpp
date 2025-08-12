// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMHISTORYUSERNUMRESPONSEBODYLIVESTREAMUSERNUMINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMHISTORYUSERNUMRESPONSEBODYLIVESTREAMUSERNUMINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveStreamHistoryUserNumResponseBodyLiveStreamUserNumInfosLiveStreamUserNumInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamHistoryUserNumResponseBodyLiveStreamUserNumInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamHistoryUserNumResponseBodyLiveStreamUserNumInfos& obj) { 
      DARABONBA_PTR_TO_JSON(LiveStreamUserNumInfo, liveStreamUserNumInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamHistoryUserNumResponseBodyLiveStreamUserNumInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveStreamUserNumInfo, liveStreamUserNumInfo_);
    };
    DescribeLiveStreamHistoryUserNumResponseBodyLiveStreamUserNumInfos() = default ;
    DescribeLiveStreamHistoryUserNumResponseBodyLiveStreamUserNumInfos(const DescribeLiveStreamHistoryUserNumResponseBodyLiveStreamUserNumInfos &) = default ;
    DescribeLiveStreamHistoryUserNumResponseBodyLiveStreamUserNumInfos(DescribeLiveStreamHistoryUserNumResponseBodyLiveStreamUserNumInfos &&) = default ;
    DescribeLiveStreamHistoryUserNumResponseBodyLiveStreamUserNumInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamHistoryUserNumResponseBodyLiveStreamUserNumInfos() = default ;
    DescribeLiveStreamHistoryUserNumResponseBodyLiveStreamUserNumInfos& operator=(const DescribeLiveStreamHistoryUserNumResponseBodyLiveStreamUserNumInfos &) = default ;
    DescribeLiveStreamHistoryUserNumResponseBodyLiveStreamUserNumInfos& operator=(DescribeLiveStreamHistoryUserNumResponseBodyLiveStreamUserNumInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->liveStreamUserNumInfo_ != nullptr; };
    // liveStreamUserNumInfo Field Functions 
    bool hasLiveStreamUserNumInfo() const { return this->liveStreamUserNumInfo_ != nullptr;};
    void deleteLiveStreamUserNumInfo() { this->liveStreamUserNumInfo_ = nullptr;};
    inline const vector<Models::DescribeLiveStreamHistoryUserNumResponseBodyLiveStreamUserNumInfosLiveStreamUserNumInfo> & liveStreamUserNumInfo() const { DARABONBA_PTR_GET_CONST(liveStreamUserNumInfo_, vector<Models::DescribeLiveStreamHistoryUserNumResponseBodyLiveStreamUserNumInfosLiveStreamUserNumInfo>) };
    inline vector<Models::DescribeLiveStreamHistoryUserNumResponseBodyLiveStreamUserNumInfosLiveStreamUserNumInfo> liveStreamUserNumInfo() { DARABONBA_PTR_GET(liveStreamUserNumInfo_, vector<Models::DescribeLiveStreamHistoryUserNumResponseBodyLiveStreamUserNumInfosLiveStreamUserNumInfo>) };
    inline DescribeLiveStreamHistoryUserNumResponseBodyLiveStreamUserNumInfos& setLiveStreamUserNumInfo(const vector<Models::DescribeLiveStreamHistoryUserNumResponseBodyLiveStreamUserNumInfosLiveStreamUserNumInfo> & liveStreamUserNumInfo) { DARABONBA_PTR_SET_VALUE(liveStreamUserNumInfo_, liveStreamUserNumInfo) };
    inline DescribeLiveStreamHistoryUserNumResponseBodyLiveStreamUserNumInfos& setLiveStreamUserNumInfo(vector<Models::DescribeLiveStreamHistoryUserNumResponseBodyLiveStreamUserNumInfosLiveStreamUserNumInfo> && liveStreamUserNumInfo) { DARABONBA_PTR_SET_RVALUE(liveStreamUserNumInfo_, liveStreamUserNumInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveStreamHistoryUserNumResponseBodyLiveStreamUserNumInfosLiveStreamUserNumInfo>> liveStreamUserNumInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
