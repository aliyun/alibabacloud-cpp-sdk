// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEDOWNSTREAMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEDOWNSTREAMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetInstanceDownStreamResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceDownStreamResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(InstanceRelationList, instanceRelationList_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceDownStreamResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(InstanceRelationList, instanceRelationList_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetInstanceDownStreamResponseBody() = default ;
    GetInstanceDownStreamResponseBody(const GetInstanceDownStreamResponseBody &) = default ;
    GetInstanceDownStreamResponseBody(GetInstanceDownStreamResponseBody &&) = default ;
    GetInstanceDownStreamResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceDownStreamResponseBody() = default ;
    GetInstanceDownStreamResponseBody& operator=(const GetInstanceDownStreamResponseBody &) = default ;
    GetInstanceDownStreamResponseBody& operator=(GetInstanceDownStreamResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceRelationList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceRelationList& obj) { 
        DARABONBA_PTR_TO_JSON(DownStreamDepth, downStreamDepth_);
        DARABONBA_PTR_TO_JSON(ExtendInfo, extendInfo_);
        DARABONBA_PTR_TO_JSON(FieldInstanceList, fieldInstanceList_);
        DARABONBA_PTR_TO_JSON(InstanceInfo, instanceInfo_);
        DARABONBA_PTR_TO_JSON(RunStatus, runStatus_);
        DARABONBA_PTR_TO_JSON(SelectStatus, selectStatus_);
        DARABONBA_PTR_TO_JSON(SelectStatusCause, selectStatusCause_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceRelationList& obj) { 
        DARABONBA_PTR_FROM_JSON(DownStreamDepth, downStreamDepth_);
        DARABONBA_PTR_FROM_JSON(ExtendInfo, extendInfo_);
        DARABONBA_PTR_FROM_JSON(FieldInstanceList, fieldInstanceList_);
        DARABONBA_PTR_FROM_JSON(InstanceInfo, instanceInfo_);
        DARABONBA_PTR_FROM_JSON(RunStatus, runStatus_);
        DARABONBA_PTR_FROM_JSON(SelectStatus, selectStatus_);
        DARABONBA_PTR_FROM_JSON(SelectStatusCause, selectStatusCause_);
      };
      InstanceRelationList() = default ;
      InstanceRelationList(const InstanceRelationList &) = default ;
      InstanceRelationList(InstanceRelationList &&) = default ;
      InstanceRelationList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceRelationList() = default ;
      InstanceRelationList& operator=(const InstanceRelationList &) = default ;
      InstanceRelationList& operator=(InstanceRelationList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InstanceInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstanceInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        InstanceInfo() = default ;
        InstanceInfo(const InstanceInfo &) = default ;
        InstanceInfo(InstanceInfo &&) = default ;
        InstanceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstanceInfo() = default ;
        InstanceInfo& operator=(const InstanceInfo &) = default ;
        InstanceInfo& operator=(InstanceInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr && this->type_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline InstanceInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline InstanceInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline InstanceInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> id_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> type_ {};
      };

      class FieldInstanceList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FieldInstanceList& obj) { 
          DARABONBA_PTR_TO_JSON(FieldInstanceId, fieldInstanceId_);
          DARABONBA_PTR_TO_JSON(RunStatus, runStatus_);
          DARABONBA_PTR_TO_JSON(SelectStatus, selectStatus_);
        };
        friend void from_json(const Darabonba::Json& j, FieldInstanceList& obj) { 
          DARABONBA_PTR_FROM_JSON(FieldInstanceId, fieldInstanceId_);
          DARABONBA_PTR_FROM_JSON(RunStatus, runStatus_);
          DARABONBA_PTR_FROM_JSON(SelectStatus, selectStatus_);
        };
        FieldInstanceList() = default ;
        FieldInstanceList(const FieldInstanceList &) = default ;
        FieldInstanceList(FieldInstanceList &&) = default ;
        FieldInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FieldInstanceList() = default ;
        FieldInstanceList& operator=(const FieldInstanceList &) = default ;
        FieldInstanceList& operator=(FieldInstanceList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fieldInstanceId_ == nullptr
        && this->runStatus_ == nullptr && this->selectStatus_ == nullptr; };
        // fieldInstanceId Field Functions 
        bool hasFieldInstanceId() const { return this->fieldInstanceId_ != nullptr;};
        void deleteFieldInstanceId() { this->fieldInstanceId_ = nullptr;};
        inline string getFieldInstanceId() const { DARABONBA_PTR_GET_DEFAULT(fieldInstanceId_, "") };
        inline FieldInstanceList& setFieldInstanceId(string fieldInstanceId) { DARABONBA_PTR_SET_VALUE(fieldInstanceId_, fieldInstanceId) };


        // runStatus Field Functions 
        bool hasRunStatus() const { return this->runStatus_ != nullptr;};
        void deleteRunStatus() { this->runStatus_ = nullptr;};
        inline string getRunStatus() const { DARABONBA_PTR_GET_DEFAULT(runStatus_, "") };
        inline FieldInstanceList& setRunStatus(string runStatus) { DARABONBA_PTR_SET_VALUE(runStatus_, runStatus) };


        // selectStatus Field Functions 
        bool hasSelectStatus() const { return this->selectStatus_ != nullptr;};
        void deleteSelectStatus() { this->selectStatus_ = nullptr;};
        inline string getSelectStatus() const { DARABONBA_PTR_GET_DEFAULT(selectStatus_, "") };
        inline FieldInstanceList& setSelectStatus(string selectStatus) { DARABONBA_PTR_SET_VALUE(selectStatus_, selectStatus) };


      protected:
        shared_ptr<string> fieldInstanceId_ {};
        shared_ptr<string> runStatus_ {};
        shared_ptr<string> selectStatus_ {};
      };

      virtual bool empty() const override { return this->downStreamDepth_ == nullptr
        && this->extendInfo_ == nullptr && this->fieldInstanceList_ == nullptr && this->instanceInfo_ == nullptr && this->runStatus_ == nullptr && this->selectStatus_ == nullptr
        && this->selectStatusCause_ == nullptr; };
      // downStreamDepth Field Functions 
      bool hasDownStreamDepth() const { return this->downStreamDepth_ != nullptr;};
      void deleteDownStreamDepth() { this->downStreamDepth_ = nullptr;};
      inline int32_t getDownStreamDepth() const { DARABONBA_PTR_GET_DEFAULT(downStreamDepth_, 0) };
      inline InstanceRelationList& setDownStreamDepth(int32_t downStreamDepth) { DARABONBA_PTR_SET_VALUE(downStreamDepth_, downStreamDepth) };


      // extendInfo Field Functions 
      bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
      void deleteExtendInfo() { this->extendInfo_ = nullptr;};
      inline string getExtendInfo() const { DARABONBA_PTR_GET_DEFAULT(extendInfo_, "") };
      inline InstanceRelationList& setExtendInfo(string extendInfo) { DARABONBA_PTR_SET_VALUE(extendInfo_, extendInfo) };


      // fieldInstanceList Field Functions 
      bool hasFieldInstanceList() const { return this->fieldInstanceList_ != nullptr;};
      void deleteFieldInstanceList() { this->fieldInstanceList_ = nullptr;};
      inline const vector<InstanceRelationList::FieldInstanceList> & getFieldInstanceList() const { DARABONBA_PTR_GET_CONST(fieldInstanceList_, vector<InstanceRelationList::FieldInstanceList>) };
      inline vector<InstanceRelationList::FieldInstanceList> getFieldInstanceList() { DARABONBA_PTR_GET(fieldInstanceList_, vector<InstanceRelationList::FieldInstanceList>) };
      inline InstanceRelationList& setFieldInstanceList(const vector<InstanceRelationList::FieldInstanceList> & fieldInstanceList) { DARABONBA_PTR_SET_VALUE(fieldInstanceList_, fieldInstanceList) };
      inline InstanceRelationList& setFieldInstanceList(vector<InstanceRelationList::FieldInstanceList> && fieldInstanceList) { DARABONBA_PTR_SET_RVALUE(fieldInstanceList_, fieldInstanceList) };


      // instanceInfo Field Functions 
      bool hasInstanceInfo() const { return this->instanceInfo_ != nullptr;};
      void deleteInstanceInfo() { this->instanceInfo_ = nullptr;};
      inline const InstanceRelationList::InstanceInfo & getInstanceInfo() const { DARABONBA_PTR_GET_CONST(instanceInfo_, InstanceRelationList::InstanceInfo) };
      inline InstanceRelationList::InstanceInfo getInstanceInfo() { DARABONBA_PTR_GET(instanceInfo_, InstanceRelationList::InstanceInfo) };
      inline InstanceRelationList& setInstanceInfo(const InstanceRelationList::InstanceInfo & instanceInfo) { DARABONBA_PTR_SET_VALUE(instanceInfo_, instanceInfo) };
      inline InstanceRelationList& setInstanceInfo(InstanceRelationList::InstanceInfo && instanceInfo) { DARABONBA_PTR_SET_RVALUE(instanceInfo_, instanceInfo) };


      // runStatus Field Functions 
      bool hasRunStatus() const { return this->runStatus_ != nullptr;};
      void deleteRunStatus() { this->runStatus_ = nullptr;};
      inline string getRunStatus() const { DARABONBA_PTR_GET_DEFAULT(runStatus_, "") };
      inline InstanceRelationList& setRunStatus(string runStatus) { DARABONBA_PTR_SET_VALUE(runStatus_, runStatus) };


      // selectStatus Field Functions 
      bool hasSelectStatus() const { return this->selectStatus_ != nullptr;};
      void deleteSelectStatus() { this->selectStatus_ = nullptr;};
      inline string getSelectStatus() const { DARABONBA_PTR_GET_DEFAULT(selectStatus_, "") };
      inline InstanceRelationList& setSelectStatus(string selectStatus) { DARABONBA_PTR_SET_VALUE(selectStatus_, selectStatus) };


      // selectStatusCause Field Functions 
      bool hasSelectStatusCause() const { return this->selectStatusCause_ != nullptr;};
      void deleteSelectStatusCause() { this->selectStatusCause_ = nullptr;};
      inline string getSelectStatusCause() const { DARABONBA_PTR_GET_DEFAULT(selectStatusCause_, "") };
      inline InstanceRelationList& setSelectStatusCause(string selectStatusCause) { DARABONBA_PTR_SET_VALUE(selectStatusCause_, selectStatusCause) };


    protected:
      shared_ptr<int32_t> downStreamDepth_ {};
      shared_ptr<string> extendInfo_ {};
      shared_ptr<vector<InstanceRelationList::FieldInstanceList>> fieldInstanceList_ {};
      shared_ptr<InstanceRelationList::InstanceInfo> instanceInfo_ {};
      shared_ptr<string> runStatus_ {};
      shared_ptr<string> selectStatus_ {};
      shared_ptr<string> selectStatusCause_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->instanceRelationList_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetInstanceDownStreamResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetInstanceDownStreamResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // instanceRelationList Field Functions 
    bool hasInstanceRelationList() const { return this->instanceRelationList_ != nullptr;};
    void deleteInstanceRelationList() { this->instanceRelationList_ = nullptr;};
    inline const vector<GetInstanceDownStreamResponseBody::InstanceRelationList> & getInstanceRelationList() const { DARABONBA_PTR_GET_CONST(instanceRelationList_, vector<GetInstanceDownStreamResponseBody::InstanceRelationList>) };
    inline vector<GetInstanceDownStreamResponseBody::InstanceRelationList> getInstanceRelationList() { DARABONBA_PTR_GET(instanceRelationList_, vector<GetInstanceDownStreamResponseBody::InstanceRelationList>) };
    inline GetInstanceDownStreamResponseBody& setInstanceRelationList(const vector<GetInstanceDownStreamResponseBody::InstanceRelationList> & instanceRelationList) { DARABONBA_PTR_SET_VALUE(instanceRelationList_, instanceRelationList) };
    inline GetInstanceDownStreamResponseBody& setInstanceRelationList(vector<GetInstanceDownStreamResponseBody::InstanceRelationList> && instanceRelationList) { DARABONBA_PTR_SET_RVALUE(instanceRelationList_, instanceRelationList) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetInstanceDownStreamResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceDownStreamResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetInstanceDownStreamResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<vector<GetInstanceDownStreamResponseBody::InstanceRelationList>> instanceRelationList_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
