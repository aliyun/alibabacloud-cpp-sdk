// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PARSEBATCHTASKDEPENDENCYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PARSEBATCHTASKDEPENDENCYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ParseBatchTaskDependencyRequestParseCommand.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ParseBatchTaskDependencyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ParseBatchTaskDependencyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(ParseCommand, parseCommand_);
    };
    friend void from_json(const Darabonba::Json& j, ParseBatchTaskDependencyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(ParseCommand, parseCommand_);
    };
    ParseBatchTaskDependencyRequest() = default ;
    ParseBatchTaskDependencyRequest(const ParseBatchTaskDependencyRequest &) = default ;
    ParseBatchTaskDependencyRequest(ParseBatchTaskDependencyRequest &&) = default ;
    ParseBatchTaskDependencyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ParseBatchTaskDependencyRequest() = default ;
    ParseBatchTaskDependencyRequest& operator=(const ParseBatchTaskDependencyRequest &) = default ;
    ParseBatchTaskDependencyRequest& operator=(ParseBatchTaskDependencyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->opTenantId_ != nullptr
        && this->parseCommand_ != nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ParseBatchTaskDependencyRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // parseCommand Field Functions 
    bool hasParseCommand() const { return this->parseCommand_ != nullptr;};
    void deleteParseCommand() { this->parseCommand_ = nullptr;};
    inline const ParseBatchTaskDependencyRequestParseCommand & parseCommand() const { DARABONBA_PTR_GET_CONST(parseCommand_, ParseBatchTaskDependencyRequestParseCommand) };
    inline ParseBatchTaskDependencyRequestParseCommand parseCommand() { DARABONBA_PTR_GET(parseCommand_, ParseBatchTaskDependencyRequestParseCommand) };
    inline ParseBatchTaskDependencyRequest& setParseCommand(const ParseBatchTaskDependencyRequestParseCommand & parseCommand) { DARABONBA_PTR_SET_VALUE(parseCommand_, parseCommand) };
    inline ParseBatchTaskDependencyRequest& setParseCommand(ParseBatchTaskDependencyRequestParseCommand && parseCommand) { DARABONBA_PTR_SET_RVALUE(parseCommand_, parseCommand) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<ParseBatchTaskDependencyRequestParseCommand> parseCommand_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
