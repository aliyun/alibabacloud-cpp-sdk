// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATERESOURCEPLANWITHFLINKCONFASYNCHEADERS_HPP_
#define ALIBABACLOUD_MODELS_GENERATERESOURCEPLANWITHFLINKCONFASYNCHEADERS_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class GenerateResourcePlanWithFlinkConfAsyncHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateResourcePlanWithFlinkConfAsyncHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateResourcePlanWithFlinkConfAsyncHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    GenerateResourcePlanWithFlinkConfAsyncHeaders() = default ;
    GenerateResourcePlanWithFlinkConfAsyncHeaders(const GenerateResourcePlanWithFlinkConfAsyncHeaders &) = default ;
    GenerateResourcePlanWithFlinkConfAsyncHeaders(GenerateResourcePlanWithFlinkConfAsyncHeaders &&) = default ;
    GenerateResourcePlanWithFlinkConfAsyncHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateResourcePlanWithFlinkConfAsyncHeaders() = default ;
    GenerateResourcePlanWithFlinkConfAsyncHeaders& operator=(const GenerateResourcePlanWithFlinkConfAsyncHeaders &) = default ;
    GenerateResourcePlanWithFlinkConfAsyncHeaders& operator=(GenerateResourcePlanWithFlinkConfAsyncHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commonHeaders_ == nullptr
        && return this->workspace_ == nullptr; };
    // commonHeaders Field Functions 
    bool hasCommonHeaders() const { return this->commonHeaders_ != nullptr;};
    void deleteCommonHeaders() { this->commonHeaders_ = nullptr;};
    inline const map<string, string> & commonHeaders() const { DARABONBA_PTR_GET_CONST(commonHeaders_, map<string, string>) };
    inline map<string, string> commonHeaders() { DARABONBA_PTR_GET(commonHeaders_, map<string, string>) };
    inline GenerateResourcePlanWithFlinkConfAsyncHeaders& setCommonHeaders(const map<string, string> & commonHeaders) { DARABONBA_PTR_SET_VALUE(commonHeaders_, commonHeaders) };
    inline GenerateResourcePlanWithFlinkConfAsyncHeaders& setCommonHeaders(map<string, string> && commonHeaders) { DARABONBA_PTR_SET_RVALUE(commonHeaders_, commonHeaders) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string workspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline GenerateResourcePlanWithFlinkConfAsyncHeaders& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    std::shared_ptr<map<string, string>> commonHeaders_ = nullptr;
    // The workspace ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> workspace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
