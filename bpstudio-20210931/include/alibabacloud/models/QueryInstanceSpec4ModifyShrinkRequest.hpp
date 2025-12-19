// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYINSTANCESPEC4MODIFYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYINSTANCESPEC4MODIFYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class QueryInstanceSpec4ModifyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryInstanceSpec4ModifyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MethodName, methodName_);
      DARABONBA_PTR_TO_JSON(Parameters, parametersShrink_);
    };
    friend void from_json(const Darabonba::Json& j, QueryInstanceSpec4ModifyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MethodName, methodName_);
      DARABONBA_PTR_FROM_JSON(Parameters, parametersShrink_);
    };
    QueryInstanceSpec4ModifyShrinkRequest() = default ;
    QueryInstanceSpec4ModifyShrinkRequest(const QueryInstanceSpec4ModifyShrinkRequest &) = default ;
    QueryInstanceSpec4ModifyShrinkRequest(QueryInstanceSpec4ModifyShrinkRequest &&) = default ;
    QueryInstanceSpec4ModifyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryInstanceSpec4ModifyShrinkRequest() = default ;
    QueryInstanceSpec4ModifyShrinkRequest& operator=(const QueryInstanceSpec4ModifyShrinkRequest &) = default ;
    QueryInstanceSpec4ModifyShrinkRequest& operator=(QueryInstanceSpec4ModifyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && return this->instanceId_ == nullptr && return this->methodName_ == nullptr && return this->parametersShrink_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline QueryInstanceSpec4ModifyShrinkRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryInstanceSpec4ModifyShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // methodName Field Functions 
    bool hasMethodName() const { return this->methodName_ != nullptr;};
    void deleteMethodName() { this->methodName_ = nullptr;};
    inline string methodName() const { DARABONBA_PTR_GET_DEFAULT(methodName_, "") };
    inline QueryInstanceSpec4ModifyShrinkRequest& setMethodName(string methodName) { DARABONBA_PTR_SET_VALUE(methodName_, methodName) };


    // parametersShrink Field Functions 
    bool hasParametersShrink() const { return this->parametersShrink_ != nullptr;};
    void deleteParametersShrink() { this->parametersShrink_ = nullptr;};
    inline string parametersShrink() const { DARABONBA_PTR_GET_DEFAULT(parametersShrink_, "") };
    inline QueryInstanceSpec4ModifyShrinkRequest& setParametersShrink(string parametersShrink) { DARABONBA_PTR_SET_VALUE(parametersShrink_, parametersShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> applicationId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> methodName_ = nullptr;
    std::shared_ptr<string> parametersShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif
