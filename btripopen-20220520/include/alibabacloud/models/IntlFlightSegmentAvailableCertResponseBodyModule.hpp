// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTSEGMENTAVAILABLECERTRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTSEGMENTAVAILABLECERTRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/IntlFlightSegmentAvailableCertResponseBodyModuleSegmentAvailableCertList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightSegmentAvailableCertResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightSegmentAvailableCertResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(segment_available_cert_list, segmentAvailableCertList_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightSegmentAvailableCertResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(segment_available_cert_list, segmentAvailableCertList_);
    };
    IntlFlightSegmentAvailableCertResponseBodyModule() = default ;
    IntlFlightSegmentAvailableCertResponseBodyModule(const IntlFlightSegmentAvailableCertResponseBodyModule &) = default ;
    IntlFlightSegmentAvailableCertResponseBodyModule(IntlFlightSegmentAvailableCertResponseBodyModule &&) = default ;
    IntlFlightSegmentAvailableCertResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightSegmentAvailableCertResponseBodyModule() = default ;
    IntlFlightSegmentAvailableCertResponseBodyModule& operator=(const IntlFlightSegmentAvailableCertResponseBodyModule &) = default ;
    IntlFlightSegmentAvailableCertResponseBodyModule& operator=(IntlFlightSegmentAvailableCertResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->segmentAvailableCertList_ != nullptr; };
    // segmentAvailableCertList Field Functions 
    bool hasSegmentAvailableCertList() const { return this->segmentAvailableCertList_ != nullptr;};
    void deleteSegmentAvailableCertList() { this->segmentAvailableCertList_ = nullptr;};
    inline const vector<Models::IntlFlightSegmentAvailableCertResponseBodyModuleSegmentAvailableCertList> & segmentAvailableCertList() const { DARABONBA_PTR_GET_CONST(segmentAvailableCertList_, vector<Models::IntlFlightSegmentAvailableCertResponseBodyModuleSegmentAvailableCertList>) };
    inline vector<Models::IntlFlightSegmentAvailableCertResponseBodyModuleSegmentAvailableCertList> segmentAvailableCertList() { DARABONBA_PTR_GET(segmentAvailableCertList_, vector<Models::IntlFlightSegmentAvailableCertResponseBodyModuleSegmentAvailableCertList>) };
    inline IntlFlightSegmentAvailableCertResponseBodyModule& setSegmentAvailableCertList(const vector<Models::IntlFlightSegmentAvailableCertResponseBodyModuleSegmentAvailableCertList> & segmentAvailableCertList) { DARABONBA_PTR_SET_VALUE(segmentAvailableCertList_, segmentAvailableCertList) };
    inline IntlFlightSegmentAvailableCertResponseBodyModule& setSegmentAvailableCertList(vector<Models::IntlFlightSegmentAvailableCertResponseBodyModuleSegmentAvailableCertList> && segmentAvailableCertList) { DARABONBA_PTR_SET_RVALUE(segmentAvailableCertList_, segmentAvailableCertList) };


  protected:
    std::shared_ptr<vector<Models::IntlFlightSegmentAvailableCertResponseBodyModuleSegmentAvailableCertList>> segmentAvailableCertList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
