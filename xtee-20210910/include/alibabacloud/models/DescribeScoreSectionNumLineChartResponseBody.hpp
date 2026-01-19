// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCORESECTIONNUMLINECHARTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCORESECTIONNUMLINECHARTRESPONSEBODY_HPP_
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
  class DescribeScoreSectionNumLineChartResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScoreSectionNumLineChartResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScoreSectionNumLineChartResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
    };
    DescribeScoreSectionNumLineChartResponseBody() = default ;
    DescribeScoreSectionNumLineChartResponseBody(const DescribeScoreSectionNumLineChartResponseBody &) = default ;
    DescribeScoreSectionNumLineChartResponseBody(DescribeScoreSectionNumLineChartResponseBody &&) = default ;
    DescribeScoreSectionNumLineChartResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScoreSectionNumLineChartResponseBody() = default ;
    DescribeScoreSectionNumLineChartResponseBody& operator=(const DescribeScoreSectionNumLineChartResponseBody &) = default ;
    DescribeScoreSectionNumLineChartResponseBody& operator=(DescribeScoreSectionNumLineChartResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(series, series_);
        DARABONBA_PTR_TO_JSON(xaxis, xaxis_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(series, series_);
        DARABONBA_PTR_FROM_JSON(xaxis, xaxis_);
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
      class Xaxis : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Xaxis& obj) { 
          DARABONBA_PTR_TO_JSON(data, data_);
        };
        friend void from_json(const Darabonba::Json& j, Xaxis& obj) { 
          DARABONBA_PTR_FROM_JSON(data, data_);
        };
        Xaxis() = default ;
        Xaxis(const Xaxis &) = default ;
        Xaxis(Xaxis &&) = default ;
        Xaxis(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Xaxis() = default ;
        Xaxis& operator=(const Xaxis &) = default ;
        Xaxis& operator=(Xaxis &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->data_ == nullptr; };
        // data Field Functions 
        bool hasData() const { return this->data_ != nullptr;};
        void deleteData() { this->data_ = nullptr;};
        inline const vector<string> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<string>) };
        inline vector<string> getData() { DARABONBA_PTR_GET(data_, vector<string>) };
        inline Xaxis& setData(const vector<string> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
        inline Xaxis& setData(vector<string> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      protected:
        // Data structure.
        shared_ptr<vector<string>> data_ {};
      };

      class Series : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Series& obj) { 
          DARABONBA_PTR_TO_JSON(data, data_);
          DARABONBA_PTR_TO_JSON(name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Series& obj) { 
          DARABONBA_PTR_FROM_JSON(data, data_);
          DARABONBA_PTR_FROM_JSON(name, name_);
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
        virtual bool empty() const override { return this->data_ == nullptr
        && this->name_ == nullptr; };
        // data Field Functions 
        bool hasData() const { return this->data_ != nullptr;};
        void deleteData() { this->data_ = nullptr;};
        inline const vector<string> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<string>) };
        inline vector<string> getData() { DARABONBA_PTR_GET(data_, vector<string>) };
        inline Series& setData(const vector<string> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
        inline Series& setData(vector<string> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Series& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // List of current category results.
        shared_ptr<vector<string>> data_ {};
        // Category name.
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->series_ == nullptr
        && this->xaxis_ == nullptr; };
      // series Field Functions 
      bool hasSeries() const { return this->series_ != nullptr;};
      void deleteSeries() { this->series_ = nullptr;};
      inline const vector<ResultObject::Series> & getSeries() const { DARABONBA_PTR_GET_CONST(series_, vector<ResultObject::Series>) };
      inline vector<ResultObject::Series> getSeries() { DARABONBA_PTR_GET(series_, vector<ResultObject::Series>) };
      inline ResultObject& setSeries(const vector<ResultObject::Series> & series) { DARABONBA_PTR_SET_VALUE(series_, series) };
      inline ResultObject& setSeries(vector<ResultObject::Series> && series) { DARABONBA_PTR_SET_RVALUE(series_, series) };


      // xaxis Field Functions 
      bool hasXaxis() const { return this->xaxis_ != nullptr;};
      void deleteXaxis() { this->xaxis_ = nullptr;};
      inline const ResultObject::Xaxis & getXaxis() const { DARABONBA_PTR_GET_CONST(xaxis_, ResultObject::Xaxis) };
      inline ResultObject::Xaxis getXaxis() { DARABONBA_PTR_GET(xaxis_, ResultObject::Xaxis) };
      inline ResultObject& setXaxis(const ResultObject::Xaxis & xaxis) { DARABONBA_PTR_SET_VALUE(xaxis_, xaxis) };
      inline ResultObject& setXaxis(ResultObject::Xaxis && xaxis) { DARABONBA_PTR_SET_RVALUE(xaxis_, xaxis) };


    protected:
      // Data list
      shared_ptr<vector<ResultObject::Series>> series_ {};
      // Details of xaxis node.
      shared_ptr<ResultObject::Xaxis> xaxis_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeScoreSectionNumLineChartResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const DescribeScoreSectionNumLineChartResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, DescribeScoreSectionNumLineChartResponseBody::ResultObject) };
    inline DescribeScoreSectionNumLineChartResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, DescribeScoreSectionNumLineChartResponseBody::ResultObject) };
    inline DescribeScoreSectionNumLineChartResponseBody& setResultObject(const DescribeScoreSectionNumLineChartResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeScoreSectionNumLineChartResponseBody& setResultObject(DescribeScoreSectionNumLineChartResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Returned object
    shared_ptr<DescribeScoreSectionNumLineChartResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
