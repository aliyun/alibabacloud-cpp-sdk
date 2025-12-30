// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNODEUPDOWNSTREAMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETNODEUPDOWNSTREAMRESPONSEBODY_HPP_
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
  class GetNodeUpDownStreamResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNodeUpDownStreamResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NodeDagInfo, nodeDagInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetNodeUpDownStreamResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NodeDagInfo, nodeDagInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetNodeUpDownStreamResponseBody() = default ;
    GetNodeUpDownStreamResponseBody(const GetNodeUpDownStreamResponseBody &) = default ;
    GetNodeUpDownStreamResponseBody(GetNodeUpDownStreamResponseBody &&) = default ;
    GetNodeUpDownStreamResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNodeUpDownStreamResponseBody() = default ;
    GetNodeUpDownStreamResponseBody& operator=(const GetNodeUpDownStreamResponseBody &) = default ;
    GetNodeUpDownStreamResponseBody& operator=(GetNodeUpDownStreamResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NodeDagInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NodeDagInfo& obj) { 
        DARABONBA_PTR_TO_JSON(DownStreamNodeList, downStreamNodeList_);
        DARABONBA_PTR_TO_JSON(StartNodeList, startNodeList_);
        DARABONBA_PTR_TO_JSON(UpStreamNodeList, upStreamNodeList_);
      };
      friend void from_json(const Darabonba::Json& j, NodeDagInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(DownStreamNodeList, downStreamNodeList_);
        DARABONBA_PTR_FROM_JSON(StartNodeList, startNodeList_);
        DARABONBA_PTR_FROM_JSON(UpStreamNodeList, upStreamNodeList_);
      };
      NodeDagInfo() = default ;
      NodeDagInfo(const NodeDagInfo &) = default ;
      NodeDagInfo(NodeDagInfo &&) = default ;
      NodeDagInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NodeDagInfo() = default ;
      NodeDagInfo& operator=(const NodeDagInfo &) = default ;
      NodeDagInfo& operator=(NodeDagInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UpStreamNodeList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UpStreamNodeList& obj) { 
          DARABONBA_PTR_TO_JSON(FieldIdList, fieldIdList_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, UpStreamNodeList& obj) { 
          DARABONBA_PTR_FROM_JSON(FieldIdList, fieldIdList_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        UpStreamNodeList() = default ;
        UpStreamNodeList(const UpStreamNodeList &) = default ;
        UpStreamNodeList(UpStreamNodeList &&) = default ;
        UpStreamNodeList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UpStreamNodeList() = default ;
        UpStreamNodeList& operator=(const UpStreamNodeList &) = default ;
        UpStreamNodeList& operator=(UpStreamNodeList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fieldIdList_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->type_ == nullptr; };
        // fieldIdList Field Functions 
        bool hasFieldIdList() const { return this->fieldIdList_ != nullptr;};
        void deleteFieldIdList() { this->fieldIdList_ = nullptr;};
        inline const vector<string> & getFieldIdList() const { DARABONBA_PTR_GET_CONST(fieldIdList_, vector<string>) };
        inline vector<string> getFieldIdList() { DARABONBA_PTR_GET(fieldIdList_, vector<string>) };
        inline UpStreamNodeList& setFieldIdList(const vector<string> & fieldIdList) { DARABONBA_PTR_SET_VALUE(fieldIdList_, fieldIdList) };
        inline UpStreamNodeList& setFieldIdList(vector<string> && fieldIdList) { DARABONBA_PTR_SET_RVALUE(fieldIdList_, fieldIdList) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline UpStreamNodeList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline UpStreamNodeList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline UpStreamNodeList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<vector<string>> fieldIdList_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> type_ {};
      };

      class StartNodeList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StartNodeList& obj) { 
          DARABONBA_PTR_TO_JSON(FieldIdList, fieldIdList_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, StartNodeList& obj) { 
          DARABONBA_PTR_FROM_JSON(FieldIdList, fieldIdList_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        StartNodeList() = default ;
        StartNodeList(const StartNodeList &) = default ;
        StartNodeList(StartNodeList &&) = default ;
        StartNodeList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StartNodeList() = default ;
        StartNodeList& operator=(const StartNodeList &) = default ;
        StartNodeList& operator=(StartNodeList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fieldIdList_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->type_ == nullptr; };
        // fieldIdList Field Functions 
        bool hasFieldIdList() const { return this->fieldIdList_ != nullptr;};
        void deleteFieldIdList() { this->fieldIdList_ = nullptr;};
        inline const vector<string> & getFieldIdList() const { DARABONBA_PTR_GET_CONST(fieldIdList_, vector<string>) };
        inline vector<string> getFieldIdList() { DARABONBA_PTR_GET(fieldIdList_, vector<string>) };
        inline StartNodeList& setFieldIdList(const vector<string> & fieldIdList) { DARABONBA_PTR_SET_VALUE(fieldIdList_, fieldIdList) };
        inline StartNodeList& setFieldIdList(vector<string> && fieldIdList) { DARABONBA_PTR_SET_RVALUE(fieldIdList_, fieldIdList) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline StartNodeList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline StartNodeList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline StartNodeList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<vector<string>> fieldIdList_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> type_ {};
      };

      class DownStreamNodeList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DownStreamNodeList& obj) { 
          DARABONBA_PTR_TO_JSON(FieldIdList, fieldIdList_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, DownStreamNodeList& obj) { 
          DARABONBA_PTR_FROM_JSON(FieldIdList, fieldIdList_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        DownStreamNodeList() = default ;
        DownStreamNodeList(const DownStreamNodeList &) = default ;
        DownStreamNodeList(DownStreamNodeList &&) = default ;
        DownStreamNodeList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DownStreamNodeList() = default ;
        DownStreamNodeList& operator=(const DownStreamNodeList &) = default ;
        DownStreamNodeList& operator=(DownStreamNodeList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fieldIdList_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->type_ == nullptr; };
        // fieldIdList Field Functions 
        bool hasFieldIdList() const { return this->fieldIdList_ != nullptr;};
        void deleteFieldIdList() { this->fieldIdList_ = nullptr;};
        inline const vector<string> & getFieldIdList() const { DARABONBA_PTR_GET_CONST(fieldIdList_, vector<string>) };
        inline vector<string> getFieldIdList() { DARABONBA_PTR_GET(fieldIdList_, vector<string>) };
        inline DownStreamNodeList& setFieldIdList(const vector<string> & fieldIdList) { DARABONBA_PTR_SET_VALUE(fieldIdList_, fieldIdList) };
        inline DownStreamNodeList& setFieldIdList(vector<string> && fieldIdList) { DARABONBA_PTR_SET_RVALUE(fieldIdList_, fieldIdList) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline DownStreamNodeList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline DownStreamNodeList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline DownStreamNodeList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<vector<string>> fieldIdList_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->downStreamNodeList_ == nullptr
        && this->startNodeList_ == nullptr && this->upStreamNodeList_ == nullptr; };
      // downStreamNodeList Field Functions 
      bool hasDownStreamNodeList() const { return this->downStreamNodeList_ != nullptr;};
      void deleteDownStreamNodeList() { this->downStreamNodeList_ = nullptr;};
      inline const vector<NodeDagInfo::DownStreamNodeList> & getDownStreamNodeList() const { DARABONBA_PTR_GET_CONST(downStreamNodeList_, vector<NodeDagInfo::DownStreamNodeList>) };
      inline vector<NodeDagInfo::DownStreamNodeList> getDownStreamNodeList() { DARABONBA_PTR_GET(downStreamNodeList_, vector<NodeDagInfo::DownStreamNodeList>) };
      inline NodeDagInfo& setDownStreamNodeList(const vector<NodeDagInfo::DownStreamNodeList> & downStreamNodeList) { DARABONBA_PTR_SET_VALUE(downStreamNodeList_, downStreamNodeList) };
      inline NodeDagInfo& setDownStreamNodeList(vector<NodeDagInfo::DownStreamNodeList> && downStreamNodeList) { DARABONBA_PTR_SET_RVALUE(downStreamNodeList_, downStreamNodeList) };


      // startNodeList Field Functions 
      bool hasStartNodeList() const { return this->startNodeList_ != nullptr;};
      void deleteStartNodeList() { this->startNodeList_ = nullptr;};
      inline const vector<NodeDagInfo::StartNodeList> & getStartNodeList() const { DARABONBA_PTR_GET_CONST(startNodeList_, vector<NodeDagInfo::StartNodeList>) };
      inline vector<NodeDagInfo::StartNodeList> getStartNodeList() { DARABONBA_PTR_GET(startNodeList_, vector<NodeDagInfo::StartNodeList>) };
      inline NodeDagInfo& setStartNodeList(const vector<NodeDagInfo::StartNodeList> & startNodeList) { DARABONBA_PTR_SET_VALUE(startNodeList_, startNodeList) };
      inline NodeDagInfo& setStartNodeList(vector<NodeDagInfo::StartNodeList> && startNodeList) { DARABONBA_PTR_SET_RVALUE(startNodeList_, startNodeList) };


      // upStreamNodeList Field Functions 
      bool hasUpStreamNodeList() const { return this->upStreamNodeList_ != nullptr;};
      void deleteUpStreamNodeList() { this->upStreamNodeList_ = nullptr;};
      inline const vector<NodeDagInfo::UpStreamNodeList> & getUpStreamNodeList() const { DARABONBA_PTR_GET_CONST(upStreamNodeList_, vector<NodeDagInfo::UpStreamNodeList>) };
      inline vector<NodeDagInfo::UpStreamNodeList> getUpStreamNodeList() { DARABONBA_PTR_GET(upStreamNodeList_, vector<NodeDagInfo::UpStreamNodeList>) };
      inline NodeDagInfo& setUpStreamNodeList(const vector<NodeDagInfo::UpStreamNodeList> & upStreamNodeList) { DARABONBA_PTR_SET_VALUE(upStreamNodeList_, upStreamNodeList) };
      inline NodeDagInfo& setUpStreamNodeList(vector<NodeDagInfo::UpStreamNodeList> && upStreamNodeList) { DARABONBA_PTR_SET_RVALUE(upStreamNodeList_, upStreamNodeList) };


    protected:
      shared_ptr<vector<NodeDagInfo::DownStreamNodeList>> downStreamNodeList_ {};
      shared_ptr<vector<NodeDagInfo::StartNodeList>> startNodeList_ {};
      shared_ptr<vector<NodeDagInfo::UpStreamNodeList>> upStreamNodeList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->nodeDagInfo_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetNodeUpDownStreamResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetNodeUpDownStreamResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetNodeUpDownStreamResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nodeDagInfo Field Functions 
    bool hasNodeDagInfo() const { return this->nodeDagInfo_ != nullptr;};
    void deleteNodeDagInfo() { this->nodeDagInfo_ = nullptr;};
    inline const GetNodeUpDownStreamResponseBody::NodeDagInfo & getNodeDagInfo() const { DARABONBA_PTR_GET_CONST(nodeDagInfo_, GetNodeUpDownStreamResponseBody::NodeDagInfo) };
    inline GetNodeUpDownStreamResponseBody::NodeDagInfo getNodeDagInfo() { DARABONBA_PTR_GET(nodeDagInfo_, GetNodeUpDownStreamResponseBody::NodeDagInfo) };
    inline GetNodeUpDownStreamResponseBody& setNodeDagInfo(const GetNodeUpDownStreamResponseBody::NodeDagInfo & nodeDagInfo) { DARABONBA_PTR_SET_VALUE(nodeDagInfo_, nodeDagInfo) };
    inline GetNodeUpDownStreamResponseBody& setNodeDagInfo(GetNodeUpDownStreamResponseBody::NodeDagInfo && nodeDagInfo) { DARABONBA_PTR_SET_RVALUE(nodeDagInfo_, nodeDagInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetNodeUpDownStreamResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetNodeUpDownStreamResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<GetNodeUpDownStreamResponseBody::NodeDagInfo> nodeDagInfo_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
