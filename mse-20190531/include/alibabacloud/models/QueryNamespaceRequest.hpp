// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYNAMESPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYNAMESPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class QueryNamespaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryNamespaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Region, region_);
    };
    friend void from_json(const Darabonba::Json& j, QueryNamespaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
    };
    QueryNamespaceRequest() = default ;
    QueryNamespaceRequest(const QueryNamespaceRequest &) = default ;
    QueryNamespaceRequest(QueryNamespaceRequest &&) = default ;
    QueryNamespaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryNamespaceRequest() = default ;
    QueryNamespaceRequest& operator=(const QueryNamespaceRequest &) = default ;
    QueryNamespaceRequest& operator=(QueryNamespaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->name_ == nullptr && this->region_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline QueryNamespaceRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline QueryNamespaceRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline QueryNamespaceRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


  protected:
    // The language of the response. Valid values: zh and en. Default value: zh. The value zh which indicates Chinese, and the value en indicates English.
    shared_ptr<string> acceptLanguage_ {};
    shared_ptr<string> name_ {};
    // This parameter is required.
    shared_ptr<string> region_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
