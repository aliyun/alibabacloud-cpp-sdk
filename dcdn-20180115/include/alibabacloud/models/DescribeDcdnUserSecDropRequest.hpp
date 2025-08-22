// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERSECDROPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERSECDROPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnUserSecDropRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnUserSecDropRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Metric, metric_);
      DARABONBA_PTR_TO_JSON(SecFunc, secFunc_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnUserSecDropRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Metric, metric_);
      DARABONBA_PTR_FROM_JSON(SecFunc, secFunc_);
    };
    DescribeDcdnUserSecDropRequest() = default ;
    DescribeDcdnUserSecDropRequest(const DescribeDcdnUserSecDropRequest &) = default ;
    DescribeDcdnUserSecDropRequest(DescribeDcdnUserSecDropRequest &&) = default ;
    DescribeDcdnUserSecDropRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnUserSecDropRequest() = default ;
    DescribeDcdnUserSecDropRequest& operator=(const DescribeDcdnUserSecDropRequest &) = default ;
    DescribeDcdnUserSecDropRequest& operator=(DescribeDcdnUserSecDropRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->metric_ != nullptr && this->secFunc_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline DescribeDcdnUserSecDropRequest& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // metric Field Functions 
    bool hasMetric() const { return this->metric_ != nullptr;};
    void deleteMetric() { this->metric_ = nullptr;};
    inline string metric() const { DARABONBA_PTR_GET_DEFAULT(metric_, "") };
    inline DescribeDcdnUserSecDropRequest& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


    // secFunc Field Functions 
    bool hasSecFunc() const { return this->secFunc_ != nullptr;};
    void deleteSecFunc() { this->secFunc_ = nullptr;};
    inline string secFunc() const { DARABONBA_PTR_GET_DEFAULT(secFunc_, "") };
    inline DescribeDcdnUserSecDropRequest& setSecFunc(string secFunc) { DARABONBA_PTR_SET_VALUE(secFunc_, secFunc) };


  protected:
    // The date or month that you want to query.
    // 
    // *   If data is collected every day, set Data in the format of yyyymmdd, such as 20201203.
    // *   If data is collected every month, set Data in the format of yyyymm, such as 202012.
    // 
    // This parameter is required.
    std::shared_ptr<string> data_ = nullptr;
    // The time interval at which data is collected.
    // 
    // *   If data is collected every day, the number of blocked packets on the specified day is calculated.
    // *   If data is collected every month, the number of blocked packets in the specified month is calculated.
    // 
    // This parameter is required.
    std::shared_ptr<string> metric_ = nullptr;
    // The security feature. Valid values:
    // 
    // *   waf: WAF
    // *   tmd: rate limiting
    // *   robot: bot traffic recognition
    // *   l4_dm_drop: domain name blocking at Layer 4
    // 
    // This parameter is required.
    std::shared_ptr<string> secFunc_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
