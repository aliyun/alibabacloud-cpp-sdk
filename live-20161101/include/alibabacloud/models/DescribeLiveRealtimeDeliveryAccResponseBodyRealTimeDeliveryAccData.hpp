// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEREALTIMEDELIVERYACCRESPONSEBODYREALTIMEDELIVERYACCDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEREALTIMEDELIVERYACCRESPONSEBODYREALTIMEDELIVERYACCDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccDataAccData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccData& obj) { 
      DARABONBA_PTR_TO_JSON(AccData, accData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccData& obj) { 
      DARABONBA_PTR_FROM_JSON(AccData, accData_);
    };
    DescribeLiveRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccData() = default ;
    DescribeLiveRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccData(const DescribeLiveRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccData &) = default ;
    DescribeLiveRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccData(DescribeLiveRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccData &&) = default ;
    DescribeLiveRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccData() = default ;
    DescribeLiveRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccData& operator=(const DescribeLiveRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccData &) = default ;
    DescribeLiveRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccData& operator=(DescribeLiveRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accData_ != nullptr; };
    // accData Field Functions 
    bool hasAccData() const { return this->accData_ != nullptr;};
    void deleteAccData() { this->accData_ = nullptr;};
    inline const vector<Models::DescribeLiveRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccDataAccData> & accData() const { DARABONBA_PTR_GET_CONST(accData_, vector<Models::DescribeLiveRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccDataAccData>) };
    inline vector<Models::DescribeLiveRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccDataAccData> accData() { DARABONBA_PTR_GET(accData_, vector<Models::DescribeLiveRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccDataAccData>) };
    inline DescribeLiveRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccData& setAccData(const vector<Models::DescribeLiveRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccDataAccData> & accData) { DARABONBA_PTR_SET_VALUE(accData_, accData) };
    inline DescribeLiveRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccData& setAccData(vector<Models::DescribeLiveRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccDataAccData> && accData) { DARABONBA_PTR_SET_RVALUE(accData_, accData) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveRealtimeDeliveryAccResponseBodyRealTimeDeliveryAccDataAccData>> accData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
