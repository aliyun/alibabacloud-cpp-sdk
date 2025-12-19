// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYINSTANCEPRICE4MODIFYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYINSTANCEPRICE4MODIFYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class QueryInstancePrice4ModifyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryInstancePrice4ModifyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_ANY_TO_JSON(Configuration, configuration_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryInstancePrice4ModifyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_ANY_FROM_JSON(Configuration, configuration_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    QueryInstancePrice4ModifyRequest() = default ;
    QueryInstancePrice4ModifyRequest(const QueryInstancePrice4ModifyRequest &) = default ;
    QueryInstancePrice4ModifyRequest(QueryInstancePrice4ModifyRequest &&) = default ;
    QueryInstancePrice4ModifyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryInstancePrice4ModifyRequest() = default ;
    QueryInstancePrice4ModifyRequest& operator=(const QueryInstancePrice4ModifyRequest &) = default ;
    QueryInstancePrice4ModifyRequest& operator=(QueryInstancePrice4ModifyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && return this->configuration_ == nullptr && return this->instanceId_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline QueryInstancePrice4ModifyRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // configuration Field Functions 
    bool hasConfiguration() const { return this->configuration_ != nullptr;};
    void deleteConfiguration() { this->configuration_ = nullptr;};
    inline     const Darabonba::Json & configuration() const { DARABONBA_GET(configuration_) };
    Darabonba::Json & configuration() { DARABONBA_GET(configuration_) };
    inline QueryInstancePrice4ModifyRequest& setConfiguration(const Darabonba::Json & configuration) { DARABONBA_SET_VALUE(configuration_, configuration) };
    inline QueryInstancePrice4ModifyRequest& setConfiguration(Darabonba::Json & configuration) { DARABONBA_SET_RVALUE(configuration_, configuration) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryInstancePrice4ModifyRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> applicationId_ = nullptr;
    Darabonba::Json configuration_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif
