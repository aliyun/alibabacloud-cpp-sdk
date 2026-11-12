// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRODUCTREPORTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPRODUCTREPORTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace InternetBankOpen20240612
{
namespace Models
{
  class ListProductReportsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProductReportsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListProductReportsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListProductReportsResponseBody() = default ;
    ListProductReportsResponseBody(const ListProductReportsResponseBody &) = default ;
    ListProductReportsResponseBody(ListProductReportsResponseBody &&) = default ;
    ListProductReportsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProductReportsResponseBody() = default ;
    ListProductReportsResponseBody& operator=(const ListProductReportsResponseBody &) = default ;
    ListProductReportsResponseBody& operator=(ListProductReportsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Reports, reports_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Reports, reports_);
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
      class Reports : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Reports& obj) { 
          DARABONBA_PTR_TO_JSON(PeriodEnd, periodEnd_);
          DARABONBA_PTR_TO_JSON(PeriodStart, periodStart_);
          DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
          DARABONBA_PTR_TO_JSON(ReportId, reportId_);
        };
        friend void from_json(const Darabonba::Json& j, Reports& obj) { 
          DARABONBA_PTR_FROM_JSON(PeriodEnd, periodEnd_);
          DARABONBA_PTR_FROM_JSON(PeriodStart, periodStart_);
          DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
          DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
        };
        Reports() = default ;
        Reports(const Reports &) = default ;
        Reports(Reports &&) = default ;
        Reports(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Reports() = default ;
        Reports& operator=(const Reports &) = default ;
        Reports& operator=(Reports &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->periodEnd_ == nullptr
        && this->periodStart_ == nullptr && this->productCode_ == nullptr && this->reportId_ == nullptr; };
        // periodEnd Field Functions 
        bool hasPeriodEnd() const { return this->periodEnd_ != nullptr;};
        void deletePeriodEnd() { this->periodEnd_ = nullptr;};
        inline string getPeriodEnd() const { DARABONBA_PTR_GET_DEFAULT(periodEnd_, "") };
        inline Reports& setPeriodEnd(string periodEnd) { DARABONBA_PTR_SET_VALUE(periodEnd_, periodEnd) };


        // periodStart Field Functions 
        bool hasPeriodStart() const { return this->periodStart_ != nullptr;};
        void deletePeriodStart() { this->periodStart_ = nullptr;};
        inline string getPeriodStart() const { DARABONBA_PTR_GET_DEFAULT(periodStart_, "") };
        inline Reports& setPeriodStart(string periodStart) { DARABONBA_PTR_SET_VALUE(periodStart_, periodStart) };


        // productCode Field Functions 
        bool hasProductCode() const { return this->productCode_ != nullptr;};
        void deleteProductCode() { this->productCode_ = nullptr;};
        inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
        inline Reports& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


        // reportId Field Functions 
        bool hasReportId() const { return this->reportId_ != nullptr;};
        void deleteReportId() { this->reportId_ = nullptr;};
        inline string getReportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
        inline Reports& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


      protected:
        shared_ptr<string> periodEnd_ {};
        shared_ptr<string> periodStart_ {};
        shared_ptr<string> productCode_ {};
        shared_ptr<string> reportId_ {};
      };

      virtual bool empty() const override { return this->reports_ == nullptr; };
      // reports Field Functions 
      bool hasReports() const { return this->reports_ != nullptr;};
      void deleteReports() { this->reports_ = nullptr;};
      inline const vector<Data::Reports> & getReports() const { DARABONBA_PTR_GET_CONST(reports_, vector<Data::Reports>) };
      inline vector<Data::Reports> getReports() { DARABONBA_PTR_GET(reports_, vector<Data::Reports>) };
      inline Data& setReports(const vector<Data::Reports> & reports) { DARABONBA_PTR_SET_VALUE(reports_, reports) };
      inline Data& setReports(vector<Data::Reports> && reports) { DARABONBA_PTR_SET_RVALUE(reports_, reports) };


    protected:
      shared_ptr<vector<Data::Reports>> reports_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListProductReportsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListProductReportsResponseBody::Data) };
    inline ListProductReportsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListProductReportsResponseBody::Data) };
    inline ListProductReportsResponseBody& setData(const ListProductReportsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListProductReportsResponseBody& setData(ListProductReportsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListProductReportsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ListProductReportsResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace InternetBankOpen20240612
#endif
