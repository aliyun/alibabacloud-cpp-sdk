// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PULLSERVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PULLSERVICESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class PullServicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PullServicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, PullServicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    PullServicesResponseBody() = default ;
    PullServicesResponseBody(const PullServicesResponseBody &) = default ;
    PullServicesResponseBody(PullServicesResponseBody &&) = default ;
    PullServicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PullServicesResponseBody() = default ;
    PullServicesResponseBody& operator=(const PullServicesResponseBody &) = default ;
    PullServicesResponseBody& operator=(PullServicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        DARABONBA_PTR_TO_JSON(NamespaceShowName, namespaceShowName_);
        DARABONBA_PTR_TO_JSON(Services, services_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(NamespaceShowName, namespaceShowName_);
        DARABONBA_PTR_FROM_JSON(Services, services_);
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
      class Services : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Services& obj) { 
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Namespace, namespace_);
          DARABONBA_PTR_TO_JSON(SaeAppId, saeAppId_);
          DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
          DARABONBA_PTR_TO_JSON(SourceIdList, sourceIdList_);
          DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
        };
        friend void from_json(const Darabonba::Json& j, Services& obj) { 
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
          DARABONBA_PTR_FROM_JSON(SaeAppId, saeAppId_);
          DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
          DARABONBA_PTR_FROM_JSON(SourceIdList, sourceIdList_);
          DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
        };
        Services() = default ;
        Services(const Services &) = default ;
        Services(Services &&) = default ;
        Services(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Services() = default ;
        Services& operator=(const Services &) = default ;
        Services& operator=(Services &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->groupName_ == nullptr
        && this->name_ == nullptr && this->namespace_ == nullptr && this->saeAppId_ == nullptr && this->sourceId_ == nullptr && this->sourceIdList_ == nullptr
        && this->sourceType_ == nullptr; };
        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline Services& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Services& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // namespace Field Functions 
        bool hasNamespace() const { return this->namespace_ != nullptr;};
        void deleteNamespace() { this->namespace_ = nullptr;};
        inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
        inline Services& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


        // saeAppId Field Functions 
        bool hasSaeAppId() const { return this->saeAppId_ != nullptr;};
        void deleteSaeAppId() { this->saeAppId_ = nullptr;};
        inline string getSaeAppId() const { DARABONBA_PTR_GET_DEFAULT(saeAppId_, "") };
        inline Services& setSaeAppId(string saeAppId) { DARABONBA_PTR_SET_VALUE(saeAppId_, saeAppId) };


        // sourceId Field Functions 
        bool hasSourceId() const { return this->sourceId_ != nullptr;};
        void deleteSourceId() { this->sourceId_ = nullptr;};
        inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
        inline Services& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


        // sourceIdList Field Functions 
        bool hasSourceIdList() const { return this->sourceIdList_ != nullptr;};
        void deleteSourceIdList() { this->sourceIdList_ = nullptr;};
        inline const vector<int64_t> & getSourceIdList() const { DARABONBA_PTR_GET_CONST(sourceIdList_, vector<int64_t>) };
        inline vector<int64_t> getSourceIdList() { DARABONBA_PTR_GET(sourceIdList_, vector<int64_t>) };
        inline Services& setSourceIdList(const vector<int64_t> & sourceIdList) { DARABONBA_PTR_SET_VALUE(sourceIdList_, sourceIdList) };
        inline Services& setSourceIdList(vector<int64_t> && sourceIdList) { DARABONBA_PTR_SET_RVALUE(sourceIdList_, sourceIdList) };


        // sourceType Field Functions 
        bool hasSourceType() const { return this->sourceType_ != nullptr;};
        void deleteSourceType() { this->sourceType_ = nullptr;};
        inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
        inline Services& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


      protected:
        // The name of the group.
        shared_ptr<string> groupName_ {};
        // The name of the service.
        shared_ptr<string> name_ {};
        // The namespace.
        shared_ptr<string> namespace_ {};
        shared_ptr<string> saeAppId_ {};
        // The ID of the service source.
        shared_ptr<string> sourceId_ {};
        shared_ptr<vector<int64_t>> sourceIdList_ {};
        // The type of the service source.
        shared_ptr<string> sourceType_ {};
      };

      virtual bool empty() const override { return this->groupName_ == nullptr
        && this->namespace_ == nullptr && this->namespaceShowName_ == nullptr && this->services_ == nullptr; };
      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline Data& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline Data& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // namespaceShowName Field Functions 
      bool hasNamespaceShowName() const { return this->namespaceShowName_ != nullptr;};
      void deleteNamespaceShowName() { this->namespaceShowName_ = nullptr;};
      inline string getNamespaceShowName() const { DARABONBA_PTR_GET_DEFAULT(namespaceShowName_, "") };
      inline Data& setNamespaceShowName(string namespaceShowName) { DARABONBA_PTR_SET_VALUE(namespaceShowName_, namespaceShowName) };


      // services Field Functions 
      bool hasServices() const { return this->services_ != nullptr;};
      void deleteServices() { this->services_ = nullptr;};
      inline const vector<Data::Services> & getServices() const { DARABONBA_PTR_GET_CONST(services_, vector<Data::Services>) };
      inline vector<Data::Services> getServices() { DARABONBA_PTR_GET(services_, vector<Data::Services>) };
      inline Data& setServices(const vector<Data::Services> & services) { DARABONBA_PTR_SET_VALUE(services_, services) };
      inline Data& setServices(vector<Data::Services> && services) { DARABONBA_PTR_SET_RVALUE(services_, services) };


    protected:
      // The name of the group.
      shared_ptr<string> groupName_ {};
      // The namespace.
      shared_ptr<string> namespace_ {};
      // The alias of the namespace.
      shared_ptr<string> namespaceShowName_ {};
      // The information about services.
      shared_ptr<vector<Data::Services>> services_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline PullServicesResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<PullServicesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<PullServicesResponseBody::Data>) };
    inline vector<PullServicesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<PullServicesResponseBody::Data>) };
    inline PullServicesResponseBody& setData(const vector<PullServicesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline PullServicesResponseBody& setData(vector<PullServicesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline PullServicesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline PullServicesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PullServicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline PullServicesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code returned.
    shared_ptr<int32_t> code_ {};
    // The returned data.
    shared_ptr<vector<PullServicesResponseBody::Data>> data_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`: The request was successful.
    // *   `false`: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
