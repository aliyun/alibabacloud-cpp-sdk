// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYALLSWIMMINGLANEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYALLSWIMMINGLANEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class QueryAllSwimmingLaneGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAllSwimmingLaneGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAllSwimmingLaneGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
    };
    QueryAllSwimmingLaneGroupRequest() = default ;
    QueryAllSwimmingLaneGroupRequest(const QueryAllSwimmingLaneGroupRequest &) = default ;
    QueryAllSwimmingLaneGroupRequest(QueryAllSwimmingLaneGroupRequest &&) = default ;
    QueryAllSwimmingLaneGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAllSwimmingLaneGroupRequest() = default ;
    QueryAllSwimmingLaneGroupRequest& operator=(const QueryAllSwimmingLaneGroupRequest &) = default ;
    QueryAllSwimmingLaneGroupRequest& operator=(QueryAllSwimmingLaneGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->namespace_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline QueryAllSwimmingLaneGroupRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline QueryAllSwimmingLaneGroupRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The name of the Microservices Engine (MSE) namespace that you want to query.
    std::shared_ptr<string> namespace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
