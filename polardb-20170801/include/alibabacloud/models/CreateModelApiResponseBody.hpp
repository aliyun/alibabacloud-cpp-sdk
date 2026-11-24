// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMODELAPIRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMODELAPIRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateModelApiResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateModelApiResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(InvokeEndpoint, invokeEndpoint_);
      DARABONBA_PTR_TO_JSON(ModelApiId, modelApiId_);
      DARABONBA_PTR_TO_JSON(ModelMappings, modelMappings_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PathPrefix, pathPrefix_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RouteRules, routeRules_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, CreateModelApiResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(InvokeEndpoint, invokeEndpoint_);
      DARABONBA_PTR_FROM_JSON(ModelApiId, modelApiId_);
      DARABONBA_PTR_FROM_JSON(ModelMappings, modelMappings_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PathPrefix, pathPrefix_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RouteRules, routeRules_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    CreateModelApiResponseBody() = default ;
    CreateModelApiResponseBody(const CreateModelApiResponseBody &) = default ;
    CreateModelApiResponseBody(CreateModelApiResponseBody &&) = default ;
    CreateModelApiResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateModelApiResponseBody() = default ;
    CreateModelApiResponseBody& operator=(const CreateModelApiResponseBody &) = default ;
    CreateModelApiResponseBody& operator=(CreateModelApiResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && this->gmtCreated_ == nullptr && this->gmtModified_ == nullptr && this->invokeEndpoint_ == nullptr && this->modelApiId_ == nullptr && this->modelMappings_ == nullptr
        && this->name_ == nullptr && this->pathPrefix_ == nullptr && this->protocol_ == nullptr && this->requestId_ == nullptr && this->routeRules_ == nullptr
        && this->status_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline CreateModelApiResponseBody& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline CreateModelApiResponseBody& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline CreateModelApiResponseBody& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // invokeEndpoint Field Functions 
    bool hasInvokeEndpoint() const { return this->invokeEndpoint_ != nullptr;};
    void deleteInvokeEndpoint() { this->invokeEndpoint_ = nullptr;};
    inline string getInvokeEndpoint() const { DARABONBA_PTR_GET_DEFAULT(invokeEndpoint_, "") };
    inline CreateModelApiResponseBody& setInvokeEndpoint(string invokeEndpoint) { DARABONBA_PTR_SET_VALUE(invokeEndpoint_, invokeEndpoint) };


    // modelApiId Field Functions 
    bool hasModelApiId() const { return this->modelApiId_ != nullptr;};
    void deleteModelApiId() { this->modelApiId_ = nullptr;};
    inline string getModelApiId() const { DARABONBA_PTR_GET_DEFAULT(modelApiId_, "") };
    inline CreateModelApiResponseBody& setModelApiId(string modelApiId) { DARABONBA_PTR_SET_VALUE(modelApiId_, modelApiId) };


    // modelMappings Field Functions 
    bool hasModelMappings() const { return this->modelMappings_ != nullptr;};
    void deleteModelMappings() { this->modelMappings_ = nullptr;};
    inline string getModelMappings() const { DARABONBA_PTR_GET_DEFAULT(modelMappings_, "") };
    inline CreateModelApiResponseBody& setModelMappings(string modelMappings) { DARABONBA_PTR_SET_VALUE(modelMappings_, modelMappings) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateModelApiResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pathPrefix Field Functions 
    bool hasPathPrefix() const { return this->pathPrefix_ != nullptr;};
    void deletePathPrefix() { this->pathPrefix_ = nullptr;};
    inline string getPathPrefix() const { DARABONBA_PTR_GET_DEFAULT(pathPrefix_, "") };
    inline CreateModelApiResponseBody& setPathPrefix(string pathPrefix) { DARABONBA_PTR_SET_VALUE(pathPrefix_, pathPrefix) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline CreateModelApiResponseBody& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateModelApiResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routeRules Field Functions 
    bool hasRouteRules() const { return this->routeRules_ != nullptr;};
    void deleteRouteRules() { this->routeRules_ = nullptr;};
    inline string getRouteRules() const { DARABONBA_PTR_GET_DEFAULT(routeRules_, "") };
    inline CreateModelApiResponseBody& setRouteRules(string routeRules) { DARABONBA_PTR_SET_VALUE(routeRules_, routeRules) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateModelApiResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The model category.
    shared_ptr<string> category_ {};
    // The creation time.
    shared_ptr<string> gmtCreated_ {};
    // The modification time.
    shared_ptr<string> gmtModified_ {};
    // The invocation endpoint.
    shared_ptr<string> invokeEndpoint_ {};
    // The model API ID.
    shared_ptr<string> modelApiId_ {};
    // The saved model name mappings, returned as a JSON array string. This parameter is empty if no mappings are configured.
    shared_ptr<string> modelMappings_ {};
    // The name of the model API.
    shared_ptr<string> name_ {};
    // The invocation path prefix.
    shared_ptr<string> pathPrefix_ {};
    // The access protocol.
    shared_ptr<string> protocol_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The saved routing rules, returned as a JSON string. A byte-by-byte exact echo is not guaranteed.
    shared_ptr<string> routeRules_ {};
    // The status of the model API.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
