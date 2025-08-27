// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTREFUNDAPPLYREQUESTREFUNDSEGMENTLIST_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTREFUNDAPPLYREQUESTREFUNDSEGMENTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightRefundApplyRequestRefundSegmentList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightRefundApplyRequestRefundSegmentList& obj) { 
      DARABONBA_PTR_TO_JSON(segment_key, segmentKey_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightRefundApplyRequestRefundSegmentList& obj) { 
      DARABONBA_PTR_FROM_JSON(segment_key, segmentKey_);
    };
    IntlFlightRefundApplyRequestRefundSegmentList() = default ;
    IntlFlightRefundApplyRequestRefundSegmentList(const IntlFlightRefundApplyRequestRefundSegmentList &) = default ;
    IntlFlightRefundApplyRequestRefundSegmentList(IntlFlightRefundApplyRequestRefundSegmentList &&) = default ;
    IntlFlightRefundApplyRequestRefundSegmentList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightRefundApplyRequestRefundSegmentList() = default ;
    IntlFlightRefundApplyRequestRefundSegmentList& operator=(const IntlFlightRefundApplyRequestRefundSegmentList &) = default ;
    IntlFlightRefundApplyRequestRefundSegmentList& operator=(IntlFlightRefundApplyRequestRefundSegmentList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->segmentKey_ != nullptr; };
    // segmentKey Field Functions 
    bool hasSegmentKey() const { return this->segmentKey_ != nullptr;};
    void deleteSegmentKey() { this->segmentKey_ = nullptr;};
    inline string segmentKey() const { DARABONBA_PTR_GET_DEFAULT(segmentKey_, "") };
    inline IntlFlightRefundApplyRequestRefundSegmentList& setSegmentKey(string segmentKey) { DARABONBA_PTR_SET_VALUE(segmentKey_, segmentKey) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> segmentKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
