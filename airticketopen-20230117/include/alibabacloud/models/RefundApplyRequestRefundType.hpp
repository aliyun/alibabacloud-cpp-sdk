// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFUNDAPPLYREQUESTREFUNDTYPE_HPP_
#define ALIBABACLOUD_MODELS_REFUNDAPPLYREQUESTREFUNDTYPE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class RefundApplyRequestRefundType : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefundApplyRequestRefundType& obj) { 
      DARABONBA_PTR_TO_JSON(file, file_);
      DARABONBA_PTR_TO_JSON(refund_type_id, refundTypeId_);
      DARABONBA_PTR_TO_JSON(remark, remark_);
    };
    friend void from_json(const Darabonba::Json& j, RefundApplyRequestRefundType& obj) { 
      DARABONBA_PTR_FROM_JSON(file, file_);
      DARABONBA_PTR_FROM_JSON(refund_type_id, refundTypeId_);
      DARABONBA_PTR_FROM_JSON(remark, remark_);
    };
    RefundApplyRequestRefundType() = default ;
    RefundApplyRequestRefundType(const RefundApplyRequestRefundType &) = default ;
    RefundApplyRequestRefundType(RefundApplyRequestRefundType &&) = default ;
    RefundApplyRequestRefundType(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefundApplyRequestRefundType() = default ;
    RefundApplyRequestRefundType& operator=(const RefundApplyRequestRefundType &) = default ;
    RefundApplyRequestRefundType& operator=(RefundApplyRequestRefundType &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->file_ == nullptr
        && return this->refundTypeId_ == nullptr && return this->remark_ == nullptr; };
    // file Field Functions 
    bool hasFile() const { return this->file_ != nullptr;};
    void deleteFile() { this->file_ = nullptr;};
    inline const vector<string> & file() const { DARABONBA_PTR_GET_CONST(file_, vector<string>) };
    inline vector<string> file() { DARABONBA_PTR_GET(file_, vector<string>) };
    inline RefundApplyRequestRefundType& setFile(const vector<string> & file) { DARABONBA_PTR_SET_VALUE(file_, file) };
    inline RefundApplyRequestRefundType& setFile(vector<string> && file) { DARABONBA_PTR_SET_RVALUE(file_, file) };


    // refundTypeId Field Functions 
    bool hasRefundTypeId() const { return this->refundTypeId_ != nullptr;};
    void deleteRefundTypeId() { this->refundTypeId_ = nullptr;};
    inline int32_t refundTypeId() const { DARABONBA_PTR_GET_DEFAULT(refundTypeId_, 0) };
    inline RefundApplyRequestRefundType& setRefundTypeId(int32_t refundTypeId) { DARABONBA_PTR_SET_VALUE(refundTypeId_, refundTypeId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline RefundApplyRequestRefundType& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


  protected:
    // Array of attachment file URLs. First, upload the files using a separate file upload interface to get the file URLs.
    std::shared_ptr<vector<string>> file_ = nullptr;
    // 2: Voluntary (I want to change my travel plan/I don\\"t want to fly). 
    // 5: Involuntary, due to flight delay or cancellation, schedule changes, or other airline reasons. 
    // 6: Involuntary, due to health reasons with a medical report from a hospital of at least secondary level A or above.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> refundTypeId_ = nullptr;
    // Remark: detailed description about the refund application
    std::shared_ptr<string> remark_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
