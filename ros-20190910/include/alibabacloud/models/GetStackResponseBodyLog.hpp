// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTACKRESPONSEBODYLOG_HPP_
#define ALIBABACLOUD_MODELS_GETSTACKRESPONSEBODYLOG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetStackResponseBodyLogResourceLogs.hpp>
#include <alibabacloud/models/GetStackResponseBodyLogTerraformLogs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetStackResponseBodyLog : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStackResponseBodyLog& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceLogs, resourceLogs_);
      DARABONBA_PTR_TO_JSON(TerraformLogs, terraformLogs_);
    };
    friend void from_json(const Darabonba::Json& j, GetStackResponseBodyLog& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceLogs, resourceLogs_);
      DARABONBA_PTR_FROM_JSON(TerraformLogs, terraformLogs_);
    };
    GetStackResponseBodyLog() = default ;
    GetStackResponseBodyLog(const GetStackResponseBodyLog &) = default ;
    GetStackResponseBodyLog(GetStackResponseBodyLog &&) = default ;
    GetStackResponseBodyLog(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStackResponseBodyLog() = default ;
    GetStackResponseBodyLog& operator=(const GetStackResponseBodyLog &) = default ;
    GetStackResponseBodyLog& operator=(GetStackResponseBodyLog &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourceLogs_ != nullptr
        && this->terraformLogs_ != nullptr; };
    // resourceLogs Field Functions 
    bool hasResourceLogs() const { return this->resourceLogs_ != nullptr;};
    void deleteResourceLogs() { this->resourceLogs_ = nullptr;};
    inline const vector<Models::GetStackResponseBodyLogResourceLogs> & resourceLogs() const { DARABONBA_PTR_GET_CONST(resourceLogs_, vector<Models::GetStackResponseBodyLogResourceLogs>) };
    inline vector<Models::GetStackResponseBodyLogResourceLogs> resourceLogs() { DARABONBA_PTR_GET(resourceLogs_, vector<Models::GetStackResponseBodyLogResourceLogs>) };
    inline GetStackResponseBodyLog& setResourceLogs(const vector<Models::GetStackResponseBodyLogResourceLogs> & resourceLogs) { DARABONBA_PTR_SET_VALUE(resourceLogs_, resourceLogs) };
    inline GetStackResponseBodyLog& setResourceLogs(vector<Models::GetStackResponseBodyLogResourceLogs> && resourceLogs) { DARABONBA_PTR_SET_RVALUE(resourceLogs_, resourceLogs) };


    // terraformLogs Field Functions 
    bool hasTerraformLogs() const { return this->terraformLogs_ != nullptr;};
    void deleteTerraformLogs() { this->terraformLogs_ = nullptr;};
    inline const vector<Models::GetStackResponseBodyLogTerraformLogs> & terraformLogs() const { DARABONBA_PTR_GET_CONST(terraformLogs_, vector<Models::GetStackResponseBodyLogTerraformLogs>) };
    inline vector<Models::GetStackResponseBodyLogTerraformLogs> terraformLogs() { DARABONBA_PTR_GET(terraformLogs_, vector<Models::GetStackResponseBodyLogTerraformLogs>) };
    inline GetStackResponseBodyLog& setTerraformLogs(const vector<Models::GetStackResponseBodyLogTerraformLogs> & terraformLogs) { DARABONBA_PTR_SET_VALUE(terraformLogs_, terraformLogs) };
    inline GetStackResponseBodyLog& setTerraformLogs(vector<Models::GetStackResponseBodyLogTerraformLogs> && terraformLogs) { DARABONBA_PTR_SET_RVALUE(terraformLogs_, terraformLogs) };


  protected:
    // The logs of resources in the stack. This parameter is returned if LogOption is set to Resource or All.
    // 
    // >  The logs are returned only for resources of specific types, such as the `ALIYUN::ROS::ResourceCleaner` type.
    std::shared_ptr<vector<Models::GetStackResponseBodyLogResourceLogs>> resourceLogs_ = nullptr;
    // The logs generated when the Terraform stack is run. This parameter is returned only for a Terraform stack. This parameter is returned if LogOption is left empty or set to Stack or All.
    // 
    // >  This parameter is not returned for a running stack. The logs are generated from the most recent operation on the stack, such as the creation, resumed creation, update, or deletion operation.
    std::shared_ptr<vector<Models::GetStackResponseBodyLogTerraformLogs>> terraformLogs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
