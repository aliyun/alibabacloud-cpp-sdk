// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICESOURCERESPONSEBODY_HPP_
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
  class ListServiceSourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceSourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceSourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListServiceSourceResponseBody() = default ;
    ListServiceSourceResponseBody(const ListServiceSourceResponseBody &) = default ;
    ListServiceSourceResponseBody(ListServiceSourceResponseBody &&) = default ;
    ListServiceSourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceSourceResponseBody() = default ;
    ListServiceSourceResponseBody& operator=(const ListServiceSourceResponseBody &) = default ;
    ListServiceSourceResponseBody& operator=(ListServiceSourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Address, address_);
        DARABONBA_PTR_TO_JSON(BindingWithGateway, bindingWithGateway_);
        DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
        DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(GroupList, groupList_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IngressOptions, ingressOptions_);
        DARABONBA_PTR_TO_JSON(Invalid, invalid_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(PathList, pathList_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(SourceUniqueId, sourceUniqueId_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Address, address_);
        DARABONBA_PTR_FROM_JSON(BindingWithGateway, bindingWithGateway_);
        DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
        DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(GroupList, groupList_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IngressOptions, ingressOptions_);
        DARABONBA_PTR_FROM_JSON(Invalid, invalid_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(PathList, pathList_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(SourceUniqueId, sourceUniqueId_);
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
      class IngressOptions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IngressOptions& obj) { 
          DARABONBA_PTR_TO_JSON(EnableIngress, enableIngress_);
          DARABONBA_PTR_TO_JSON(EnableStatus, enableStatus_);
          DARABONBA_PTR_TO_JSON(IngressClass, ingressClass_);
          DARABONBA_PTR_TO_JSON(WatchNamespace, watchNamespace_);
        };
        friend void from_json(const Darabonba::Json& j, IngressOptions& obj) { 
          DARABONBA_PTR_FROM_JSON(EnableIngress, enableIngress_);
          DARABONBA_PTR_FROM_JSON(EnableStatus, enableStatus_);
          DARABONBA_PTR_FROM_JSON(IngressClass, ingressClass_);
          DARABONBA_PTR_FROM_JSON(WatchNamespace, watchNamespace_);
        };
        IngressOptions() = default ;
        IngressOptions(const IngressOptions &) = default ;
        IngressOptions(IngressOptions &&) = default ;
        IngressOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IngressOptions() = default ;
        IngressOptions& operator=(const IngressOptions &) = default ;
        IngressOptions& operator=(IngressOptions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enableIngress_ == nullptr
        && this->enableStatus_ == nullptr && this->ingressClass_ == nullptr && this->watchNamespace_ == nullptr; };
        // enableIngress Field Functions 
        bool hasEnableIngress() const { return this->enableIngress_ != nullptr;};
        void deleteEnableIngress() { this->enableIngress_ = nullptr;};
        inline bool getEnableIngress() const { DARABONBA_PTR_GET_DEFAULT(enableIngress_, false) };
        inline IngressOptions& setEnableIngress(bool enableIngress) { DARABONBA_PTR_SET_VALUE(enableIngress_, enableIngress) };


        // enableStatus Field Functions 
        bool hasEnableStatus() const { return this->enableStatus_ != nullptr;};
        void deleteEnableStatus() { this->enableStatus_ = nullptr;};
        inline bool getEnableStatus() const { DARABONBA_PTR_GET_DEFAULT(enableStatus_, false) };
        inline IngressOptions& setEnableStatus(bool enableStatus) { DARABONBA_PTR_SET_VALUE(enableStatus_, enableStatus) };


        // ingressClass Field Functions 
        bool hasIngressClass() const { return this->ingressClass_ != nullptr;};
        void deleteIngressClass() { this->ingressClass_ = nullptr;};
        inline string getIngressClass() const { DARABONBA_PTR_GET_DEFAULT(ingressClass_, "") };
        inline IngressOptions& setIngressClass(string ingressClass) { DARABONBA_PTR_SET_VALUE(ingressClass_, ingressClass) };


        // watchNamespace Field Functions 
        bool hasWatchNamespace() const { return this->watchNamespace_ != nullptr;};
        void deleteWatchNamespace() { this->watchNamespace_ = nullptr;};
        inline string getWatchNamespace() const { DARABONBA_PTR_GET_DEFAULT(watchNamespace_, "") };
        inline IngressOptions& setWatchNamespace(string watchNamespace) { DARABONBA_PTR_SET_VALUE(watchNamespace_, watchNamespace) };


      protected:
        // Indicates whether Ingresses are enabled.
        shared_ptr<bool> enableIngress_ {};
        // Indicates whether the Ingress status is updated.
        shared_ptr<bool> enableStatus_ {};
        // The Ingress class.
        shared_ptr<string> ingressClass_ {};
        // The namespace that you want to monitor.
        shared_ptr<string> watchNamespace_ {};
      };

      virtual bool empty() const override { return this->address_ == nullptr
        && this->bindingWithGateway_ == nullptr && this->gatewayId_ == nullptr && this->gatewayUniqueId_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->groupList_ == nullptr && this->id_ == nullptr && this->ingressOptions_ == nullptr && this->invalid_ == nullptr && this->name_ == nullptr
        && this->pathList_ == nullptr && this->source_ == nullptr && this->sourceUniqueId_ == nullptr && this->type_ == nullptr; };
      // address Field Functions 
      bool hasAddress() const { return this->address_ != nullptr;};
      void deleteAddress() { this->address_ = nullptr;};
      inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
      inline Data& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


      // bindingWithGateway Field Functions 
      bool hasBindingWithGateway() const { return this->bindingWithGateway_ != nullptr;};
      void deleteBindingWithGateway() { this->bindingWithGateway_ = nullptr;};
      inline int32_t getBindingWithGateway() const { DARABONBA_PTR_GET_DEFAULT(bindingWithGateway_, 0) };
      inline Data& setBindingWithGateway(int32_t bindingWithGateway) { DARABONBA_PTR_SET_VALUE(bindingWithGateway_, bindingWithGateway) };


      // gatewayId Field Functions 
      bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
      void deleteGatewayId() { this->gatewayId_ = nullptr;};
      inline int64_t getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
      inline Data& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


      // gatewayUniqueId Field Functions 
      bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
      void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
      inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
      inline Data& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


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


      // groupList Field Functions 
      bool hasGroupList() const { return this->groupList_ != nullptr;};
      void deleteGroupList() { this->groupList_ = nullptr;};
      inline const vector<string> & getGroupList() const { DARABONBA_PTR_GET_CONST(groupList_, vector<string>) };
      inline vector<string> getGroupList() { DARABONBA_PTR_GET(groupList_, vector<string>) };
      inline Data& setGroupList(const vector<string> & groupList) { DARABONBA_PTR_SET_VALUE(groupList_, groupList) };
      inline Data& setGroupList(vector<string> && groupList) { DARABONBA_PTR_SET_RVALUE(groupList_, groupList) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // ingressOptions Field Functions 
      bool hasIngressOptions() const { return this->ingressOptions_ != nullptr;};
      void deleteIngressOptions() { this->ingressOptions_ = nullptr;};
      inline const Data::IngressOptions & getIngressOptions() const { DARABONBA_PTR_GET_CONST(ingressOptions_, Data::IngressOptions) };
      inline Data::IngressOptions getIngressOptions() { DARABONBA_PTR_GET(ingressOptions_, Data::IngressOptions) };
      inline Data& setIngressOptions(const Data::IngressOptions & ingressOptions) { DARABONBA_PTR_SET_VALUE(ingressOptions_, ingressOptions) };
      inline Data& setIngressOptions(Data::IngressOptions && ingressOptions) { DARABONBA_PTR_SET_RVALUE(ingressOptions_, ingressOptions) };


      // invalid Field Functions 
      bool hasInvalid() const { return this->invalid_ != nullptr;};
      void deleteInvalid() { this->invalid_ = nullptr;};
      inline bool getInvalid() const { DARABONBA_PTR_GET_DEFAULT(invalid_, false) };
      inline Data& setInvalid(bool invalid) { DARABONBA_PTR_SET_VALUE(invalid_, invalid) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // pathList Field Functions 
      bool hasPathList() const { return this->pathList_ != nullptr;};
      void deletePathList() { this->pathList_ = nullptr;};
      inline const vector<string> & getPathList() const { DARABONBA_PTR_GET_CONST(pathList_, vector<string>) };
      inline vector<string> getPathList() { DARABONBA_PTR_GET(pathList_, vector<string>) };
      inline Data& setPathList(const vector<string> & pathList) { DARABONBA_PTR_SET_VALUE(pathList_, pathList) };
      inline Data& setPathList(vector<string> && pathList) { DARABONBA_PTR_SET_RVALUE(pathList_, pathList) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Data& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // sourceUniqueId Field Functions 
      bool hasSourceUniqueId() const { return this->sourceUniqueId_ != nullptr;};
      void deleteSourceUniqueId() { this->sourceUniqueId_ = nullptr;};
      inline string getSourceUniqueId() const { DARABONBA_PTR_GET_DEFAULT(sourceUniqueId_, "") };
      inline Data& setSourceUniqueId(string sourceUniqueId) { DARABONBA_PTR_SET_VALUE(sourceUniqueId_, sourceUniqueId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The ID of the Container Service for Kubernetes (ACK) cluster or the endpoint of the Microservices Engine (MSE) instance.
      shared_ptr<string> address_ {};
      // Indicates whether the service source is associated with the gateway. The value 1 indicates that the service source is associated with the gateway.
      shared_ptr<int32_t> bindingWithGateway_ {};
      // The ID of the gateway.
      shared_ptr<int64_t> gatewayId_ {};
      // The unique ID of the gateway.
      shared_ptr<string> gatewayUniqueId_ {};
      // The creation time.
      shared_ptr<string> gmtCreate_ {};
      // The update time.
      shared_ptr<string> gmtModified_ {};
      // The array of service groups.
      shared_ptr<vector<string>> groupList_ {};
      // The ID.
      shared_ptr<int64_t> id_ {};
      // The information about the support for Ingresses by applications.
      shared_ptr<Data::IngressOptions> ingressOptions_ {};
      shared_ptr<bool> invalid_ {};
      // The name.
      shared_ptr<string> name_ {};
      // The array of root paths of service lists.
      shared_ptr<vector<string>> pathList_ {};
      // The type of the service source.
      shared_ptr<string> source_ {};
      // The unique ID of the service source.
      shared_ptr<string> sourceUniqueId_ {};
      // The type.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListServiceSourceResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListServiceSourceResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListServiceSourceResponseBody::Data>) };
    inline vector<ListServiceSourceResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListServiceSourceResponseBody::Data>) };
    inline ListServiceSourceResponseBody& setData(const vector<ListServiceSourceResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListServiceSourceResponseBody& setData(vector<ListServiceSourceResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListServiceSourceResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListServiceSourceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListServiceSourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListServiceSourceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code returned.
    shared_ptr<int32_t> code_ {};
    // The returned data.
    shared_ptr<vector<ListServiceSourceResponseBody::Data>> data_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The error message returned.
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
