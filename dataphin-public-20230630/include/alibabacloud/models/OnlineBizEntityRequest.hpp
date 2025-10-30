// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ONLINEBIZENTITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ONLINEBIZENTITYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/OnlineBizEntityRequestOnlineCommand.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class OnlineBizEntityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OnlineBizEntityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OnlineCommand, onlineCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, OnlineBizEntityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OnlineCommand, onlineCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    OnlineBizEntityRequest() = default ;
    OnlineBizEntityRequest(const OnlineBizEntityRequest &) = default ;
    OnlineBizEntityRequest(OnlineBizEntityRequest &&) = default ;
    OnlineBizEntityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OnlineBizEntityRequest() = default ;
    OnlineBizEntityRequest& operator=(const OnlineBizEntityRequest &) = default ;
    OnlineBizEntityRequest& operator=(OnlineBizEntityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->onlineCommand_ == nullptr
        && return this->opTenantId_ == nullptr; };
    // onlineCommand Field Functions 
    bool hasOnlineCommand() const { return this->onlineCommand_ != nullptr;};
    void deleteOnlineCommand() { this->onlineCommand_ = nullptr;};
    inline const OnlineBizEntityRequestOnlineCommand & onlineCommand() const { DARABONBA_PTR_GET_CONST(onlineCommand_, OnlineBizEntityRequestOnlineCommand) };
    inline OnlineBizEntityRequestOnlineCommand onlineCommand() { DARABONBA_PTR_GET(onlineCommand_, OnlineBizEntityRequestOnlineCommand) };
    inline OnlineBizEntityRequest& setOnlineCommand(const OnlineBizEntityRequestOnlineCommand & onlineCommand) { DARABONBA_PTR_SET_VALUE(onlineCommand_, onlineCommand) };
    inline OnlineBizEntityRequest& setOnlineCommand(OnlineBizEntityRequestOnlineCommand && onlineCommand) { DARABONBA_PTR_SET_RVALUE(onlineCommand_, onlineCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline OnlineBizEntityRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    std::shared_ptr<OnlineBizEntityRequestOnlineCommand> onlineCommand_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
