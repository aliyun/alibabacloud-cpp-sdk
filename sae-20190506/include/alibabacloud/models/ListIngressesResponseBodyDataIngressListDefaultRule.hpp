// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINGRESSESRESPONSEBODYDATAINGRESSLISTDEFAULTRULE_HPP_
#define ALIBABACLOUD_MODELS_LISTINGRESSESRESPONSEBODYDATAINGRESSLISTDEFAULTRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListIngressesResponseBodyDataIngressListDefaultRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIngressesResponseBodyDataIngressListDefaultRule& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(BackendProtocol, backendProtocol_);
      DARABONBA_PTR_TO_JSON(ContainerPort, containerPort_);
    };
    friend void from_json(const Darabonba::Json& j, ListIngressesResponseBodyDataIngressListDefaultRule& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(BackendProtocol, backendProtocol_);
      DARABONBA_PTR_FROM_JSON(ContainerPort, containerPort_);
    };
    ListIngressesResponseBodyDataIngressListDefaultRule() = default ;
    ListIngressesResponseBodyDataIngressListDefaultRule(const ListIngressesResponseBodyDataIngressListDefaultRule &) = default ;
    ListIngressesResponseBodyDataIngressListDefaultRule(ListIngressesResponseBodyDataIngressListDefaultRule &&) = default ;
    ListIngressesResponseBodyDataIngressListDefaultRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIngressesResponseBodyDataIngressListDefaultRule() = default ;
    ListIngressesResponseBodyDataIngressListDefaultRule& operator=(const ListIngressesResponseBodyDataIngressListDefaultRule &) = default ;
    ListIngressesResponseBodyDataIngressListDefaultRule& operator=(ListIngressesResponseBodyDataIngressListDefaultRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->appName_ == nullptr && return this->backendProtocol_ == nullptr && return this->containerPort_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListIngressesResponseBodyDataIngressListDefaultRule& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListIngressesResponseBodyDataIngressListDefaultRule& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // backendProtocol Field Functions 
    bool hasBackendProtocol() const { return this->backendProtocol_ != nullptr;};
    void deleteBackendProtocol() { this->backendProtocol_ = nullptr;};
    inline string backendProtocol() const { DARABONBA_PTR_GET_DEFAULT(backendProtocol_, "") };
    inline ListIngressesResponseBodyDataIngressListDefaultRule& setBackendProtocol(string backendProtocol) { DARABONBA_PTR_SET_VALUE(backendProtocol_, backendProtocol) };


    // containerPort Field Functions 
    bool hasContainerPort() const { return this->containerPort_ != nullptr;};
    void deleteContainerPort() { this->containerPort_ = nullptr;};
    inline int32_t containerPort() const { DARABONBA_PTR_GET_DEFAULT(containerPort_, 0) };
    inline ListIngressesResponseBodyDataIngressListDefaultRule& setContainerPort(int32_t containerPort) { DARABONBA_PTR_SET_VALUE(containerPort_, containerPort) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<string> backendProtocol_ = nullptr;
    std::shared_ptr<int32_t> containerPort_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
