// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPLACEPROJECTWHITELISTSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REPLACEPROJECTWHITELISTSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ReplaceProjectWhiteListsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReplaceProjectWhiteListsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(ReplaceCommand, replaceCommandShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ReplaceProjectWhiteListsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(ReplaceCommand, replaceCommandShrink_);
    };
    ReplaceProjectWhiteListsShrinkRequest() = default ;
    ReplaceProjectWhiteListsShrinkRequest(const ReplaceProjectWhiteListsShrinkRequest &) = default ;
    ReplaceProjectWhiteListsShrinkRequest(ReplaceProjectWhiteListsShrinkRequest &&) = default ;
    ReplaceProjectWhiteListsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReplaceProjectWhiteListsShrinkRequest() = default ;
    ReplaceProjectWhiteListsShrinkRequest& operator=(const ReplaceProjectWhiteListsShrinkRequest &) = default ;
    ReplaceProjectWhiteListsShrinkRequest& operator=(ReplaceProjectWhiteListsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->opTenantId_ != nullptr && this->replaceCommandShrink_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ReplaceProjectWhiteListsShrinkRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ReplaceProjectWhiteListsShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // replaceCommandShrink Field Functions 
    bool hasReplaceCommandShrink() const { return this->replaceCommandShrink_ != nullptr;};
    void deleteReplaceCommandShrink() { this->replaceCommandShrink_ = nullptr;};
    inline string replaceCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(replaceCommandShrink_, "") };
    inline ReplaceProjectWhiteListsShrinkRequest& setReplaceCommandShrink(string replaceCommandShrink) { DARABONBA_PTR_SET_VALUE(replaceCommandShrink_, replaceCommandShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> replaceCommandShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
