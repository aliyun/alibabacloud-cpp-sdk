// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRACKLISTBYMAILFROMANDTAGNAMERESPONSEBODYTRACKLISTSTAT_HPP_
#define ALIBABACLOUD_MODELS_GETTRACKLISTBYMAILFROMANDTAGNAMERESPONSEBODYTRACKLISTSTAT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class GetTrackListByMailFromAndTagNameResponseBodyTrackListStat : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTrackListByMailFromAndTagNameResponseBodyTrackListStat& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(RcptClickCount, rcptClickCount_);
      DARABONBA_PTR_TO_JSON(RcptClickRate, rcptClickRate_);
      DARABONBA_PTR_TO_JSON(RcptOpenCount, rcptOpenCount_);
      DARABONBA_PTR_TO_JSON(RcptOpenRate, rcptOpenRate_);
      DARABONBA_PTR_TO_JSON(RcptUniqueClickCount, rcptUniqueClickCount_);
      DARABONBA_PTR_TO_JSON(RcptUniqueClickRate, rcptUniqueClickRate_);
      DARABONBA_PTR_TO_JSON(RcptUniqueOpenCount, rcptUniqueOpenCount_);
      DARABONBA_PTR_TO_JSON(RcptUniqueOpenRate, rcptUniqueOpenRate_);
      DARABONBA_PTR_TO_JSON(TotalNumber, totalNumber_);
    };
    friend void from_json(const Darabonba::Json& j, GetTrackListByMailFromAndTagNameResponseBodyTrackListStat& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(RcptClickCount, rcptClickCount_);
      DARABONBA_PTR_FROM_JSON(RcptClickRate, rcptClickRate_);
      DARABONBA_PTR_FROM_JSON(RcptOpenCount, rcptOpenCount_);
      DARABONBA_PTR_FROM_JSON(RcptOpenRate, rcptOpenRate_);
      DARABONBA_PTR_FROM_JSON(RcptUniqueClickCount, rcptUniqueClickCount_);
      DARABONBA_PTR_FROM_JSON(RcptUniqueClickRate, rcptUniqueClickRate_);
      DARABONBA_PTR_FROM_JSON(RcptUniqueOpenCount, rcptUniqueOpenCount_);
      DARABONBA_PTR_FROM_JSON(RcptUniqueOpenRate, rcptUniqueOpenRate_);
      DARABONBA_PTR_FROM_JSON(TotalNumber, totalNumber_);
    };
    GetTrackListByMailFromAndTagNameResponseBodyTrackListStat() = default ;
    GetTrackListByMailFromAndTagNameResponseBodyTrackListStat(const GetTrackListByMailFromAndTagNameResponseBodyTrackListStat &) = default ;
    GetTrackListByMailFromAndTagNameResponseBodyTrackListStat(GetTrackListByMailFromAndTagNameResponseBodyTrackListStat &&) = default ;
    GetTrackListByMailFromAndTagNameResponseBodyTrackListStat(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTrackListByMailFromAndTagNameResponseBodyTrackListStat() = default ;
    GetTrackListByMailFromAndTagNameResponseBodyTrackListStat& operator=(const GetTrackListByMailFromAndTagNameResponseBodyTrackListStat &) = default ;
    GetTrackListByMailFromAndTagNameResponseBodyTrackListStat& operator=(GetTrackListByMailFromAndTagNameResponseBodyTrackListStat &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->rcptClickCount_ != nullptr && this->rcptClickRate_ != nullptr && this->rcptOpenCount_ != nullptr && this->rcptOpenRate_ != nullptr && this->rcptUniqueClickCount_ != nullptr
        && this->rcptUniqueClickRate_ != nullptr && this->rcptUniqueOpenCount_ != nullptr && this->rcptUniqueOpenRate_ != nullptr && this->totalNumber_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetTrackListByMailFromAndTagNameResponseBodyTrackListStat& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // rcptClickCount Field Functions 
    bool hasRcptClickCount() const { return this->rcptClickCount_ != nullptr;};
    void deleteRcptClickCount() { this->rcptClickCount_ = nullptr;};
    inline string rcptClickCount() const { DARABONBA_PTR_GET_DEFAULT(rcptClickCount_, "") };
    inline GetTrackListByMailFromAndTagNameResponseBodyTrackListStat& setRcptClickCount(string rcptClickCount) { DARABONBA_PTR_SET_VALUE(rcptClickCount_, rcptClickCount) };


    // rcptClickRate Field Functions 
    bool hasRcptClickRate() const { return this->rcptClickRate_ != nullptr;};
    void deleteRcptClickRate() { this->rcptClickRate_ = nullptr;};
    inline string rcptClickRate() const { DARABONBA_PTR_GET_DEFAULT(rcptClickRate_, "") };
    inline GetTrackListByMailFromAndTagNameResponseBodyTrackListStat& setRcptClickRate(string rcptClickRate) { DARABONBA_PTR_SET_VALUE(rcptClickRate_, rcptClickRate) };


    // rcptOpenCount Field Functions 
    bool hasRcptOpenCount() const { return this->rcptOpenCount_ != nullptr;};
    void deleteRcptOpenCount() { this->rcptOpenCount_ = nullptr;};
    inline string rcptOpenCount() const { DARABONBA_PTR_GET_DEFAULT(rcptOpenCount_, "") };
    inline GetTrackListByMailFromAndTagNameResponseBodyTrackListStat& setRcptOpenCount(string rcptOpenCount) { DARABONBA_PTR_SET_VALUE(rcptOpenCount_, rcptOpenCount) };


    // rcptOpenRate Field Functions 
    bool hasRcptOpenRate() const { return this->rcptOpenRate_ != nullptr;};
    void deleteRcptOpenRate() { this->rcptOpenRate_ = nullptr;};
    inline string rcptOpenRate() const { DARABONBA_PTR_GET_DEFAULT(rcptOpenRate_, "") };
    inline GetTrackListByMailFromAndTagNameResponseBodyTrackListStat& setRcptOpenRate(string rcptOpenRate) { DARABONBA_PTR_SET_VALUE(rcptOpenRate_, rcptOpenRate) };


    // rcptUniqueClickCount Field Functions 
    bool hasRcptUniqueClickCount() const { return this->rcptUniqueClickCount_ != nullptr;};
    void deleteRcptUniqueClickCount() { this->rcptUniqueClickCount_ = nullptr;};
    inline string rcptUniqueClickCount() const { DARABONBA_PTR_GET_DEFAULT(rcptUniqueClickCount_, "") };
    inline GetTrackListByMailFromAndTagNameResponseBodyTrackListStat& setRcptUniqueClickCount(string rcptUniqueClickCount) { DARABONBA_PTR_SET_VALUE(rcptUniqueClickCount_, rcptUniqueClickCount) };


    // rcptUniqueClickRate Field Functions 
    bool hasRcptUniqueClickRate() const { return this->rcptUniqueClickRate_ != nullptr;};
    void deleteRcptUniqueClickRate() { this->rcptUniqueClickRate_ = nullptr;};
    inline string rcptUniqueClickRate() const { DARABONBA_PTR_GET_DEFAULT(rcptUniqueClickRate_, "") };
    inline GetTrackListByMailFromAndTagNameResponseBodyTrackListStat& setRcptUniqueClickRate(string rcptUniqueClickRate) { DARABONBA_PTR_SET_VALUE(rcptUniqueClickRate_, rcptUniqueClickRate) };


    // rcptUniqueOpenCount Field Functions 
    bool hasRcptUniqueOpenCount() const { return this->rcptUniqueOpenCount_ != nullptr;};
    void deleteRcptUniqueOpenCount() { this->rcptUniqueOpenCount_ = nullptr;};
    inline string rcptUniqueOpenCount() const { DARABONBA_PTR_GET_DEFAULT(rcptUniqueOpenCount_, "") };
    inline GetTrackListByMailFromAndTagNameResponseBodyTrackListStat& setRcptUniqueOpenCount(string rcptUniqueOpenCount) { DARABONBA_PTR_SET_VALUE(rcptUniqueOpenCount_, rcptUniqueOpenCount) };


    // rcptUniqueOpenRate Field Functions 
    bool hasRcptUniqueOpenRate() const { return this->rcptUniqueOpenRate_ != nullptr;};
    void deleteRcptUniqueOpenRate() { this->rcptUniqueOpenRate_ = nullptr;};
    inline string rcptUniqueOpenRate() const { DARABONBA_PTR_GET_DEFAULT(rcptUniqueOpenRate_, "") };
    inline GetTrackListByMailFromAndTagNameResponseBodyTrackListStat& setRcptUniqueOpenRate(string rcptUniqueOpenRate) { DARABONBA_PTR_SET_VALUE(rcptUniqueOpenRate_, rcptUniqueOpenRate) };


    // totalNumber Field Functions 
    bool hasTotalNumber() const { return this->totalNumber_ != nullptr;};
    void deleteTotalNumber() { this->totalNumber_ = nullptr;};
    inline string totalNumber() const { DARABONBA_PTR_GET_DEFAULT(totalNumber_, "") };
    inline GetTrackListByMailFromAndTagNameResponseBodyTrackListStat& setTotalNumber(string totalNumber) { DARABONBA_PTR_SET_VALUE(totalNumber_, totalNumber) };


  protected:
    // Creation time
    std::shared_ptr<string> createTime_ = nullptr;
    // Click count
    std::shared_ptr<string> rcptClickCount_ = nullptr;
    // Click rate
    std::shared_ptr<string> rcptClickRate_ = nullptr;
    // Number of opens
    std::shared_ptr<string> rcptOpenCount_ = nullptr;
    // Open rate
    std::shared_ptr<string> rcptOpenRate_ = nullptr;
    // Unique click count
    std::shared_ptr<string> rcptUniqueClickCount_ = nullptr;
    // Unique click rate
    std::shared_ptr<string> rcptUniqueClickRate_ = nullptr;
    // Unique open count
    std::shared_ptr<string> rcptUniqueOpenCount_ = nullptr;
    // Unique open rate
    std::shared_ptr<string> rcptUniqueOpenRate_ = nullptr;
    // Total number
    std::shared_ptr<string> totalNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
