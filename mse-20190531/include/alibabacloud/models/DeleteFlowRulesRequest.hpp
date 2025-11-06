// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEFLOWRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEFLOWRULESREQUEST_HPP_
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
  class DeleteFlowRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteFlowRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Ids, ids_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteFlowRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Ids, ids_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
    };
    DeleteFlowRulesRequest() = default ;
    DeleteFlowRulesRequest(const DeleteFlowRulesRequest &) = default ;
    DeleteFlowRulesRequest(DeleteFlowRulesRequest &&) = default ;
    DeleteFlowRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteFlowRulesRequest() = default ;
    DeleteFlowRulesRequest& operator=(const DeleteFlowRulesRequest &) = default ;
    DeleteFlowRulesRequest& operator=(DeleteFlowRulesRequest &&) = default ;
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
    inline DeleteFlowRulesRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DeleteFlowRulesRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline const vector<int64_t> & ids() const { DARABONBA_PTR_GET_CONST(ids_, vector<int64_t>) };
    inline vector<int64_t> ids() { DARABONBA_PTR_GET(ids_, vector<int64_t>) };
    inline DeleteFlowRulesRequest& setIds(const vector<int64_t> & ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };
    inline DeleteFlowRulesRequest& setIds(vector<int64_t> && ids) { DARABONBA_PTR_SET_RVALUE(ids_, ids) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DeleteFlowRulesRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The application name.
    // 
    // This parameter is required.
    std::shared_ptr<string> appName_ = nullptr;
    // The IDs of the rules to be deleted.
    std::shared_ptr<vector<int64_t>> ids_ = nullptr;
    // The microservice namespace to which the application belongs.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
