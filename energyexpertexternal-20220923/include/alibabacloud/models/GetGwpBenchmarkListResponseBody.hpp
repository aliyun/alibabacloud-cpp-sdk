// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGWPBENCHMARKLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETGWPBENCHMARKLISTRESPONSEBODY_HPP_
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
  class GetGwpBenchmarkListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGwpBenchmarkListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetGwpBenchmarkListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetGwpBenchmarkListResponseBody() = default ;
    GetGwpBenchmarkListResponseBody(const GetGwpBenchmarkListResponseBody &) = default ;
    GetGwpBenchmarkListResponseBody(GetGwpBenchmarkListResponseBody &&) = default ;
    GetGwpBenchmarkListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGwpBenchmarkListResponseBody() = default ;
    GetGwpBenchmarkListResponseBody& operator=(const GetGwpBenchmarkListResponseBody &) = default ;
    GetGwpBenchmarkListResponseBody& operator=(GetGwpBenchmarkListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(items, items_);
        DARABONBA_PTR_TO_JSON(unit, unit_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(items, items_);
        DARABONBA_PTR_FROM_JSON(unit, unit_);
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
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(activeReduction, activeReduction_);
          DARABONBA_PTR_TO_JSON(benchmarkEmission, benchmarkEmission_);
          DARABONBA_PTR_TO_JSON(benchmarkName, benchmarkName_);
          DARABONBA_PTR_TO_JSON(carbonEmission, carbonEmission_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(percent, percent_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(activeReduction, activeReduction_);
          DARABONBA_PTR_FROM_JSON(benchmarkEmission, benchmarkEmission_);
          DARABONBA_PTR_FROM_JSON(benchmarkName, benchmarkName_);
          DARABONBA_PTR_FROM_JSON(carbonEmission, carbonEmission_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(percent, percent_);
        };
        Items() = default ;
        Items(const Items &) = default ;
        Items(Items &&) = default ;
        Items(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Items() = default ;
        Items& operator=(const Items &) = default ;
        Items& operator=(Items &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->activeReduction_ == nullptr
        && this->benchmarkEmission_ == nullptr && this->benchmarkName_ == nullptr && this->carbonEmission_ == nullptr && this->name_ == nullptr && this->percent_ == nullptr; };
        // activeReduction Field Functions 
        bool hasActiveReduction() const { return this->activeReduction_ != nullptr;};
        void deleteActiveReduction() { this->activeReduction_ = nullptr;};
        inline double getActiveReduction() const { DARABONBA_PTR_GET_DEFAULT(activeReduction_, 0.0) };
        inline Items& setActiveReduction(double activeReduction) { DARABONBA_PTR_SET_VALUE(activeReduction_, activeReduction) };


        // benchmarkEmission Field Functions 
        bool hasBenchmarkEmission() const { return this->benchmarkEmission_ != nullptr;};
        void deleteBenchmarkEmission() { this->benchmarkEmission_ = nullptr;};
        inline double getBenchmarkEmission() const { DARABONBA_PTR_GET_DEFAULT(benchmarkEmission_, 0.0) };
        inline Items& setBenchmarkEmission(double benchmarkEmission) { DARABONBA_PTR_SET_VALUE(benchmarkEmission_, benchmarkEmission) };


        // benchmarkName Field Functions 
        bool hasBenchmarkName() const { return this->benchmarkName_ != nullptr;};
        void deleteBenchmarkName() { this->benchmarkName_ = nullptr;};
        inline string getBenchmarkName() const { DARABONBA_PTR_GET_DEFAULT(benchmarkName_, "") };
        inline Items& setBenchmarkName(string benchmarkName) { DARABONBA_PTR_SET_VALUE(benchmarkName_, benchmarkName) };


        // carbonEmission Field Functions 
        bool hasCarbonEmission() const { return this->carbonEmission_ != nullptr;};
        void deleteCarbonEmission() { this->carbonEmission_ = nullptr;};
        inline double getCarbonEmission() const { DARABONBA_PTR_GET_DEFAULT(carbonEmission_, 0.0) };
        inline Items& setCarbonEmission(double carbonEmission) { DARABONBA_PTR_SET_VALUE(carbonEmission_, carbonEmission) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // percent Field Functions 
        bool hasPercent() const { return this->percent_ != nullptr;};
        void deletePercent() { this->percent_ = nullptr;};
        inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
        inline Items& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


      protected:
        // `activeReduction=benchmarkEmission-carbonEmission` Generally, baseline emissions are greater than inventory emissions. Maintain four decimal places. Unit pertains to a higher-level unit.
        shared_ptr<double> activeReduction_ {};
        // Benchmark emissions. Maintain four decimal places. Unit pertains to a higher-level unit.
        shared_ptr<double> benchmarkEmission_ {};
        // Benchmark name
        shared_ptr<string> benchmarkName_ {};
        // Inventory emissions. Maintain four decimal places. Unit pertains to a higher-level unit.
        shared_ptr<double> carbonEmission_ {};
        // name
        shared_ptr<string> name_ {};
        // Unused temporarily.
        shared_ptr<string> percent_ {};
      };

      virtual bool empty() const override { return this->items_ == nullptr
        && this->unit_ == nullptr; };
      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Data::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Data::Items>) };
      inline vector<Data::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Data::Items>) };
      inline Data& setItems(const vector<Data::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Data& setItems(vector<Data::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // unit Field Functions 
      bool hasUnit() const { return this->unit_ != nullptr;};
      void deleteUnit() { this->unit_ = nullptr;};
      inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
      inline Data& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


    protected:
      // Active carbon reduction ranking list.
      shared_ptr<vector<Data::Items>> items_ {};
      // unit of emissions. The default value is `kgCO₂e/productUnit`. 
      // The `productUnit` is the unit selected for the product. The unit value is changed to `tCO₂e/productUnit` or `gCO₂e/productUnit`. For more information, see the remarks in the quantity column.
      shared_ptr<string> unit_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetGwpBenchmarkListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetGwpBenchmarkListResponseBody::Data) };
    inline GetGwpBenchmarkListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetGwpBenchmarkListResponseBody::Data) };
    inline GetGwpBenchmarkListResponseBody& setData(const GetGwpBenchmarkListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetGwpBenchmarkListResponseBody& setData(GetGwpBenchmarkListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetGwpBenchmarkListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response parameters.
    shared_ptr<GetGwpBenchmarkListResponseBody::Data> data_ {};
    // The ID of the request. The value is unique for each request. This facilitates subsequent troubleshooting.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
