// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREALTIMEDELIVERYACCRESPONSEBODYREATTIMEDELIVERYACCDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREALTIMEDELIVERYACCRESPONSEBODYREATTIMEDELIVERYACCDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRealtimeDeliveryAccResponseBodyReatTimeDeliveryAccDataAccData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeRealtimeDeliveryAccResponseBodyReatTimeDeliveryAccData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRealtimeDeliveryAccResponseBodyReatTimeDeliveryAccData& obj) { 
      DARABONBA_PTR_TO_JSON(AccData, accData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRealtimeDeliveryAccResponseBodyReatTimeDeliveryAccData& obj) { 
      DARABONBA_PTR_FROM_JSON(AccData, accData_);
    };
    DescribeRealtimeDeliveryAccResponseBodyReatTimeDeliveryAccData() = default ;
    DescribeRealtimeDeliveryAccResponseBodyReatTimeDeliveryAccData(const DescribeRealtimeDeliveryAccResponseBodyReatTimeDeliveryAccData &) = default ;
    DescribeRealtimeDeliveryAccResponseBodyReatTimeDeliveryAccData(DescribeRealtimeDeliveryAccResponseBodyReatTimeDeliveryAccData &&) = default ;
    DescribeRealtimeDeliveryAccResponseBodyReatTimeDeliveryAccData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRealtimeDeliveryAccResponseBodyReatTimeDeliveryAccData() = default ;
    DescribeRealtimeDeliveryAccResponseBodyReatTimeDeliveryAccData& operator=(const DescribeRealtimeDeliveryAccResponseBodyReatTimeDeliveryAccData &) = default ;
    DescribeRealtimeDeliveryAccResponseBodyReatTimeDeliveryAccData& operator=(DescribeRealtimeDeliveryAccResponseBodyReatTimeDeliveryAccData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accData_ != nullptr; };
    // accData Field Functions 
    bool hasAccData() const { return this->accData_ != nullptr;};
    void deleteAccData() { this->accData_ = nullptr;};
    inline const vector<Models::DescribeRealtimeDeliveryAccResponseBodyReatTimeDeliveryAccDataAccData> & accData() const { DARABONBA_PTR_GET_CONST(accData_, vector<Models::DescribeRealtimeDeliveryAccResponseBodyReatTimeDeliveryAccDataAccData>) };
    inline vector<Models::DescribeRealtimeDeliveryAccResponseBodyReatTimeDeliveryAccDataAccData> accData() { DARABONBA_PTR_GET(accData_, vector<Models::DescribeRealtimeDeliveryAccResponseBodyReatTimeDeliveryAccDataAccData>) };
    inline DescribeRealtimeDeliveryAccResponseBodyReatTimeDeliveryAccData& setAccData(const vector<Models::DescribeRealtimeDeliveryAccResponseBodyReatTimeDeliveryAccDataAccData> & accData) { DARABONBA_PTR_SET_VALUE(accData_, accData) };
    inline DescribeRealtimeDeliveryAccResponseBodyReatTimeDeliveryAccData& setAccData(vector<Models::DescribeRealtimeDeliveryAccResponseBodyReatTimeDeliveryAccDataAccData> && accData) { DARABONBA_PTR_SET_RVALUE(accData_, accData) };


  protected:
    std::shared_ptr<vector<Models::DescribeRealtimeDeliveryAccResponseBodyReatTimeDeliveryAccDataAccData>> accData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
