// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDERSTATISTICSBYTAGNAMEANDBATCHIDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SENDERSTATISTICSBYTAGNAMEANDBATCHIDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SenderStatisticsByTagNameAndBatchIDResponseBodyDataStat.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class SenderStatisticsByTagNameAndBatchIDResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SenderStatisticsByTagNameAndBatchIDResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(stat, stat_);
    };
    friend void from_json(const Darabonba::Json& j, SenderStatisticsByTagNameAndBatchIDResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(stat, stat_);
    };
    SenderStatisticsByTagNameAndBatchIDResponseBodyData() = default ;
    SenderStatisticsByTagNameAndBatchIDResponseBodyData(const SenderStatisticsByTagNameAndBatchIDResponseBodyData &) = default ;
    SenderStatisticsByTagNameAndBatchIDResponseBodyData(SenderStatisticsByTagNameAndBatchIDResponseBodyData &&) = default ;
    SenderStatisticsByTagNameAndBatchIDResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SenderStatisticsByTagNameAndBatchIDResponseBodyData() = default ;
    SenderStatisticsByTagNameAndBatchIDResponseBodyData& operator=(const SenderStatisticsByTagNameAndBatchIDResponseBodyData &) = default ;
    SenderStatisticsByTagNameAndBatchIDResponseBodyData& operator=(SenderStatisticsByTagNameAndBatchIDResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->stat_ == nullptr; };
    // stat Field Functions 
    bool hasStat() const { return this->stat_ != nullptr;};
    void deleteStat() { this->stat_ = nullptr;};
    inline const vector<Models::SenderStatisticsByTagNameAndBatchIDResponseBodyDataStat> & stat() const { DARABONBA_PTR_GET_CONST(stat_, vector<Models::SenderStatisticsByTagNameAndBatchIDResponseBodyDataStat>) };
    inline vector<Models::SenderStatisticsByTagNameAndBatchIDResponseBodyDataStat> stat() { DARABONBA_PTR_GET(stat_, vector<Models::SenderStatisticsByTagNameAndBatchIDResponseBodyDataStat>) };
    inline SenderStatisticsByTagNameAndBatchIDResponseBodyData& setStat(const vector<Models::SenderStatisticsByTagNameAndBatchIDResponseBodyDataStat> & stat) { DARABONBA_PTR_SET_VALUE(stat_, stat) };
    inline SenderStatisticsByTagNameAndBatchIDResponseBodyData& setStat(vector<Models::SenderStatisticsByTagNameAndBatchIDResponseBodyDataStat> && stat) { DARABONBA_PTR_SET_RVALUE(stat_, stat) };


  protected:
    std::shared_ptr<vector<Models::SenderStatisticsByTagNameAndBatchIDResponseBodyDataStat>> stat_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
