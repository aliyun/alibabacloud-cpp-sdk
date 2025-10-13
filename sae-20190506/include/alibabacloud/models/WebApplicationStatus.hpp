// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WEBAPPLICATIONSTATUS_HPP_
#define ALIBABACLOUD_MODELS_WEBAPPLICATIONSTATUS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/WebScalingConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class WebApplicationStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WebApplicationStatus& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_TO_JSON(WebScalingConfig, webScalingConfig_);
    };
    friend void from_json(const Darabonba::Json& j, WebApplicationStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_FROM_JSON(WebScalingConfig, webScalingConfig_);
    };
    WebApplicationStatus() = default ;
    WebApplicationStatus(const WebApplicationStatus &) = default ;
    WebApplicationStatus(WebApplicationStatus &&) = default ;
    WebApplicationStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WebApplicationStatus() = default ;
    WebApplicationStatus& operator=(const WebApplicationStatus &) = default ;
    WebApplicationStatus& operator=(WebApplicationStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceCount_ == nullptr
        && return this->webScalingConfig_ == nullptr; };
    // instanceCount Field Functions 
    bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
    void deleteInstanceCount() { this->instanceCount_ = nullptr;};
    inline int64_t instanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0L) };
    inline WebApplicationStatus& setInstanceCount(int64_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


    // webScalingConfig Field Functions 
    bool hasWebScalingConfig() const { return this->webScalingConfig_ != nullptr;};
    void deleteWebScalingConfig() { this->webScalingConfig_ = nullptr;};
    inline const WebScalingConfig & webScalingConfig() const { DARABONBA_PTR_GET_CONST(webScalingConfig_, WebScalingConfig) };
    inline WebScalingConfig webScalingConfig() { DARABONBA_PTR_GET(webScalingConfig_, WebScalingConfig) };
    inline WebApplicationStatus& setWebScalingConfig(const WebScalingConfig & webScalingConfig) { DARABONBA_PTR_SET_VALUE(webScalingConfig_, webScalingConfig) };
    inline WebApplicationStatus& setWebScalingConfig(WebScalingConfig && webScalingConfig) { DARABONBA_PTR_SET_RVALUE(webScalingConfig_, webScalingConfig) };


  protected:
    std::shared_ptr<int64_t> instanceCount_ = nullptr;
    std::shared_ptr<WebScalingConfig> webScalingConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
