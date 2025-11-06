// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEWEBFLOWRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEWEBFLOWRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class DeleteWebFlowRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteWebFlowRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Ids, ids_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteWebFlowRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Ids, ids_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
    };
    DeleteWebFlowRulesRequest() = default ;
    DeleteWebFlowRulesRequest(const DeleteWebFlowRulesRequest &) = default ;
    DeleteWebFlowRulesRequest(DeleteWebFlowRulesRequest &&) = default ;
    DeleteWebFlowRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteWebFlowRulesRequest() = default ;
    DeleteWebFlowRulesRequest& operator=(const DeleteWebFlowRulesRequest &) = default ;
    DeleteWebFlowRulesRequest& operator=(DeleteWebFlowRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->appName_ == nullptr && return this->ids_ == nullptr && return this->namespace_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline DeleteWebFlowRulesRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DeleteWebFlowRulesRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline string ids() const { DARABONBA_PTR_GET_DEFAULT(ids_, "") };
    inline DeleteWebFlowRulesRequest& setIds(string ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DeleteWebFlowRulesRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


  protected:
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> appName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> ids_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
