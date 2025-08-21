// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSTHRESHOLDRESPONSEBODYTHRESHOLDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSTHRESHOLDRESPONSEBODYTHRESHOLDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDdosThresholdResponseBodyThresholdsThreshold.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AntiddosPublic20170518
{
namespace Models
{
  class DescribeDdosThresholdResponseBodyThresholds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDdosThresholdResponseBodyThresholds& obj) { 
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDdosThresholdResponseBodyThresholds& obj) { 
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
    };
    DescribeDdosThresholdResponseBodyThresholds() = default ;
    DescribeDdosThresholdResponseBodyThresholds(const DescribeDdosThresholdResponseBodyThresholds &) = default ;
    DescribeDdosThresholdResponseBodyThresholds(DescribeDdosThresholdResponseBodyThresholds &&) = default ;
    DescribeDdosThresholdResponseBodyThresholds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDdosThresholdResponseBodyThresholds() = default ;
    DescribeDdosThresholdResponseBodyThresholds& operator=(const DescribeDdosThresholdResponseBodyThresholds &) = default ;
    DescribeDdosThresholdResponseBodyThresholds& operator=(DescribeDdosThresholdResponseBodyThresholds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->threshold_ != nullptr; };
    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline const vector<Models::DescribeDdosThresholdResponseBodyThresholdsThreshold> & threshold() const { DARABONBA_PTR_GET_CONST(threshold_, vector<Models::DescribeDdosThresholdResponseBodyThresholdsThreshold>) };
    inline vector<Models::DescribeDdosThresholdResponseBodyThresholdsThreshold> threshold() { DARABONBA_PTR_GET(threshold_, vector<Models::DescribeDdosThresholdResponseBodyThresholdsThreshold>) };
    inline DescribeDdosThresholdResponseBodyThresholds& setThreshold(const vector<Models::DescribeDdosThresholdResponseBodyThresholdsThreshold> & threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };
    inline DescribeDdosThresholdResponseBodyThresholds& setThreshold(vector<Models::DescribeDdosThresholdResponseBodyThresholdsThreshold> && threshold) { DARABONBA_PTR_SET_RVALUE(threshold_, threshold) };


  protected:
    std::shared_ptr<vector<Models::DescribeDdosThresholdResponseBodyThresholdsThreshold>> threshold_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AntiddosPublic20170518
#endif
