// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCORESECTIONPIECHARTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCORESECTIONPIECHARTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeScoreSectionPieChartResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScoreSectionPieChartResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScoreSectionPieChartResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
    };
    DescribeScoreSectionPieChartResponseBody() = default ;
    DescribeScoreSectionPieChartResponseBody(const DescribeScoreSectionPieChartResponseBody &) = default ;
    DescribeScoreSectionPieChartResponseBody(DescribeScoreSectionPieChartResponseBody &&) = default ;
    DescribeScoreSectionPieChartResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScoreSectionPieChartResponseBody() = default ;
    DescribeScoreSectionPieChartResponseBody& operator=(const DescribeScoreSectionPieChartResponseBody &) = default ;
    DescribeScoreSectionPieChartResponseBody& operator=(DescribeScoreSectionPieChartResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(animation, animation_);
        DARABONBA_PTR_TO_JSON(grid, grid_);
        DARABONBA_PTR_TO_JSON(series, series_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(animation, animation_);
        DARABONBA_PTR_FROM_JSON(grid, grid_);
        DARABONBA_PTR_FROM_JSON(series, series_);
      };
      ResultObject() = default ;
      ResultObject(const ResultObject &) = default ;
      ResultObject(ResultObject &&) = default ;
      ResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultObject() = default ;
      ResultObject& operator=(const ResultObject &) = default ;
      ResultObject& operator=(ResultObject &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Series : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Series& obj) { 
          DARABONBA_PTR_TO_JSON(data, data_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(roseType, roseType_);
        };
        friend void from_json(const Darabonba::Json& j, Series& obj) { 
          DARABONBA_PTR_FROM_JSON(data, data_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(roseType, roseType_);
        };
        Series() = default ;
        Series(const Series &) = default ;
        Series(Series &&) = default ;
        Series(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Series() = default ;
        Series& operator=(const Series &) = default ;
        Series& operator=(Series &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Data : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Data& obj) { 
            DARABONBA_PTR_TO_JSON(name, name_);
            DARABONBA_PTR_TO_JSON(value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Data& obj) { 
            DARABONBA_PTR_FROM_JSON(name, name_);
            DARABONBA_PTR_FROM_JSON(value, value_);
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
          virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Data& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // Category item name.
          shared_ptr<string> name_ {};
          // Result value.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->data_ == nullptr
        && this->name_ == nullptr && this->roseType_ == nullptr; };
        // data Field Functions 
        bool hasData() const { return this->data_ != nullptr;};
        void deleteData() { this->data_ = nullptr;};
        inline const vector<Series::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<Series::Data>) };
        inline vector<Series::Data> getData() { DARABONBA_PTR_GET(data_, vector<Series::Data>) };
        inline Series& setData(const vector<Series::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
        inline Series& setData(vector<Series::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Series& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // roseType Field Functions 
        bool hasRoseType() const { return this->roseType_ != nullptr;};
        void deleteRoseType() { this->roseType_ = nullptr;};
        inline bool getRoseType() const { DARABONBA_PTR_GET_DEFAULT(roseType_, false) };
        inline Series& setRoseType(bool roseType) { DARABONBA_PTR_SET_VALUE(roseType_, roseType) };


      protected:
        // Chart data list
        shared_ptr<vector<Series::Data>> data_ {};
        // Category name.
        shared_ptr<string> name_ {};
        // Chart field, default false
        shared_ptr<bool> roseType_ {};
      };

      class Grid : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Grid& obj) { 
          DARABONBA_PTR_TO_JSON(show, show_);
        };
        friend void from_json(const Darabonba::Json& j, Grid& obj) { 
          DARABONBA_PTR_FROM_JSON(show, show_);
        };
        Grid() = default ;
        Grid(const Grid &) = default ;
        Grid(Grid &&) = default ;
        Grid(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Grid() = default ;
        Grid& operator=(const Grid &) = default ;
        Grid& operator=(Grid &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->show_ == nullptr; };
        // show Field Functions 
        bool hasShow() const { return this->show_ != nullptr;};
        void deleteShow() { this->show_ = nullptr;};
        inline bool getShow() const { DARABONBA_PTR_GET_DEFAULT(show_, false) };
        inline Grid& setShow(bool show) { DARABONBA_PTR_SET_VALUE(show_, show) };


      protected:
        // Chart field, default false
        shared_ptr<bool> show_ {};
      };

      virtual bool empty() const override { return this->animation_ == nullptr
        && this->grid_ == nullptr && this->series_ == nullptr; };
      // animation Field Functions 
      bool hasAnimation() const { return this->animation_ != nullptr;};
      void deleteAnimation() { this->animation_ = nullptr;};
      inline bool getAnimation() const { DARABONBA_PTR_GET_DEFAULT(animation_, false) };
      inline ResultObject& setAnimation(bool animation) { DARABONBA_PTR_SET_VALUE(animation_, animation) };


      // grid Field Functions 
      bool hasGrid() const { return this->grid_ != nullptr;};
      void deleteGrid() { this->grid_ = nullptr;};
      inline const ResultObject::Grid & getGrid() const { DARABONBA_PTR_GET_CONST(grid_, ResultObject::Grid) };
      inline ResultObject::Grid getGrid() { DARABONBA_PTR_GET(grid_, ResultObject::Grid) };
      inline ResultObject& setGrid(const ResultObject::Grid & grid) { DARABONBA_PTR_SET_VALUE(grid_, grid) };
      inline ResultObject& setGrid(ResultObject::Grid && grid) { DARABONBA_PTR_SET_RVALUE(grid_, grid) };


      // series Field Functions 
      bool hasSeries() const { return this->series_ != nullptr;};
      void deleteSeries() { this->series_ = nullptr;};
      inline const vector<ResultObject::Series> & getSeries() const { DARABONBA_PTR_GET_CONST(series_, vector<ResultObject::Series>) };
      inline vector<ResultObject::Series> getSeries() { DARABONBA_PTR_GET(series_, vector<ResultObject::Series>) };
      inline ResultObject& setSeries(const vector<ResultObject::Series> & series) { DARABONBA_PTR_SET_VALUE(series_, series) };
      inline ResultObject& setSeries(vector<ResultObject::Series> && series) { DARABONBA_PTR_SET_RVALUE(series_, series) };


    protected:
      // Chart field, default true
      shared_ptr<bool> animation_ {};
      // Belongs to grid.
      shared_ptr<ResultObject::Grid> grid_ {};
      // Data list
      shared_ptr<vector<ResultObject::Series>> series_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeScoreSectionPieChartResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const DescribeScoreSectionPieChartResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, DescribeScoreSectionPieChartResponseBody::ResultObject) };
    inline DescribeScoreSectionPieChartResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, DescribeScoreSectionPieChartResponseBody::ResultObject) };
    inline DescribeScoreSectionPieChartResponseBody& setResultObject(const DescribeScoreSectionPieChartResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeScoreSectionPieChartResponseBody& setResultObject(DescribeScoreSectionPieChartResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Return object
    shared_ptr<DescribeScoreSectionPieChartResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
