// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPHYSICALNODEBYOUTPUTNAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPHYSICALNODEBYOUTPUTNAMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetPhysicalNodeByOutputNameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPhysicalNodeByOutputNameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OutputName, outputName_);
    };
    friend void from_json(const Darabonba::Json& j, GetPhysicalNodeByOutputNameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OutputName, outputName_);
    };
    GetPhysicalNodeByOutputNameRequest() = default ;
    GetPhysicalNodeByOutputNameRequest(const GetPhysicalNodeByOutputNameRequest &) = default ;
    GetPhysicalNodeByOutputNameRequest(GetPhysicalNodeByOutputNameRequest &&) = default ;
    GetPhysicalNodeByOutputNameRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPhysicalNodeByOutputNameRequest() = default ;
    GetPhysicalNodeByOutputNameRequest& operator=(const GetPhysicalNodeByOutputNameRequest &) = default ;
    GetPhysicalNodeByOutputNameRequest& operator=(GetPhysicalNodeByOutputNameRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->env_ == nullptr
        && return this->opTenantId_ == nullptr && return this->outputName_ == nullptr; };
    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string env() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline GetPhysicalNodeByOutputNameRequest& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetPhysicalNodeByOutputNameRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // outputName Field Functions 
    bool hasOutputName() const { return this->outputName_ != nullptr;};
    void deleteOutputName() { this->outputName_ = nullptr;};
    inline string outputName() const { DARABONBA_PTR_GET_DEFAULT(outputName_, "") };
    inline GetPhysicalNodeByOutputNameRequest& setOutputName(string outputName) { DARABONBA_PTR_SET_VALUE(outputName_, outputName) };


  protected:
    std::shared_ptr<string> env_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> outputName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
