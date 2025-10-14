// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMEASUREMENTDATARESPONSEBODYMEASUREMENTDATASMEASUREMENTDATARESOURCEFEEDATADETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMEASUREMENTDATARESPONSEBODYMEASUREMENTDATASMEASUREMENTDATARESOURCEFEEDATADETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeDataDetailsResourceFeeDataDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeDataDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeDataDetails& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceFeeDataDetail, resourceFeeDataDetail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeDataDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceFeeDataDetail, resourceFeeDataDetail_);
    };
    DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeDataDetails() = default ;
    DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeDataDetails(const DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeDataDetails &) = default ;
    DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeDataDetails(DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeDataDetails &&) = default ;
    DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeDataDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeDataDetails() = default ;
    DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeDataDetails& operator=(const DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeDataDetails &) = default ;
    DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeDataDetails& operator=(DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeDataDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceFeeDataDetail_ == nullptr; };
    // resourceFeeDataDetail Field Functions 
    bool hasResourceFeeDataDetail() const { return this->resourceFeeDataDetail_ != nullptr;};
    void deleteResourceFeeDataDetail() { this->resourceFeeDataDetail_ = nullptr;};
    inline const vector<Models::DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeDataDetailsResourceFeeDataDetail> & resourceFeeDataDetail() const { DARABONBA_PTR_GET_CONST(resourceFeeDataDetail_, vector<Models::DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeDataDetailsResourceFeeDataDetail>) };
    inline vector<Models::DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeDataDetailsResourceFeeDataDetail> resourceFeeDataDetail() { DARABONBA_PTR_GET(resourceFeeDataDetail_, vector<Models::DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeDataDetailsResourceFeeDataDetail>) };
    inline DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeDataDetails& setResourceFeeDataDetail(const vector<Models::DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeDataDetailsResourceFeeDataDetail> & resourceFeeDataDetail) { DARABONBA_PTR_SET_VALUE(resourceFeeDataDetail_, resourceFeeDataDetail) };
    inline DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeDataDetails& setResourceFeeDataDetail(vector<Models::DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeDataDetailsResourceFeeDataDetail> && resourceFeeDataDetail) { DARABONBA_PTR_SET_RVALUE(resourceFeeDataDetail_, resourceFeeDataDetail) };


  protected:
    std::shared_ptr<vector<Models::DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeDataDetailsResourceFeeDataDetail>> resourceFeeDataDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
