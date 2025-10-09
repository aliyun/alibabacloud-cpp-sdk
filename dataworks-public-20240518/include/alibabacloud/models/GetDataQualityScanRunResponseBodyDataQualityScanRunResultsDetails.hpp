// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAQUALITYSCANRUNRESPONSEBODYDATAQUALITYSCANRUNRESULTSDETAILS_HPP_
#define ALIBABACLOUD_MODELS_GETDATAQUALITYSCANRUNRESPONSEBODYDATAQUALITYSCANRUNRESULTSDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDataQualityScanRunResponseBodyDataQualityScanRunResultsDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataQualityScanRunResponseBodyDataQualityScanRunResultsDetails& obj) { 
      DARABONBA_PTR_TO_JSON(CheckValue, checkValue_);
      DARABONBA_PTR_TO_JSON(ReferenceValue, referenceValue_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataQualityScanRunResponseBodyDataQualityScanRunResultsDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckValue, checkValue_);
      DARABONBA_PTR_FROM_JSON(ReferenceValue, referenceValue_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetDataQualityScanRunResponseBodyDataQualityScanRunResultsDetails() = default ;
    GetDataQualityScanRunResponseBodyDataQualityScanRunResultsDetails(const GetDataQualityScanRunResponseBodyDataQualityScanRunResultsDetails &) = default ;
    GetDataQualityScanRunResponseBodyDataQualityScanRunResultsDetails(GetDataQualityScanRunResponseBodyDataQualityScanRunResultsDetails &&) = default ;
    GetDataQualityScanRunResponseBodyDataQualityScanRunResultsDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataQualityScanRunResponseBodyDataQualityScanRunResultsDetails() = default ;
    GetDataQualityScanRunResponseBodyDataQualityScanRunResultsDetails& operator=(const GetDataQualityScanRunResponseBodyDataQualityScanRunResultsDetails &) = default ;
    GetDataQualityScanRunResponseBodyDataQualityScanRunResultsDetails& operator=(GetDataQualityScanRunResponseBodyDataQualityScanRunResultsDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkValue_ != nullptr
        && this->referenceValue_ != nullptr && this->status_ != nullptr; };
    // checkValue Field Functions 
    bool hasCheckValue() const { return this->checkValue_ != nullptr;};
    void deleteCheckValue() { this->checkValue_ = nullptr;};
    inline string checkValue() const { DARABONBA_PTR_GET_DEFAULT(checkValue_, "") };
    inline GetDataQualityScanRunResponseBodyDataQualityScanRunResultsDetails& setCheckValue(string checkValue) { DARABONBA_PTR_SET_VALUE(checkValue_, checkValue) };


    // referenceValue Field Functions 
    bool hasReferenceValue() const { return this->referenceValue_ != nullptr;};
    void deleteReferenceValue() { this->referenceValue_ = nullptr;};
    inline string referenceValue() const { DARABONBA_PTR_GET_DEFAULT(referenceValue_, "") };
    inline GetDataQualityScanRunResponseBodyDataQualityScanRunResultsDetails& setReferenceValue(string referenceValue) { DARABONBA_PTR_SET_VALUE(referenceValue_, referenceValue) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetDataQualityScanRunResponseBodyDataQualityScanRunResultsDetails& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The final value used for comparison with the threshold.
    std::shared_ptr<string> checkValue_ = nullptr;
    // The reference sample used as the baseline for calculating the CheckedValue.
    std::shared_ptr<string> referenceValue_ = nullptr;
    // The final comparison result status.
    // 
    // *   Pass
    // *   Error
    // *   Warn
    // *   Fail
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
