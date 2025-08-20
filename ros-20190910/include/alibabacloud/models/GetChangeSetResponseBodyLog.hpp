// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHANGESETRESPONSEBODYLOG_HPP_
#define ALIBABACLOUD_MODELS_GETCHANGESETRESPONSEBODYLOG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetChangeSetResponseBodyLogTerraformLogs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetChangeSetResponseBodyLog : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetChangeSetResponseBodyLog& obj) { 
      DARABONBA_PTR_TO_JSON(TerraformLogs, terraformLogs_);
    };
    friend void from_json(const Darabonba::Json& j, GetChangeSetResponseBodyLog& obj) { 
      DARABONBA_PTR_FROM_JSON(TerraformLogs, terraformLogs_);
    };
    GetChangeSetResponseBodyLog() = default ;
    GetChangeSetResponseBodyLog(const GetChangeSetResponseBodyLog &) = default ;
    GetChangeSetResponseBodyLog(GetChangeSetResponseBodyLog &&) = default ;
    GetChangeSetResponseBodyLog(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetChangeSetResponseBodyLog() = default ;
    GetChangeSetResponseBodyLog& operator=(const GetChangeSetResponseBodyLog &) = default ;
    GetChangeSetResponseBodyLog& operator=(GetChangeSetResponseBodyLog &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->terraformLogs_ != nullptr; };
    // terraformLogs Field Functions 
    bool hasTerraformLogs() const { return this->terraformLogs_ != nullptr;};
    void deleteTerraformLogs() { this->terraformLogs_ = nullptr;};
    inline const vector<Models::GetChangeSetResponseBodyLogTerraformLogs> & terraformLogs() const { DARABONBA_PTR_GET_CONST(terraformLogs_, vector<Models::GetChangeSetResponseBodyLogTerraformLogs>) };
    inline vector<Models::GetChangeSetResponseBodyLogTerraformLogs> terraformLogs() { DARABONBA_PTR_GET(terraformLogs_, vector<Models::GetChangeSetResponseBodyLogTerraformLogs>) };
    inline GetChangeSetResponseBodyLog& setTerraformLogs(const vector<Models::GetChangeSetResponseBodyLogTerraformLogs> & terraformLogs) { DARABONBA_PTR_SET_VALUE(terraformLogs_, terraformLogs) };
    inline GetChangeSetResponseBodyLog& setTerraformLogs(vector<Models::GetChangeSetResponseBodyLogTerraformLogs> && terraformLogs) { DARABONBA_PTR_SET_RVALUE(terraformLogs_, terraformLogs) };


  protected:
    // The Terraform logs. This parameter is returned only for change sets of Terraform stacks.
    // 
    // > This parameter is not returned for change sets that are in the Creating state. This parameter indicates the logs of the change set creation operation for Terraform stacks.
    std::shared_ptr<vector<Models::GetChangeSetResponseBodyLogTerraformLogs>> terraformLogs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
