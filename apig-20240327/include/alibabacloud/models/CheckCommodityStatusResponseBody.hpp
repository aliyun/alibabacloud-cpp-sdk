// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKCOMMODITYSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKCOMMODITYSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CheckCommodityStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckCommodityStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(commodities, commodities_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckCommodityStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(commodities, commodities_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CheckCommodityStatusResponseBody() = default ;
    CheckCommodityStatusResponseBody(const CheckCommodityStatusResponseBody &) = default ;
    CheckCommodityStatusResponseBody(CheckCommodityStatusResponseBody &&) = default ;
    CheckCommodityStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckCommodityStatusResponseBody() = default ;
    CheckCommodityStatusResponseBody& operator=(const CheckCommodityStatusResponseBody &) = default ;
    CheckCommodityStatusResponseBody& operator=(CheckCommodityStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Commodities : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Commodities& obj) { 
        DARABONBA_PTR_TO_JSON(commodityCode, commodityCode_);
        DARABONBA_PTR_TO_JSON(enable, enable_);
      };
      friend void from_json(const Darabonba::Json& j, Commodities& obj) { 
        DARABONBA_PTR_FROM_JSON(commodityCode, commodityCode_);
        DARABONBA_PTR_FROM_JSON(enable, enable_);
      };
      Commodities() = default ;
      Commodities(const Commodities &) = default ;
      Commodities(Commodities &&) = default ;
      Commodities(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Commodities() = default ;
      Commodities& operator=(const Commodities &) = default ;
      Commodities& operator=(Commodities &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->commodityCode_ == nullptr
        && this->enable_ == nullptr; };
      // commodityCode Field Functions 
      bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
      void deleteCommodityCode() { this->commodityCode_ = nullptr;};
      inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
      inline Commodities& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline Commodities& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    protected:
      // The commodity code.
      shared_ptr<string> commodityCode_ {};
      // Indicates whether the commodity capability is enabled for the current account.
      shared_ptr<bool> enable_ {};
    };

    virtual bool empty() const override { return this->commodities_ == nullptr
        && this->requestId_ == nullptr; };
    // commodities Field Functions 
    bool hasCommodities() const { return this->commodities_ != nullptr;};
    void deleteCommodities() { this->commodities_ = nullptr;};
    inline const vector<CheckCommodityStatusResponseBody::Commodities> & getCommodities() const { DARABONBA_PTR_GET_CONST(commodities_, vector<CheckCommodityStatusResponseBody::Commodities>) };
    inline vector<CheckCommodityStatusResponseBody::Commodities> getCommodities() { DARABONBA_PTR_GET(commodities_, vector<CheckCommodityStatusResponseBody::Commodities>) };
    inline CheckCommodityStatusResponseBody& setCommodities(const vector<CheckCommodityStatusResponseBody::Commodities> & commodities) { DARABONBA_PTR_SET_VALUE(commodities_, commodities) };
    inline CheckCommodityStatusResponseBody& setCommodities(vector<CheckCommodityStatusResponseBody::Commodities> && commodities) { DARABONBA_PTR_SET_RVALUE(commodities_, commodities) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckCommodityStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The commodity status list. Each item contains the commodity code and indicates whether the commodity capability is enabled for the current account.
    shared_ptr<vector<CheckCommodityStatusResponseBody::Commodities>> commodities_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
