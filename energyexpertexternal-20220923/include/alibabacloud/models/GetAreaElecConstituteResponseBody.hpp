// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAREAELECCONSTITUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAREAELECCONSTITUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CarbonEmissionElecSummaryItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetAreaElecConstituteResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAreaElecConstituteResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAreaElecConstituteResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetAreaElecConstituteResponseBody() = default ;
    GetAreaElecConstituteResponseBody(const GetAreaElecConstituteResponseBody &) = default ;
    GetAreaElecConstituteResponseBody(GetAreaElecConstituteResponseBody &&) = default ;
    GetAreaElecConstituteResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAreaElecConstituteResponseBody() = default ;
    GetAreaElecConstituteResponseBody& operator=(const GetAreaElecConstituteResponseBody &) = default ;
    GetAreaElecConstituteResponseBody& operator=(GetAreaElecConstituteResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(light, light_);
        DARABONBA_PTR_TO_JSON(nuclear, nuclear_);
        DARABONBA_PTR_TO_JSON(renewing, renewing_);
        DARABONBA_PTR_TO_JSON(urban, urban_);
        DARABONBA_PTR_TO_JSON(water, water_);
        DARABONBA_PTR_TO_JSON(wind, wind_);
        DARABONBA_PTR_TO_JSON(zero, zero_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(light, light_);
        DARABONBA_PTR_FROM_JSON(nuclear, nuclear_);
        DARABONBA_PTR_FROM_JSON(renewing, renewing_);
        DARABONBA_PTR_FROM_JSON(urban, urban_);
        DARABONBA_PTR_FROM_JSON(water, water_);
        DARABONBA_PTR_FROM_JSON(wind, wind_);
        DARABONBA_PTR_FROM_JSON(zero, zero_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->light_ == nullptr
        && this->nuclear_ == nullptr && this->renewing_ == nullptr && this->urban_ == nullptr && this->water_ == nullptr && this->wind_ == nullptr
        && this->zero_ == nullptr; };
      // light Field Functions 
      bool hasLight() const { return this->light_ != nullptr;};
      void deleteLight() { this->light_ = nullptr;};
      inline const vector<CarbonEmissionElecSummaryItem> & getLight() const { DARABONBA_PTR_GET_CONST(light_, vector<CarbonEmissionElecSummaryItem>) };
      inline vector<CarbonEmissionElecSummaryItem> getLight() { DARABONBA_PTR_GET(light_, vector<CarbonEmissionElecSummaryItem>) };
      inline Data& setLight(const vector<CarbonEmissionElecSummaryItem> & light) { DARABONBA_PTR_SET_VALUE(light_, light) };
      inline Data& setLight(vector<CarbonEmissionElecSummaryItem> && light) { DARABONBA_PTR_SET_RVALUE(light_, light) };


      // nuclear Field Functions 
      bool hasNuclear() const { return this->nuclear_ != nullptr;};
      void deleteNuclear() { this->nuclear_ = nullptr;};
      inline const vector<CarbonEmissionElecSummaryItem> & getNuclear() const { DARABONBA_PTR_GET_CONST(nuclear_, vector<CarbonEmissionElecSummaryItem>) };
      inline vector<CarbonEmissionElecSummaryItem> getNuclear() { DARABONBA_PTR_GET(nuclear_, vector<CarbonEmissionElecSummaryItem>) };
      inline Data& setNuclear(const vector<CarbonEmissionElecSummaryItem> & nuclear) { DARABONBA_PTR_SET_VALUE(nuclear_, nuclear) };
      inline Data& setNuclear(vector<CarbonEmissionElecSummaryItem> && nuclear) { DARABONBA_PTR_SET_RVALUE(nuclear_, nuclear) };


      // renewing Field Functions 
      bool hasRenewing() const { return this->renewing_ != nullptr;};
      void deleteRenewing() { this->renewing_ = nullptr;};
      inline const vector<CarbonEmissionElecSummaryItem> & getRenewing() const { DARABONBA_PTR_GET_CONST(renewing_, vector<CarbonEmissionElecSummaryItem>) };
      inline vector<CarbonEmissionElecSummaryItem> getRenewing() { DARABONBA_PTR_GET(renewing_, vector<CarbonEmissionElecSummaryItem>) };
      inline Data& setRenewing(const vector<CarbonEmissionElecSummaryItem> & renewing) { DARABONBA_PTR_SET_VALUE(renewing_, renewing) };
      inline Data& setRenewing(vector<CarbonEmissionElecSummaryItem> && renewing) { DARABONBA_PTR_SET_RVALUE(renewing_, renewing) };


      // urban Field Functions 
      bool hasUrban() const { return this->urban_ != nullptr;};
      void deleteUrban() { this->urban_ = nullptr;};
      inline const vector<CarbonEmissionElecSummaryItem> & getUrban() const { DARABONBA_PTR_GET_CONST(urban_, vector<CarbonEmissionElecSummaryItem>) };
      inline vector<CarbonEmissionElecSummaryItem> getUrban() { DARABONBA_PTR_GET(urban_, vector<CarbonEmissionElecSummaryItem>) };
      inline Data& setUrban(const vector<CarbonEmissionElecSummaryItem> & urban) { DARABONBA_PTR_SET_VALUE(urban_, urban) };
      inline Data& setUrban(vector<CarbonEmissionElecSummaryItem> && urban) { DARABONBA_PTR_SET_RVALUE(urban_, urban) };


      // water Field Functions 
      bool hasWater() const { return this->water_ != nullptr;};
      void deleteWater() { this->water_ = nullptr;};
      inline const vector<CarbonEmissionElecSummaryItem> & getWater() const { DARABONBA_PTR_GET_CONST(water_, vector<CarbonEmissionElecSummaryItem>) };
      inline vector<CarbonEmissionElecSummaryItem> getWater() { DARABONBA_PTR_GET(water_, vector<CarbonEmissionElecSummaryItem>) };
      inline Data& setWater(const vector<CarbonEmissionElecSummaryItem> & water) { DARABONBA_PTR_SET_VALUE(water_, water) };
      inline Data& setWater(vector<CarbonEmissionElecSummaryItem> && water) { DARABONBA_PTR_SET_RVALUE(water_, water) };


      // wind Field Functions 
      bool hasWind() const { return this->wind_ != nullptr;};
      void deleteWind() { this->wind_ = nullptr;};
      inline const vector<CarbonEmissionElecSummaryItem> & getWind() const { DARABONBA_PTR_GET_CONST(wind_, vector<CarbonEmissionElecSummaryItem>) };
      inline vector<CarbonEmissionElecSummaryItem> getWind() { DARABONBA_PTR_GET(wind_, vector<CarbonEmissionElecSummaryItem>) };
      inline Data& setWind(const vector<CarbonEmissionElecSummaryItem> & wind) { DARABONBA_PTR_SET_VALUE(wind_, wind) };
      inline Data& setWind(vector<CarbonEmissionElecSummaryItem> && wind) { DARABONBA_PTR_SET_RVALUE(wind_, wind) };


      // zero Field Functions 
      bool hasZero() const { return this->zero_ != nullptr;};
      void deleteZero() { this->zero_ = nullptr;};
      inline const vector<CarbonEmissionElecSummaryItem> & getZero() const { DARABONBA_PTR_GET_CONST(zero_, vector<CarbonEmissionElecSummaryItem>) };
      inline vector<CarbonEmissionElecSummaryItem> getZero() { DARABONBA_PTR_GET(zero_, vector<CarbonEmissionElecSummaryItem>) };
      inline Data& setZero(const vector<CarbonEmissionElecSummaryItem> & zero) { DARABONBA_PTR_SET_VALUE(zero_, zero) };
      inline Data& setZero(vector<CarbonEmissionElecSummaryItem> && zero) { DARABONBA_PTR_SET_RVALUE(zero_, zero) };


    protected:
      // Photoelectric power consumption and carbon emission data of each enterprise.
      shared_ptr<vector<CarbonEmissionElecSummaryItem>> light_ {};
      // Data on nuclear power consumption and carbon emissions at each enterprise.
      shared_ptr<vector<CarbonEmissionElecSummaryItem>> nuclear_ {};
      // Data on renewable electricity consumption and carbon emissions at each enterprise.
      shared_ptr<vector<CarbonEmissionElecSummaryItem>> renewing_ {};
      // Data on mains electricity consumption and carbon emission of each enterprise.
      shared_ptr<vector<CarbonEmissionElecSummaryItem>> urban_ {};
      // Hydropower consumption and carbon emission data of each enterprise.
      shared_ptr<vector<CarbonEmissionElecSummaryItem>> water_ {};
      // Wind power consumption and carbon emission data of each enterprise.
      shared_ptr<vector<CarbonEmissionElecSummaryItem>> wind_ {};
      // Data of zero electricity consumption and carbon emission of each enterprise.
      shared_ptr<vector<CarbonEmissionElecSummaryItem>> zero_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAreaElecConstituteResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAreaElecConstituteResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAreaElecConstituteResponseBody::Data) };
    inline GetAreaElecConstituteResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAreaElecConstituteResponseBody::Data) };
    inline GetAreaElecConstituteResponseBody& setData(const GetAreaElecConstituteResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAreaElecConstituteResponseBody& setData(GetAreaElecConstituteResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAreaElecConstituteResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The code returned for the request. A value of Success indicates that the request was successful. Other values indicate that the request failed. You can troubleshoot the error by viewing the error message returned.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<GetAreaElecConstituteResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
