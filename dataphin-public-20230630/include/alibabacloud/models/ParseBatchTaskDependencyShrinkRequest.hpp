// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PARSEBATCHTASKDEPENDENCYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PARSEBATCHTASKDEPENDENCYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ParseBatchTaskDependencyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ParseBatchTaskDependencyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(ParseCommand, parseCommandShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ParseBatchTaskDependencyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(ParseCommand, parseCommandShrink_);
    };
    ParseBatchTaskDependencyShrinkRequest() = default ;
    ParseBatchTaskDependencyShrinkRequest(const ParseBatchTaskDependencyShrinkRequest &) = default ;
    ParseBatchTaskDependencyShrinkRequest(ParseBatchTaskDependencyShrinkRequest &&) = default ;
    ParseBatchTaskDependencyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ParseBatchTaskDependencyShrinkRequest() = default ;
    ParseBatchTaskDependencyShrinkRequest& operator=(const ParseBatchTaskDependencyShrinkRequest &) = default ;
    ParseBatchTaskDependencyShrinkRequest& operator=(ParseBatchTaskDependencyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && return this->parseCommandShrink_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ParseBatchTaskDependencyShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // parseCommandShrink Field Functions 
    bool hasParseCommandShrink() const { return this->parseCommandShrink_ != nullptr;};
    void deleteParseCommandShrink() { this->parseCommandShrink_ = nullptr;};
    inline string parseCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(parseCommandShrink_, "") };
    inline ParseBatchTaskDependencyShrinkRequest& setParseCommandShrink(string parseCommandShrink) { DARABONBA_PTR_SET_VALUE(parseCommandShrink_, parseCommandShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> parseCommandShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
