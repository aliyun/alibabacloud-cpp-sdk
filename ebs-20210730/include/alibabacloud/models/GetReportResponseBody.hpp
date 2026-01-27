// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class GetReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Datas, datas_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Datas, datas_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetReportResponseBody() = default ;
    GetReportResponseBody(const GetReportResponseBody &) = default ;
    GetReportResponseBody(GetReportResponseBody &&) = default ;
    GetReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetReportResponseBody() = default ;
    GetReportResponseBody& operator=(const GetReportResponseBody &) = default ;
    GetReportResponseBody& operator=(GetReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Datas : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Datas& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(Title, title_);
      };
      friend void from_json(const Darabonba::Json& j, Datas& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
      };
      Datas() = default ;
      Datas(const Datas &) = default ;
      Datas(Datas &&) = default ;
      Datas(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Datas() = default ;
      Datas& operator=(const Datas &) = default ;
      Datas& operator=(Datas &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Data : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Data& obj) { 
          DARABONBA_ANY_TO_JSON(DataPoints, dataPoints_);
          DARABONBA_ANY_TO_JSON(Labels, labels_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_ANY_FROM_JSON(DataPoints, dataPoints_);
          DARABONBA_ANY_FROM_JSON(Labels, labels_);
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
        virtual bool empty() const override { return this->dataPoints_ == nullptr
        && this->labels_ == nullptr; };
        // dataPoints Field Functions 
        bool hasDataPoints() const { return this->dataPoints_ != nullptr;};
        void deleteDataPoints() { this->dataPoints_ = nullptr;};
        inline         const Darabonba::Json & getDataPoints() const { DARABONBA_GET(dataPoints_) };
        Darabonba::Json & getDataPoints() { DARABONBA_GET(dataPoints_) };
        inline Data& setDataPoints(const Darabonba::Json & dataPoints) { DARABONBA_SET_VALUE(dataPoints_, dataPoints) };
        inline Data& setDataPoints(Darabonba::Json && dataPoints) { DARABONBA_SET_RVALUE(dataPoints_, dataPoints) };


        // labels Field Functions 
        bool hasLabels() const { return this->labels_ != nullptr;};
        void deleteLabels() { this->labels_ = nullptr;};
        inline         const Darabonba::Json & getLabels() const { DARABONBA_GET(labels_) };
        Darabonba::Json & getLabels() { DARABONBA_GET(labels_) };
        inline Data& setLabels(const Darabonba::Json & labels) { DARABONBA_SET_VALUE(labels_, labels) };
        inline Data& setLabels(Darabonba::Json && labels) { DARABONBA_SET_RVALUE(labels_, labels) };


      protected:
        // Data Points.
        Darabonba::Json dataPoints_ {};
        // Data Labels.
        Darabonba::Json labels_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr
        && this->title_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<Datas::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<Datas::Data>) };
      inline vector<Datas::Data> getData() { DARABONBA_PTR_GET(data_, vector<Datas::Data>) };
      inline Datas& setData(const vector<Datas::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline Datas& setData(vector<Datas::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Datas& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      // Data.
      shared_ptr<vector<Datas::Data>> data_ {};
      // Data Title.
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->datas_ == nullptr
        && this->requestId_ == nullptr; };
    // datas Field Functions 
    bool hasDatas() const { return this->datas_ != nullptr;};
    void deleteDatas() { this->datas_ = nullptr;};
    inline const vector<GetReportResponseBody::Datas> & getDatas() const { DARABONBA_PTR_GET_CONST(datas_, vector<GetReportResponseBody::Datas>) };
    inline vector<GetReportResponseBody::Datas> getDatas() { DARABONBA_PTR_GET(datas_, vector<GetReportResponseBody::Datas>) };
    inline GetReportResponseBody& setDatas(const vector<GetReportResponseBody::Datas> & datas) { DARABONBA_PTR_SET_VALUE(datas_, datas) };
    inline GetReportResponseBody& setDatas(vector<GetReportResponseBody::Datas> && datas) { DARABONBA_PTR_SET_RVALUE(datas_, datas) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Data Details.
    shared_ptr<vector<GetReportResponseBody::Datas>> datas_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
