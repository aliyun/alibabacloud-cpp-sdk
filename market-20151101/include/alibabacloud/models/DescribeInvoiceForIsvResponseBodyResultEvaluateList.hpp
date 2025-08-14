// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINVOICEFORISVRESPONSEBODYRESULTEVALUATELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINVOICEFORISVRESPONSEBODYRESULTEVALUATELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeInvoiceForIsvResponseBodyResultEvaluateList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInvoiceForIsvResponseBodyResultEvaluateList& obj) { 
      DARABONBA_PTR_TO_JSON(Agent, agent_);
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(BizTimeStr, bizTimeStr_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(OutBizId, outBizId_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductName, productName_);
      DARABONBA_PTR_TO_JSON(RealAliyunId, realAliyunId_);
      DARABONBA_PTR_TO_JSON(RealAliyunPk, realAliyunPk_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInvoiceForIsvResponseBodyResultEvaluateList& obj) { 
      DARABONBA_PTR_FROM_JSON(Agent, agent_);
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(BizTimeStr, bizTimeStr_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(OutBizId, outBizId_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductName, productName_);
      DARABONBA_PTR_FROM_JSON(RealAliyunId, realAliyunId_);
      DARABONBA_PTR_FROM_JSON(RealAliyunPk, realAliyunPk_);
    };
    DescribeInvoiceForIsvResponseBodyResultEvaluateList() = default ;
    DescribeInvoiceForIsvResponseBodyResultEvaluateList(const DescribeInvoiceForIsvResponseBodyResultEvaluateList &) = default ;
    DescribeInvoiceForIsvResponseBodyResultEvaluateList(DescribeInvoiceForIsvResponseBodyResultEvaluateList &&) = default ;
    DescribeInvoiceForIsvResponseBodyResultEvaluateList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInvoiceForIsvResponseBodyResultEvaluateList() = default ;
    DescribeInvoiceForIsvResponseBodyResultEvaluateList& operator=(const DescribeInvoiceForIsvResponseBodyResultEvaluateList &) = default ;
    DescribeInvoiceForIsvResponseBodyResultEvaluateList& operator=(DescribeInvoiceForIsvResponseBodyResultEvaluateList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agent_ != nullptr
        && this->amount_ != nullptr && this->bizTimeStr_ != nullptr && this->id_ != nullptr && this->orderType_ != nullptr && this->outBizId_ != nullptr
        && this->productCode_ != nullptr && this->productName_ != nullptr && this->realAliyunId_ != nullptr && this->realAliyunPk_ != nullptr; };
    // agent Field Functions 
    bool hasAgent() const { return this->agent_ != nullptr;};
    void deleteAgent() { this->agent_ = nullptr;};
    inline bool agent() const { DARABONBA_PTR_GET_DEFAULT(agent_, false) };
    inline DescribeInvoiceForIsvResponseBodyResultEvaluateList& setAgent(bool agent) { DARABONBA_PTR_SET_VALUE(agent_, agent) };


    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline string amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, "") };
    inline DescribeInvoiceForIsvResponseBodyResultEvaluateList& setAmount(string amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // bizTimeStr Field Functions 
    bool hasBizTimeStr() const { return this->bizTimeStr_ != nullptr;};
    void deleteBizTimeStr() { this->bizTimeStr_ = nullptr;};
    inline string bizTimeStr() const { DARABONBA_PTR_GET_DEFAULT(bizTimeStr_, "") };
    inline DescribeInvoiceForIsvResponseBodyResultEvaluateList& setBizTimeStr(string bizTimeStr) { DARABONBA_PTR_SET_VALUE(bizTimeStr_, bizTimeStr) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeInvoiceForIsvResponseBodyResultEvaluateList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline DescribeInvoiceForIsvResponseBodyResultEvaluateList& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // outBizId Field Functions 
    bool hasOutBizId() const { return this->outBizId_ != nullptr;};
    void deleteOutBizId() { this->outBizId_ = nullptr;};
    inline string outBizId() const { DARABONBA_PTR_GET_DEFAULT(outBizId_, "") };
    inline DescribeInvoiceForIsvResponseBodyResultEvaluateList& setOutBizId(string outBizId) { DARABONBA_PTR_SET_VALUE(outBizId_, outBizId) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeInvoiceForIsvResponseBodyResultEvaluateList& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string productName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline DescribeInvoiceForIsvResponseBodyResultEvaluateList& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // realAliyunId Field Functions 
    bool hasRealAliyunId() const { return this->realAliyunId_ != nullptr;};
    void deleteRealAliyunId() { this->realAliyunId_ = nullptr;};
    inline string realAliyunId() const { DARABONBA_PTR_GET_DEFAULT(realAliyunId_, "") };
    inline DescribeInvoiceForIsvResponseBodyResultEvaluateList& setRealAliyunId(string realAliyunId) { DARABONBA_PTR_SET_VALUE(realAliyunId_, realAliyunId) };


    // realAliyunPk Field Functions 
    bool hasRealAliyunPk() const { return this->realAliyunPk_ != nullptr;};
    void deleteRealAliyunPk() { this->realAliyunPk_ = nullptr;};
    inline string realAliyunPk() const { DARABONBA_PTR_GET_DEFAULT(realAliyunPk_, "") };
    inline DescribeInvoiceForIsvResponseBodyResultEvaluateList& setRealAliyunPk(string realAliyunPk) { DARABONBA_PTR_SET_VALUE(realAliyunPk_, realAliyunPk) };


  protected:
    std::shared_ptr<bool> agent_ = nullptr;
    std::shared_ptr<string> amount_ = nullptr;
    std::shared_ptr<string> bizTimeStr_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> orderType_ = nullptr;
    std::shared_ptr<string> outBizId_ = nullptr;
    std::shared_ptr<string> productCode_ = nullptr;
    std::shared_ptr<string> productName_ = nullptr;
    std::shared_ptr<string> realAliyunId_ = nullptr;
    std::shared_ptr<string> realAliyunPk_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
