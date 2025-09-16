// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTESQLINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTESQLINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ExecuteSqlInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteSqlInstanceRequest& obj) { 
      DARABONBA_ANY_TO_JSON(combineParam, combineParam_);
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(domain, domain_);
      DARABONBA_ANY_TO_JSON(dynamicParam, dynamicParam_);
      DARABONBA_ANY_TO_JSON(kvpair, kvpair_);
      DARABONBA_ANY_TO_JSON(params, params_);
      DARABONBA_ANY_TO_JSON(staticParam, staticParam_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteSqlInstanceRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(combineParam, combineParam_);
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(domain, domain_);
      DARABONBA_ANY_FROM_JSON(dynamicParam, dynamicParam_);
      DARABONBA_ANY_FROM_JSON(kvpair, kvpair_);
      DARABONBA_ANY_FROM_JSON(params, params_);
      DARABONBA_ANY_FROM_JSON(staticParam, staticParam_);
    };
    ExecuteSqlInstanceRequest() = default ;
    ExecuteSqlInstanceRequest(const ExecuteSqlInstanceRequest &) = default ;
    ExecuteSqlInstanceRequest(ExecuteSqlInstanceRequest &&) = default ;
    ExecuteSqlInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteSqlInstanceRequest() = default ;
    ExecuteSqlInstanceRequest& operator=(const ExecuteSqlInstanceRequest &) = default ;
    ExecuteSqlInstanceRequest& operator=(ExecuteSqlInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->combineParam_ != nullptr
        && this->content_ != nullptr && this->domain_ != nullptr && this->dynamicParam_ != nullptr && this->kvpair_ != nullptr && this->params_ != nullptr
        && this->staticParam_ != nullptr; };
    // combineParam Field Functions 
    bool hasCombineParam() const { return this->combineParam_ != nullptr;};
    void deleteCombineParam() { this->combineParam_ = nullptr;};
    inline     const Darabonba::Json & combineParam() const { DARABONBA_GET(combineParam_) };
    Darabonba::Json & combineParam() { DARABONBA_GET(combineParam_) };
    inline ExecuteSqlInstanceRequest& setCombineParam(const Darabonba::Json & combineParam) { DARABONBA_SET_VALUE(combineParam_, combineParam) };
    inline ExecuteSqlInstanceRequest& setCombineParam(Darabonba::Json & combineParam) { DARABONBA_SET_RVALUE(combineParam_, combineParam) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ExecuteSqlInstanceRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ExecuteSqlInstanceRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // dynamicParam Field Functions 
    bool hasDynamicParam() const { return this->dynamicParam_ != nullptr;};
    void deleteDynamicParam() { this->dynamicParam_ = nullptr;};
    inline     const Darabonba::Json & dynamicParam() const { DARABONBA_GET(dynamicParam_) };
    Darabonba::Json & dynamicParam() { DARABONBA_GET(dynamicParam_) };
    inline ExecuteSqlInstanceRequest& setDynamicParam(const Darabonba::Json & dynamicParam) { DARABONBA_SET_VALUE(dynamicParam_, dynamicParam) };
    inline ExecuteSqlInstanceRequest& setDynamicParam(Darabonba::Json & dynamicParam) { DARABONBA_SET_RVALUE(dynamicParam_, dynamicParam) };


    // kvpair Field Functions 
    bool hasKvpair() const { return this->kvpair_ != nullptr;};
    void deleteKvpair() { this->kvpair_ = nullptr;};
    inline     const Darabonba::Json & kvpair() const { DARABONBA_GET(kvpair_) };
    Darabonba::Json & kvpair() { DARABONBA_GET(kvpair_) };
    inline ExecuteSqlInstanceRequest& setKvpair(const Darabonba::Json & kvpair) { DARABONBA_SET_VALUE(kvpair_, kvpair) };
    inline ExecuteSqlInstanceRequest& setKvpair(Darabonba::Json & kvpair) { DARABONBA_SET_RVALUE(kvpair_, kvpair) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline     const Darabonba::Json & params() const { DARABONBA_GET(params_) };
    Darabonba::Json & params() { DARABONBA_GET(params_) };
    inline ExecuteSqlInstanceRequest& setParams(const Darabonba::Json & params) { DARABONBA_SET_VALUE(params_, params) };
    inline ExecuteSqlInstanceRequest& setParams(Darabonba::Json & params) { DARABONBA_SET_RVALUE(params_, params) };


    // staticParam Field Functions 
    bool hasStaticParam() const { return this->staticParam_ != nullptr;};
    void deleteStaticParam() { this->staticParam_ = nullptr;};
    inline     const Darabonba::Json & staticParam() const { DARABONBA_GET(staticParam_) };
    Darabonba::Json & staticParam() { DARABONBA_GET(staticParam_) };
    inline ExecuteSqlInstanceRequest& setStaticParam(const Darabonba::Json & staticParam) { DARABONBA_SET_VALUE(staticParam_, staticParam) };
    inline ExecuteSqlInstanceRequest& setStaticParam(Darabonba::Json & staticParam) { DARABONBA_SET_RVALUE(staticParam_, staticParam) };


  protected:
    Darabonba::Json combineParam_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> domain_ = nullptr;
    Darabonba::Json dynamicParam_ = nullptr;
    Darabonba::Json kvpair_ = nullptr;
    Darabonba::Json params_ = nullptr;
    Darabonba::Json staticParam_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
