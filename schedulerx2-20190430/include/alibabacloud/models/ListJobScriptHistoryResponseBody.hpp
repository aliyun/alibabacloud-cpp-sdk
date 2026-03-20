// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSCRIPTHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSCRIPTHISTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class ListJobScriptHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobScriptHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobScriptHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListJobScriptHistoryResponseBody() = default ;
    ListJobScriptHistoryResponseBody(const ListJobScriptHistoryResponseBody &) = default ;
    ListJobScriptHistoryResponseBody(ListJobScriptHistoryResponseBody &&) = default ;
    ListJobScriptHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobScriptHistoryResponseBody() = default ;
    ListJobScriptHistoryResponseBody& operator=(const ListJobScriptHistoryResponseBody &) = default ;
    ListJobScriptHistoryResponseBody& operator=(ListJobScriptHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(JobScriptHistoryInfos, jobScriptHistoryInfos_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(JobScriptHistoryInfos, jobScriptHistoryInfos_);
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
      class JobScriptHistoryInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const JobScriptHistoryInfos& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Creator, creator_);
          DARABONBA_PTR_TO_JSON(ScriptContent, scriptContent_);
          DARABONBA_PTR_TO_JSON(VersionesDescription, versionesDescription_);
        };
        friend void from_json(const Darabonba::Json& j, JobScriptHistoryInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Creator, creator_);
          DARABONBA_PTR_FROM_JSON(ScriptContent, scriptContent_);
          DARABONBA_PTR_FROM_JSON(VersionesDescription, versionesDescription_);
        };
        JobScriptHistoryInfos() = default ;
        JobScriptHistoryInfos(const JobScriptHistoryInfos &) = default ;
        JobScriptHistoryInfos(JobScriptHistoryInfos &&) = default ;
        JobScriptHistoryInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~JobScriptHistoryInfos() = default ;
        JobScriptHistoryInfos& operator=(const JobScriptHistoryInfos &) = default ;
        JobScriptHistoryInfos& operator=(JobScriptHistoryInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->creator_ == nullptr && this->scriptContent_ == nullptr && this->versionesDescription_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline JobScriptHistoryInfos& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
        inline JobScriptHistoryInfos& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


        // scriptContent Field Functions 
        bool hasScriptContent() const { return this->scriptContent_ != nullptr;};
        void deleteScriptContent() { this->scriptContent_ = nullptr;};
        inline string getScriptContent() const { DARABONBA_PTR_GET_DEFAULT(scriptContent_, "") };
        inline JobScriptHistoryInfos& setScriptContent(string scriptContent) { DARABONBA_PTR_SET_VALUE(scriptContent_, scriptContent) };


        // versionesDescription Field Functions 
        bool hasVersionesDescription() const { return this->versionesDescription_ != nullptr;};
        void deleteVersionesDescription() { this->versionesDescription_ = nullptr;};
        inline string getVersionesDescription() const { DARABONBA_PTR_GET_DEFAULT(versionesDescription_, "") };
        inline JobScriptHistoryInfos& setVersionesDescription(string versionesDescription) { DARABONBA_PTR_SET_VALUE(versionesDescription_, versionesDescription) };


      protected:
        // The creation time.
        shared_ptr<string> createTime_ {};
        // The creator.
        shared_ptr<string> creator_ {};
        // The script content.
        shared_ptr<string> scriptContent_ {};
        // The description of the script version.
        shared_ptr<string> versionesDescription_ {};
      };

      virtual bool empty() const override { return this->jobScriptHistoryInfos_ == nullptr; };
      // jobScriptHistoryInfos Field Functions 
      bool hasJobScriptHistoryInfos() const { return this->jobScriptHistoryInfos_ != nullptr;};
      void deleteJobScriptHistoryInfos() { this->jobScriptHistoryInfos_ = nullptr;};
      inline const vector<Data::JobScriptHistoryInfos> & getJobScriptHistoryInfos() const { DARABONBA_PTR_GET_CONST(jobScriptHistoryInfos_, vector<Data::JobScriptHistoryInfos>) };
      inline vector<Data::JobScriptHistoryInfos> getJobScriptHistoryInfos() { DARABONBA_PTR_GET(jobScriptHistoryInfos_, vector<Data::JobScriptHistoryInfos>) };
      inline Data& setJobScriptHistoryInfos(const vector<Data::JobScriptHistoryInfos> & jobScriptHistoryInfos) { DARABONBA_PTR_SET_VALUE(jobScriptHistoryInfos_, jobScriptHistoryInfos) };
      inline Data& setJobScriptHistoryInfos(vector<Data::JobScriptHistoryInfos> && jobScriptHistoryInfos) { DARABONBA_PTR_SET_RVALUE(jobScriptHistoryInfos_, jobScriptHistoryInfos) };


    protected:
      // The information about the job\\"s historical scripts.
      shared_ptr<vector<Data::JobScriptHistoryInfos>> jobScriptHistoryInfos_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListJobScriptHistoryResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListJobScriptHistoryResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListJobScriptHistoryResponseBody::Data) };
    inline ListJobScriptHistoryResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListJobScriptHistoryResponseBody::Data) };
    inline ListJobScriptHistoryResponseBody& setData(const ListJobScriptHistoryResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListJobScriptHistoryResponseBody& setData(ListJobScriptHistoryResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListJobScriptHistoryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListJobScriptHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListJobScriptHistoryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code.
    shared_ptr<int32_t> code_ {};
    // The information about the jobs.
    shared_ptr<ListJobScriptHistoryResponseBody::Data> data_ {};
    // The additional information returned only if an error occurs.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // true
    // 
    // false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
