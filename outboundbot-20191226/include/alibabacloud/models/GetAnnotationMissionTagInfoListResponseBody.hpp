// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETANNOTATIONMISSIONTAGINFOLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETANNOTATIONMISSIONTAGINFOLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class GetAnnotationMissionTagInfoListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAnnotationMissionTagInfoListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAnnotationMissionTagInfoListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAnnotationMissionTagInfoListResponseBody() = default ;
    GetAnnotationMissionTagInfoListResponseBody(const GetAnnotationMissionTagInfoListResponseBody &) = default ;
    GetAnnotationMissionTagInfoListResponseBody(GetAnnotationMissionTagInfoListResponseBody &&) = default ;
    GetAnnotationMissionTagInfoListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAnnotationMissionTagInfoListResponseBody() = default ;
    GetAnnotationMissionTagInfoListResponseBody& operator=(const GetAnnotationMissionTagInfoListResponseBody &) = default ;
    GetAnnotationMissionTagInfoListResponseBody& operator=(GetAnnotationMissionTagInfoListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AnnotationMissionTagInfoList, annotationMissionTagInfoList_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AnnotationMissionTagInfoList, annotationMissionTagInfoList_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
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
      class AnnotationMissionTagInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AnnotationMissionTagInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(AnnotationMissionTagInfoDescription, annotationMissionTagInfoDescription_);
          DARABONBA_PTR_TO_JSON(AnnotationMissionTagInfoId, annotationMissionTagInfoId_);
          DARABONBA_PTR_TO_JSON(AnnotationMissionTagInfoName, annotationMissionTagInfoName_);
          DARABONBA_PTR_TO_JSON(Delete, delete_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
        };
        friend void from_json(const Darabonba::Json& j, AnnotationMissionTagInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(AnnotationMissionTagInfoDescription, annotationMissionTagInfoDescription_);
          DARABONBA_PTR_FROM_JSON(AnnotationMissionTagInfoId, annotationMissionTagInfoId_);
          DARABONBA_PTR_FROM_JSON(AnnotationMissionTagInfoName, annotationMissionTagInfoName_);
          DARABONBA_PTR_FROM_JSON(Delete, delete_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
        };
        AnnotationMissionTagInfoList() = default ;
        AnnotationMissionTagInfoList(const AnnotationMissionTagInfoList &) = default ;
        AnnotationMissionTagInfoList(AnnotationMissionTagInfoList &&) = default ;
        AnnotationMissionTagInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AnnotationMissionTagInfoList() = default ;
        AnnotationMissionTagInfoList& operator=(const AnnotationMissionTagInfoList &) = default ;
        AnnotationMissionTagInfoList& operator=(AnnotationMissionTagInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->annotationMissionTagInfoDescription_ == nullptr
        && this->annotationMissionTagInfoId_ == nullptr && this->annotationMissionTagInfoName_ == nullptr && this->delete_ == nullptr && this->instanceId_ == nullptr && this->tenantId_ == nullptr; };
        // annotationMissionTagInfoDescription Field Functions 
        bool hasAnnotationMissionTagInfoDescription() const { return this->annotationMissionTagInfoDescription_ != nullptr;};
        void deleteAnnotationMissionTagInfoDescription() { this->annotationMissionTagInfoDescription_ = nullptr;};
        inline string getAnnotationMissionTagInfoDescription() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionTagInfoDescription_, "") };
        inline AnnotationMissionTagInfoList& setAnnotationMissionTagInfoDescription(string annotationMissionTagInfoDescription) { DARABONBA_PTR_SET_VALUE(annotationMissionTagInfoDescription_, annotationMissionTagInfoDescription) };


        // annotationMissionTagInfoId Field Functions 
        bool hasAnnotationMissionTagInfoId() const { return this->annotationMissionTagInfoId_ != nullptr;};
        void deleteAnnotationMissionTagInfoId() { this->annotationMissionTagInfoId_ = nullptr;};
        inline string getAnnotationMissionTagInfoId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionTagInfoId_, "") };
        inline AnnotationMissionTagInfoList& setAnnotationMissionTagInfoId(string annotationMissionTagInfoId) { DARABONBA_PTR_SET_VALUE(annotationMissionTagInfoId_, annotationMissionTagInfoId) };


        // annotationMissionTagInfoName Field Functions 
        bool hasAnnotationMissionTagInfoName() const { return this->annotationMissionTagInfoName_ != nullptr;};
        void deleteAnnotationMissionTagInfoName() { this->annotationMissionTagInfoName_ = nullptr;};
        inline string getAnnotationMissionTagInfoName() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionTagInfoName_, "") };
        inline AnnotationMissionTagInfoList& setAnnotationMissionTagInfoName(string annotationMissionTagInfoName) { DARABONBA_PTR_SET_VALUE(annotationMissionTagInfoName_, annotationMissionTagInfoName) };


        // delete Field Functions 
        bool hasDelete() const { return this->delete_ != nullptr;};
        void deleteDelete() { this->delete_ = nullptr;};
        inline bool getDelete() const { DARABONBA_PTR_GET_DEFAULT(delete_, false) };
        inline AnnotationMissionTagInfoList& setDelete(bool _delete) { DARABONBA_PTR_SET_VALUE(delete_, _delete) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline AnnotationMissionTagInfoList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // tenantId Field Functions 
        bool hasTenantId() const { return this->tenantId_ != nullptr;};
        void deleteTenantId() { this->tenantId_ = nullptr;};
        inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
        inline AnnotationMissionTagInfoList& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


      protected:
        shared_ptr<string> annotationMissionTagInfoDescription_ {};
        shared_ptr<string> annotationMissionTagInfoId_ {};
        shared_ptr<string> annotationMissionTagInfoName_ {};
        shared_ptr<bool> delete_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> tenantId_ {};
      };

      virtual bool empty() const override { return this->annotationMissionTagInfoList_ == nullptr
        && this->message_ == nullptr && this->success_ == nullptr; };
      // annotationMissionTagInfoList Field Functions 
      bool hasAnnotationMissionTagInfoList() const { return this->annotationMissionTagInfoList_ != nullptr;};
      void deleteAnnotationMissionTagInfoList() { this->annotationMissionTagInfoList_ = nullptr;};
      inline const vector<Data::AnnotationMissionTagInfoList> & getAnnotationMissionTagInfoList() const { DARABONBA_PTR_GET_CONST(annotationMissionTagInfoList_, vector<Data::AnnotationMissionTagInfoList>) };
      inline vector<Data::AnnotationMissionTagInfoList> getAnnotationMissionTagInfoList() { DARABONBA_PTR_GET(annotationMissionTagInfoList_, vector<Data::AnnotationMissionTagInfoList>) };
      inline Data& setAnnotationMissionTagInfoList(const vector<Data::AnnotationMissionTagInfoList> & annotationMissionTagInfoList) { DARABONBA_PTR_SET_VALUE(annotationMissionTagInfoList_, annotationMissionTagInfoList) };
      inline Data& setAnnotationMissionTagInfoList(vector<Data::AnnotationMissionTagInfoList> && annotationMissionTagInfoList) { DARABONBA_PTR_SET_RVALUE(annotationMissionTagInfoList_, annotationMissionTagInfoList) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Data& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline Data& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      shared_ptr<vector<Data::AnnotationMissionTagInfoList>> annotationMissionTagInfoList_ {};
      shared_ptr<string> message_ {};
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAnnotationMissionTagInfoListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAnnotationMissionTagInfoListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAnnotationMissionTagInfoListResponseBody::Data) };
    inline GetAnnotationMissionTagInfoListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAnnotationMissionTagInfoListResponseBody::Data) };
    inline GetAnnotationMissionTagInfoListResponseBody& setData(const GetAnnotationMissionTagInfoListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAnnotationMissionTagInfoListResponseBody& setData(GetAnnotationMissionTagInfoListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetAnnotationMissionTagInfoListResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAnnotationMissionTagInfoListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAnnotationMissionTagInfoListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAnnotationMissionTagInfoListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetAnnotationMissionTagInfoListResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
