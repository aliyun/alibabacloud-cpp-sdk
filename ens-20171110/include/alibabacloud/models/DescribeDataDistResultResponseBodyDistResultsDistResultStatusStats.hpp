// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATADISTRESULTRESPONSEBODYDISTRESULTSDISTRESULTSTATUSSTATS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATADISTRESULTRESPONSEBODYDISTRESULTSDISTRESULTSTATUSSTATS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDataDistResultResponseBodyDistResultsDistResultStatusStatsStatusStat.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeDataDistResultResponseBodyDistResultsDistResultStatusStats : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataDistResultResponseBodyDistResultsDistResultStatusStats& obj) { 
      DARABONBA_PTR_TO_JSON(StatusStat, statusStat_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataDistResultResponseBodyDistResultsDistResultStatusStats& obj) { 
      DARABONBA_PTR_FROM_JSON(StatusStat, statusStat_);
    };
    DescribeDataDistResultResponseBodyDistResultsDistResultStatusStats() = default ;
    DescribeDataDistResultResponseBodyDistResultsDistResultStatusStats(const DescribeDataDistResultResponseBodyDistResultsDistResultStatusStats &) = default ;
    DescribeDataDistResultResponseBodyDistResultsDistResultStatusStats(DescribeDataDistResultResponseBodyDistResultsDistResultStatusStats &&) = default ;
    DescribeDataDistResultResponseBodyDistResultsDistResultStatusStats(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataDistResultResponseBodyDistResultsDistResultStatusStats() = default ;
    DescribeDataDistResultResponseBodyDistResultsDistResultStatusStats& operator=(const DescribeDataDistResultResponseBodyDistResultsDistResultStatusStats &) = default ;
    DescribeDataDistResultResponseBodyDistResultsDistResultStatusStats& operator=(DescribeDataDistResultResponseBodyDistResultsDistResultStatusStats &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->statusStat_ != nullptr; };
    // statusStat Field Functions 
    bool hasStatusStat() const { return this->statusStat_ != nullptr;};
    void deleteStatusStat() { this->statusStat_ = nullptr;};
    inline const vector<Models::DescribeDataDistResultResponseBodyDistResultsDistResultStatusStatsStatusStat> & statusStat() const { DARABONBA_PTR_GET_CONST(statusStat_, vector<Models::DescribeDataDistResultResponseBodyDistResultsDistResultStatusStatsStatusStat>) };
    inline vector<Models::DescribeDataDistResultResponseBodyDistResultsDistResultStatusStatsStatusStat> statusStat() { DARABONBA_PTR_GET(statusStat_, vector<Models::DescribeDataDistResultResponseBodyDistResultsDistResultStatusStatsStatusStat>) };
    inline DescribeDataDistResultResponseBodyDistResultsDistResultStatusStats& setStatusStat(const vector<Models::DescribeDataDistResultResponseBodyDistResultsDistResultStatusStatsStatusStat> & statusStat) { DARABONBA_PTR_SET_VALUE(statusStat_, statusStat) };
    inline DescribeDataDistResultResponseBodyDistResultsDistResultStatusStats& setStatusStat(vector<Models::DescribeDataDistResultResponseBodyDistResultsDistResultStatusStatsStatusStat> && statusStat) { DARABONBA_PTR_SET_RVALUE(statusStat_, statusStat) };


  protected:
    std::shared_ptr<vector<Models::DescribeDataDistResultResponseBodyDistResultsDistResultStatusStatsStatusStat>> statusStat_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
