// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGWPINVENTORYSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETGWPINVENTORYSUMMARYRESPONSEBODY_HPP_
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
  class GetGwpInventorySummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGwpInventorySummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetGwpInventorySummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetGwpInventorySummaryResponseBody() = default ;
    GetGwpInventorySummaryResponseBody(const GetGwpInventorySummaryResponseBody &) = default ;
    GetGwpInventorySummaryResponseBody(GetGwpInventorySummaryResponseBody &&) = default ;
    GetGwpInventorySummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGwpInventorySummaryResponseBody() = default ;
    GetGwpInventorySummaryResponseBody& operator=(const GetGwpInventorySummaryResponseBody &) = default ;
    GetGwpInventorySummaryResponseBody& operator=(GetGwpInventorySummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(items, items_);
        DARABONBA_PTR_TO_JSON(quantity, quantity_);
        DARABONBA_PTR_TO_JSON(resultGenerateTime, resultGenerateTime_);
        DARABONBA_PTR_TO_JSON(unit, unit_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(items, items_);
        DARABONBA_PTR_FROM_JSON(quantity, quantity_);
        DARABONBA_PTR_FROM_JSON(resultGenerateTime, resultGenerateTime_);
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
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(percent, percent_);
          DARABONBA_PTR_TO_JSON(quantity, quantity_);
          DARABONBA_PTR_TO_JSON(unit, unit_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(percent, percent_);
          DARABONBA_PTR_FROM_JSON(quantity, quantity_);
          DARABONBA_PTR_FROM_JSON(unit, unit_);
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
        virtual bool empty() const override { return this->name_ == nullptr
        && this->percent_ == nullptr && this->quantity_ == nullptr && this->unit_ == nullptr; };
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


        // quantity Field Functions 
        bool hasQuantity() const { return this->quantity_ != nullptr;};
        void deleteQuantity() { this->quantity_ = nullptr;};
        inline double getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0.0) };
        inline Items& setQuantity(double quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


        // unit Field Functions 
        bool hasUnit() const { return this->unit_ != nullptr;};
        void deleteUnit() { this->unit_ = nullptr;};
        inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
        inline Items& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


      protected:
        // Inventory resource type name.
        shared_ptr<string> name_ {};
        // Percentage.
        shared_ptr<string> percent_ {};
        // Quantity.
        shared_ptr<double> quantity_ {};
        // The unit.
        shared_ptr<string> unit_ {};
      };

      virtual bool empty() const override { return this->items_ == nullptr
        && this->quantity_ == nullptr && this->resultGenerateTime_ == nullptr && this->unit_ == nullptr; };
      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Data::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Data::Items>) };
      inline vector<Data::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Data::Items>) };
      inline Data& setItems(const vector<Data::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Data& setItems(vector<Data::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // quantity Field Functions 
      bool hasQuantity() const { return this->quantity_ != nullptr;};
      void deleteQuantity() { this->quantity_ = nullptr;};
      inline double getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0.0) };
      inline Data& setQuantity(double quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


      // resultGenerateTime Field Functions 
      bool hasResultGenerateTime() const { return this->resultGenerateTime_ != nullptr;};
      void deleteResultGenerateTime() { this->resultGenerateTime_ = nullptr;};
      inline int64_t getResultGenerateTime() const { DARABONBA_PTR_GET_DEFAULT(resultGenerateTime_, 0L) };
      inline Data& setResultGenerateTime(int64_t resultGenerateTime) { DARABONBA_PTR_SET_VALUE(resultGenerateTime_, resultGenerateTime) };


      // unit Field Functions 
      bool hasUnit() const { return this->unit_ != nullptr;};
      void deleteUnit() { this->unit_ = nullptr;};
      inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
      inline Data& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


    protected:
      // Top 4 types of carbon footprint contribution.
      shared_ptr<vector<Data::Items>> items_ {};
      // The emission quantity.
      shared_ptr<double> quantity_ {};
      // The time when the result was generated, in the millisecond timestamp format.
      shared_ptr<int64_t> resultGenerateTime_ {};
      // Emission Unit.
      shared_ptr<string> unit_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetGwpInventorySummaryResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetGwpInventorySummaryResponseBody::Data) };
    inline GetGwpInventorySummaryResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetGwpInventorySummaryResponseBody::Data) };
    inline GetGwpInventorySummaryResponseBody& setData(const GetGwpInventorySummaryResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetGwpInventorySummaryResponseBody& setData(GetGwpInventorySummaryResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetGwpInventorySummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned results.
    shared_ptr<GetGwpInventorySummaryResponseBody::Data> data_ {};
    // The ID of the request. The value is unique for each request. This facilitates subsequent troubleshooting.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
