// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICERECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICERECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetServiceRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(record, record_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(record, record_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetServiceRecordResponseBody() = default ;
    GetServiceRecordResponseBody(const GetServiceRecordResponseBody &) = default ;
    GetServiceRecordResponseBody(GetServiceRecordResponseBody &&) = default ;
    GetServiceRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceRecordResponseBody() = default ;
    GetServiceRecordResponseBody& operator=(const GetServiceRecordResponseBody &) = default ;
    GetServiceRecordResponseBody& operator=(GetServiceRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Record : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Record& obj) { 
        DARABONBA_PTR_TO_JSON(recordContent, recordContent_);
        DARABONBA_PTR_TO_JSON(recordType, recordType_);
        DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
        DARABONBA_PTR_TO_JSON(workspace, workspace_);
      };
      friend void from_json(const Darabonba::Json& j, Record& obj) { 
        DARABONBA_PTR_FROM_JSON(recordContent, recordContent_);
        DARABONBA_PTR_FROM_JSON(recordType, recordType_);
        DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
        DARABONBA_PTR_FROM_JSON(workspace, workspace_);
      };
      Record() = default ;
      Record(const Record &) = default ;
      Record(Record &&) = default ;
      Record(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Record() = default ;
      Record& operator=(const Record &) = default ;
      Record& operator=(Record &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->recordContent_ == nullptr
        && this->recordType_ == nullptr && this->serviceId_ == nullptr && this->workspace_ == nullptr; };
      // recordContent Field Functions 
      bool hasRecordContent() const { return this->recordContent_ != nullptr;};
      void deleteRecordContent() { this->recordContent_ = nullptr;};
      inline string getRecordContent() const { DARABONBA_PTR_GET_DEFAULT(recordContent_, "") };
      inline Record& setRecordContent(string recordContent) { DARABONBA_PTR_SET_VALUE(recordContent_, recordContent) };


      // recordType Field Functions 
      bool hasRecordType() const { return this->recordType_ != nullptr;};
      void deleteRecordType() { this->recordType_ = nullptr;};
      inline string getRecordType() const { DARABONBA_PTR_GET_DEFAULT(recordType_, "") };
      inline Record& setRecordType(string recordType) { DARABONBA_PTR_SET_VALUE(recordType_, recordType) };


      // serviceId Field Functions 
      bool hasServiceId() const { return this->serviceId_ != nullptr;};
      void deleteServiceId() { this->serviceId_ = nullptr;};
      inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
      inline Record& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


      // workspace Field Functions 
      bool hasWorkspace() const { return this->workspace_ != nullptr;};
      void deleteWorkspace() { this->workspace_ = nullptr;};
      inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
      inline Record& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


    protected:
      // The entry content in JSON string format. The returned content varies depending on the recordType.
      shared_ptr<string> recordContent_ {};
      // The type of the linked entry. Currently supported values:
      // logCorrelation: indicates application log association.
      shared_ptr<string> recordType_ {};
      // The unique identifier of the service.
      shared_ptr<string> serviceId_ {};
      // The workspace.
      shared_ptr<string> workspace_ {};
    };

    virtual bool empty() const override { return this->record_ == nullptr
        && this->requestId_ == nullptr; };
    // record Field Functions 
    bool hasRecord() const { return this->record_ != nullptr;};
    void deleteRecord() { this->record_ = nullptr;};
    inline const GetServiceRecordResponseBody::Record & getRecord() const { DARABONBA_PTR_GET_CONST(record_, GetServiceRecordResponseBody::Record) };
    inline GetServiceRecordResponseBody::Record getRecord() { DARABONBA_PTR_GET(record_, GetServiceRecordResponseBody::Record) };
    inline GetServiceRecordResponseBody& setRecord(const GetServiceRecordResponseBody::Record & record) { DARABONBA_PTR_SET_VALUE(record_, record) };
    inline GetServiceRecordResponseBody& setRecord(GetServiceRecordResponseBody::Record && record) { DARABONBA_PTR_SET_RVALUE(record_, record) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetServiceRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The record.
    shared_ptr<GetServiceRecordResponseBody::Record> record_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
