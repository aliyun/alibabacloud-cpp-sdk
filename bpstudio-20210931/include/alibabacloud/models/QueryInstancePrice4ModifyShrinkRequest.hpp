// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYINSTANCEPRICE4MODIFYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYINSTANCEPRICE4MODIFYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class QueryInstancePrice4ModifyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryInstancePrice4ModifyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Configuration, configurationShrink_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryInstancePrice4ModifyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Configuration, configurationShrink_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    QueryInstancePrice4ModifyShrinkRequest() = default ;
    QueryInstancePrice4ModifyShrinkRequest(const QueryInstancePrice4ModifyShrinkRequest &) = default ;
    QueryInstancePrice4ModifyShrinkRequest(QueryInstancePrice4ModifyShrinkRequest &&) = default ;
    QueryInstancePrice4ModifyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryInstancePrice4ModifyShrinkRequest() = default ;
    QueryInstancePrice4ModifyShrinkRequest& operator=(const QueryInstancePrice4ModifyShrinkRequest &) = default ;
    QueryInstancePrice4ModifyShrinkRequest& operator=(QueryInstancePrice4ModifyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && return this->configurationShrink_ == nullptr && return this->instanceId_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline QueryInstancePrice4ModifyShrinkRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // configurationShrink Field Functions 
    bool hasConfigurationShrink() const { return this->configurationShrink_ != nullptr;};
    void deleteConfigurationShrink() { this->configurationShrink_ = nullptr;};
    inline string configurationShrink() const { DARABONBA_PTR_GET_DEFAULT(configurationShrink_, "") };
    inline QueryInstancePrice4ModifyShrinkRequest& setConfigurationShrink(string configurationShrink) { DARABONBA_PTR_SET_VALUE(configurationShrink_, configurationShrink) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryInstancePrice4ModifyShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> applicationId_ = nullptr;
    std::shared_ptr<string> configurationShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif
