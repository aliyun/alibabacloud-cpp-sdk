// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCARBONEMISSIONTRENDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCARBONEMISSIONTRENDRESPONSEBODY_HPP_
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
  class GetCarbonEmissionTrendResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCarbonEmissionTrendResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCarbonEmissionTrendResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetCarbonEmissionTrendResponseBody() = default ;
    GetCarbonEmissionTrendResponseBody(const GetCarbonEmissionTrendResponseBody &) = default ;
    GetCarbonEmissionTrendResponseBody(GetCarbonEmissionTrendResponseBody &&) = default ;
    GetCarbonEmissionTrendResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCarbonEmissionTrendResponseBody() = default ;
    GetCarbonEmissionTrendResponseBody& operator=(const GetCarbonEmissionTrendResponseBody &) = default ;
    GetCarbonEmissionTrendResponseBody& operator=(GetCarbonEmissionTrendResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(actualEmissionList, actualEmissionList_);
        DARABONBA_PTR_TO_JSON(targetEmissionList, targetEmissionList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(actualEmissionList, actualEmissionList_);
        DARABONBA_PTR_FROM_JSON(targetEmissionList, targetEmissionList_);
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
      class TargetEmissionList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TargetEmissionList& obj) { 
          DARABONBA_PTR_TO_JSON(items, items_);
          DARABONBA_PTR_TO_JSON(year, year_);
        };
        friend void from_json(const Darabonba::Json& j, TargetEmissionList& obj) { 
          DARABONBA_PTR_FROM_JSON(items, items_);
          DARABONBA_PTR_FROM_JSON(year, year_);
        };
        TargetEmissionList() = default ;
        TargetEmissionList(const TargetEmissionList &) = default ;
        TargetEmissionList(TargetEmissionList &&) = default ;
        TargetEmissionList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TargetEmissionList() = default ;
        TargetEmissionList& operator=(const TargetEmissionList &) = default ;
        TargetEmissionList& operator=(TargetEmissionList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Items : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Items& obj) { 
            DARABONBA_PTR_TO_JSON(carbonEmissionData, carbonEmissionData_);
            DARABONBA_PTR_TO_JSON(month, month_);
            DARABONBA_PTR_TO_JSON(year, year_);
          };
          friend void from_json(const Darabonba::Json& j, Items& obj) { 
            DARABONBA_PTR_FROM_JSON(carbonEmissionData, carbonEmissionData_);
            DARABONBA_PTR_FROM_JSON(month, month_);
            DARABONBA_PTR_FROM_JSON(year, year_);
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
          virtual bool empty() const override { return this->carbonEmissionData_ == nullptr
        && this->month_ == nullptr && this->year_ == nullptr; };
          // carbonEmissionData Field Functions 
          bool hasCarbonEmissionData() const { return this->carbonEmissionData_ != nullptr;};
          void deleteCarbonEmissionData() { this->carbonEmissionData_ = nullptr;};
          inline double getCarbonEmissionData() const { DARABONBA_PTR_GET_DEFAULT(carbonEmissionData_, 0.0) };
          inline Items& setCarbonEmissionData(double carbonEmissionData) { DARABONBA_PTR_SET_VALUE(carbonEmissionData_, carbonEmissionData) };


          // month Field Functions 
          bool hasMonth() const { return this->month_ != nullptr;};
          void deleteMonth() { this->month_ = nullptr;};
          inline int32_t getMonth() const { DARABONBA_PTR_GET_DEFAULT(month_, 0) };
          inline Items& setMonth(int32_t month) { DARABONBA_PTR_SET_VALUE(month_, month) };


          // year Field Functions 
          bool hasYear() const { return this->year_ != nullptr;};
          void deleteYear() { this->year_ = nullptr;};
          inline string getYear() const { DARABONBA_PTR_GET_DEFAULT(year_, "") };
          inline Items& setYear(string year) { DARABONBA_PTR_SET_VALUE(year_, year) };


        protected:
          // Carbon emissions.
          shared_ptr<double> carbonEmissionData_ {};
          // The month.
          shared_ptr<int32_t> month_ {};
          // The year.
          shared_ptr<string> year_ {};
        };

        virtual bool empty() const override { return this->items_ == nullptr
        && this->year_ == nullptr; };
        // items Field Functions 
        bool hasItems() const { return this->items_ != nullptr;};
        void deleteItems() { this->items_ = nullptr;};
        inline const vector<TargetEmissionList::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<TargetEmissionList::Items>) };
        inline vector<TargetEmissionList::Items> getItems() { DARABONBA_PTR_GET(items_, vector<TargetEmissionList::Items>) };
        inline TargetEmissionList& setItems(const vector<TargetEmissionList::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
        inline TargetEmissionList& setItems(vector<TargetEmissionList::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


        // year Field Functions 
        bool hasYear() const { return this->year_ != nullptr;};
        void deleteYear() { this->year_ = nullptr;};
        inline string getYear() const { DARABONBA_PTR_GET_DEFAULT(year_, "") };
        inline TargetEmissionList& setYear(string year) { DARABONBA_PTR_SET_VALUE(year_, year) };


      protected:
        // Data item list.
        shared_ptr<vector<TargetEmissionList::Items>> items_ {};
        // The year.
        shared_ptr<string> year_ {};
      };

      class ActualEmissionList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ActualEmissionList& obj) { 
          DARABONBA_PTR_TO_JSON(items, items_);
          DARABONBA_PTR_TO_JSON(year, year_);
        };
        friend void from_json(const Darabonba::Json& j, ActualEmissionList& obj) { 
          DARABONBA_PTR_FROM_JSON(items, items_);
          DARABONBA_PTR_FROM_JSON(year, year_);
        };
        ActualEmissionList() = default ;
        ActualEmissionList(const ActualEmissionList &) = default ;
        ActualEmissionList(ActualEmissionList &&) = default ;
        ActualEmissionList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ActualEmissionList() = default ;
        ActualEmissionList& operator=(const ActualEmissionList &) = default ;
        ActualEmissionList& operator=(ActualEmissionList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Items : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Items& obj) { 
            DARABONBA_PTR_TO_JSON(carbonEmissionData, carbonEmissionData_);
            DARABONBA_PTR_TO_JSON(month, month_);
            DARABONBA_PTR_TO_JSON(year, year_);
          };
          friend void from_json(const Darabonba::Json& j, Items& obj) { 
            DARABONBA_PTR_FROM_JSON(carbonEmissionData, carbonEmissionData_);
            DARABONBA_PTR_FROM_JSON(month, month_);
            DARABONBA_PTR_FROM_JSON(year, year_);
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
          virtual bool empty() const override { return this->carbonEmissionData_ == nullptr
        && this->month_ == nullptr && this->year_ == nullptr; };
          // carbonEmissionData Field Functions 
          bool hasCarbonEmissionData() const { return this->carbonEmissionData_ != nullptr;};
          void deleteCarbonEmissionData() { this->carbonEmissionData_ = nullptr;};
          inline double getCarbonEmissionData() const { DARABONBA_PTR_GET_DEFAULT(carbonEmissionData_, 0.0) };
          inline Items& setCarbonEmissionData(double carbonEmissionData) { DARABONBA_PTR_SET_VALUE(carbonEmissionData_, carbonEmissionData) };


          // month Field Functions 
          bool hasMonth() const { return this->month_ != nullptr;};
          void deleteMonth() { this->month_ = nullptr;};
          inline int32_t getMonth() const { DARABONBA_PTR_GET_DEFAULT(month_, 0) };
          inline Items& setMonth(int32_t month) { DARABONBA_PTR_SET_VALUE(month_, month) };


          // year Field Functions 
          bool hasYear() const { return this->year_ != nullptr;};
          void deleteYear() { this->year_ = nullptr;};
          inline string getYear() const { DARABONBA_PTR_GET_DEFAULT(year_, "") };
          inline Items& setYear(string year) { DARABONBA_PTR_SET_VALUE(year_, year) };


        protected:
          // Carbon emissions.
          shared_ptr<double> carbonEmissionData_ {};
          // The month.
          shared_ptr<int32_t> month_ {};
          // The year.
          shared_ptr<string> year_ {};
        };

        virtual bool empty() const override { return this->items_ == nullptr
        && this->year_ == nullptr; };
        // items Field Functions 
        bool hasItems() const { return this->items_ != nullptr;};
        void deleteItems() { this->items_ = nullptr;};
        inline const vector<ActualEmissionList::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ActualEmissionList::Items>) };
        inline vector<ActualEmissionList::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ActualEmissionList::Items>) };
        inline ActualEmissionList& setItems(const vector<ActualEmissionList::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
        inline ActualEmissionList& setItems(vector<ActualEmissionList::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


        // year Field Functions 
        bool hasYear() const { return this->year_ != nullptr;};
        void deleteYear() { this->year_ = nullptr;};
        inline string getYear() const { DARABONBA_PTR_GET_DEFAULT(year_, "") };
        inline ActualEmissionList& setYear(string year) { DARABONBA_PTR_SET_VALUE(year_, year) };


      protected:
        // Data item list.
        shared_ptr<vector<ActualEmissionList::Items>> items_ {};
        // The year.
        shared_ptr<string> year_ {};
      };

      virtual bool empty() const override { return this->actualEmissionList_ == nullptr
        && this->targetEmissionList_ == nullptr; };
      // actualEmissionList Field Functions 
      bool hasActualEmissionList() const { return this->actualEmissionList_ != nullptr;};
      void deleteActualEmissionList() { this->actualEmissionList_ = nullptr;};
      inline const vector<Data::ActualEmissionList> & getActualEmissionList() const { DARABONBA_PTR_GET_CONST(actualEmissionList_, vector<Data::ActualEmissionList>) };
      inline vector<Data::ActualEmissionList> getActualEmissionList() { DARABONBA_PTR_GET(actualEmissionList_, vector<Data::ActualEmissionList>) };
      inline Data& setActualEmissionList(const vector<Data::ActualEmissionList> & actualEmissionList) { DARABONBA_PTR_SET_VALUE(actualEmissionList_, actualEmissionList) };
      inline Data& setActualEmissionList(vector<Data::ActualEmissionList> && actualEmissionList) { DARABONBA_PTR_SET_RVALUE(actualEmissionList_, actualEmissionList) };


      // targetEmissionList Field Functions 
      bool hasTargetEmissionList() const { return this->targetEmissionList_ != nullptr;};
      void deleteTargetEmissionList() { this->targetEmissionList_ = nullptr;};
      inline const vector<Data::TargetEmissionList> & getTargetEmissionList() const { DARABONBA_PTR_GET_CONST(targetEmissionList_, vector<Data::TargetEmissionList>) };
      inline vector<Data::TargetEmissionList> getTargetEmissionList() { DARABONBA_PTR_GET(targetEmissionList_, vector<Data::TargetEmissionList>) };
      inline Data& setTargetEmissionList(const vector<Data::TargetEmissionList> & targetEmissionList) { DARABONBA_PTR_SET_VALUE(targetEmissionList_, targetEmissionList) };
      inline Data& setTargetEmissionList(vector<Data::TargetEmissionList> && targetEmissionList) { DARABONBA_PTR_SET_RVALUE(targetEmissionList_, targetEmissionList) };


    protected:
      // Actual emission list.
      shared_ptr<vector<Data::ActualEmissionList>> actualEmissionList_ {};
      // Target Emission List.
      shared_ptr<vector<Data::TargetEmissionList>> targetEmissionList_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetCarbonEmissionTrendResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetCarbonEmissionTrendResponseBody::Data) };
    inline GetCarbonEmissionTrendResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetCarbonEmissionTrendResponseBody::Data) };
    inline GetCarbonEmissionTrendResponseBody& setData(const GetCarbonEmissionTrendResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetCarbonEmissionTrendResponseBody& setData(GetCarbonEmissionTrendResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCarbonEmissionTrendResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response parameters.
    shared_ptr<GetCarbonEmissionTrendResponseBody::Data> data_ {};
    // Id of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
