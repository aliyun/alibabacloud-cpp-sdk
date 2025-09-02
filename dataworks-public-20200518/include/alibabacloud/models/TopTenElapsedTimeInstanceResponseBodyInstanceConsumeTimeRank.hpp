// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TOPTENELAPSEDTIMEINSTANCERESPONSEBODYINSTANCECONSUMETIMERANK_HPP_
#define ALIBABACLOUD_MODELS_TOPTENELAPSEDTIMEINSTANCERESPONSEBODYINSTANCECONSUMETIMERANK_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRankConsumeTimeRank.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRank : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRank& obj) { 
      DARABONBA_PTR_TO_JSON(ConsumeTimeRank, consumeTimeRank_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRank& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsumeTimeRank, consumeTimeRank_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRank() = default ;
    TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRank(const TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRank &) = default ;
    TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRank(TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRank &&) = default ;
    TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRank(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRank() = default ;
    TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRank& operator=(const TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRank &) = default ;
    TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRank& operator=(TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRank &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->consumeTimeRank_ != nullptr
        && this->updateTime_ != nullptr; };
    // consumeTimeRank Field Functions 
    bool hasConsumeTimeRank() const { return this->consumeTimeRank_ != nullptr;};
    void deleteConsumeTimeRank() { this->consumeTimeRank_ = nullptr;};
    inline const vector<Models::TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRankConsumeTimeRank> & consumeTimeRank() const { DARABONBA_PTR_GET_CONST(consumeTimeRank_, vector<Models::TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRankConsumeTimeRank>) };
    inline vector<Models::TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRankConsumeTimeRank> consumeTimeRank() { DARABONBA_PTR_GET(consumeTimeRank_, vector<Models::TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRankConsumeTimeRank>) };
    inline TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRank& setConsumeTimeRank(const vector<Models::TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRankConsumeTimeRank> & consumeTimeRank) { DARABONBA_PTR_SET_VALUE(consumeTimeRank_, consumeTimeRank) };
    inline TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRank& setConsumeTimeRank(vector<Models::TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRankConsumeTimeRank> && consumeTimeRank) { DARABONBA_PTR_SET_RVALUE(consumeTimeRank_, consumeTimeRank) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRank& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The ranking data of the running durations of the instances.
    std::shared_ptr<vector<Models::TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRankConsumeTimeRank>> consumeTimeRank_ = nullptr;
    // The timestamp at which the ranking of the running durations of the instances was updated.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
