// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBE95TRAFFICRESPONSEBODYTRAFFIC95SUMMARYTRAFFIC95DETAILLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBE95TRAFFICRESPONSEBODYTRAFFIC95SUMMARYTRAFFIC95DETAILLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Describe95TrafficResponseBodyTraffic95SummaryTraffic95DetailListTraffic95Detail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class Describe95TrafficResponseBodyTraffic95SummaryTraffic95DetailList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Describe95TrafficResponseBodyTraffic95SummaryTraffic95DetailList& obj) { 
      DARABONBA_PTR_TO_JSON(Traffic95Detail, traffic95Detail_);
    };
    friend void from_json(const Darabonba::Json& j, Describe95TrafficResponseBodyTraffic95SummaryTraffic95DetailList& obj) { 
      DARABONBA_PTR_FROM_JSON(Traffic95Detail, traffic95Detail_);
    };
    Describe95TrafficResponseBodyTraffic95SummaryTraffic95DetailList() = default ;
    Describe95TrafficResponseBodyTraffic95SummaryTraffic95DetailList(const Describe95TrafficResponseBodyTraffic95SummaryTraffic95DetailList &) = default ;
    Describe95TrafficResponseBodyTraffic95SummaryTraffic95DetailList(Describe95TrafficResponseBodyTraffic95SummaryTraffic95DetailList &&) = default ;
    Describe95TrafficResponseBodyTraffic95SummaryTraffic95DetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Describe95TrafficResponseBodyTraffic95SummaryTraffic95DetailList() = default ;
    Describe95TrafficResponseBodyTraffic95SummaryTraffic95DetailList& operator=(const Describe95TrafficResponseBodyTraffic95SummaryTraffic95DetailList &) = default ;
    Describe95TrafficResponseBodyTraffic95SummaryTraffic95DetailList& operator=(Describe95TrafficResponseBodyTraffic95SummaryTraffic95DetailList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->traffic95Detail_ == nullptr; };
    // traffic95Detail Field Functions 
    bool hasTraffic95Detail() const { return this->traffic95Detail_ != nullptr;};
    void deleteTraffic95Detail() { this->traffic95Detail_ = nullptr;};
    inline const vector<Models::Describe95TrafficResponseBodyTraffic95SummaryTraffic95DetailListTraffic95Detail> & traffic95Detail() const { DARABONBA_PTR_GET_CONST(traffic95Detail_, vector<Models::Describe95TrafficResponseBodyTraffic95SummaryTraffic95DetailListTraffic95Detail>) };
    inline vector<Models::Describe95TrafficResponseBodyTraffic95SummaryTraffic95DetailListTraffic95Detail> traffic95Detail() { DARABONBA_PTR_GET(traffic95Detail_, vector<Models::Describe95TrafficResponseBodyTraffic95SummaryTraffic95DetailListTraffic95Detail>) };
    inline Describe95TrafficResponseBodyTraffic95SummaryTraffic95DetailList& setTraffic95Detail(const vector<Models::Describe95TrafficResponseBodyTraffic95SummaryTraffic95DetailListTraffic95Detail> & traffic95Detail) { DARABONBA_PTR_SET_VALUE(traffic95Detail_, traffic95Detail) };
    inline Describe95TrafficResponseBodyTraffic95SummaryTraffic95DetailList& setTraffic95Detail(vector<Models::Describe95TrafficResponseBodyTraffic95SummaryTraffic95DetailListTraffic95Detail> && traffic95Detail) { DARABONBA_PTR_SET_RVALUE(traffic95Detail_, traffic95Detail) };


  protected:
    std::shared_ptr<vector<Models::Describe95TrafficResponseBodyTraffic95SummaryTraffic95DetailListTraffic95Detail>> traffic95Detail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
