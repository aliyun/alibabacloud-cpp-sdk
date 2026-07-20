// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ESTIMATEDPRICEQUERYV2RESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ESTIMATEDPRICEQUERYV2RESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ModulePriceMapValue.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class EstimatedPriceQueryV2ResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EstimatedPriceQueryV2ResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, EstimatedPriceQueryV2ResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    EstimatedPriceQueryV2ResponseBody() = default ;
    EstimatedPriceQueryV2ResponseBody(const EstimatedPriceQueryV2ResponseBody &) = default ;
    EstimatedPriceQueryV2ResponseBody(EstimatedPriceQueryV2ResponseBody &&) = default ;
    EstimatedPriceQueryV2ResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EstimatedPriceQueryV2ResponseBody() = default ;
    EstimatedPriceQueryV2ResponseBody& operator=(const EstimatedPriceQueryV2ResponseBody &) = default ;
    EstimatedPriceQueryV2ResponseBody& operator=(EstimatedPriceQueryV2ResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(biz_type, bizType_);
        DARABONBA_PTR_TO_JSON(price_map, priceMap_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(biz_type, bizType_);
        DARABONBA_PTR_FROM_JSON(price_map, priceMap_);
        DARABONBA_PTR_FROM_JSON(type, type_);
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
      virtual bool empty() const override { return this->bizType_ == nullptr
        && this->priceMap_ == nullptr && this->type_ == nullptr; };
      // bizType Field Functions 
      bool hasBizType() const { return this->bizType_ != nullptr;};
      void deleteBizType() { this->bizType_ = nullptr;};
      inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
      inline Module& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


      // priceMap Field Functions 
      bool hasPriceMap() const { return this->priceMap_ != nullptr;};
      void deletePriceMap() { this->priceMap_ = nullptr;};
      inline const map<string, ModulePriceMapValue> & getPriceMap() const { DARABONBA_PTR_GET_CONST(priceMap_, map<string, ModulePriceMapValue>) };
      inline map<string, ModulePriceMapValue> getPriceMap() { DARABONBA_PTR_GET(priceMap_, map<string, ModulePriceMapValue>) };
      inline Module& setPriceMap(const map<string, ModulePriceMapValue> & priceMap) { DARABONBA_PTR_SET_VALUE(priceMap_, priceMap) };
      inline Module& setPriceMap(map<string, ModulePriceMapValue> && priceMap) { DARABONBA_PTR_SET_RVALUE(priceMap_, priceMap) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Module& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The category, such as flight, hotel, or train.
      shared_ptr<string> bizType_ {};
      // The price map. Key: min and max.
      shared_ptr<map<string, ModulePriceMapValue>> priceMap_ {};
      // The type, such as economy class, business class, first class, G/D train, other, or travel standard.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline EstimatedPriceQueryV2ResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const vector<EstimatedPriceQueryV2ResponseBody::Module> & getModule() const { DARABONBA_PTR_GET_CONST(module_, vector<EstimatedPriceQueryV2ResponseBody::Module>) };
    inline vector<EstimatedPriceQueryV2ResponseBody::Module> getModule() { DARABONBA_PTR_GET(module_, vector<EstimatedPriceQueryV2ResponseBody::Module>) };
    inline EstimatedPriceQueryV2ResponseBody& setModule(const vector<EstimatedPriceQueryV2ResponseBody::Module> & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline EstimatedPriceQueryV2ResponseBody& setModule(vector<EstimatedPriceQueryV2ResponseBody::Module> && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EstimatedPriceQueryV2ResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline EstimatedPriceQueryV2ResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline EstimatedPriceQueryV2ResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The status code.
    shared_ptr<int32_t> code_ {};
    // The response data.
    shared_ptr<vector<EstimatedPriceQueryV2ResponseBody::Module>> module_ {};
    // The unique identifier of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
    // traceId
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
