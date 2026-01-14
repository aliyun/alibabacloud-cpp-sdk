// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINVENTORYLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINVENTORYLISTRESPONSEBODY_HPP_
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
  class GetInventoryListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInventoryListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInventoryListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetInventoryListResponseBody() = default ;
    GetInventoryListResponseBody(const GetInventoryListResponseBody &) = default ;
    GetInventoryListResponseBody(GetInventoryListResponseBody &&) = default ;
    GetInventoryListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInventoryListResponseBody() = default ;
    GetInventoryListResponseBody& operator=(const GetInventoryListResponseBody &) = default ;
    GetInventoryListResponseBody& operator=(GetInventoryListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(items, items_);
        DARABONBA_PTR_TO_JSON(productUnit, productUnit_);
        DARABONBA_PTR_TO_JSON(unit, unit_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(items, items_);
        DARABONBA_PTR_FROM_JSON(productUnit, productUnit_);
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
          DARABONBA_PTR_TO_JSON(carbonEmission, carbonEmission_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(percent, percent_);
          DARABONBA_PTR_TO_JSON(processName, processName_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(carbonEmission, carbonEmission_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(percent, percent_);
          DARABONBA_PTR_FROM_JSON(processName, processName_);
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
        virtual bool empty() const override { return this->carbonEmission_ == nullptr
        && this->name_ == nullptr && this->percent_ == nullptr && this->processName_ == nullptr; };
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


        // processName Field Functions 
        bool hasProcessName() const { return this->processName_ != nullptr;};
        void deleteProcessName() { this->processName_ = nullptr;};
        inline string getProcessName() const { DARABONBA_PTR_GET_DEFAULT(processName_, "") };
        inline Items& setProcessName(string processName) { DARABONBA_PTR_SET_VALUE(processName_, processName) };


      protected:
        // Emission quantity: may be positive, negative, or 0. To ensure the calculation accuracy, 24 decimal places are reserved for the calculation process. We recommend that you intercept data based on your business requirements.
        shared_ptr<double> carbonEmission_ {};
        // Name 
        // 
        // > The name is related to the request parameters group. Request parameters: resource, return name parameter meaning: list name; request parameters: process, return name parameter meaning: process name; request parameters: resourceType, return name parameter meaning: inventory resource type name; request parameters: processType, return name parameter meaning: flow name.
        shared_ptr<string> name_ {};
        // Percentage
        shared_ptr<string> percent_ {};
        // Process Name: It is only meaningful when the request parameters group is resource.
        shared_ptr<string> processName_ {};
      };

      virtual bool empty() const override { return this->items_ == nullptr
        && this->productUnit_ == nullptr && this->unit_ == nullptr; };
      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Data::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Data::Items>) };
      inline vector<Data::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Data::Items>) };
      inline Data& setItems(const vector<Data::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Data& setItems(vector<Data::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // productUnit Field Functions 
      bool hasProductUnit() const { return this->productUnit_ != nullptr;};
      void deleteProductUnit() { this->productUnit_ = nullptr;};
      inline string getProductUnit() const { DARABONBA_PTR_GET_DEFAULT(productUnit_, "") };
      inline Data& setProductUnit(string productUnit) { DARABONBA_PTR_SET_VALUE(productUnit_, productUnit) };


      // unit Field Functions 
      bool hasUnit() const { return this->unit_ != nullptr;};
      void deleteUnit() { this->unit_ = nullptr;};
      inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
      inline Data& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


    protected:
      // Inventory detail.
      shared_ptr<vector<Data::Items>> items_ {};
      // Unit of product.
      shared_ptr<string> productUnit_ {};
      // Emission Unit: The default value is kgCO₂ /productUnit. productUnit is the unit selected for the product. The unit value is changed to tCO₂ e/productUnit or gCO₂ e/productUnit based on the emission quantity. For more information, see the quantity column.
      shared_ptr<string> unit_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetInventoryListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetInventoryListResponseBody::Data) };
    inline GetInventoryListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetInventoryListResponseBody::Data) };
    inline GetInventoryListResponseBody& setData(const GetInventoryListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetInventoryListResponseBody& setData(GetInventoryListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInventoryListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response parameters.
    shared_ptr<GetInventoryListResponseBody::Data> data_ {};
    // The ID of the request. The value is unique for each request. This facilitates subsequent troubleshooting.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
