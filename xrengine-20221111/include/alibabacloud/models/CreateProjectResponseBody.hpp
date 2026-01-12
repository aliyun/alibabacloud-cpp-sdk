// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROJECTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROJECTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace XrEngine20221111
{
namespace Models
{
  class CreateProjectResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProjectResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProjectResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateProjectResponseBody() = default ;
    CreateProjectResponseBody(const CreateProjectResponseBody &) = default ;
    CreateProjectResponseBody(CreateProjectResponseBody &&) = default ;
    CreateProjectResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProjectResponseBody() = default ;
    CreateProjectResponseBody& operator=(const CreateProjectResponseBody &) = default ;
    CreateProjectResponseBody& operator=(CreateProjectResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CreateMode, createMode_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Dataset, dataset_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Intro, intro_);
        DARABONBA_PTR_TO_JSON(Method, method_);
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateMode, createMode_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Dataset, dataset_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Intro, intro_);
        DARABONBA_PTR_FROM_JSON(Method, method_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
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
      class Source : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Source& obj) { 
          DARABONBA_PTR_TO_JSON(OssKey, ossKey_);
          DARABONBA_PTR_TO_JSON(Policy, policy_);
        };
        friend void from_json(const Darabonba::Json& j, Source& obj) { 
          DARABONBA_PTR_FROM_JSON(OssKey, ossKey_);
          DARABONBA_PTR_FROM_JSON(Policy, policy_);
        };
        Source() = default ;
        Source(const Source &) = default ;
        Source(Source &&) = default ;
        Source(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Source() = default ;
        Source& operator=(const Source &) = default ;
        Source& operator=(Source &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Policy : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Policy& obj) { 
            DARABONBA_PTR_TO_JSON(AccessId, accessId_);
            DARABONBA_PTR_TO_JSON(Dir, dir_);
            DARABONBA_PTR_TO_JSON(Expire, expire_);
            DARABONBA_PTR_TO_JSON(Host, host_);
            DARABONBA_PTR_TO_JSON(Policy, policy_);
            DARABONBA_PTR_TO_JSON(Signature, signature_);
          };
          friend void from_json(const Darabonba::Json& j, Policy& obj) { 
            DARABONBA_PTR_FROM_JSON(AccessId, accessId_);
            DARABONBA_PTR_FROM_JSON(Dir, dir_);
            DARABONBA_PTR_FROM_JSON(Expire, expire_);
            DARABONBA_PTR_FROM_JSON(Host, host_);
            DARABONBA_PTR_FROM_JSON(Policy, policy_);
            DARABONBA_PTR_FROM_JSON(Signature, signature_);
          };
          Policy() = default ;
          Policy(const Policy &) = default ;
          Policy(Policy &&) = default ;
          Policy(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Policy() = default ;
          Policy& operator=(const Policy &) = default ;
          Policy& operator=(Policy &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->accessId_ == nullptr
        && this->dir_ == nullptr && this->expire_ == nullptr && this->host_ == nullptr && this->policy_ == nullptr && this->signature_ == nullptr; };
          // accessId Field Functions 
          bool hasAccessId() const { return this->accessId_ != nullptr;};
          void deleteAccessId() { this->accessId_ = nullptr;};
          inline string getAccessId() const { DARABONBA_PTR_GET_DEFAULT(accessId_, "") };
          inline Policy& setAccessId(string accessId) { DARABONBA_PTR_SET_VALUE(accessId_, accessId) };


          // dir Field Functions 
          bool hasDir() const { return this->dir_ != nullptr;};
          void deleteDir() { this->dir_ = nullptr;};
          inline string getDir() const { DARABONBA_PTR_GET_DEFAULT(dir_, "") };
          inline Policy& setDir(string dir) { DARABONBA_PTR_SET_VALUE(dir_, dir) };


          // expire Field Functions 
          bool hasExpire() const { return this->expire_ != nullptr;};
          void deleteExpire() { this->expire_ = nullptr;};
          inline string getExpire() const { DARABONBA_PTR_GET_DEFAULT(expire_, "") };
          inline Policy& setExpire(string expire) { DARABONBA_PTR_SET_VALUE(expire_, expire) };


          // host Field Functions 
          bool hasHost() const { return this->host_ != nullptr;};
          void deleteHost() { this->host_ = nullptr;};
          inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
          inline Policy& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


          // policy Field Functions 
          bool hasPolicy() const { return this->policy_ != nullptr;};
          void deletePolicy() { this->policy_ = nullptr;};
          inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
          inline Policy& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


          // signature Field Functions 
          bool hasSignature() const { return this->signature_ != nullptr;};
          void deleteSignature() { this->signature_ = nullptr;};
          inline string getSignature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
          inline Policy& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


        protected:
          shared_ptr<string> accessId_ {};
          shared_ptr<string> dir_ {};
          shared_ptr<string> expire_ {};
          shared_ptr<string> host_ {};
          shared_ptr<string> policy_ {};
          shared_ptr<string> signature_ {};
        };

        virtual bool empty() const override { return this->ossKey_ == nullptr
        && this->policy_ == nullptr; };
        // ossKey Field Functions 
        bool hasOssKey() const { return this->ossKey_ != nullptr;};
        void deleteOssKey() { this->ossKey_ = nullptr;};
        inline string getOssKey() const { DARABONBA_PTR_GET_DEFAULT(ossKey_, "") };
        inline Source& setOssKey(string ossKey) { DARABONBA_PTR_SET_VALUE(ossKey_, ossKey) };


        // policy Field Functions 
        bool hasPolicy() const { return this->policy_ != nullptr;};
        void deletePolicy() { this->policy_ = nullptr;};
        inline const Source::Policy & getPolicy() const { DARABONBA_PTR_GET_CONST(policy_, Source::Policy) };
        inline Source::Policy getPolicy() { DARABONBA_PTR_GET(policy_, Source::Policy) };
        inline Source& setPolicy(const Source::Policy & policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };
        inline Source& setPolicy(Source::Policy && policy) { DARABONBA_PTR_SET_RVALUE(policy_, policy) };


      protected:
        shared_ptr<string> ossKey_ {};
        shared_ptr<Source::Policy> policy_ {};
      };

      class Dataset : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Dataset& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_TO_JSON(OssKey, ossKey_);
          DARABONBA_PTR_TO_JSON(Policy, policy_);
        };
        friend void from_json(const Darabonba::Json& j, Dataset& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_FROM_JSON(OssKey, ossKey_);
          DARABONBA_PTR_FROM_JSON(Policy, policy_);
        };
        Dataset() = default ;
        Dataset(const Dataset &) = default ;
        Dataset(Dataset &&) = default ;
        Dataset(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Dataset() = default ;
        Dataset& operator=(const Dataset &) = default ;
        Dataset& operator=(Dataset &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Policy : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Policy& obj) { 
            DARABONBA_PTR_TO_JSON(AccessId, accessId_);
            DARABONBA_PTR_TO_JSON(Dir, dir_);
            DARABONBA_PTR_TO_JSON(Expire, expire_);
            DARABONBA_PTR_TO_JSON(Host, host_);
            DARABONBA_PTR_TO_JSON(Policy, policy_);
            DARABONBA_PTR_TO_JSON(Signature, signature_);
          };
          friend void from_json(const Darabonba::Json& j, Policy& obj) { 
            DARABONBA_PTR_FROM_JSON(AccessId, accessId_);
            DARABONBA_PTR_FROM_JSON(Dir, dir_);
            DARABONBA_PTR_FROM_JSON(Expire, expire_);
            DARABONBA_PTR_FROM_JSON(Host, host_);
            DARABONBA_PTR_FROM_JSON(Policy, policy_);
            DARABONBA_PTR_FROM_JSON(Signature, signature_);
          };
          Policy() = default ;
          Policy(const Policy &) = default ;
          Policy(Policy &&) = default ;
          Policy(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Policy() = default ;
          Policy& operator=(const Policy &) = default ;
          Policy& operator=(Policy &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->accessId_ == nullptr
        && this->dir_ == nullptr && this->expire_ == nullptr && this->host_ == nullptr && this->policy_ == nullptr && this->signature_ == nullptr; };
          // accessId Field Functions 
          bool hasAccessId() const { return this->accessId_ != nullptr;};
          void deleteAccessId() { this->accessId_ = nullptr;};
          inline string getAccessId() const { DARABONBA_PTR_GET_DEFAULT(accessId_, "") };
          inline Policy& setAccessId(string accessId) { DARABONBA_PTR_SET_VALUE(accessId_, accessId) };


          // dir Field Functions 
          bool hasDir() const { return this->dir_ != nullptr;};
          void deleteDir() { this->dir_ = nullptr;};
          inline string getDir() const { DARABONBA_PTR_GET_DEFAULT(dir_, "") };
          inline Policy& setDir(string dir) { DARABONBA_PTR_SET_VALUE(dir_, dir) };


          // expire Field Functions 
          bool hasExpire() const { return this->expire_ != nullptr;};
          void deleteExpire() { this->expire_ = nullptr;};
          inline string getExpire() const { DARABONBA_PTR_GET_DEFAULT(expire_, "") };
          inline Policy& setExpire(string expire) { DARABONBA_PTR_SET_VALUE(expire_, expire) };


          // host Field Functions 
          bool hasHost() const { return this->host_ != nullptr;};
          void deleteHost() { this->host_ = nullptr;};
          inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
          inline Policy& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


          // policy Field Functions 
          bool hasPolicy() const { return this->policy_ != nullptr;};
          void deletePolicy() { this->policy_ = nullptr;};
          inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
          inline Policy& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


          // signature Field Functions 
          bool hasSignature() const { return this->signature_ != nullptr;};
          void deleteSignature() { this->signature_ = nullptr;};
          inline string getSignature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
          inline Policy& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


        protected:
          shared_ptr<string> accessId_ {};
          shared_ptr<string> dir_ {};
          shared_ptr<string> expire_ {};
          shared_ptr<string> host_ {};
          shared_ptr<string> policy_ {};
          shared_ptr<string> signature_ {};
        };

        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->id_ == nullptr && this->modifiedTime_ == nullptr && this->ossKey_ == nullptr && this->policy_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Dataset& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Dataset& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // modifiedTime Field Functions 
        bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
        void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
        inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
        inline Dataset& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


        // ossKey Field Functions 
        bool hasOssKey() const { return this->ossKey_ != nullptr;};
        void deleteOssKey() { this->ossKey_ = nullptr;};
        inline string getOssKey() const { DARABONBA_PTR_GET_DEFAULT(ossKey_, "") };
        inline Dataset& setOssKey(string ossKey) { DARABONBA_PTR_SET_VALUE(ossKey_, ossKey) };


        // policy Field Functions 
        bool hasPolicy() const { return this->policy_ != nullptr;};
        void deletePolicy() { this->policy_ = nullptr;};
        inline const Dataset::Policy & getPolicy() const { DARABONBA_PTR_GET_CONST(policy_, Dataset::Policy) };
        inline Dataset::Policy getPolicy() { DARABONBA_PTR_GET(policy_, Dataset::Policy) };
        inline Dataset& setPolicy(const Dataset::Policy & policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };
        inline Dataset& setPolicy(Dataset::Policy && policy) { DARABONBA_PTR_SET_RVALUE(policy_, policy) };


      protected:
        shared_ptr<string> createTime_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> modifiedTime_ {};
        shared_ptr<string> ossKey_ {};
        shared_ptr<Dataset::Policy> policy_ {};
      };

      virtual bool empty() const override { return this->createMode_ == nullptr
        && this->createTime_ == nullptr && this->dataset_ == nullptr && this->id_ == nullptr && this->intro_ == nullptr && this->method_ == nullptr
        && this->modifiedTime_ == nullptr && this->source_ == nullptr && this->status_ == nullptr && this->title_ == nullptr && this->type_ == nullptr; };
      // createMode Field Functions 
      bool hasCreateMode() const { return this->createMode_ != nullptr;};
      void deleteCreateMode() { this->createMode_ = nullptr;};
      inline string getCreateMode() const { DARABONBA_PTR_GET_DEFAULT(createMode_, "") };
      inline Data& setCreateMode(string createMode) { DARABONBA_PTR_SET_VALUE(createMode_, createMode) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // dataset Field Functions 
      bool hasDataset() const { return this->dataset_ != nullptr;};
      void deleteDataset() { this->dataset_ = nullptr;};
      inline const Data::Dataset & getDataset() const { DARABONBA_PTR_GET_CONST(dataset_, Data::Dataset) };
      inline Data::Dataset getDataset() { DARABONBA_PTR_GET(dataset_, Data::Dataset) };
      inline Data& setDataset(const Data::Dataset & dataset) { DARABONBA_PTR_SET_VALUE(dataset_, dataset) };
      inline Data& setDataset(Data::Dataset && dataset) { DARABONBA_PTR_SET_RVALUE(dataset_, dataset) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Data& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // intro Field Functions 
      bool hasIntro() const { return this->intro_ != nullptr;};
      void deleteIntro() { this->intro_ = nullptr;};
      inline string getIntro() const { DARABONBA_PTR_GET_DEFAULT(intro_, "") };
      inline Data& setIntro(string intro) { DARABONBA_PTR_SET_VALUE(intro_, intro) };


      // method Field Functions 
      bool hasMethod() const { return this->method_ != nullptr;};
      void deleteMethod() { this->method_ = nullptr;};
      inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
      inline Data& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline Data& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline const Data::Source & getSource() const { DARABONBA_PTR_GET_CONST(source_, Data::Source) };
      inline Data::Source getSource() { DARABONBA_PTR_GET(source_, Data::Source) };
      inline Data& setSource(const Data::Source & source) { DARABONBA_PTR_SET_VALUE(source_, source) };
      inline Data& setSource(Data::Source && source) { DARABONBA_PTR_SET_RVALUE(source_, source) };


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


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> createMode_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<Data::Dataset> dataset_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> intro_ {};
      shared_ptr<string> method_ {};
      shared_ptr<string> modifiedTime_ {};
      shared_ptr<Data::Source> source_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> title_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateProjectResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateProjectResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateProjectResponseBody::Data) };
    inline CreateProjectResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateProjectResponseBody::Data) };
    inline CreateProjectResponseBody& setData(const CreateProjectResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateProjectResponseBody& setData(CreateProjectResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateProjectResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateProjectResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateProjectResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<CreateProjectResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace XrEngine20221111
#endif
