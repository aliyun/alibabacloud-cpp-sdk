// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHONEYPOTATTACKSTATISTICSRESPONSEBODYDATAHONEYPOTATTACKSTATISTICS_HPP_
#define ALIBABACLOUD_MODELS_GETHONEYPOTATTACKSTATISTICSRESPONSEBODYDATAHONEYPOTATTACKSTATISTICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetHoneypotAttackStatisticsResponseBodyDataHoneypotAttackStatistics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHoneypotAttackStatisticsResponseBodyDataHoneypotAttackStatistics& obj) { 
      DARABONBA_PTR_TO_JSON(StatisticsCount, statisticsCount_);
      DARABONBA_PTR_TO_JSON(StatisticsValue, statisticsValue_);
    };
    friend void from_json(const Darabonba::Json& j, GetHoneypotAttackStatisticsResponseBodyDataHoneypotAttackStatistics& obj) { 
      DARABONBA_PTR_FROM_JSON(StatisticsCount, statisticsCount_);
      DARABONBA_PTR_FROM_JSON(StatisticsValue, statisticsValue_);
    };
    GetHoneypotAttackStatisticsResponseBodyDataHoneypotAttackStatistics() = default ;
    GetHoneypotAttackStatisticsResponseBodyDataHoneypotAttackStatistics(const GetHoneypotAttackStatisticsResponseBodyDataHoneypotAttackStatistics &) = default ;
    GetHoneypotAttackStatisticsResponseBodyDataHoneypotAttackStatistics(GetHoneypotAttackStatisticsResponseBodyDataHoneypotAttackStatistics &&) = default ;
    GetHoneypotAttackStatisticsResponseBodyDataHoneypotAttackStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHoneypotAttackStatisticsResponseBodyDataHoneypotAttackStatistics() = default ;
    GetHoneypotAttackStatisticsResponseBodyDataHoneypotAttackStatistics& operator=(const GetHoneypotAttackStatisticsResponseBodyDataHoneypotAttackStatistics &) = default ;
    GetHoneypotAttackStatisticsResponseBodyDataHoneypotAttackStatistics& operator=(GetHoneypotAttackStatisticsResponseBodyDataHoneypotAttackStatistics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->statisticsCount_ == nullptr
        && return this->statisticsValue_ == nullptr; };
    // statisticsCount Field Functions 
    bool hasStatisticsCount() const { return this->statisticsCount_ != nullptr;};
    void deleteStatisticsCount() { this->statisticsCount_ = nullptr;};
    inline int32_t statisticsCount() const { DARABONBA_PTR_GET_DEFAULT(statisticsCount_, 0) };
    inline GetHoneypotAttackStatisticsResponseBodyDataHoneypotAttackStatistics& setStatisticsCount(int32_t statisticsCount) { DARABONBA_PTR_SET_VALUE(statisticsCount_, statisticsCount) };


    // statisticsValue Field Functions 
    bool hasStatisticsValue() const { return this->statisticsValue_ != nullptr;};
    void deleteStatisticsValue() { this->statisticsValue_ = nullptr;};
    inline string statisticsValue() const { DARABONBA_PTR_GET_DEFAULT(statisticsValue_, "") };
    inline GetHoneypotAttackStatisticsResponseBodyDataHoneypotAttackStatistics& setStatisticsValue(string statisticsValue) { DARABONBA_PTR_SET_VALUE(statisticsValue_, statisticsValue) };


  protected:
    // The number of times the value is counted.
    std::shared_ptr<int32_t> statisticsCount_ = nullptr;
    // The statistical value.
    std::shared_ptr<string> statisticsValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
