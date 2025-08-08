// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYINSTANCESPEC4MODIFYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYINSTANCESPEC4MODIFYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class QueryInstanceSpec4ModifyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryInstanceSpec4ModifyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MethodName, methodName_);
      DARABONBA_ANY_TO_JSON(Parameters, parameters_);
    };
    friend void from_json(const Darabonba::Json& j, QueryInstanceSpec4ModifyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MethodName, methodName_);
      DARABONBA_ANY_FROM_JSON(Parameters, parameters_);
    };
    QueryInstanceSpec4ModifyRequest() = default ;
    QueryInstanceSpec4ModifyRequest(const QueryInstanceSpec4ModifyRequest &) = default ;
    QueryInstanceSpec4ModifyRequest(QueryInstanceSpec4ModifyRequest &&) = default ;
    QueryInstanceSpec4ModifyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryInstanceSpec4ModifyRequest() = default ;
    QueryInstanceSpec4ModifyRequest& operator=(const QueryInstanceSpec4ModifyRequest &) = default ;
    QueryInstanceSpec4ModifyRequest& operator=(QueryInstanceSpec4ModifyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationId_ != nullptr
        && this->instanceId_ != nullptr && this->methodName_ != nullptr && this->parameters_ != nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline QueryInstanceSpec4ModifyRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryInstanceSpec4ModifyRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // methodName Field Functions 
    bool hasMethodName() const { return this->methodName_ != nullptr;};
    void deleteMethodName() { this->methodName_ = nullptr;};
    inline string methodName() const { DARABONBA_PTR_GET_DEFAULT(methodName_, "") };
    inline QueryInstanceSpec4ModifyRequest& setMethodName(string methodName) { DARABONBA_PTR_SET_VALUE(methodName_, methodName) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline     const Darabonba::Json & parameters() const { DARABONBA_GET(parameters_) };
    Darabonba::Json & parameters() { DARABONBA_GET(parameters_) };
    inline QueryInstanceSpec4ModifyRequest& setParameters(const Darabonba::Json & parameters) { DARABONBA_SET_VALUE(parameters_, parameters) };
    inline QueryInstanceSpec4ModifyRequest& setParameters(Darabonba::Json & parameters) { DARABONBA_SET_RVALUE(parameters_, parameters) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> applicationId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> methodName_ = nullptr;
    Darabonba::Json parameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif
