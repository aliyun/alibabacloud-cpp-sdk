// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHIGHRISKPIECHARTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHIGHRISKPIECHARTRESPONSEBODY_HPP_
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
  class DescribeHighRiskPieChartResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHighRiskPieChartResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHighRiskPieChartResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    DescribeHighRiskPieChartResponseBody() = default ;
    DescribeHighRiskPieChartResponseBody(const DescribeHighRiskPieChartResponseBody &) = default ;
    DescribeHighRiskPieChartResponseBody(DescribeHighRiskPieChartResponseBody &&) = default ;
    DescribeHighRiskPieChartResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHighRiskPieChartResponseBody() = default ;
    DescribeHighRiskPieChartResponseBody& operator=(const DescribeHighRiskPieChartResponseBody &) = default ;
    DescribeHighRiskPieChartResponseBody& operator=(DescribeHighRiskPieChartResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(highRiskIPCity, highRiskIPCity_);
        DARABONBA_PTR_TO_JSON(highRiskIPProvince, highRiskIPProvince_);
        DARABONBA_PTR_TO_JSON(highRiskMobileCity, highRiskMobileCity_);
        DARABONBA_PTR_TO_JSON(highRiskMobileProvince, highRiskMobileProvince_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(highRiskIPCity, highRiskIPCity_);
        DARABONBA_PTR_FROM_JSON(highRiskIPProvince, highRiskIPProvince_);
        DARABONBA_PTR_FROM_JSON(highRiskMobileCity, highRiskMobileCity_);
        DARABONBA_PTR_FROM_JSON(highRiskMobileProvince, highRiskMobileProvince_);
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
      class HighRiskMobileProvince : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HighRiskMobileProvince& obj) { 
          DARABONBA_PTR_TO_JSON(animation, animation_);
          DARABONBA_PTR_TO_JSON(grid, grid_);
          DARABONBA_PTR_TO_JSON(series, series_);
        };
        friend void from_json(const Darabonba::Json& j, HighRiskMobileProvince& obj) { 
          DARABONBA_PTR_FROM_JSON(animation, animation_);
          DARABONBA_PTR_FROM_JSON(grid, grid_);
          DARABONBA_PTR_FROM_JSON(series, series_);
        };
        HighRiskMobileProvince() = default ;
        HighRiskMobileProvince(const HighRiskMobileProvince &) = default ;
        HighRiskMobileProvince(HighRiskMobileProvince &&) = default ;
        HighRiskMobileProvince(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HighRiskMobileProvince() = default ;
        HighRiskMobileProvince& operator=(const HighRiskMobileProvince &) = default ;
        HighRiskMobileProvince& operator=(HighRiskMobileProvince &&) = default ;
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
            // Field name
            shared_ptr<string> name_ {};
            // Data value
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
          inline string getRoseType() const { DARABONBA_PTR_GET_DEFAULT(roseType_, "") };
          inline Series& setRoseType(string roseType) { DARABONBA_PTR_SET_VALUE(roseType_, roseType) };


        protected:
          // High-risk position data.
          shared_ptr<vector<Series::Data>> data_ {};
          // Display title
          shared_ptr<string> name_ {};
          // Chart identifier, default false
          shared_ptr<string> roseType_ {};
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
          // Chart flag, default is false
          shared_ptr<bool> show_ {};
        };

        virtual bool empty() const override { return this->animation_ == nullptr
        && this->grid_ == nullptr && this->series_ == nullptr; };
        // animation Field Functions 
        bool hasAnimation() const { return this->animation_ != nullptr;};
        void deleteAnimation() { this->animation_ = nullptr;};
        inline bool getAnimation() const { DARABONBA_PTR_GET_DEFAULT(animation_, false) };
        inline HighRiskMobileProvince& setAnimation(bool animation) { DARABONBA_PTR_SET_VALUE(animation_, animation) };


        // grid Field Functions 
        bool hasGrid() const { return this->grid_ != nullptr;};
        void deleteGrid() { this->grid_ = nullptr;};
        inline const HighRiskMobileProvince::Grid & getGrid() const { DARABONBA_PTR_GET_CONST(grid_, HighRiskMobileProvince::Grid) };
        inline HighRiskMobileProvince::Grid getGrid() { DARABONBA_PTR_GET(grid_, HighRiskMobileProvince::Grid) };
        inline HighRiskMobileProvince& setGrid(const HighRiskMobileProvince::Grid & grid) { DARABONBA_PTR_SET_VALUE(grid_, grid) };
        inline HighRiskMobileProvince& setGrid(HighRiskMobileProvince::Grid && grid) { DARABONBA_PTR_SET_RVALUE(grid_, grid) };


        // series Field Functions 
        bool hasSeries() const { return this->series_ != nullptr;};
        void deleteSeries() { this->series_ = nullptr;};
        inline const vector<HighRiskMobileProvince::Series> & getSeries() const { DARABONBA_PTR_GET_CONST(series_, vector<HighRiskMobileProvince::Series>) };
        inline vector<HighRiskMobileProvince::Series> getSeries() { DARABONBA_PTR_GET(series_, vector<HighRiskMobileProvince::Series>) };
        inline HighRiskMobileProvince& setSeries(const vector<HighRiskMobileProvince::Series> & series) { DARABONBA_PTR_SET_VALUE(series_, series) };
        inline HighRiskMobileProvince& setSeries(vector<HighRiskMobileProvince::Series> && series) { DARABONBA_PTR_SET_RVALUE(series_, series) };


      protected:
        // Indicator, default true
        shared_ptr<bool> animation_ {};
        // Belongs to grid.
        shared_ptr<HighRiskMobileProvince::Grid> grid_ {};
        // Chart data
        shared_ptr<vector<HighRiskMobileProvince::Series>> series_ {};
      };

      class HighRiskMobileCity : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HighRiskMobileCity& obj) { 
          DARABONBA_PTR_TO_JSON(animation, animation_);
          DARABONBA_PTR_TO_JSON(grid, grid_);
          DARABONBA_PTR_TO_JSON(series, series_);
        };
        friend void from_json(const Darabonba::Json& j, HighRiskMobileCity& obj) { 
          DARABONBA_PTR_FROM_JSON(animation, animation_);
          DARABONBA_PTR_FROM_JSON(grid, grid_);
          DARABONBA_PTR_FROM_JSON(series, series_);
        };
        HighRiskMobileCity() = default ;
        HighRiskMobileCity(const HighRiskMobileCity &) = default ;
        HighRiskMobileCity(HighRiskMobileCity &&) = default ;
        HighRiskMobileCity(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HighRiskMobileCity() = default ;
        HighRiskMobileCity& operator=(const HighRiskMobileCity &) = default ;
        HighRiskMobileCity& operator=(HighRiskMobileCity &&) = default ;
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
            // Field name
            shared_ptr<string> name_ {};
            // Data value
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
          inline string getRoseType() const { DARABONBA_PTR_GET_DEFAULT(roseType_, "") };
          inline Series& setRoseType(string roseType) { DARABONBA_PTR_SET_VALUE(roseType_, roseType) };


        protected:
          // Returned data object
          shared_ptr<vector<Series::Data>> data_ {};
          // Field name
          shared_ptr<string> name_ {};
          // Chart flag, default is false
          shared_ptr<string> roseType_ {};
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
          // Chart flag, default is false
          shared_ptr<bool> show_ {};
        };

        virtual bool empty() const override { return this->animation_ == nullptr
        && this->grid_ == nullptr && this->series_ == nullptr; };
        // animation Field Functions 
        bool hasAnimation() const { return this->animation_ != nullptr;};
        void deleteAnimation() { this->animation_ = nullptr;};
        inline bool getAnimation() const { DARABONBA_PTR_GET_DEFAULT(animation_, false) };
        inline HighRiskMobileCity& setAnimation(bool animation) { DARABONBA_PTR_SET_VALUE(animation_, animation) };


        // grid Field Functions 
        bool hasGrid() const { return this->grid_ != nullptr;};
        void deleteGrid() { this->grid_ = nullptr;};
        inline const HighRiskMobileCity::Grid & getGrid() const { DARABONBA_PTR_GET_CONST(grid_, HighRiskMobileCity::Grid) };
        inline HighRiskMobileCity::Grid getGrid() { DARABONBA_PTR_GET(grid_, HighRiskMobileCity::Grid) };
        inline HighRiskMobileCity& setGrid(const HighRiskMobileCity::Grid & grid) { DARABONBA_PTR_SET_VALUE(grid_, grid) };
        inline HighRiskMobileCity& setGrid(HighRiskMobileCity::Grid && grid) { DARABONBA_PTR_SET_RVALUE(grid_, grid) };


        // series Field Functions 
        bool hasSeries() const { return this->series_ != nullptr;};
        void deleteSeries() { this->series_ = nullptr;};
        inline const vector<HighRiskMobileCity::Series> & getSeries() const { DARABONBA_PTR_GET_CONST(series_, vector<HighRiskMobileCity::Series>) };
        inline vector<HighRiskMobileCity::Series> getSeries() { DARABONBA_PTR_GET(series_, vector<HighRiskMobileCity::Series>) };
        inline HighRiskMobileCity& setSeries(const vector<HighRiskMobileCity::Series> & series) { DARABONBA_PTR_SET_VALUE(series_, series) };
        inline HighRiskMobileCity& setSeries(vector<HighRiskMobileCity::Series> && series) { DARABONBA_PTR_SET_RVALUE(series_, series) };


      protected:
        // Chart flag, default is true
        shared_ptr<bool> animation_ {};
        // Belongs to grid.
        shared_ptr<HighRiskMobileCity::Grid> grid_ {};
        // Chart data
        shared_ptr<vector<HighRiskMobileCity::Series>> series_ {};
      };

      class HighRiskIPProvince : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HighRiskIPProvince& obj) { 
          DARABONBA_PTR_TO_JSON(animation, animation_);
          DARABONBA_PTR_TO_JSON(grid, grid_);
          DARABONBA_PTR_TO_JSON(series, series_);
        };
        friend void from_json(const Darabonba::Json& j, HighRiskIPProvince& obj) { 
          DARABONBA_PTR_FROM_JSON(animation, animation_);
          DARABONBA_PTR_FROM_JSON(grid, grid_);
          DARABONBA_PTR_FROM_JSON(series, series_);
        };
        HighRiskIPProvince() = default ;
        HighRiskIPProvince(const HighRiskIPProvince &) = default ;
        HighRiskIPProvince(HighRiskIPProvince &&) = default ;
        HighRiskIPProvince(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HighRiskIPProvince() = default ;
        HighRiskIPProvince& operator=(const HighRiskIPProvince &) = default ;
        HighRiskIPProvince& operator=(HighRiskIPProvince &&) = default ;
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
            // Variable name
            shared_ptr<string> name_ {};
            // Data value
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
          inline string getRoseType() const { DARABONBA_PTR_GET_DEFAULT(roseType_, "") };
          inline Series& setRoseType(string roseType) { DARABONBA_PTR_SET_VALUE(roseType_, roseType) };


        protected:
          // Returned data object
          shared_ptr<vector<Series::Data>> data_ {};
          // Field name
          shared_ptr<string> name_ {};
          // Chart identifier, default is false
          shared_ptr<string> roseType_ {};
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
          // Chart identifier, default is false
          shared_ptr<bool> show_ {};
        };

        virtual bool empty() const override { return this->animation_ == nullptr
        && this->grid_ == nullptr && this->series_ == nullptr; };
        // animation Field Functions 
        bool hasAnimation() const { return this->animation_ != nullptr;};
        void deleteAnimation() { this->animation_ = nullptr;};
        inline bool getAnimation() const { DARABONBA_PTR_GET_DEFAULT(animation_, false) };
        inline HighRiskIPProvince& setAnimation(bool animation) { DARABONBA_PTR_SET_VALUE(animation_, animation) };


        // grid Field Functions 
        bool hasGrid() const { return this->grid_ != nullptr;};
        void deleteGrid() { this->grid_ = nullptr;};
        inline const HighRiskIPProvince::Grid & getGrid() const { DARABONBA_PTR_GET_CONST(grid_, HighRiskIPProvince::Grid) };
        inline HighRiskIPProvince::Grid getGrid() { DARABONBA_PTR_GET(grid_, HighRiskIPProvince::Grid) };
        inline HighRiskIPProvince& setGrid(const HighRiskIPProvince::Grid & grid) { DARABONBA_PTR_SET_VALUE(grid_, grid) };
        inline HighRiskIPProvince& setGrid(HighRiskIPProvince::Grid && grid) { DARABONBA_PTR_SET_RVALUE(grid_, grid) };


        // series Field Functions 
        bool hasSeries() const { return this->series_ != nullptr;};
        void deleteSeries() { this->series_ = nullptr;};
        inline const vector<HighRiskIPProvince::Series> & getSeries() const { DARABONBA_PTR_GET_CONST(series_, vector<HighRiskIPProvince::Series>) };
        inline vector<HighRiskIPProvince::Series> getSeries() { DARABONBA_PTR_GET(series_, vector<HighRiskIPProvince::Series>) };
        inline HighRiskIPProvince& setSeries(const vector<HighRiskIPProvince::Series> & series) { DARABONBA_PTR_SET_VALUE(series_, series) };
        inline HighRiskIPProvince& setSeries(vector<HighRiskIPProvince::Series> && series) { DARABONBA_PTR_SET_RVALUE(series_, series) };


      protected:
        // Chart identifier, default is true
        shared_ptr<bool> animation_ {};
        // Belonging grid.
        shared_ptr<HighRiskIPProvince::Grid> grid_ {};
        // Chart data
        shared_ptr<vector<HighRiskIPProvince::Series>> series_ {};
      };

      class HighRiskIPCity : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HighRiskIPCity& obj) { 
          DARABONBA_PTR_TO_JSON(animation, animation_);
          DARABONBA_PTR_TO_JSON(grid, grid_);
          DARABONBA_PTR_TO_JSON(series, series_);
        };
        friend void from_json(const Darabonba::Json& j, HighRiskIPCity& obj) { 
          DARABONBA_PTR_FROM_JSON(animation, animation_);
          DARABONBA_PTR_FROM_JSON(grid, grid_);
          DARABONBA_PTR_FROM_JSON(series, series_);
        };
        HighRiskIPCity() = default ;
        HighRiskIPCity(const HighRiskIPCity &) = default ;
        HighRiskIPCity(HighRiskIPCity &&) = default ;
        HighRiskIPCity(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HighRiskIPCity() = default ;
        HighRiskIPCity& operator=(const HighRiskIPCity &) = default ;
        HighRiskIPCity& operator=(HighRiskIPCity &&) = default ;
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
            // Field name
            shared_ptr<string> name_ {};
            // Data value
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
          inline string getRoseType() const { DARABONBA_PTR_GET_DEFAULT(roseType_, "") };
          inline Series& setRoseType(string roseType) { DARABONBA_PTR_SET_VALUE(roseType_, roseType) };


        protected:
          // Returned data object
          shared_ptr<vector<Series::Data>> data_ {};
          // Field name
          shared_ptr<string> name_ {};
          // Chart identifier, default is false
          shared_ptr<string> roseType_ {};
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
          // Chart flag, default false
          shared_ptr<bool> show_ {};
        };

        virtual bool empty() const override { return this->animation_ == nullptr
        && this->grid_ == nullptr && this->series_ == nullptr; };
        // animation Field Functions 
        bool hasAnimation() const { return this->animation_ != nullptr;};
        void deleteAnimation() { this->animation_ = nullptr;};
        inline bool getAnimation() const { DARABONBA_PTR_GET_DEFAULT(animation_, false) };
        inline HighRiskIPCity& setAnimation(bool animation) { DARABONBA_PTR_SET_VALUE(animation_, animation) };


        // grid Field Functions 
        bool hasGrid() const { return this->grid_ != nullptr;};
        void deleteGrid() { this->grid_ = nullptr;};
        inline const HighRiskIPCity::Grid & getGrid() const { DARABONBA_PTR_GET_CONST(grid_, HighRiskIPCity::Grid) };
        inline HighRiskIPCity::Grid getGrid() { DARABONBA_PTR_GET(grid_, HighRiskIPCity::Grid) };
        inline HighRiskIPCity& setGrid(const HighRiskIPCity::Grid & grid) { DARABONBA_PTR_SET_VALUE(grid_, grid) };
        inline HighRiskIPCity& setGrid(HighRiskIPCity::Grid && grid) { DARABONBA_PTR_SET_RVALUE(grid_, grid) };


        // series Field Functions 
        bool hasSeries() const { return this->series_ != nullptr;};
        void deleteSeries() { this->series_ = nullptr;};
        inline const vector<HighRiskIPCity::Series> & getSeries() const { DARABONBA_PTR_GET_CONST(series_, vector<HighRiskIPCity::Series>) };
        inline vector<HighRiskIPCity::Series> getSeries() { DARABONBA_PTR_GET(series_, vector<HighRiskIPCity::Series>) };
        inline HighRiskIPCity& setSeries(const vector<HighRiskIPCity::Series> & series) { DARABONBA_PTR_SET_VALUE(series_, series) };
        inline HighRiskIPCity& setSeries(vector<HighRiskIPCity::Series> && series) { DARABONBA_PTR_SET_RVALUE(series_, series) };


      protected:
        // Chart flag, default true
        shared_ptr<bool> animation_ {};
        // Belonging grid.
        shared_ptr<HighRiskIPCity::Grid> grid_ {};
        // Chart data
        shared_ptr<vector<HighRiskIPCity::Series>> series_ {};
      };

      virtual bool empty() const override { return this->highRiskIPCity_ == nullptr
        && this->highRiskIPProvince_ == nullptr && this->highRiskMobileCity_ == nullptr && this->highRiskMobileProvince_ == nullptr; };
      // highRiskIPCity Field Functions 
      bool hasHighRiskIPCity() const { return this->highRiskIPCity_ != nullptr;};
      void deleteHighRiskIPCity() { this->highRiskIPCity_ = nullptr;};
      inline const ResultObject::HighRiskIPCity & getHighRiskIPCity() const { DARABONBA_PTR_GET_CONST(highRiskIPCity_, ResultObject::HighRiskIPCity) };
      inline ResultObject::HighRiskIPCity getHighRiskIPCity() { DARABONBA_PTR_GET(highRiskIPCity_, ResultObject::HighRiskIPCity) };
      inline ResultObject& setHighRiskIPCity(const ResultObject::HighRiskIPCity & highRiskIPCity) { DARABONBA_PTR_SET_VALUE(highRiskIPCity_, highRiskIPCity) };
      inline ResultObject& setHighRiskIPCity(ResultObject::HighRiskIPCity && highRiskIPCity) { DARABONBA_PTR_SET_RVALUE(highRiskIPCity_, highRiskIPCity) };


      // highRiskIPProvince Field Functions 
      bool hasHighRiskIPProvince() const { return this->highRiskIPProvince_ != nullptr;};
      void deleteHighRiskIPProvince() { this->highRiskIPProvince_ = nullptr;};
      inline const ResultObject::HighRiskIPProvince & getHighRiskIPProvince() const { DARABONBA_PTR_GET_CONST(highRiskIPProvince_, ResultObject::HighRiskIPProvince) };
      inline ResultObject::HighRiskIPProvince getHighRiskIPProvince() { DARABONBA_PTR_GET(highRiskIPProvince_, ResultObject::HighRiskIPProvince) };
      inline ResultObject& setHighRiskIPProvince(const ResultObject::HighRiskIPProvince & highRiskIPProvince) { DARABONBA_PTR_SET_VALUE(highRiskIPProvince_, highRiskIPProvince) };
      inline ResultObject& setHighRiskIPProvince(ResultObject::HighRiskIPProvince && highRiskIPProvince) { DARABONBA_PTR_SET_RVALUE(highRiskIPProvince_, highRiskIPProvince) };


      // highRiskMobileCity Field Functions 
      bool hasHighRiskMobileCity() const { return this->highRiskMobileCity_ != nullptr;};
      void deleteHighRiskMobileCity() { this->highRiskMobileCity_ = nullptr;};
      inline const ResultObject::HighRiskMobileCity & getHighRiskMobileCity() const { DARABONBA_PTR_GET_CONST(highRiskMobileCity_, ResultObject::HighRiskMobileCity) };
      inline ResultObject::HighRiskMobileCity getHighRiskMobileCity() { DARABONBA_PTR_GET(highRiskMobileCity_, ResultObject::HighRiskMobileCity) };
      inline ResultObject& setHighRiskMobileCity(const ResultObject::HighRiskMobileCity & highRiskMobileCity) { DARABONBA_PTR_SET_VALUE(highRiskMobileCity_, highRiskMobileCity) };
      inline ResultObject& setHighRiskMobileCity(ResultObject::HighRiskMobileCity && highRiskMobileCity) { DARABONBA_PTR_SET_RVALUE(highRiskMobileCity_, highRiskMobileCity) };


      // highRiskMobileProvince Field Functions 
      bool hasHighRiskMobileProvince() const { return this->highRiskMobileProvince_ != nullptr;};
      void deleteHighRiskMobileProvince() { this->highRiskMobileProvince_ = nullptr;};
      inline const ResultObject::HighRiskMobileProvince & getHighRiskMobileProvince() const { DARABONBA_PTR_GET_CONST(highRiskMobileProvince_, ResultObject::HighRiskMobileProvince) };
      inline ResultObject::HighRiskMobileProvince getHighRiskMobileProvince() { DARABONBA_PTR_GET(highRiskMobileProvince_, ResultObject::HighRiskMobileProvince) };
      inline ResultObject& setHighRiskMobileProvince(const ResultObject::HighRiskMobileProvince & highRiskMobileProvince) { DARABONBA_PTR_SET_VALUE(highRiskMobileProvince_, highRiskMobileProvince) };
      inline ResultObject& setHighRiskMobileProvince(ResultObject::HighRiskMobileProvince && highRiskMobileProvince) { DARABONBA_PTR_SET_RVALUE(highRiskMobileProvince_, highRiskMobileProvince) };


    protected:
      // High-risk IP city
      shared_ptr<ResultObject::HighRiskIPCity> highRiskIPCity_ {};
      // High-risk IP归属province
      shared_ptr<ResultObject::HighRiskIPProvince> highRiskIPProvince_ {};
      // High-risk mobile phone归属city
      shared_ptr<ResultObject::HighRiskMobileCity> highRiskMobileCity_ {};
      // High-risk mobile phone\\"s province of origin
      shared_ptr<ResultObject::HighRiskMobileProvince> highRiskMobileProvince_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->resultObject_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeHighRiskPieChartResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline DescribeHighRiskPieChartResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeHighRiskPieChartResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHighRiskPieChartResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const DescribeHighRiskPieChartResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, DescribeHighRiskPieChartResponseBody::ResultObject) };
    inline DescribeHighRiskPieChartResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, DescribeHighRiskPieChartResponseBody::ResultObject) };
    inline DescribeHighRiskPieChartResponseBody& setResultObject(const DescribeHighRiskPieChartResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeHighRiskPieChartResponseBody& setResultObject(DescribeHighRiskPieChartResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeHighRiskPieChartResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Status code
    shared_ptr<string> code_ {};
    // HTTP status code
    shared_ptr<string> httpStatusCode_ {};
    // Error details
    shared_ptr<string> message_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // Returned object
    shared_ptr<DescribeHighRiskPieChartResponseBody::ResultObject> resultObject_ {};
    // Whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
