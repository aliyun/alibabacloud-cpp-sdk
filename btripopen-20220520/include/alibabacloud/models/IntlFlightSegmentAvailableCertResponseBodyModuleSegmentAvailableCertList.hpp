// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTSEGMENTAVAILABLECERTRESPONSEBODYMODULESEGMENTAVAILABLECERTLIST_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTSEGMENTAVAILABLECERTRESPONSEBODYMODULESEGMENTAVAILABLECERTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/IntlFlightSegmentAvailableCertResponseBodyModuleSegmentAvailableCertListSegmentPosition.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightSegmentAvailableCertResponseBodyModuleSegmentAvailableCertList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightSegmentAvailableCertResponseBodyModuleSegmentAvailableCertList& obj) { 
      DARABONBA_PTR_TO_JSON(cert_types, certTypes_);
      DARABONBA_PTR_TO_JSON(segment_position, segmentPosition_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightSegmentAvailableCertResponseBodyModuleSegmentAvailableCertList& obj) { 
      DARABONBA_PTR_FROM_JSON(cert_types, certTypes_);
      DARABONBA_PTR_FROM_JSON(segment_position, segmentPosition_);
    };
    IntlFlightSegmentAvailableCertResponseBodyModuleSegmentAvailableCertList() = default ;
    IntlFlightSegmentAvailableCertResponseBodyModuleSegmentAvailableCertList(const IntlFlightSegmentAvailableCertResponseBodyModuleSegmentAvailableCertList &) = default ;
    IntlFlightSegmentAvailableCertResponseBodyModuleSegmentAvailableCertList(IntlFlightSegmentAvailableCertResponseBodyModuleSegmentAvailableCertList &&) = default ;
    IntlFlightSegmentAvailableCertResponseBodyModuleSegmentAvailableCertList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightSegmentAvailableCertResponseBodyModuleSegmentAvailableCertList() = default ;
    IntlFlightSegmentAvailableCertResponseBodyModuleSegmentAvailableCertList& operator=(const IntlFlightSegmentAvailableCertResponseBodyModuleSegmentAvailableCertList &) = default ;
    IntlFlightSegmentAvailableCertResponseBodyModuleSegmentAvailableCertList& operator=(IntlFlightSegmentAvailableCertResponseBodyModuleSegmentAvailableCertList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certTypes_ != nullptr
        && this->segmentPosition_ != nullptr; };
    // certTypes Field Functions 
    bool hasCertTypes() const { return this->certTypes_ != nullptr;};
    void deleteCertTypes() { this->certTypes_ = nullptr;};
    inline const vector<int32_t> & certTypes() const { DARABONBA_PTR_GET_CONST(certTypes_, vector<int32_t>) };
    inline vector<int32_t> certTypes() { DARABONBA_PTR_GET(certTypes_, vector<int32_t>) };
    inline IntlFlightSegmentAvailableCertResponseBodyModuleSegmentAvailableCertList& setCertTypes(const vector<int32_t> & certTypes) { DARABONBA_PTR_SET_VALUE(certTypes_, certTypes) };
    inline IntlFlightSegmentAvailableCertResponseBodyModuleSegmentAvailableCertList& setCertTypes(vector<int32_t> && certTypes) { DARABONBA_PTR_SET_RVALUE(certTypes_, certTypes) };


    // segmentPosition Field Functions 
    bool hasSegmentPosition() const { return this->segmentPosition_ != nullptr;};
    void deleteSegmentPosition() { this->segmentPosition_ = nullptr;};
    inline const Models::IntlFlightSegmentAvailableCertResponseBodyModuleSegmentAvailableCertListSegmentPosition & segmentPosition() const { DARABONBA_PTR_GET_CONST(segmentPosition_, Models::IntlFlightSegmentAvailableCertResponseBodyModuleSegmentAvailableCertListSegmentPosition) };
    inline Models::IntlFlightSegmentAvailableCertResponseBodyModuleSegmentAvailableCertListSegmentPosition segmentPosition() { DARABONBA_PTR_GET(segmentPosition_, Models::IntlFlightSegmentAvailableCertResponseBodyModuleSegmentAvailableCertListSegmentPosition) };
    inline IntlFlightSegmentAvailableCertResponseBodyModuleSegmentAvailableCertList& setSegmentPosition(const Models::IntlFlightSegmentAvailableCertResponseBodyModuleSegmentAvailableCertListSegmentPosition & segmentPosition) { DARABONBA_PTR_SET_VALUE(segmentPosition_, segmentPosition) };
    inline IntlFlightSegmentAvailableCertResponseBodyModuleSegmentAvailableCertList& setSegmentPosition(Models::IntlFlightSegmentAvailableCertResponseBodyModuleSegmentAvailableCertListSegmentPosition && segmentPosition) { DARABONBA_PTR_SET_RVALUE(segmentPosition_, segmentPosition) };


  protected:
    std::shared_ptr<vector<int32_t>> certTypes_ = nullptr;
    std::shared_ptr<Models::IntlFlightSegmentAvailableCertResponseBodyModuleSegmentAvailableCertListSegmentPosition> segmentPosition_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
