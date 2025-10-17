// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFAULTDIAGNOSISUSERDETAILRESPONSEBODYFACTORLISTRELATEDEVENTDATASEVENTDATAITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFAULTDIAGNOSISUSERDETAILRESPONSEBODYFACTORLISTRELATEDEVENTDATASEVENTDATAITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItemsEventList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItems& obj) { 
      DARABONBA_PTR_TO_JSON(EventList, eventList_);
      DARABONBA_PTR_TO_JSON(Ts, ts_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItems& obj) { 
      DARABONBA_PTR_FROM_JSON(EventList, eventList_);
      DARABONBA_PTR_FROM_JSON(Ts, ts_);
    };
    DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItems() = default ;
    DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItems(const DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItems &) = default ;
    DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItems(DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItems &&) = default ;
    DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItems() = default ;
    DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItems& operator=(const DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItems &) = default ;
    DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItems& operator=(DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventList_ == nullptr
        && return this->ts_ == nullptr; };
    // eventList Field Functions 
    bool hasEventList() const { return this->eventList_ != nullptr;};
    void deleteEventList() { this->eventList_ = nullptr;};
    inline const vector<Models::DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItemsEventList> & eventList() const { DARABONBA_PTR_GET_CONST(eventList_, vector<Models::DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItemsEventList>) };
    inline vector<Models::DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItemsEventList> eventList() { DARABONBA_PTR_GET(eventList_, vector<Models::DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItemsEventList>) };
    inline DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItems& setEventList(const vector<Models::DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItemsEventList> & eventList) { DARABONBA_PTR_SET_VALUE(eventList_, eventList) };
    inline DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItems& setEventList(vector<Models::DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItemsEventList> && eventList) { DARABONBA_PTR_SET_RVALUE(eventList_, eventList) };


    // ts Field Functions 
    bool hasTs() const { return this->ts_ != nullptr;};
    void deleteTs() { this->ts_ = nullptr;};
    inline int64_t ts() const { DARABONBA_PTR_GET_DEFAULT(ts_, 0L) };
    inline DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItems& setTs(int64_t ts) { DARABONBA_PTR_SET_VALUE(ts_, ts) };


  protected:
    std::shared_ptr<vector<Models::DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItemsEventList>> eventList_ = nullptr;
    std::shared_ptr<int64_t> ts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
