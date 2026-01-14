// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHITEMDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUSHITEMDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class PushItemDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushItemDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(year, year_);
    };
    friend void from_json(const Darabonba::Json& j, PushItemDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(year, year_);
    };
    PushItemDataRequest() = default ;
    PushItemDataRequest(const PushItemDataRequest &) = default ;
    PushItemDataRequest(PushItemDataRequest &&) = default ;
    PushItemDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushItemDataRequest() = default ;
    PushItemDataRequest& operator=(const PushItemDataRequest &) = default ;
    PushItemDataRequest& operator=(PushItemDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(code, code_);
        DARABONBA_PTR_TO_JSON(month, month_);
        DARABONBA_PTR_TO_JSON(value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(code, code_);
        DARABONBA_PTR_FROM_JSON(month, month_);
        DARABONBA_PTR_FROM_JSON(value, value_);
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
      virtual bool empty() const override { return this->code_ == nullptr
        && this->month_ == nullptr && this->value_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Items& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // month Field Functions 
      bool hasMonth() const { return this->month_ != nullptr;};
      void deleteMonth() { this->month_ = nullptr;};
      inline string getMonth() const { DARABONBA_PTR_GET_DEFAULT(month_, "") };
      inline Items& setMonth(string month) { DARABONBA_PTR_SET_VALUE(month_, month) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline double getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
      inline Items& setValue(double value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // API data identification.<props="intl">For details: [GetDataItemList ](https://www.alibabacloud.com/help/en/energy-expert/developer-reference/api-energyexpertexternal-2022-09-23-getdataitemlist)
      // 
      // This parameter is required.
      shared_ptr<string> code_ {};
      // The month.
      // 
      // This parameter is required.
      shared_ptr<string> month_ {};
      // The value of the data item.
      // 
      // This parameter is required.
      shared_ptr<double> value_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->items_ == nullptr && this->year_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline PushItemDataRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const PushItemDataRequest::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, PushItemDataRequest::Items) };
    inline PushItemDataRequest::Items getItems() { DARABONBA_PTR_GET(items_, PushItemDataRequest::Items) };
    inline PushItemDataRequest& setItems(const PushItemDataRequest::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline PushItemDataRequest& setItems(PushItemDataRequest::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // year Field Functions 
    bool hasYear() const { return this->year_ != nullptr;};
    void deleteYear() { this->year_ = nullptr;};
    inline string getYear() const { DARABONBA_PTR_GET_DEFAULT(year_, "") };
    inline PushItemDataRequest& setYear(string year) { DARABONBA_PTR_SET_VALUE(year_, year) };


  protected:
    // The enterprise code.
    // 
    // This parameter is required.
    shared_ptr<string> code_ {};
    // List of data to be pushed.
    // 
    // This parameter is required.
    shared_ptr<PushItemDataRequest::Items> items_ {};
    // The year of the data created.
    // 
    // This parameter is required.
    shared_ptr<string> year_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
