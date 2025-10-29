// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAQUALITYRESULTSRESPONSEBODYPAGINGINFODATAQUALITYRESULTSDETAILS_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAQUALITYRESULTSRESPONSEBODYPAGINGINFODATAQUALITYRESULTSDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsDetails& obj) { 
      DARABONBA_PTR_TO_JSON(CheckedValue, checkedValue_);
      DARABONBA_PTR_TO_JSON(ReferencedValue, referencedValue_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckedValue, checkedValue_);
      DARABONBA_PTR_FROM_JSON(ReferencedValue, referencedValue_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsDetails() = default ;
    ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsDetails(const ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsDetails &) = default ;
    ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsDetails(ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsDetails &&) = default ;
    ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsDetails() = default ;
    ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsDetails& operator=(const ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsDetails &) = default ;
    ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsDetails& operator=(ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkedValue_ == nullptr
        && return this->referencedValue_ == nullptr && return this->status_ == nullptr; };
    // checkedValue Field Functions 
    bool hasCheckedValue() const { return this->checkedValue_ != nullptr;};
    void deleteCheckedValue() { this->checkedValue_ = nullptr;};
    inline string checkedValue() const { DARABONBA_PTR_GET_DEFAULT(checkedValue_, "") };
    inline ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsDetails& setCheckedValue(string checkedValue) { DARABONBA_PTR_SET_VALUE(checkedValue_, checkedValue) };


    // referencedValue Field Functions 
    bool hasReferencedValue() const { return this->referencedValue_ != nullptr;};
    void deleteReferencedValue() { this->referencedValue_ = nullptr;};
    inline string referencedValue() const { DARABONBA_PTR_GET_DEFAULT(referencedValue_, "") };
    inline ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsDetails& setReferencedValue(string referencedValue) { DARABONBA_PTR_SET_VALUE(referencedValue_, referencedValue) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsDetails& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The value that is used for comparison with the threshold.
    std::shared_ptr<string> checkedValue_ = nullptr;
    // The value that is calculated based on sample data. The value serves as a baseline value during the calculation of the value of the CheckedValue parameter.
    std::shared_ptr<string> referencedValue_ = nullptr;
    // The comparison result between the value of CheckedValue and the threshold. Valid values:
    // 
    // *   Error
    // *   Passed
    // *   Warned
    // *   Critical
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
