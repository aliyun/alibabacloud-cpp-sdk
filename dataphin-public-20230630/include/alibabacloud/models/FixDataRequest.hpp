// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FIXDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FIXDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FixDataRequestFixDataCommand.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class FixDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FixDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(FixDataCommand, fixDataCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, FixDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(FixDataCommand, fixDataCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    FixDataRequest() = default ;
    FixDataRequest(const FixDataRequest &) = default ;
    FixDataRequest(FixDataRequest &&) = default ;
    FixDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FixDataRequest() = default ;
    FixDataRequest& operator=(const FixDataRequest &) = default ;
    FixDataRequest& operator=(FixDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->env_ != nullptr
        && this->fixDataCommand_ != nullptr && this->opTenantId_ != nullptr; };
    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string env() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline FixDataRequest& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // fixDataCommand Field Functions 
    bool hasFixDataCommand() const { return this->fixDataCommand_ != nullptr;};
    void deleteFixDataCommand() { this->fixDataCommand_ = nullptr;};
    inline const FixDataRequestFixDataCommand & fixDataCommand() const { DARABONBA_PTR_GET_CONST(fixDataCommand_, FixDataRequestFixDataCommand) };
    inline FixDataRequestFixDataCommand fixDataCommand() { DARABONBA_PTR_GET(fixDataCommand_, FixDataRequestFixDataCommand) };
    inline FixDataRequest& setFixDataCommand(const FixDataRequestFixDataCommand & fixDataCommand) { DARABONBA_PTR_SET_VALUE(fixDataCommand_, fixDataCommand) };
    inline FixDataRequest& setFixDataCommand(FixDataRequestFixDataCommand && fixDataCommand) { DARABONBA_PTR_SET_RVALUE(fixDataCommand_, fixDataCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline FixDataRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    std::shared_ptr<string> env_ = nullptr;
    // This parameter is required.
    std::shared_ptr<FixDataRequestFixDataCommand> fixDataCommand_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
