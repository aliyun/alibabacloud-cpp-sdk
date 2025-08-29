// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPORTSAMPLECONSISTENCYJOBRESPONSEBODYFEATURESDIFFERENCE_HPP_
#define ALIBABACLOUD_MODELS_REPORTSAMPLECONSISTENCYJOBRESPONSEBODYFEATURESDIFFERENCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ReportSampleConsistencyJobResponseBodyFeaturesDifference : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReportSampleConsistencyJobResponseBodyFeaturesDifference& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(FeatureName, featureName_);
      DARABONBA_PTR_TO_JSON(FeatureType, featureType_);
      DARABONBA_PTR_TO_JSON(Ratio, ratio_);
    };
    friend void from_json(const Darabonba::Json& j, ReportSampleConsistencyJobResponseBodyFeaturesDifference& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(FeatureName, featureName_);
      DARABONBA_PTR_FROM_JSON(FeatureType, featureType_);
      DARABONBA_PTR_FROM_JSON(Ratio, ratio_);
    };
    ReportSampleConsistencyJobResponseBodyFeaturesDifference() = default ;
    ReportSampleConsistencyJobResponseBodyFeaturesDifference(const ReportSampleConsistencyJobResponseBodyFeaturesDifference &) = default ;
    ReportSampleConsistencyJobResponseBodyFeaturesDifference(ReportSampleConsistencyJobResponseBodyFeaturesDifference &&) = default ;
    ReportSampleConsistencyJobResponseBodyFeaturesDifference(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReportSampleConsistencyJobResponseBodyFeaturesDifference() = default ;
    ReportSampleConsistencyJobResponseBodyFeaturesDifference& operator=(const ReportSampleConsistencyJobResponseBodyFeaturesDifference &) = default ;
    ReportSampleConsistencyJobResponseBodyFeaturesDifference& operator=(ReportSampleConsistencyJobResponseBodyFeaturesDifference &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->featureName_ != nullptr && this->featureType_ != nullptr && this->ratio_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline ReportSampleConsistencyJobResponseBodyFeaturesDifference& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // featureName Field Functions 
    bool hasFeatureName() const { return this->featureName_ != nullptr;};
    void deleteFeatureName() { this->featureName_ = nullptr;};
    inline string featureName() const { DARABONBA_PTR_GET_DEFAULT(featureName_, "") };
    inline ReportSampleConsistencyJobResponseBodyFeaturesDifference& setFeatureName(string featureName) { DARABONBA_PTR_SET_VALUE(featureName_, featureName) };


    // featureType Field Functions 
    bool hasFeatureType() const { return this->featureType_ != nullptr;};
    void deleteFeatureType() { this->featureType_ = nullptr;};
    inline string featureType() const { DARABONBA_PTR_GET_DEFAULT(featureType_, "") };
    inline ReportSampleConsistencyJobResponseBodyFeaturesDifference& setFeatureType(string featureType) { DARABONBA_PTR_SET_VALUE(featureType_, featureType) };


    // ratio Field Functions 
    bool hasRatio() const { return this->ratio_ != nullptr;};
    void deleteRatio() { this->ratio_ = nullptr;};
    inline string ratio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, "") };
    inline ReportSampleConsistencyJobResponseBodyFeaturesDifference& setRatio(string ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


  protected:
    std::shared_ptr<int64_t> count_ = nullptr;
    std::shared_ptr<string> featureName_ = nullptr;
    std::shared_ptr<string> featureType_ = nullptr;
    std::shared_ptr<string> ratio_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
