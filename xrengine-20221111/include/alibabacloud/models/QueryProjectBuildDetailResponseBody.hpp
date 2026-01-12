// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPROJECTBUILDDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYPROJECTBUILDDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace XrEngine20221111
{
namespace Models
{
  class QueryProjectBuildDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryProjectBuildDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryProjectBuildDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryProjectBuildDetailResponseBody() = default ;
    QueryProjectBuildDetailResponseBody(const QueryProjectBuildDetailResponseBody &) = default ;
    QueryProjectBuildDetailResponseBody(QueryProjectBuildDetailResponseBody &&) = default ;
    QueryProjectBuildDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryProjectBuildDetailResponseBody() = default ;
    QueryProjectBuildDetailResponseBody& operator=(const QueryProjectBuildDetailResponseBody &) = default ;
    QueryProjectBuildDetailResponseBody& operator=(QueryProjectBuildDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(InstanceDetailResponseList, instanceDetailResponseList_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(InstanceDetailResponseList, instanceDetailResponseList_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
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
      class InstanceDetailResponseList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstanceDetailResponseList& obj) { 
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Params, params_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(SubmitTime, submitTime_);
          DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceDetailResponseList& obj) { 
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Params, params_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(SubmitTime, submitTime_);
          DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        };
        InstanceDetailResponseList() = default ;
        InstanceDetailResponseList(const InstanceDetailResponseList &) = default ;
        InstanceDetailResponseList(InstanceDetailResponseList &&) = default ;
        InstanceDetailResponseList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstanceDetailResponseList() = default ;
        InstanceDetailResponseList& operator=(const InstanceDetailResponseList &) = default ;
        InstanceDetailResponseList& operator=(InstanceDetailResponseList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->id_ == nullptr && this->params_ == nullptr && this->status_ == nullptr && this->submitTime_ == nullptr
        && this->templateId_ == nullptr; };
        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline InstanceDetailResponseList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline InstanceDetailResponseList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline InstanceDetailResponseList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // params Field Functions 
        bool hasParams() const { return this->params_ != nullptr;};
        void deleteParams() { this->params_ = nullptr;};
        inline string getParams() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
        inline InstanceDetailResponseList& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline InstanceDetailResponseList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // submitTime Field Functions 
        bool hasSubmitTime() const { return this->submitTime_ != nullptr;};
        void deleteSubmitTime() { this->submitTime_ = nullptr;};
        inline string getSubmitTime() const { DARABONBA_PTR_GET_DEFAULT(submitTime_, "") };
        inline InstanceDetailResponseList& setSubmitTime(string submitTime) { DARABONBA_PTR_SET_VALUE(submitTime_, submitTime) };


        // templateId Field Functions 
        bool hasTemplateId() const { return this->templateId_ != nullptr;};
        void deleteTemplateId() { this->templateId_ = nullptr;};
        inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
        inline InstanceDetailResponseList& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      protected:
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> gmtModified_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> params_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> submitTime_ {};
        shared_ptr<int64_t> templateId_ {};
      };

      virtual bool empty() const override { return this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->id_ == nullptr && this->instanceDetailResponseList_ == nullptr && this->status_ == nullptr && this->title_ == nullptr
        && this->userId_ == nullptr; };
      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // instanceDetailResponseList Field Functions 
      bool hasInstanceDetailResponseList() const { return this->instanceDetailResponseList_ != nullptr;};
      void deleteInstanceDetailResponseList() { this->instanceDetailResponseList_ = nullptr;};
      inline const vector<Data::InstanceDetailResponseList> & getInstanceDetailResponseList() const { DARABONBA_PTR_GET_CONST(instanceDetailResponseList_, vector<Data::InstanceDetailResponseList>) };
      inline vector<Data::InstanceDetailResponseList> getInstanceDetailResponseList() { DARABONBA_PTR_GET(instanceDetailResponseList_, vector<Data::InstanceDetailResponseList>) };
      inline Data& setInstanceDetailResponseList(const vector<Data::InstanceDetailResponseList> & instanceDetailResponseList) { DARABONBA_PTR_SET_VALUE(instanceDetailResponseList_, instanceDetailResponseList) };
      inline Data& setInstanceDetailResponseList(vector<Data::InstanceDetailResponseList> && instanceDetailResponseList) { DARABONBA_PTR_SET_RVALUE(instanceDetailResponseList_, instanceDetailResponseList) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Data& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
      inline Data& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<string> gmtCreate_ {};
      shared_ptr<string> gmtModified_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<vector<Data::InstanceDetailResponseList>> instanceDetailResponseList_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> title_ {};
      shared_ptr<int64_t> userId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryProjectBuildDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryProjectBuildDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryProjectBuildDetailResponseBody::Data) };
    inline QueryProjectBuildDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryProjectBuildDetailResponseBody::Data) };
    inline QueryProjectBuildDetailResponseBody& setData(const QueryProjectBuildDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryProjectBuildDetailResponseBody& setData(QueryProjectBuildDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryProjectBuildDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryProjectBuildDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryProjectBuildDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<QueryProjectBuildDetailResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace XrEngine20221111
#endif
