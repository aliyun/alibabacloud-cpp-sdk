// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLOSEOUTORDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECLOSEOUTORDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class CreateCloseoutOrderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCloseoutOrderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCloseoutOrderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateCloseoutOrderResponseBody() = default ;
    CreateCloseoutOrderResponseBody(const CreateCloseoutOrderResponseBody &) = default ;
    CreateCloseoutOrderResponseBody(CreateCloseoutOrderResponseBody &&) = default ;
    CreateCloseoutOrderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCloseoutOrderResponseBody() = default ;
    CreateCloseoutOrderResponseBody& operator=(const CreateCloseoutOrderResponseBody &) = default ;
    CreateCloseoutOrderResponseBody& operator=(CreateCloseoutOrderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(BizIds, bizIds_);
        DARABONBA_PTR_TO_JSON(BuyerBlockTrade, buyerBlockTrade_);
        DARABONBA_PTR_TO_JSON(DomainBlockTrade, domainBlockTrade_);
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
        DARABONBA_PTR_TO_JSON(DomainTradeRiskWarn, domainTradeRiskWarn_);
        DARABONBA_PTR_TO_JSON(Extend, extend_);
        DARABONBA_PTR_TO_JSON(IgnoredDomains, ignoredDomains_);
        DARABONBA_PTR_TO_JSON(NeedPay, needPay_);
        DARABONBA_PTR_TO_JSON(OrderNo, orderNo_);
        DARABONBA_PTR_TO_JSON(OrderSumMoney, orderSumMoney_);
        DARABONBA_PTR_TO_JSON(OutOrderNo, outOrderNo_);
        DARABONBA_PTR_TO_JSON(PayMoney, payMoney_);
        DARABONBA_PTR_TO_JSON(PayUrl, payUrl_);
        DARABONBA_PTR_TO_JSON(RealNameTemplate, realNameTemplate_);
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(BizIds, bizIds_);
        DARABONBA_PTR_FROM_JSON(BuyerBlockTrade, buyerBlockTrade_);
        DARABONBA_PTR_FROM_JSON(DomainBlockTrade, domainBlockTrade_);
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
        DARABONBA_PTR_FROM_JSON(DomainTradeRiskWarn, domainTradeRiskWarn_);
        DARABONBA_PTR_FROM_JSON(Extend, extend_);
        DARABONBA_PTR_FROM_JSON(IgnoredDomains, ignoredDomains_);
        DARABONBA_PTR_FROM_JSON(NeedPay, needPay_);
        DARABONBA_PTR_FROM_JSON(OrderNo, orderNo_);
        DARABONBA_PTR_FROM_JSON(OrderSumMoney, orderSumMoney_);
        DARABONBA_PTR_FROM_JSON(OutOrderNo, outOrderNo_);
        DARABONBA_PTR_FROM_JSON(PayMoney, payMoney_);
        DARABONBA_PTR_FROM_JSON(PayUrl, payUrl_);
        DARABONBA_PTR_FROM_JSON(RealNameTemplate, realNameTemplate_);
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      };
      Module() = default ;
      Module(const Module &) = default ;
      Module(Module &&) = default ;
      Module(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Module() = default ;
      Module& operator=(const Module &) = default ;
      Module& operator=(Module &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bizIds_ == nullptr
        && this->buyerBlockTrade_ == nullptr && this->domainBlockTrade_ == nullptr && this->domainName_ == nullptr && this->domainTradeRiskWarn_ == nullptr && this->extend_ == nullptr
        && this->ignoredDomains_ == nullptr && this->needPay_ == nullptr && this->orderNo_ == nullptr && this->orderSumMoney_ == nullptr && this->outOrderNo_ == nullptr
        && this->payMoney_ == nullptr && this->payUrl_ == nullptr && this->realNameTemplate_ == nullptr && this->requestId_ == nullptr; };
      // bizIds Field Functions 
      bool hasBizIds() const { return this->bizIds_ != nullptr;};
      void deleteBizIds() { this->bizIds_ = nullptr;};
      inline const map<string, string> & getBizIds() const { DARABONBA_PTR_GET_CONST(bizIds_, map<string, string>) };
      inline map<string, string> getBizIds() { DARABONBA_PTR_GET(bizIds_, map<string, string>) };
      inline Module& setBizIds(const map<string, string> & bizIds) { DARABONBA_PTR_SET_VALUE(bizIds_, bizIds) };
      inline Module& setBizIds(map<string, string> && bizIds) { DARABONBA_PTR_SET_RVALUE(bizIds_, bizIds) };


      // buyerBlockTrade Field Functions 
      bool hasBuyerBlockTrade() const { return this->buyerBlockTrade_ != nullptr;};
      void deleteBuyerBlockTrade() { this->buyerBlockTrade_ = nullptr;};
      inline const vector<string> & getBuyerBlockTrade() const { DARABONBA_PTR_GET_CONST(buyerBlockTrade_, vector<string>) };
      inline vector<string> getBuyerBlockTrade() { DARABONBA_PTR_GET(buyerBlockTrade_, vector<string>) };
      inline Module& setBuyerBlockTrade(const vector<string> & buyerBlockTrade) { DARABONBA_PTR_SET_VALUE(buyerBlockTrade_, buyerBlockTrade) };
      inline Module& setBuyerBlockTrade(vector<string> && buyerBlockTrade) { DARABONBA_PTR_SET_RVALUE(buyerBlockTrade_, buyerBlockTrade) };


      // domainBlockTrade Field Functions 
      bool hasDomainBlockTrade() const { return this->domainBlockTrade_ != nullptr;};
      void deleteDomainBlockTrade() { this->domainBlockTrade_ = nullptr;};
      inline const vector<string> & getDomainBlockTrade() const { DARABONBA_PTR_GET_CONST(domainBlockTrade_, vector<string>) };
      inline vector<string> getDomainBlockTrade() { DARABONBA_PTR_GET(domainBlockTrade_, vector<string>) };
      inline Module& setDomainBlockTrade(const vector<string> & domainBlockTrade) { DARABONBA_PTR_SET_VALUE(domainBlockTrade_, domainBlockTrade) };
      inline Module& setDomainBlockTrade(vector<string> && domainBlockTrade) { DARABONBA_PTR_SET_RVALUE(domainBlockTrade_, domainBlockTrade) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline Module& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // domainTradeRiskWarn Field Functions 
      bool hasDomainTradeRiskWarn() const { return this->domainTradeRiskWarn_ != nullptr;};
      void deleteDomainTradeRiskWarn() { this->domainTradeRiskWarn_ = nullptr;};
      inline const vector<string> & getDomainTradeRiskWarn() const { DARABONBA_PTR_GET_CONST(domainTradeRiskWarn_, vector<string>) };
      inline vector<string> getDomainTradeRiskWarn() { DARABONBA_PTR_GET(domainTradeRiskWarn_, vector<string>) };
      inline Module& setDomainTradeRiskWarn(const vector<string> & domainTradeRiskWarn) { DARABONBA_PTR_SET_VALUE(domainTradeRiskWarn_, domainTradeRiskWarn) };
      inline Module& setDomainTradeRiskWarn(vector<string> && domainTradeRiskWarn) { DARABONBA_PTR_SET_RVALUE(domainTradeRiskWarn_, domainTradeRiskWarn) };


      // extend Field Functions 
      bool hasExtend() const { return this->extend_ != nullptr;};
      void deleteExtend() { this->extend_ = nullptr;};
      inline const map<string, string> & getExtend() const { DARABONBA_PTR_GET_CONST(extend_, map<string, string>) };
      inline map<string, string> getExtend() { DARABONBA_PTR_GET(extend_, map<string, string>) };
      inline Module& setExtend(const map<string, string> & extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };
      inline Module& setExtend(map<string, string> && extend) { DARABONBA_PTR_SET_RVALUE(extend_, extend) };


      // ignoredDomains Field Functions 
      bool hasIgnoredDomains() const { return this->ignoredDomains_ != nullptr;};
      void deleteIgnoredDomains() { this->ignoredDomains_ = nullptr;};
      inline const vector<map<string, string>> & getIgnoredDomains() const { DARABONBA_PTR_GET_CONST(ignoredDomains_, vector<map<string, string>>) };
      inline vector<map<string, string>> getIgnoredDomains() { DARABONBA_PTR_GET(ignoredDomains_, vector<map<string, string>>) };
      inline Module& setIgnoredDomains(const vector<map<string, string>> & ignoredDomains) { DARABONBA_PTR_SET_VALUE(ignoredDomains_, ignoredDomains) };
      inline Module& setIgnoredDomains(vector<map<string, string>> && ignoredDomains) { DARABONBA_PTR_SET_RVALUE(ignoredDomains_, ignoredDomains) };


      // needPay Field Functions 
      bool hasNeedPay() const { return this->needPay_ != nullptr;};
      void deleteNeedPay() { this->needPay_ = nullptr;};
      inline bool getNeedPay() const { DARABONBA_PTR_GET_DEFAULT(needPay_, false) };
      inline Module& setNeedPay(bool needPay) { DARABONBA_PTR_SET_VALUE(needPay_, needPay) };


      // orderNo Field Functions 
      bool hasOrderNo() const { return this->orderNo_ != nullptr;};
      void deleteOrderNo() { this->orderNo_ = nullptr;};
      inline string getOrderNo() const { DARABONBA_PTR_GET_DEFAULT(orderNo_, "") };
      inline Module& setOrderNo(string orderNo) { DARABONBA_PTR_SET_VALUE(orderNo_, orderNo) };


      // orderSumMoney Field Functions 
      bool hasOrderSumMoney() const { return this->orderSumMoney_ != nullptr;};
      void deleteOrderSumMoney() { this->orderSumMoney_ = nullptr;};
      inline double getOrderSumMoney() const { DARABONBA_PTR_GET_DEFAULT(orderSumMoney_, 0.0) };
      inline Module& setOrderSumMoney(double orderSumMoney) { DARABONBA_PTR_SET_VALUE(orderSumMoney_, orderSumMoney) };


      // outOrderNo Field Functions 
      bool hasOutOrderNo() const { return this->outOrderNo_ != nullptr;};
      void deleteOutOrderNo() { this->outOrderNo_ = nullptr;};
      inline string getOutOrderNo() const { DARABONBA_PTR_GET_DEFAULT(outOrderNo_, "") };
      inline Module& setOutOrderNo(string outOrderNo) { DARABONBA_PTR_SET_VALUE(outOrderNo_, outOrderNo) };


      // payMoney Field Functions 
      bool hasPayMoney() const { return this->payMoney_ != nullptr;};
      void deletePayMoney() { this->payMoney_ = nullptr;};
      inline double getPayMoney() const { DARABONBA_PTR_GET_DEFAULT(payMoney_, 0.0) };
      inline Module& setPayMoney(double payMoney) { DARABONBA_PTR_SET_VALUE(payMoney_, payMoney) };


      // payUrl Field Functions 
      bool hasPayUrl() const { return this->payUrl_ != nullptr;};
      void deletePayUrl() { this->payUrl_ = nullptr;};
      inline string getPayUrl() const { DARABONBA_PTR_GET_DEFAULT(payUrl_, "") };
      inline Module& setPayUrl(string payUrl) { DARABONBA_PTR_SET_VALUE(payUrl_, payUrl) };


      // realNameTemplate Field Functions 
      bool hasRealNameTemplate() const { return this->realNameTemplate_ != nullptr;};
      void deleteRealNameTemplate() { this->realNameTemplate_ = nullptr;};
      inline const vector<int64_t> & getRealNameTemplate() const { DARABONBA_PTR_GET_CONST(realNameTemplate_, vector<int64_t>) };
      inline vector<int64_t> getRealNameTemplate() { DARABONBA_PTR_GET(realNameTemplate_, vector<int64_t>) };
      inline Module& setRealNameTemplate(const vector<int64_t> & realNameTemplate) { DARABONBA_PTR_SET_VALUE(realNameTemplate_, realNameTemplate) };
      inline Module& setRealNameTemplate(vector<int64_t> && realNameTemplate) { DARABONBA_PTR_SET_RVALUE(realNameTemplate_, realNameTemplate) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline Module& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    protected:
      shared_ptr<map<string, string>> bizIds_ {};
      shared_ptr<vector<string>> buyerBlockTrade_ {};
      shared_ptr<vector<string>> domainBlockTrade_ {};
      shared_ptr<string> domainName_ {};
      shared_ptr<vector<string>> domainTradeRiskWarn_ {};
      shared_ptr<map<string, string>> extend_ {};
      shared_ptr<vector<map<string, string>>> ignoredDomains_ {};
      shared_ptr<bool> needPay_ {};
      shared_ptr<string> orderNo_ {};
      shared_ptr<double> orderSumMoney_ {};
      shared_ptr<string> outOrderNo_ {};
      shared_ptr<double> payMoney_ {};
      shared_ptr<string> payUrl_ {};
      shared_ptr<vector<int64_t>> realNameTemplate_ {};
      shared_ptr<string> requestId_ {};
    };

    virtual bool empty() const override { return this->module_ == nullptr
        && this->requestId_ == nullptr; };
    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const CreateCloseoutOrderResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, CreateCloseoutOrderResponseBody::Module) };
    inline CreateCloseoutOrderResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, CreateCloseoutOrderResponseBody::Module) };
    inline CreateCloseoutOrderResponseBody& setModule(const CreateCloseoutOrderResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline CreateCloseoutOrderResponseBody& setModule(CreateCloseoutOrderResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCloseoutOrderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<CreateCloseoutOrderResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
