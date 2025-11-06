// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListAuthPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    ListAuthPolicyRequest() = default ;
    ListAuthPolicyRequest(const ListAuthPolicyRequest &) = default ;
    ListAuthPolicyRequest(ListAuthPolicyRequest &&) = default ;
    ListAuthPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthPolicyRequest() = default ;
    ListAuthPolicyRequest& operator=(const ListAuthPolicyRequest &) = default ;
    ListAuthPolicyRequest& operator=(ListAuthPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->appId_ == nullptr && return this->name_ == nullptr && return this->namespace_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr
        && return this->protocol_ == nullptr && return this->region_ == nullptr && return this->source_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline ListAuthPolicyRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListAuthPolicyRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListAuthPolicyRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListAuthPolicyRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListAuthPolicyRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListAuthPolicyRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline ListAuthPolicyRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListAuthPolicyRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListAuthPolicyRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    // The language of the response. Valid values: zh-CN and en-US. Default value: zh-CN. The value zh-CN indicates Chinese and the value en-US indicates English.
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The application ID.
    std::shared_ptr<string> appId_ = nullptr;
    // The name of the authentication rule.
    std::shared_ptr<string> name_ = nullptr;
    // The name of the Microservices Engine (MSE) namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // The page number.
    // 
    // This parameter is required.
    std::shared_ptr<string> pageNumber_ = nullptr;
    // The number of entries per page.
    // 
    // This parameter is required.
    std::shared_ptr<string> pageSize_ = nullptr;
    // The protocol type. Valid values:
    // 
    // *   **SPRING_CLOUD**
    // *   **DUBBO**
    // *   **istio**
    std::shared_ptr<string> protocol_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> region_ = nullptr;
    // The service source.
    // 
    // This parameter is required.
    std::shared_ptr<string> source_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
