// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGWPINVENTORYCONSTITUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETGWPINVENTORYCONSTITUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GwpInventoryConstitute.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetGwpInventoryConstituteResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGwpInventoryConstituteResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetGwpInventoryConstituteResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetGwpInventoryConstituteResponseBody() = default ;
    GetGwpInventoryConstituteResponseBody(const GetGwpInventoryConstituteResponseBody &) = default ;
    GetGwpInventoryConstituteResponseBody(GetGwpInventoryConstituteResponseBody &&) = default ;
    GetGwpInventoryConstituteResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGwpInventoryConstituteResponseBody() = default ;
    GetGwpInventoryConstituteResponseBody& operator=(const GetGwpInventoryConstituteResponseBody &) = default ;
    GetGwpInventoryConstituteResponseBody& operator=(GetGwpInventoryConstituteResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(byResourceType, byResourceType_);
        DARABONBA_PTR_TO_JSON(carbonEmission, carbonEmission_);
        DARABONBA_PTR_TO_JSON(items, items_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(unit, unit_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(byResourceType, byResourceType_);
        DARABONBA_PTR_FROM_JSON(carbonEmission, carbonEmission_);
        DARABONBA_PTR_FROM_JSON(items, items_);
        DARABONBA_PTR_FROM_JSON(name, name_);
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
      virtual bool empty() const override { return this->byResourceType_ == nullptr
        && this->carbonEmission_ == nullptr && this->items_ == nullptr && this->name_ == nullptr && this->unit_ == nullptr; };
      // byResourceType Field Functions 
      bool hasByResourceType() const { return this->byResourceType_ != nullptr;};
      void deleteByResourceType() { this->byResourceType_ = nullptr;};
      inline const vector<GwpInventoryConstitute> & getByResourceType() const { DARABONBA_PTR_GET_CONST(byResourceType_, vector<GwpInventoryConstitute>) };
      inline vector<GwpInventoryConstitute> getByResourceType() { DARABONBA_PTR_GET(byResourceType_, vector<GwpInventoryConstitute>) };
      inline Data& setByResourceType(const vector<GwpInventoryConstitute> & byResourceType) { DARABONBA_PTR_SET_VALUE(byResourceType_, byResourceType) };
      inline Data& setByResourceType(vector<GwpInventoryConstitute> && byResourceType) { DARABONBA_PTR_SET_RVALUE(byResourceType_, byResourceType) };


      // carbonEmission Field Functions 
      bool hasCarbonEmission() const { return this->carbonEmission_ != nullptr;};
      void deleteCarbonEmission() { this->carbonEmission_ = nullptr;};
      inline double getCarbonEmission() const { DARABONBA_PTR_GET_DEFAULT(carbonEmission_, 0.0) };
      inline Data& setCarbonEmission(double carbonEmission) { DARABONBA_PTR_SET_VALUE(carbonEmission_, carbonEmission) };


      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<GwpInventoryConstitute> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<GwpInventoryConstitute>) };
      inline vector<GwpInventoryConstitute> getItems() { DARABONBA_PTR_GET(items_, vector<GwpInventoryConstitute>) };
      inline Data& setItems(const vector<GwpInventoryConstitute> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Data& setItems(vector<GwpInventoryConstitute> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // unit Field Functions 
      bool hasUnit() const { return this->unit_ != nullptr;};
      void deleteUnit() { this->unit_ = nullptr;};
      inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
      inline Data& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


    protected:
      // Aggregated by resource type of an inventory.
      shared_ptr<vector<GwpInventoryConstitute>> byResourceType_ {};
      // Emission quantity: may be positive, negative, or 0. To ensure the calculation accuracy, 24 decimal places are reserved for the calculation process. We recommend that you intercept data based on your business requirements.
      shared_ptr<double> carbonEmission_ {};
      // Organized by hierarchy from high to low, according to the flow-> process-> inventory hierarchy.
      shared_ptr<vector<GwpInventoryConstitute>> items_ {};
      // The name.
      shared_ptr<string> name_ {};
      // Emission Unit.
      shared_ptr<string> unit_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetGwpInventoryConstituteResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetGwpInventoryConstituteResponseBody::Data) };
    inline GetGwpInventoryConstituteResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetGwpInventoryConstituteResponseBody::Data) };
    inline GetGwpInventoryConstituteResponseBody& setData(const GetGwpInventoryConstituteResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetGwpInventoryConstituteResponseBody& setData(GetGwpInventoryConstituteResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetGwpInventoryConstituteResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response parameters.
    shared_ptr<GetGwpInventoryConstituteResponseBody::Data> data_ {};
    // The ID of the request. The value is unique for each request. This facilitates subsequent troubleshooting.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
