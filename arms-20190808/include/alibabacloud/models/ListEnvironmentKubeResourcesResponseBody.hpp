// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENVIRONMENTKUBERESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTENVIRONMENTKUBERESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListEnvironmentKubeResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnvironmentKubeResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnvironmentKubeResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListEnvironmentKubeResourcesResponseBody() = default ;
    ListEnvironmentKubeResourcesResponseBody(const ListEnvironmentKubeResourcesResponseBody &) = default ;
    ListEnvironmentKubeResourcesResponseBody(ListEnvironmentKubeResourcesResponseBody &&) = default ;
    ListEnvironmentKubeResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnvironmentKubeResourcesResponseBody() = default ;
    ListEnvironmentKubeResourcesResponseBody& operator=(const ListEnvironmentKubeResourcesResponseBody &) = default ;
    ListEnvironmentKubeResourcesResponseBody& operator=(ListEnvironmentKubeResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ApiVersion, apiVersion_);
        DARABONBA_PTR_TO_JSON(Kind, kind_);
        DARABONBA_PTR_TO_JSON(Metadata, metadata_);
        DARABONBA_ANY_TO_JSON(Spec, spec_);
        DARABONBA_ANY_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiVersion, apiVersion_);
        DARABONBA_PTR_FROM_JSON(Kind, kind_);
        DARABONBA_PTR_FROM_JSON(Metadata, metadata_);
        DARABONBA_ANY_FROM_JSON(Spec, spec_);
        DARABONBA_ANY_FROM_JSON(Status, status_);
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
      class Metadata : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Metadata& obj) { 
          DARABONBA_PTR_TO_JSON(Annotations, annotations_);
          DARABONBA_PTR_TO_JSON(Labels, labels_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        };
        friend void from_json(const Darabonba::Json& j, Metadata& obj) { 
          DARABONBA_PTR_FROM_JSON(Annotations, annotations_);
          DARABONBA_PTR_FROM_JSON(Labels, labels_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        };
        Metadata() = default ;
        Metadata(const Metadata &) = default ;
        Metadata(Metadata &&) = default ;
        Metadata(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Metadata() = default ;
        Metadata& operator=(const Metadata &) = default ;
        Metadata& operator=(Metadata &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->annotations_ == nullptr
        && this->labels_ == nullptr && this->name_ == nullptr && this->namespace_ == nullptr; };
        // annotations Field Functions 
        bool hasAnnotations() const { return this->annotations_ != nullptr;};
        void deleteAnnotations() { this->annotations_ = nullptr;};
        inline const map<string, string> & getAnnotations() const { DARABONBA_PTR_GET_CONST(annotations_, map<string, string>) };
        inline map<string, string> getAnnotations() { DARABONBA_PTR_GET(annotations_, map<string, string>) };
        inline Metadata& setAnnotations(const map<string, string> & annotations) { DARABONBA_PTR_SET_VALUE(annotations_, annotations) };
        inline Metadata& setAnnotations(map<string, string> && annotations) { DARABONBA_PTR_SET_RVALUE(annotations_, annotations) };


        // labels Field Functions 
        bool hasLabels() const { return this->labels_ != nullptr;};
        void deleteLabels() { this->labels_ = nullptr;};
        inline const map<string, string> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, map<string, string>) };
        inline map<string, string> getLabels() { DARABONBA_PTR_GET(labels_, map<string, string>) };
        inline Metadata& setLabels(const map<string, string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
        inline Metadata& setLabels(map<string, string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Metadata& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // namespace Field Functions 
        bool hasNamespace() const { return this->namespace_ != nullptr;};
        void deleteNamespace() { this->namespace_ = nullptr;};
        inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
        inline Metadata& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      protected:
        // The annotations.
        shared_ptr<map<string, string>> annotations_ {};
        // The tags.
        shared_ptr<map<string, string>> labels_ {};
        // The resource name.
        shared_ptr<string> name_ {};
        // The namespace.
        shared_ptr<string> namespace_ {};
      };

      virtual bool empty() const override { return this->apiVersion_ == nullptr
        && this->kind_ == nullptr && this->metadata_ == nullptr && this->spec_ == nullptr && this->status_ == nullptr; };
      // apiVersion Field Functions 
      bool hasApiVersion() const { return this->apiVersion_ != nullptr;};
      void deleteApiVersion() { this->apiVersion_ = nullptr;};
      inline string getApiVersion() const { DARABONBA_PTR_GET_DEFAULT(apiVersion_, "") };
      inline Data& setApiVersion(string apiVersion) { DARABONBA_PTR_SET_VALUE(apiVersion_, apiVersion) };


      // kind Field Functions 
      bool hasKind() const { return this->kind_ != nullptr;};
      void deleteKind() { this->kind_ = nullptr;};
      inline string getKind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
      inline Data& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


      // metadata Field Functions 
      bool hasMetadata() const { return this->metadata_ != nullptr;};
      void deleteMetadata() { this->metadata_ = nullptr;};
      inline const Data::Metadata & getMetadata() const { DARABONBA_PTR_GET_CONST(metadata_, Data::Metadata) };
      inline Data::Metadata getMetadata() { DARABONBA_PTR_GET(metadata_, Data::Metadata) };
      inline Data& setMetadata(const Data::Metadata & metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };
      inline Data& setMetadata(Data::Metadata && metadata) { DARABONBA_PTR_SET_RVALUE(metadata_, metadata) };


      // spec Field Functions 
      bool hasSpec() const { return this->spec_ != nullptr;};
      void deleteSpec() { this->spec_ = nullptr;};
      inline       const Darabonba::Json & getSpec() const { DARABONBA_GET(spec_) };
      Darabonba::Json & getSpec() { DARABONBA_GET(spec_) };
      inline Data& setSpec(const Darabonba::Json & spec) { DARABONBA_SET_VALUE(spec_, spec) };
      inline Data& setSpec(Darabonba::Json && spec) { DARABONBA_SET_RVALUE(spec_, spec) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline       const Darabonba::Json & getStatus() const { DARABONBA_GET(status_) };
      Darabonba::Json & getStatus() { DARABONBA_GET(status_) };
      inline Data& setStatus(const Darabonba::Json & status) { DARABONBA_SET_VALUE(status_, status) };
      inline Data& setStatus(Darabonba::Json && status) { DARABONBA_SET_RVALUE(status_, status) };


    protected:
      // The version number of the API.
      shared_ptr<string> apiVersion_ {};
      // The resource type.
      shared_ptr<string> kind_ {};
      // The metadata.
      shared_ptr<Data::Metadata> metadata_ {};
      // The resource specifications.
      Darabonba::Json spec_ {};
      // The status of the resource.
      Darabonba::Json status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListEnvironmentKubeResourcesResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListEnvironmentKubeResourcesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListEnvironmentKubeResourcesResponseBody::Data>) };
    inline vector<ListEnvironmentKubeResourcesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListEnvironmentKubeResourcesResponseBody::Data>) };
    inline ListEnvironmentKubeResourcesResponseBody& setData(const vector<ListEnvironmentKubeResourcesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListEnvironmentKubeResourcesResponseBody& setData(vector<ListEnvironmentKubeResourcesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListEnvironmentKubeResourcesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEnvironmentKubeResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListEnvironmentKubeResourcesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code. The status code 200 indicates that the request was successful. Other status codes indicate that the request failed.
    shared_ptr<int32_t> code_ {};
    // The returned struct.
    shared_ptr<vector<ListEnvironmentKubeResourcesResponseBody::Data>> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`
    // *   `false`
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
