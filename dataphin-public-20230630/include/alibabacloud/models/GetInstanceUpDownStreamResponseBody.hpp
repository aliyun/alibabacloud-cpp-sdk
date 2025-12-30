// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEUPDOWNSTREAMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEUPDOWNSTREAMRESPONSEBODY_HPP_
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
  class GetInstanceUpDownStreamResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceUpDownStreamResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(InstanceDagInfo, instanceDagInfo_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceUpDownStreamResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(InstanceDagInfo, instanceDagInfo_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetInstanceUpDownStreamResponseBody() = default ;
    GetInstanceUpDownStreamResponseBody(const GetInstanceUpDownStreamResponseBody &) = default ;
    GetInstanceUpDownStreamResponseBody(GetInstanceUpDownStreamResponseBody &&) = default ;
    GetInstanceUpDownStreamResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceUpDownStreamResponseBody() = default ;
    GetInstanceUpDownStreamResponseBody& operator=(const GetInstanceUpDownStreamResponseBody &) = default ;
    GetInstanceUpDownStreamResponseBody& operator=(GetInstanceUpDownStreamResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceDagInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceDagInfo& obj) { 
        DARABONBA_PTR_TO_JSON(DownInstanceList, downInstanceList_);
        DARABONBA_PTR_TO_JSON(StartInstanceList, startInstanceList_);
        DARABONBA_PTR_TO_JSON(UpInstanceList, upInstanceList_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceDagInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(DownInstanceList, downInstanceList_);
        DARABONBA_PTR_FROM_JSON(StartInstanceList, startInstanceList_);
        DARABONBA_PTR_FROM_JSON(UpInstanceList, upInstanceList_);
      };
      InstanceDagInfo() = default ;
      InstanceDagInfo(const InstanceDagInfo &) = default ;
      InstanceDagInfo(InstanceDagInfo &&) = default ;
      InstanceDagInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceDagInfo() = default ;
      InstanceDagInfo& operator=(const InstanceDagInfo &) = default ;
      InstanceDagInfo& operator=(InstanceDagInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UpInstanceList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UpInstanceList& obj) { 
          DARABONBA_PTR_TO_JSON(FieldInstanceIdList, fieldInstanceIdList_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
        };
        friend void from_json(const Darabonba::Json& j, UpInstanceList& obj) { 
          DARABONBA_PTR_FROM_JSON(FieldInstanceIdList, fieldInstanceIdList_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
        };
        UpInstanceList() = default ;
        UpInstanceList(const UpInstanceList &) = default ;
        UpInstanceList(UpInstanceList &&) = default ;
        UpInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UpInstanceList() = default ;
        UpInstanceList& operator=(const UpInstanceList &) = default ;
        UpInstanceList& operator=(UpInstanceList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fieldInstanceIdList_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->nodeId_ == nullptr && this->nodeType_ == nullptr; };
        // fieldInstanceIdList Field Functions 
        bool hasFieldInstanceIdList() const { return this->fieldInstanceIdList_ != nullptr;};
        void deleteFieldInstanceIdList() { this->fieldInstanceIdList_ = nullptr;};
        inline const vector<string> & getFieldInstanceIdList() const { DARABONBA_PTR_GET_CONST(fieldInstanceIdList_, vector<string>) };
        inline vector<string> getFieldInstanceIdList() { DARABONBA_PTR_GET(fieldInstanceIdList_, vector<string>) };
        inline UpInstanceList& setFieldInstanceIdList(const vector<string> & fieldInstanceIdList) { DARABONBA_PTR_SET_VALUE(fieldInstanceIdList_, fieldInstanceIdList) };
        inline UpInstanceList& setFieldInstanceIdList(vector<string> && fieldInstanceIdList) { DARABONBA_PTR_SET_RVALUE(fieldInstanceIdList_, fieldInstanceIdList) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline UpInstanceList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline UpInstanceList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline UpInstanceList& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // nodeType Field Functions 
        bool hasNodeType() const { return this->nodeType_ != nullptr;};
        void deleteNodeType() { this->nodeType_ = nullptr;};
        inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
        inline UpInstanceList& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


      protected:
        shared_ptr<vector<string>> fieldInstanceIdList_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> nodeId_ {};
        shared_ptr<string> nodeType_ {};
      };

      class StartInstanceList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StartInstanceList& obj) { 
          DARABONBA_PTR_TO_JSON(FieldInstanceIdList, fieldInstanceIdList_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
        };
        friend void from_json(const Darabonba::Json& j, StartInstanceList& obj) { 
          DARABONBA_PTR_FROM_JSON(FieldInstanceIdList, fieldInstanceIdList_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
        };
        StartInstanceList() = default ;
        StartInstanceList(const StartInstanceList &) = default ;
        StartInstanceList(StartInstanceList &&) = default ;
        StartInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StartInstanceList() = default ;
        StartInstanceList& operator=(const StartInstanceList &) = default ;
        StartInstanceList& operator=(StartInstanceList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fieldInstanceIdList_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->nodeId_ == nullptr && this->nodeType_ == nullptr; };
        // fieldInstanceIdList Field Functions 
        bool hasFieldInstanceIdList() const { return this->fieldInstanceIdList_ != nullptr;};
        void deleteFieldInstanceIdList() { this->fieldInstanceIdList_ = nullptr;};
        inline const vector<string> & getFieldInstanceIdList() const { DARABONBA_PTR_GET_CONST(fieldInstanceIdList_, vector<string>) };
        inline vector<string> getFieldInstanceIdList() { DARABONBA_PTR_GET(fieldInstanceIdList_, vector<string>) };
        inline StartInstanceList& setFieldInstanceIdList(const vector<string> & fieldInstanceIdList) { DARABONBA_PTR_SET_VALUE(fieldInstanceIdList_, fieldInstanceIdList) };
        inline StartInstanceList& setFieldInstanceIdList(vector<string> && fieldInstanceIdList) { DARABONBA_PTR_SET_RVALUE(fieldInstanceIdList_, fieldInstanceIdList) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline StartInstanceList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline StartInstanceList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline StartInstanceList& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // nodeType Field Functions 
        bool hasNodeType() const { return this->nodeType_ != nullptr;};
        void deleteNodeType() { this->nodeType_ = nullptr;};
        inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
        inline StartInstanceList& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


      protected:
        shared_ptr<vector<string>> fieldInstanceIdList_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> nodeId_ {};
        shared_ptr<string> nodeType_ {};
      };

      class DownInstanceList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DownInstanceList& obj) { 
          DARABONBA_PTR_TO_JSON(FieldInstanceIdList, fieldInstanceIdList_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
        };
        friend void from_json(const Darabonba::Json& j, DownInstanceList& obj) { 
          DARABONBA_PTR_FROM_JSON(FieldInstanceIdList, fieldInstanceIdList_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
        };
        DownInstanceList() = default ;
        DownInstanceList(const DownInstanceList &) = default ;
        DownInstanceList(DownInstanceList &&) = default ;
        DownInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DownInstanceList() = default ;
        DownInstanceList& operator=(const DownInstanceList &) = default ;
        DownInstanceList& operator=(DownInstanceList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fieldInstanceIdList_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->nodeId_ == nullptr && this->nodeType_ == nullptr; };
        // fieldInstanceIdList Field Functions 
        bool hasFieldInstanceIdList() const { return this->fieldInstanceIdList_ != nullptr;};
        void deleteFieldInstanceIdList() { this->fieldInstanceIdList_ = nullptr;};
        inline const vector<string> & getFieldInstanceIdList() const { DARABONBA_PTR_GET_CONST(fieldInstanceIdList_, vector<string>) };
        inline vector<string> getFieldInstanceIdList() { DARABONBA_PTR_GET(fieldInstanceIdList_, vector<string>) };
        inline DownInstanceList& setFieldInstanceIdList(const vector<string> & fieldInstanceIdList) { DARABONBA_PTR_SET_VALUE(fieldInstanceIdList_, fieldInstanceIdList) };
        inline DownInstanceList& setFieldInstanceIdList(vector<string> && fieldInstanceIdList) { DARABONBA_PTR_SET_RVALUE(fieldInstanceIdList_, fieldInstanceIdList) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline DownInstanceList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline DownInstanceList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline DownInstanceList& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // nodeType Field Functions 
        bool hasNodeType() const { return this->nodeType_ != nullptr;};
        void deleteNodeType() { this->nodeType_ = nullptr;};
        inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
        inline DownInstanceList& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


      protected:
        shared_ptr<vector<string>> fieldInstanceIdList_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> nodeId_ {};
        shared_ptr<string> nodeType_ {};
      };

      virtual bool empty() const override { return this->downInstanceList_ == nullptr
        && this->startInstanceList_ == nullptr && this->upInstanceList_ == nullptr; };
      // downInstanceList Field Functions 
      bool hasDownInstanceList() const { return this->downInstanceList_ != nullptr;};
      void deleteDownInstanceList() { this->downInstanceList_ = nullptr;};
      inline const vector<InstanceDagInfo::DownInstanceList> & getDownInstanceList() const { DARABONBA_PTR_GET_CONST(downInstanceList_, vector<InstanceDagInfo::DownInstanceList>) };
      inline vector<InstanceDagInfo::DownInstanceList> getDownInstanceList() { DARABONBA_PTR_GET(downInstanceList_, vector<InstanceDagInfo::DownInstanceList>) };
      inline InstanceDagInfo& setDownInstanceList(const vector<InstanceDagInfo::DownInstanceList> & downInstanceList) { DARABONBA_PTR_SET_VALUE(downInstanceList_, downInstanceList) };
      inline InstanceDagInfo& setDownInstanceList(vector<InstanceDagInfo::DownInstanceList> && downInstanceList) { DARABONBA_PTR_SET_RVALUE(downInstanceList_, downInstanceList) };


      // startInstanceList Field Functions 
      bool hasStartInstanceList() const { return this->startInstanceList_ != nullptr;};
      void deleteStartInstanceList() { this->startInstanceList_ = nullptr;};
      inline const vector<InstanceDagInfo::StartInstanceList> & getStartInstanceList() const { DARABONBA_PTR_GET_CONST(startInstanceList_, vector<InstanceDagInfo::StartInstanceList>) };
      inline vector<InstanceDagInfo::StartInstanceList> getStartInstanceList() { DARABONBA_PTR_GET(startInstanceList_, vector<InstanceDagInfo::StartInstanceList>) };
      inline InstanceDagInfo& setStartInstanceList(const vector<InstanceDagInfo::StartInstanceList> & startInstanceList) { DARABONBA_PTR_SET_VALUE(startInstanceList_, startInstanceList) };
      inline InstanceDagInfo& setStartInstanceList(vector<InstanceDagInfo::StartInstanceList> && startInstanceList) { DARABONBA_PTR_SET_RVALUE(startInstanceList_, startInstanceList) };


      // upInstanceList Field Functions 
      bool hasUpInstanceList() const { return this->upInstanceList_ != nullptr;};
      void deleteUpInstanceList() { this->upInstanceList_ = nullptr;};
      inline const vector<InstanceDagInfo::UpInstanceList> & getUpInstanceList() const { DARABONBA_PTR_GET_CONST(upInstanceList_, vector<InstanceDagInfo::UpInstanceList>) };
      inline vector<InstanceDagInfo::UpInstanceList> getUpInstanceList() { DARABONBA_PTR_GET(upInstanceList_, vector<InstanceDagInfo::UpInstanceList>) };
      inline InstanceDagInfo& setUpInstanceList(const vector<InstanceDagInfo::UpInstanceList> & upInstanceList) { DARABONBA_PTR_SET_VALUE(upInstanceList_, upInstanceList) };
      inline InstanceDagInfo& setUpInstanceList(vector<InstanceDagInfo::UpInstanceList> && upInstanceList) { DARABONBA_PTR_SET_RVALUE(upInstanceList_, upInstanceList) };


    protected:
      shared_ptr<vector<InstanceDagInfo::DownInstanceList>> downInstanceList_ {};
      shared_ptr<vector<InstanceDagInfo::StartInstanceList>> startInstanceList_ {};
      shared_ptr<vector<InstanceDagInfo::UpInstanceList>> upInstanceList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->instanceDagInfo_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetInstanceUpDownStreamResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetInstanceUpDownStreamResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // instanceDagInfo Field Functions 
    bool hasInstanceDagInfo() const { return this->instanceDagInfo_ != nullptr;};
    void deleteInstanceDagInfo() { this->instanceDagInfo_ = nullptr;};
    inline const GetInstanceUpDownStreamResponseBody::InstanceDagInfo & getInstanceDagInfo() const { DARABONBA_PTR_GET_CONST(instanceDagInfo_, GetInstanceUpDownStreamResponseBody::InstanceDagInfo) };
    inline GetInstanceUpDownStreamResponseBody::InstanceDagInfo getInstanceDagInfo() { DARABONBA_PTR_GET(instanceDagInfo_, GetInstanceUpDownStreamResponseBody::InstanceDagInfo) };
    inline GetInstanceUpDownStreamResponseBody& setInstanceDagInfo(const GetInstanceUpDownStreamResponseBody::InstanceDagInfo & instanceDagInfo) { DARABONBA_PTR_SET_VALUE(instanceDagInfo_, instanceDagInfo) };
    inline GetInstanceUpDownStreamResponseBody& setInstanceDagInfo(GetInstanceUpDownStreamResponseBody::InstanceDagInfo && instanceDagInfo) { DARABONBA_PTR_SET_RVALUE(instanceDagInfo_, instanceDagInfo) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetInstanceUpDownStreamResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceUpDownStreamResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetInstanceUpDownStreamResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<GetInstanceUpDownStreamResponseBody::InstanceDagInfo> instanceDagInfo_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
