// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTPSBYTIMERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETTPSBYTIMERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class GetTpsByTimeResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTpsByTimeResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(MaxTps, maxTps_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(tpsList, tpsList_);
    };
    friend void from_json(const Darabonba::Json& j, GetTpsByTimeResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(MaxTps, maxTps_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(tpsList, tpsList_);
    };
    GetTpsByTimeResponseBodyData() = default ;
    GetTpsByTimeResponseBodyData(const GetTpsByTimeResponseBodyData &) = default ;
    GetTpsByTimeResponseBodyData(GetTpsByTimeResponseBodyData &&) = default ;
    GetTpsByTimeResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTpsByTimeResponseBodyData() = default ;
    GetTpsByTimeResponseBodyData& operator=(const GetTpsByTimeResponseBodyData &) = default ;
    GetTpsByTimeResponseBodyData& operator=(GetTpsByTimeResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->maxTps_ == nullptr && return this->startTime_ == nullptr && return this->tpsList_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetTpsByTimeResponseBodyData& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // maxTps Field Functions 
    bool hasMaxTps() const { return this->maxTps_ != nullptr;};
    void deleteMaxTps() { this->maxTps_ = nullptr;};
    inline int32_t maxTps() const { DARABONBA_PTR_GET_DEFAULT(maxTps_, 0) };
    inline GetTpsByTimeResponseBodyData& setMaxTps(int32_t maxTps) { DARABONBA_PTR_SET_VALUE(maxTps_, maxTps) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetTpsByTimeResponseBodyData& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tpsList Field Functions 
    bool hasTpsList() const { return this->tpsList_ != nullptr;};
    void deleteTpsList() { this->tpsList_ = nullptr;};
    inline const vector<int32_t> & tpsList() const { DARABONBA_PTR_GET_CONST(tpsList_, vector<int32_t>) };
    inline vector<int32_t> tpsList() { DARABONBA_PTR_GET(tpsList_, vector<int32_t>) };
    inline GetTpsByTimeResponseBodyData& setTpsList(const vector<int32_t> & tpsList) { DARABONBA_PTR_SET_VALUE(tpsList_, tpsList) };
    inline GetTpsByTimeResponseBodyData& setTpsList(vector<int32_t> && tpsList) { DARABONBA_PTR_SET_RVALUE(tpsList_, tpsList) };


  protected:
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<int32_t> maxTps_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<vector<int32_t>> tpsList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
