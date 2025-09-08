// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WEBAPPLICATIONWITHINSTANCECOUNT_HPP_
#define ALIBABACLOUD_MODELS_WEBAPPLICATIONWITHINSTANCECOUNT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/WebApplication.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class WebApplicationWithInstanceCount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WebApplicationWithInstanceCount& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_TO_JSON(WebApplication, webApplication_);
    };
    friend void from_json(const Darabonba::Json& j, WebApplicationWithInstanceCount& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_FROM_JSON(WebApplication, webApplication_);
    };
    WebApplicationWithInstanceCount() = default ;
    WebApplicationWithInstanceCount(const WebApplicationWithInstanceCount &) = default ;
    WebApplicationWithInstanceCount(WebApplicationWithInstanceCount &&) = default ;
    WebApplicationWithInstanceCount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WebApplicationWithInstanceCount() = default ;
    WebApplicationWithInstanceCount& operator=(const WebApplicationWithInstanceCount &) = default ;
    WebApplicationWithInstanceCount& operator=(WebApplicationWithInstanceCount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceCount_ != nullptr
        && this->webApplication_ != nullptr; };
    // instanceCount Field Functions 
    bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
    void deleteInstanceCount() { this->instanceCount_ = nullptr;};
    inline int64_t instanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0L) };
    inline WebApplicationWithInstanceCount& setInstanceCount(int64_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


    // webApplication Field Functions 
    bool hasWebApplication() const { return this->webApplication_ != nullptr;};
    void deleteWebApplication() { this->webApplication_ = nullptr;};
    inline const WebApplication & webApplication() const { DARABONBA_PTR_GET_CONST(webApplication_, WebApplication) };
    inline WebApplication webApplication() { DARABONBA_PTR_GET(webApplication_, WebApplication) };
    inline WebApplicationWithInstanceCount& setWebApplication(const WebApplication & webApplication) { DARABONBA_PTR_SET_VALUE(webApplication_, webApplication) };
    inline WebApplicationWithInstanceCount& setWebApplication(WebApplication && webApplication) { DARABONBA_PTR_SET_RVALUE(webApplication_, webApplication) };


  protected:
    std::shared_ptr<int64_t> instanceCount_ = nullptr;
    std::shared_ptr<WebApplication> webApplication_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
