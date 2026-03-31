// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUOTAUSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETQUOTAUSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetQuotaUsageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQuotaUsageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(httpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetQuotaUsageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(httpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetQuotaUsageResponseBody() = default ;
    GetQuotaUsageResponseBody(const GetQuotaUsageResponseBody &) = default ;
    GetQuotaUsageResponseBody(GetQuotaUsageResponseBody &&) = default ;
    GetQuotaUsageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQuotaUsageResponseBody() = default ;
    GetQuotaUsageResponseBody& operator=(const GetQuotaUsageResponseBody &) = default ;
    GetQuotaUsageResponseBody& operator=(GetQuotaUsageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_ANY_TO_JSON(metrics, metrics_);
        DARABONBA_PTR_TO_JSON(plot, plot_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_ANY_FROM_JSON(metrics, metrics_);
        DARABONBA_PTR_FROM_JSON(plot, plot_);
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
      class Plot : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Plot& obj) { 
          DARABONBA_PTR_TO_JSON(title, title_);
          DARABONBA_PTR_TO_JSON(type, type_);
          DARABONBA_PTR_TO_JSON(yAxis, yAxis_);
        };
        friend void from_json(const Darabonba::Json& j, Plot& obj) { 
          DARABONBA_PTR_FROM_JSON(title, title_);
          DARABONBA_PTR_FROM_JSON(type, type_);
          DARABONBA_PTR_FROM_JSON(yAxis, yAxis_);
        };
        Plot() = default ;
        Plot(const Plot &) = default ;
        Plot(Plot &&) = default ;
        Plot(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Plot() = default ;
        Plot& operator=(const Plot &) = default ;
        Plot& operator=(Plot &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->title_ == nullptr
        && this->type_ == nullptr && this->yAxis_ == nullptr; };
        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline Plot& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Plot& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // yAxis Field Functions 
        bool hasYAxis() const { return this->yAxis_ != nullptr;};
        void deleteYAxis() { this->yAxis_ = nullptr;};
        inline const vector<string> & getYAxis() const { DARABONBA_PTR_GET_CONST(yAxis_, vector<string>) };
        inline vector<string> getYAxis() { DARABONBA_PTR_GET(yAxis_, vector<string>) };
        inline Plot& setYAxis(const vector<string> & yAxis) { DARABONBA_PTR_SET_VALUE(yAxis_, yAxis) };
        inline Plot& setYAxis(vector<string> && yAxis) { DARABONBA_PTR_SET_RVALUE(yAxis_, yAxis) };


      protected:
        // The title of the chart.
        shared_ptr<string> title_ {};
        // The type of the chart.
        shared_ptr<string> type_ {};
        // The data metric field.
        shared_ptr<vector<string>> yAxis_ {};
      };

      virtual bool empty() const override { return this->metrics_ == nullptr
        && this->plot_ == nullptr; };
      // metrics Field Functions 
      bool hasMetrics() const { return this->metrics_ != nullptr;};
      void deleteMetrics() { this->metrics_ = nullptr;};
      inline       const Darabonba::Json & getMetrics() const { DARABONBA_GET(metrics_) };
      Darabonba::Json & getMetrics() { DARABONBA_GET(metrics_) };
      inline Data& setMetrics(const Darabonba::Json & metrics) { DARABONBA_SET_VALUE(metrics_, metrics) };
      inline Data& setMetrics(Darabonba::Json && metrics) { DARABONBA_SET_RVALUE(metrics_, metrics) };


      // plot Field Functions 
      bool hasPlot() const { return this->plot_ != nullptr;};
      void deletePlot() { this->plot_ = nullptr;};
      inline const vector<Data::Plot> & getPlot() const { DARABONBA_PTR_GET_CONST(plot_, vector<Data::Plot>) };
      inline vector<Data::Plot> getPlot() { DARABONBA_PTR_GET(plot_, vector<Data::Plot>) };
      inline Data& setPlot(const vector<Data::Plot> & plot) { DARABONBA_PTR_SET_VALUE(plot_, plot) };
      inline Data& setPlot(vector<Data::Plot> && plot) { DARABONBA_PTR_SET_RVALUE(plot_, plot) };


    protected:
      // The metric results.
      Darabonba::Json metrics_ {};
      // The information about the chart.
      shared_ptr<vector<Data::Plot>> plot_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMsg_ == nullptr && this->httpCode_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetQuotaUsageResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetQuotaUsageResponseBody::Data) };
    inline GetQuotaUsageResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetQuotaUsageResponseBody::Data) };
    inline GetQuotaUsageResponseBody& setData(const GetQuotaUsageResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetQuotaUsageResponseBody& setData(GetQuotaUsageResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetQuotaUsageResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline GetQuotaUsageResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int32_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0) };
    inline GetQuotaUsageResponseBody& setHttpCode(int32_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetQuotaUsageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<GetQuotaUsageResponseBody::Data> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMsg_ {};
    // The HTTP status code.
    // 
    // *   1xx: informational response. The request is received and is being processed.
    // *   2xx: success. The request is successfully received, understood, and accepted by the server.
    // *   3xx: redirection. The request is redirected, and further actions are required to complete the request.
    // *   4xx: client error. The request contains invalid request parameters and syntaxes, or specific request conditions cannot be met.
    // *   5xx: server error. The server cannot meet requirements due to other reasons.
    shared_ptr<int32_t> httpCode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
