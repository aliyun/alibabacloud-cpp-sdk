// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODREALTIMEDELIVERYACCRESPONSEBODYREALTIMEDELIVERYACCDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODREALTIMEDELIVERYACCRESPONSEBODYREALTIMEDELIVERYACCDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccDataAccData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccData& obj) { 
      DARABONBA_PTR_TO_JSON(AccData, accData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccData& obj) { 
      DARABONBA_PTR_FROM_JSON(AccData, accData_);
    };
    DescribeVodRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccData() = default ;
    DescribeVodRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccData(const DescribeVodRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccData &) = default ;
    DescribeVodRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccData(DescribeVodRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccData &&) = default ;
    DescribeVodRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccData() = default ;
    DescribeVodRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccData& operator=(const DescribeVodRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccData &) = default ;
    DescribeVodRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccData& operator=(DescribeVodRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accData_ != nullptr; };
    // accData Field Functions 
    bool hasAccData() const { return this->accData_ != nullptr;};
    void deleteAccData() { this->accData_ = nullptr;};
    inline const vector<Models::DescribeVodRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccDataAccData> & accData() const { DARABONBA_PTR_GET_CONST(accData_, vector<Models::DescribeVodRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccDataAccData>) };
    inline vector<Models::DescribeVodRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccDataAccData> accData() { DARABONBA_PTR_GET(accData_, vector<Models::DescribeVodRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccDataAccData>) };
    inline DescribeVodRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccData& setAccData(const vector<Models::DescribeVodRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccDataAccData> & accData) { DARABONBA_PTR_SET_VALUE(accData_, accData) };
    inline DescribeVodRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccData& setAccData(vector<Models::DescribeVodRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccDataAccData> && accData) { DARABONBA_PTR_SET_RVALUE(accData_, accData) };


  protected:
    std::shared_ptr<vector<Models::DescribeVodRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccDataAccData>> accData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
