// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGQUERYDEFAULTTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DSGQUERYDEFAULTTEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/DataDesensPlanTemplateValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DsgQueryDefaultTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgQueryDefaultTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DsgQueryDefaultTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DsgQueryDefaultTemplatesResponseBody() = default ;
    DsgQueryDefaultTemplatesResponseBody(const DsgQueryDefaultTemplatesResponseBody &) = default ;
    DsgQueryDefaultTemplatesResponseBody(DsgQueryDefaultTemplatesResponseBody &&) = default ;
    DsgQueryDefaultTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgQueryDefaultTemplatesResponseBody() = default ;
    DsgQueryDefaultTemplatesResponseBody& operator=(const DsgQueryDefaultTemplatesResponseBody &) = default ;
    DsgQueryDefaultTemplatesResponseBody& operator=(DsgQueryDefaultTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DataType, dataType_);
        DARABONBA_PTR_TO_JSON(DesensPlanTemplate, desensPlanTemplate_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DataType, dataType_);
        DARABONBA_PTR_FROM_JSON(DesensPlanTemplate, desensPlanTemplate_);
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
      virtual bool empty() const override { return this->dataType_ == nullptr
        && this->desensPlanTemplate_ == nullptr; };
      // dataType Field Functions 
      bool hasDataType() const { return this->dataType_ != nullptr;};
      void deleteDataType() { this->dataType_ = nullptr;};
      inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
      inline Data& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


      // desensPlanTemplate Field Functions 
      bool hasDesensPlanTemplate() const { return this->desensPlanTemplate_ != nullptr;};
      void deleteDesensPlanTemplate() { this->desensPlanTemplate_ = nullptr;};
      inline const map<string, vector<DataDesensPlanTemplateValue>> & getDesensPlanTemplate() const { DARABONBA_PTR_GET_CONST(desensPlanTemplate_, map<string, vector<DataDesensPlanTemplateValue>>) };
      inline map<string, vector<DataDesensPlanTemplateValue>> getDesensPlanTemplate() { DARABONBA_PTR_GET(desensPlanTemplate_, map<string, vector<DataDesensPlanTemplateValue>>) };
      inline Data& setDesensPlanTemplate(const map<string, vector<DataDesensPlanTemplateValue>> & desensPlanTemplate) { DARABONBA_PTR_SET_VALUE(desensPlanTemplate_, desensPlanTemplate) };
      inline Data& setDesensPlanTemplate(map<string, vector<DataDesensPlanTemplateValue>> && desensPlanTemplate) { DARABONBA_PTR_SET_RVALUE(desensPlanTemplate_, desensPlanTemplate) };


    protected:
      // The sensitive field type.
      shared_ptr<string> dataType_ {};
      // The supported data masking methods and parameter descriptions.
      shared_ptr<map<string, vector<DataDesensPlanTemplateValue>>> desensPlanTemplate_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DsgQueryDefaultTemplatesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DsgQueryDefaultTemplatesResponseBody::Data>) };
    inline vector<DsgQueryDefaultTemplatesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DsgQueryDefaultTemplatesResponseBody::Data>) };
    inline DsgQueryDefaultTemplatesResponseBody& setData(const vector<DsgQueryDefaultTemplatesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DsgQueryDefaultTemplatesResponseBody& setData(vector<DsgQueryDefaultTemplatesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DsgQueryDefaultTemplatesResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DsgQueryDefaultTemplatesResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DsgQueryDefaultTemplatesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DsgQueryDefaultTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DsgQueryDefaultTemplatesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The data returned.
    shared_ptr<vector<DsgQueryDefaultTemplatesResponseBody::Data>> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The request ID. You can use the ID to locate logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
