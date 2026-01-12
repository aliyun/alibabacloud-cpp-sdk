// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOSSCHECKSTATRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETOSSCHECKSTATRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetOssCheckStatResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOssCheckStatResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BarChart, barChart_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetOssCheckStatResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BarChart, barChart_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetOssCheckStatResponseBody() = default ;
    GetOssCheckStatResponseBody(const GetOssCheckStatResponseBody &) = default ;
    GetOssCheckStatResponseBody(GetOssCheckStatResponseBody &&) = default ;
    GetOssCheckStatResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOssCheckStatResponseBody() = default ;
    GetOssCheckStatResponseBody& operator=(const GetOssCheckStatResponseBody &) = default ;
    GetOssCheckStatResponseBody& operator=(GetOssCheckStatResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BarChart : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BarChart& obj) { 
        DARABONBA_PTR_TO_JSON(X, x_);
        DARABONBA_PTR_TO_JSON(Y, y_);
      };
      friend void from_json(const Darabonba::Json& j, BarChart& obj) { 
        DARABONBA_PTR_FROM_JSON(X, x_);
        DARABONBA_PTR_FROM_JSON(Y, y_);
      };
      BarChart() = default ;
      BarChart(const BarChart &) = default ;
      BarChart(BarChart &&) = default ;
      BarChart(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BarChart() = default ;
      BarChart& operator=(const BarChart &) = default ;
      BarChart& operator=(BarChart &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Y : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Y& obj) { 
          DARABONBA_PTR_TO_JSON(Data, data_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Y& obj) { 
          DARABONBA_PTR_FROM_JSON(Data, data_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        Y() = default ;
        Y(const Y &) = default ;
        Y(Y &&) = default ;
        Y(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Y() = default ;
        Y& operator=(const Y &) = default ;
        Y& operator=(Y &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->data_ == nullptr
        && this->name_ == nullptr; };
        // data Field Functions 
        bool hasData() const { return this->data_ != nullptr;};
        void deleteData() { this->data_ = nullptr;};
        inline const vector<int64_t> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<int64_t>) };
        inline vector<int64_t> getData() { DARABONBA_PTR_GET(data_, vector<int64_t>) };
        inline Y& setData(const vector<int64_t> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
        inline Y& setData(vector<int64_t> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Y& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // Data.
        shared_ptr<vector<int64_t>> data_ {};
        // Name.
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->x_ == nullptr
        && this->y_ == nullptr; };
      // x Field Functions 
      bool hasX() const { return this->x_ != nullptr;};
      void deleteX() { this->x_ = nullptr;};
      inline const vector<string> & getX() const { DARABONBA_PTR_GET_CONST(x_, vector<string>) };
      inline vector<string> getX() { DARABONBA_PTR_GET(x_, vector<string>) };
      inline BarChart& setX(const vector<string> & x) { DARABONBA_PTR_SET_VALUE(x_, x) };
      inline BarChart& setX(vector<string> && x) { DARABONBA_PTR_SET_RVALUE(x_, x) };


      // y Field Functions 
      bool hasY() const { return this->y_ != nullptr;};
      void deleteY() { this->y_ = nullptr;};
      inline const vector<BarChart::Y> & getY() const { DARABONBA_PTR_GET_CONST(y_, vector<BarChart::Y>) };
      inline vector<BarChart::Y> getY() { DARABONBA_PTR_GET(y_, vector<BarChart::Y>) };
      inline BarChart& setY(const vector<BarChart::Y> & y) { DARABONBA_PTR_SET_VALUE(y_, y) };
      inline BarChart& setY(vector<BarChart::Y> && y) { DARABONBA_PTR_SET_RVALUE(y_, y) };


    protected:
      // X values of the coordinates.
      shared_ptr<vector<string>> x_ {};
      // Y values of the coordinates.
      shared_ptr<vector<BarChart::Y>> y_ {};
    };

    virtual bool empty() const override { return this->barChart_ == nullptr
        && this->requestId_ == nullptr; };
    // barChart Field Functions 
    bool hasBarChart() const { return this->barChart_ != nullptr;};
    void deleteBarChart() { this->barChart_ = nullptr;};
    inline const GetOssCheckStatResponseBody::BarChart & getBarChart() const { DARABONBA_PTR_GET_CONST(barChart_, GetOssCheckStatResponseBody::BarChart) };
    inline GetOssCheckStatResponseBody::BarChart getBarChart() { DARABONBA_PTR_GET(barChart_, GetOssCheckStatResponseBody::BarChart) };
    inline GetOssCheckStatResponseBody& setBarChart(const GetOssCheckStatResponseBody::BarChart & barChart) { DARABONBA_PTR_SET_VALUE(barChart_, barChart) };
    inline GetOssCheckStatResponseBody& setBarChart(GetOssCheckStatResponseBody::BarChart && barChart) { DARABONBA_PTR_SET_RVALUE(barChart_, barChart) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOssCheckStatResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Bar chart
    shared_ptr<GetOssCheckStatResponseBody::BarChart> barChart_ {};
    // ID assigned by the backend, used to uniquely identify a request. Can be used for troubleshooting.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
