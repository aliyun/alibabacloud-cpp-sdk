// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPLACEPROJECTWHITELISTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REPLACEPROJECTWHITELISTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ReplaceProjectWhiteListsRequestReplaceCommand.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ReplaceProjectWhiteListsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReplaceProjectWhiteListsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(ReplaceCommand, replaceCommand_);
    };
    friend void from_json(const Darabonba::Json& j, ReplaceProjectWhiteListsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(ReplaceCommand, replaceCommand_);
    };
    ReplaceProjectWhiteListsRequest() = default ;
    ReplaceProjectWhiteListsRequest(const ReplaceProjectWhiteListsRequest &) = default ;
    ReplaceProjectWhiteListsRequest(ReplaceProjectWhiteListsRequest &&) = default ;
    ReplaceProjectWhiteListsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReplaceProjectWhiteListsRequest() = default ;
    ReplaceProjectWhiteListsRequest& operator=(const ReplaceProjectWhiteListsRequest &) = default ;
    ReplaceProjectWhiteListsRequest& operator=(ReplaceProjectWhiteListsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->opTenantId_ != nullptr && this->replaceCommand_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ReplaceProjectWhiteListsRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ReplaceProjectWhiteListsRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // replaceCommand Field Functions 
    bool hasReplaceCommand() const { return this->replaceCommand_ != nullptr;};
    void deleteReplaceCommand() { this->replaceCommand_ = nullptr;};
    inline const ReplaceProjectWhiteListsRequestReplaceCommand & replaceCommand() const { DARABONBA_PTR_GET_CONST(replaceCommand_, ReplaceProjectWhiteListsRequestReplaceCommand) };
    inline ReplaceProjectWhiteListsRequestReplaceCommand replaceCommand() { DARABONBA_PTR_GET(replaceCommand_, ReplaceProjectWhiteListsRequestReplaceCommand) };
    inline ReplaceProjectWhiteListsRequest& setReplaceCommand(const ReplaceProjectWhiteListsRequestReplaceCommand & replaceCommand) { DARABONBA_PTR_SET_VALUE(replaceCommand_, replaceCommand) };
    inline ReplaceProjectWhiteListsRequest& setReplaceCommand(ReplaceProjectWhiteListsRequestReplaceCommand && replaceCommand) { DARABONBA_PTR_SET_RVALUE(replaceCommand_, replaceCommand) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<ReplaceProjectWhiteListsRequestReplaceCommand> replaceCommand_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
