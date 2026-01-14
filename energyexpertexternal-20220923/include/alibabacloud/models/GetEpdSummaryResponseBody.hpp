// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEPDSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEPDSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetEpdSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEpdSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetEpdSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetEpdSummaryResponseBody() = default ;
    GetEpdSummaryResponseBody(const GetEpdSummaryResponseBody &) = default ;
    GetEpdSummaryResponseBody(GetEpdSummaryResponseBody &&) = default ;
    GetEpdSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEpdSummaryResponseBody() = default ;
    GetEpdSummaryResponseBody& operator=(const GetEpdSummaryResponseBody &) = default ;
    GetEpdSummaryResponseBody& operator=(GetEpdSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(carbonEmission, carbonEmission_);
        DARABONBA_PTR_TO_JSON(indicator, indicator_);
        DARABONBA_PTR_TO_JSON(key, key_);
        DARABONBA_PTR_TO_JSON(method, method_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(num, num_);
        DARABONBA_PTR_TO_JSON(preUnit, preUnit_);
        DARABONBA_PTR_TO_JSON(state, state_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(carbonEmission, carbonEmission_);
        DARABONBA_PTR_FROM_JSON(indicator, indicator_);
        DARABONBA_PTR_FROM_JSON(key, key_);
        DARABONBA_PTR_FROM_JSON(method, method_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(num, num_);
        DARABONBA_PTR_FROM_JSON(preUnit, preUnit_);
        DARABONBA_PTR_FROM_JSON(state, state_);
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
      virtual bool empty() const override { return this->carbonEmission_ == nullptr
        && this->indicator_ == nullptr && this->key_ == nullptr && this->method_ == nullptr && this->name_ == nullptr && this->num_ == nullptr
        && this->preUnit_ == nullptr && this->state_ == nullptr; };
      // carbonEmission Field Functions 
      bool hasCarbonEmission() const { return this->carbonEmission_ != nullptr;};
      void deleteCarbonEmission() { this->carbonEmission_ = nullptr;};
      inline double getCarbonEmission() const { DARABONBA_PTR_GET_DEFAULT(carbonEmission_, 0.0) };
      inline Data& setCarbonEmission(double carbonEmission) { DARABONBA_PTR_SET_VALUE(carbonEmission_, carbonEmission) };


      // indicator Field Functions 
      bool hasIndicator() const { return this->indicator_ != nullptr;};
      void deleteIndicator() { this->indicator_ = nullptr;};
      inline string getIndicator() const { DARABONBA_PTR_GET_DEFAULT(indicator_, "") };
      inline Data& setIndicator(string indicator) { DARABONBA_PTR_SET_VALUE(indicator_, indicator) };


      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Data& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // method Field Functions 
      bool hasMethod() const { return this->method_ != nullptr;};
      void deleteMethod() { this->method_ = nullptr;};
      inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
      inline Data& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // num Field Functions 
      bool hasNum() const { return this->num_ != nullptr;};
      void deleteNum() { this->num_ = nullptr;};
      inline int64_t getNum() const { DARABONBA_PTR_GET_DEFAULT(num_, 0L) };
      inline Data& setNum(int64_t num) { DARABONBA_PTR_SET_VALUE(num_, num) };


      // preUnit Field Functions 
      bool hasPreUnit() const { return this->preUnit_ != nullptr;};
      void deletePreUnit() { this->preUnit_ = nullptr;};
      inline string getPreUnit() const { DARABONBA_PTR_GET_DEFAULT(preUnit_, "") };
      inline Data& setPreUnit(string preUnit) { DARABONBA_PTR_SET_VALUE(preUnit_, preUnit) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline int64_t getState() const { DARABONBA_PTR_GET_DEFAULT(state_, 0L) };
      inline Data& setState(int64_t state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    protected:
      // Emissions. The result is maintained up to 31 decimal places for precise intermediate calculation and subsequently truncated for display. It is advised to pair the emissions figure with the unit of the environmental impact result for a comprehensive understanding.
      shared_ptr<double> carbonEmission_ {};
      // The evaluation index adopted for the environmental impact
      shared_ptr<string> indicator_ {};
      // The category key. The environmental impact category. Currently, a maximum of 19 categories are supported. Enumeration refers to [Carbon Footprint Appendices](https://carbon-doc.oss-cn-hangzhou.aliyuncs.com/CarbonFootprintAppendices-en.pdf).
      shared_ptr<string> key_ {};
      // Calculation method standard
      shared_ptr<string> method_ {};
      // The name of the category.
      shared_ptr<string> name_ {};
      // Category num: the unique serial number of the environmental impact category. A maximum of 19 categories are supported. Enumeration refers to [Carbon Footprint Appendices](https://carbon-doc.oss-cn-hangzhou.aliyuncs.com/CarbonFootprintAppendices-en.pdf).
      shared_ptr<int64_t> num_ {};
      // Environmental impact result Value Unit.
      shared_ptr<string> preUnit_ {};
      // The data status. 1 indicates that the calculation is accurate, 2 indicates that the default data is used, and 3 indicates that the missing factor uses the value of 0.
      shared_ptr<int64_t> state_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetEpdSummaryResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetEpdSummaryResponseBody::Data>) };
    inline vector<GetEpdSummaryResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetEpdSummaryResponseBody::Data>) };
    inline GetEpdSummaryResponseBody& setData(const vector<GetEpdSummaryResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetEpdSummaryResponseBody& setData(vector<GetEpdSummaryResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEpdSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Response parameters
    shared_ptr<vector<GetEpdSummaryResponseBody::Data>> data_ {};
    // The ID of the request. The value is unique for each request. This facilitates subsequent troubleshooting.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
