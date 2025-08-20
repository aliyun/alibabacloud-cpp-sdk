// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREVIEWSTACKRESPONSEBODYSTACKLOG_HPP_
#define ALIBABACLOUD_MODELS_PREVIEWSTACKRESPONSEBODYSTACKLOG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PreviewStackResponseBodyStackLogTerraformLogs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class PreviewStackResponseBodyStackLog : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreviewStackResponseBodyStackLog& obj) { 
      DARABONBA_PTR_TO_JSON(TerraformLogs, terraformLogs_);
    };
    friend void from_json(const Darabonba::Json& j, PreviewStackResponseBodyStackLog& obj) { 
      DARABONBA_PTR_FROM_JSON(TerraformLogs, terraformLogs_);
    };
    PreviewStackResponseBodyStackLog() = default ;
    PreviewStackResponseBodyStackLog(const PreviewStackResponseBodyStackLog &) = default ;
    PreviewStackResponseBodyStackLog(PreviewStackResponseBodyStackLog &&) = default ;
    PreviewStackResponseBodyStackLog(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreviewStackResponseBodyStackLog() = default ;
    PreviewStackResponseBodyStackLog& operator=(const PreviewStackResponseBodyStackLog &) = default ;
    PreviewStackResponseBodyStackLog& operator=(PreviewStackResponseBodyStackLog &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->terraformLogs_ != nullptr; };
    // terraformLogs Field Functions 
    bool hasTerraformLogs() const { return this->terraformLogs_ != nullptr;};
    void deleteTerraformLogs() { this->terraformLogs_ = nullptr;};
    inline const vector<Models::PreviewStackResponseBodyStackLogTerraformLogs> & terraformLogs() const { DARABONBA_PTR_GET_CONST(terraformLogs_, vector<Models::PreviewStackResponseBodyStackLogTerraformLogs>) };
    inline vector<Models::PreviewStackResponseBodyStackLogTerraformLogs> terraformLogs() { DARABONBA_PTR_GET(terraformLogs_, vector<Models::PreviewStackResponseBodyStackLogTerraformLogs>) };
    inline PreviewStackResponseBodyStackLog& setTerraformLogs(const vector<Models::PreviewStackResponseBodyStackLogTerraformLogs> & terraformLogs) { DARABONBA_PTR_SET_VALUE(terraformLogs_, terraformLogs) };
    inline PreviewStackResponseBodyStackLog& setTerraformLogs(vector<Models::PreviewStackResponseBodyStackLogTerraformLogs> && terraformLogs) { DARABONBA_PTR_SET_RVALUE(terraformLogs_, terraformLogs) };


  protected:
    // The Terraform logs. This parameter is returned only if the stack is a Terraform stack.
    // 
    // > This parameter contains the logs of previewing the stack.
    std::shared_ptr<vector<Models::PreviewStackResponseBodyStackLogTerraformLogs>> terraformLogs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
