// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFUNDFEEDATA_HPP_
#define ALIBABACLOUD_MODELS_REFUNDFEEDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class RefundFeeData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefundFeeData& obj) { 
      DARABONBA_PTR_TO_JSON(maxRefundFee, maxRefundFee_);
      DARABONBA_PTR_TO_JSON(minRefundFee, minRefundFee_);
    };
    friend void from_json(const Darabonba::Json& j, RefundFeeData& obj) { 
      DARABONBA_PTR_FROM_JSON(maxRefundFee, maxRefundFee_);
      DARABONBA_PTR_FROM_JSON(minRefundFee, minRefundFee_);
    };
    RefundFeeData() = default ;
    RefundFeeData(const RefundFeeData &) = default ;
    RefundFeeData(RefundFeeData &&) = default ;
    RefundFeeData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefundFeeData() = default ;
    RefundFeeData& operator=(const RefundFeeData &) = default ;
    RefundFeeData& operator=(RefundFeeData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxRefundFee_ == nullptr
        && this->minRefundFee_ == nullptr; };
    // maxRefundFee Field Functions 
    bool hasMaxRefundFee() const { return this->maxRefundFee_ != nullptr;};
    void deleteMaxRefundFee() { this->maxRefundFee_ = nullptr;};
    inline int64_t getMaxRefundFee() const { DARABONBA_PTR_GET_DEFAULT(maxRefundFee_, 0L) };
    inline RefundFeeData& setMaxRefundFee(int64_t maxRefundFee) { DARABONBA_PTR_SET_VALUE(maxRefundFee_, maxRefundFee) };


    // minRefundFee Field Functions 
    bool hasMinRefundFee() const { return this->minRefundFee_ != nullptr;};
    void deleteMinRefundFee() { this->minRefundFee_ = nullptr;};
    inline int64_t getMinRefundFee() const { DARABONBA_PTR_GET_DEFAULT(minRefundFee_, 0L) };
    inline RefundFeeData& setMinRefundFee(int64_t minRefundFee) { DARABONBA_PTR_SET_VALUE(minRefundFee_, minRefundFee) };


  protected:
    shared_ptr<int64_t> maxRefundFee_ {};
    shared_ptr<int64_t> minRefundFee_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
