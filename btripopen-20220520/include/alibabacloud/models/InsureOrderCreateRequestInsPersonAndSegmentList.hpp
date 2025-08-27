// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSUREORDERCREATEREQUESTINSPERSONANDSEGMENTLIST_HPP_
#define ALIBABACLOUD_MODELS_INSUREORDERCREATEREQUESTINSPERSONANDSEGMENTLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/InsureOrderCreateRequestInsPersonAndSegmentListInsureSegment.hpp>
#include <alibabacloud/models/InsureOrderCreateRequestInsPersonAndSegmentListInsured.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class InsureOrderCreateRequestInsPersonAndSegmentList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsureOrderCreateRequestInsPersonAndSegmentList& obj) { 
      DARABONBA_PTR_TO_JSON(insure_segment, insureSegment_);
      DARABONBA_PTR_TO_JSON(insured, insured_);
      DARABONBA_PTR_TO_JSON(out_sub_ins_order_id, outSubInsOrderId_);
    };
    friend void from_json(const Darabonba::Json& j, InsureOrderCreateRequestInsPersonAndSegmentList& obj) { 
      DARABONBA_PTR_FROM_JSON(insure_segment, insureSegment_);
      DARABONBA_PTR_FROM_JSON(insured, insured_);
      DARABONBA_PTR_FROM_JSON(out_sub_ins_order_id, outSubInsOrderId_);
    };
    InsureOrderCreateRequestInsPersonAndSegmentList() = default ;
    InsureOrderCreateRequestInsPersonAndSegmentList(const InsureOrderCreateRequestInsPersonAndSegmentList &) = default ;
    InsureOrderCreateRequestInsPersonAndSegmentList(InsureOrderCreateRequestInsPersonAndSegmentList &&) = default ;
    InsureOrderCreateRequestInsPersonAndSegmentList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsureOrderCreateRequestInsPersonAndSegmentList() = default ;
    InsureOrderCreateRequestInsPersonAndSegmentList& operator=(const InsureOrderCreateRequestInsPersonAndSegmentList &) = default ;
    InsureOrderCreateRequestInsPersonAndSegmentList& operator=(InsureOrderCreateRequestInsPersonAndSegmentList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->insureSegment_ != nullptr
        && this->insured_ != nullptr && this->outSubInsOrderId_ != nullptr; };
    // insureSegment Field Functions 
    bool hasInsureSegment() const { return this->insureSegment_ != nullptr;};
    void deleteInsureSegment() { this->insureSegment_ = nullptr;};
    inline const Models::InsureOrderCreateRequestInsPersonAndSegmentListInsureSegment & insureSegment() const { DARABONBA_PTR_GET_CONST(insureSegment_, Models::InsureOrderCreateRequestInsPersonAndSegmentListInsureSegment) };
    inline Models::InsureOrderCreateRequestInsPersonAndSegmentListInsureSegment insureSegment() { DARABONBA_PTR_GET(insureSegment_, Models::InsureOrderCreateRequestInsPersonAndSegmentListInsureSegment) };
    inline InsureOrderCreateRequestInsPersonAndSegmentList& setInsureSegment(const Models::InsureOrderCreateRequestInsPersonAndSegmentListInsureSegment & insureSegment) { DARABONBA_PTR_SET_VALUE(insureSegment_, insureSegment) };
    inline InsureOrderCreateRequestInsPersonAndSegmentList& setInsureSegment(Models::InsureOrderCreateRequestInsPersonAndSegmentListInsureSegment && insureSegment) { DARABONBA_PTR_SET_RVALUE(insureSegment_, insureSegment) };


    // insured Field Functions 
    bool hasInsured() const { return this->insured_ != nullptr;};
    void deleteInsured() { this->insured_ = nullptr;};
    inline const Models::InsureOrderCreateRequestInsPersonAndSegmentListInsured & insured() const { DARABONBA_PTR_GET_CONST(insured_, Models::InsureOrderCreateRequestInsPersonAndSegmentListInsured) };
    inline Models::InsureOrderCreateRequestInsPersonAndSegmentListInsured insured() { DARABONBA_PTR_GET(insured_, Models::InsureOrderCreateRequestInsPersonAndSegmentListInsured) };
    inline InsureOrderCreateRequestInsPersonAndSegmentList& setInsured(const Models::InsureOrderCreateRequestInsPersonAndSegmentListInsured & insured) { DARABONBA_PTR_SET_VALUE(insured_, insured) };
    inline InsureOrderCreateRequestInsPersonAndSegmentList& setInsured(Models::InsureOrderCreateRequestInsPersonAndSegmentListInsured && insured) { DARABONBA_PTR_SET_RVALUE(insured_, insured) };


    // outSubInsOrderId Field Functions 
    bool hasOutSubInsOrderId() const { return this->outSubInsOrderId_ != nullptr;};
    void deleteOutSubInsOrderId() { this->outSubInsOrderId_ = nullptr;};
    inline string outSubInsOrderId() const { DARABONBA_PTR_GET_DEFAULT(outSubInsOrderId_, "") };
    inline InsureOrderCreateRequestInsPersonAndSegmentList& setOutSubInsOrderId(string outSubInsOrderId) { DARABONBA_PTR_SET_VALUE(outSubInsOrderId_, outSubInsOrderId) };


  protected:
    std::shared_ptr<Models::InsureOrderCreateRequestInsPersonAndSegmentListInsureSegment> insureSegment_ = nullptr;
    std::shared_ptr<Models::InsureOrderCreateRequestInsPersonAndSegmentListInsured> insured_ = nullptr;
    std::shared_ptr<string> outSubInsOrderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
