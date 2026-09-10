// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATACHECKREPORTINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATACHECKREPORTINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class ListDataCheckReportInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataCheckReportInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(errMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataCheckReportInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(errMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    ListDataCheckReportInstanceResponseBody() = default ;
    ListDataCheckReportInstanceResponseBody(const ListDataCheckReportInstanceResponseBody &) = default ;
    ListDataCheckReportInstanceResponseBody(ListDataCheckReportInstanceResponseBody &&) = default ;
    ListDataCheckReportInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataCheckReportInstanceResponseBody() = default ;
    ListDataCheckReportInstanceResponseBody& operator=(const ListDataCheckReportInstanceResponseBody &) = default ;
    ListDataCheckReportInstanceResponseBody& operator=(ListDataCheckReportInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(batchId, batchId_);
        DARABONBA_PTR_TO_JSON(label, label_);
        DARABONBA_PTR_TO_JSON(reportTime, reportTime_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(batchId, batchId_);
        DARABONBA_PTR_FROM_JSON(label, label_);
        DARABONBA_PTR_FROM_JSON(reportTime, reportTime_);
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
      virtual bool empty() const override { return this->batchId_ == nullptr
        && this->label_ == nullptr && this->reportTime_ == nullptr; };
      // batchId Field Functions 
      bool hasBatchId() const { return this->batchId_ != nullptr;};
      void deleteBatchId() { this->batchId_ = nullptr;};
      inline string getBatchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, "") };
      inline Data& setBatchId(string batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


      // label Field Functions 
      bool hasLabel() const { return this->label_ != nullptr;};
      void deleteLabel() { this->label_ = nullptr;};
      inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
      inline Data& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


      // reportTime Field Functions 
      bool hasReportTime() const { return this->reportTime_ != nullptr;};
      void deleteReportTime() { this->reportTime_ = nullptr;};
      inline string getReportTime() const { DARABONBA_PTR_GET_DEFAULT(reportTime_, "") };
      inline Data& setReportTime(string reportTime) { DARABONBA_PTR_SET_VALUE(reportTime_, reportTime) };


    protected:
      // The batch ID.
      shared_ptr<string> batchId_ {};
      // The report label.
      shared_ptr<string> label_ {};
      // The report generation time.
      shared_ptr<string> reportTime_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListDataCheckReportInstanceResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListDataCheckReportInstanceResponseBody::Data>) };
    inline vector<ListDataCheckReportInstanceResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListDataCheckReportInstanceResponseBody::Data>) };
    inline ListDataCheckReportInstanceResponseBody& setData(const vector<ListDataCheckReportInstanceResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDataCheckReportInstanceResponseBody& setData(vector<ListDataCheckReportInstanceResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline ListDataCheckReportInstanceResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline ListDataCheckReportInstanceResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataCheckReportInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDataCheckReportInstanceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The list of report historical instances.
    shared_ptr<vector<ListDataCheckReportInstanceResponseBody::Data>> data_ {};
    // The error code. An empty string is returned if the call is successful.
    shared_ptr<string> errCode_ {};
    // The error message. An empty string is returned if the call is successful.
    shared_ptr<string> errMessage_ {};
    // The request ID, which is used to locate and troubleshoot issues for this call.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call is successful. Valid values:
    // - true: The call is successful.
    // - false: The call failed. Troubleshoot by using errCode and errMessage.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
