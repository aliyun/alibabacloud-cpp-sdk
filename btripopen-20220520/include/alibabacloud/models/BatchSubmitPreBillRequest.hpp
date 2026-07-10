// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHSUBMITPREBILLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHSUBMITPREBILLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class BatchSubmitPreBillRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchSubmitPreBillRequest& obj) { 
      DARABONBA_PTR_TO_JSON(app_ip, appIp_);
      DARABONBA_PTR_TO_JSON(bill_batch, billBatch_);
      DARABONBA_PTR_TO_JSON(customer_decision, customerDecision_);
      DARABONBA_PTR_TO_JSON(dimension, dimension_);
      DARABONBA_PTR_TO_JSON(values, values_);
    };
    friend void from_json(const Darabonba::Json& j, BatchSubmitPreBillRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(app_ip, appIp_);
      DARABONBA_PTR_FROM_JSON(bill_batch, billBatch_);
      DARABONBA_PTR_FROM_JSON(customer_decision, customerDecision_);
      DARABONBA_PTR_FROM_JSON(dimension, dimension_);
      DARABONBA_PTR_FROM_JSON(values, values_);
    };
    BatchSubmitPreBillRequest() = default ;
    BatchSubmitPreBillRequest(const BatchSubmitPreBillRequest &) = default ;
    BatchSubmitPreBillRequest(BatchSubmitPreBillRequest &&) = default ;
    BatchSubmitPreBillRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchSubmitPreBillRequest() = default ;
    BatchSubmitPreBillRequest& operator=(const BatchSubmitPreBillRequest &) = default ;
    BatchSubmitPreBillRequest& operator=(BatchSubmitPreBillRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appIp_ == nullptr
        && this->billBatch_ == nullptr && this->customerDecision_ == nullptr && this->dimension_ == nullptr && this->values_ == nullptr; };
    // appIp Field Functions 
    bool hasAppIp() const { return this->appIp_ != nullptr;};
    void deleteAppIp() { this->appIp_ = nullptr;};
    inline string getAppIp() const { DARABONBA_PTR_GET_DEFAULT(appIp_, "") };
    inline BatchSubmitPreBillRequest& setAppIp(string appIp) { DARABONBA_PTR_SET_VALUE(appIp_, appIp) };


    // billBatch Field Functions 
    bool hasBillBatch() const { return this->billBatch_ != nullptr;};
    void deleteBillBatch() { this->billBatch_ = nullptr;};
    inline string getBillBatch() const { DARABONBA_PTR_GET_DEFAULT(billBatch_, "") };
    inline BatchSubmitPreBillRequest& setBillBatch(string billBatch) { DARABONBA_PTR_SET_VALUE(billBatch_, billBatch) };


    // customerDecision Field Functions 
    bool hasCustomerDecision() const { return this->customerDecision_ != nullptr;};
    void deleteCustomerDecision() { this->customerDecision_ = nullptr;};
    inline int32_t getCustomerDecision() const { DARABONBA_PTR_GET_DEFAULT(customerDecision_, 0) };
    inline BatchSubmitPreBillRequest& setCustomerDecision(int32_t customerDecision) { DARABONBA_PTR_SET_VALUE(customerDecision_, customerDecision) };


    // dimension Field Functions 
    bool hasDimension() const { return this->dimension_ != nullptr;};
    void deleteDimension() { this->dimension_ = nullptr;};
    inline int32_t getDimension() const { DARABONBA_PTR_GET_DEFAULT(dimension_, 0) };
    inline BatchSubmitPreBillRequest& setDimension(int32_t dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<string> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
    inline vector<string> getValues() { DARABONBA_PTR_GET(values_, vector<string>) };
    inline BatchSubmitPreBillRequest& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline BatchSubmitPreBillRequest& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    // A system parameter. You do not need to manually specify this parameter.
    shared_ptr<string> appIp_ {};
    // The bill batch date in the format of yyyy-MM-dd, such as 2026-06-21.
    // 
    // This parameter is required.
    shared_ptr<string> billBatch_ {};
    // The customer decision. Valid values:
    // - 1: bill in the current period.
    // - 2: deferred billing.
    // - null: bill based on the current billing decision of the record.
    shared_ptr<int32_t> customerDecision_ {};
    // The dimension type. Valid values:
    // - 1: bill ID.
    // - 2: order number.
    // - 3: approval form.
    // - 4: invoice title.
    // 
    // This parameter is required.
    shared_ptr<int32_t> dimension_ {};
    // The values determined by the dimension parameter. For example, if dimension is set to 1, the values should be bill IDs.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> values_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
