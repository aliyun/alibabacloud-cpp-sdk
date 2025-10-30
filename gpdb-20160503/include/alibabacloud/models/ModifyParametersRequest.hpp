// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPARAMETERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPARAMETERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ModifyParametersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyParametersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(ForceRestartInstance, forceRestartInstance_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyParametersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(ForceRestartInstance, forceRestartInstance_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
    };
    ModifyParametersRequest() = default ;
    ModifyParametersRequest(const ModifyParametersRequest &) = default ;
    ModifyParametersRequest(ModifyParametersRequest &&) = default ;
    ModifyParametersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyParametersRequest() = default ;
    ModifyParametersRequest& operator=(const ModifyParametersRequest &) = default ;
    ModifyParametersRequest& operator=(ModifyParametersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && return this->forceRestartInstance_ == nullptr && return this->parameters_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyParametersRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // forceRestartInstance Field Functions 
    bool hasForceRestartInstance() const { return this->forceRestartInstance_ != nullptr;};
    void deleteForceRestartInstance() { this->forceRestartInstance_ = nullptr;};
    inline bool forceRestartInstance() const { DARABONBA_PTR_GET_DEFAULT(forceRestartInstance_, false) };
    inline ModifyParametersRequest& setForceRestartInstance(bool forceRestartInstance) { DARABONBA_PTR_SET_VALUE(forceRestartInstance_, forceRestartInstance) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline string parameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
    inline ModifyParametersRequest& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


  protected:
    // The ID of the instance.
    // 
    // >  You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the details of all AnalyticDB for PostgreSQL instances in a specific region, including instance IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // Specifies whether to forcibly restart the instance. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> forceRestartInstance_ = nullptr;
    // The name and value of the parameter to be modified. Specify the parameter in the `<Parameter name>:<Parameter value>` format.
    // 
    // You can call the [DescribeParameters](https://help.aliyun.com/document_detail/208310.html) operation to query the parameters that can be modified.
    // 
    // This parameter is required.
    std::shared_ptr<string> parameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
