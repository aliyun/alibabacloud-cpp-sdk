// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLISHOBJECTLISTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUBLISHOBJECTLISTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class PublishObjectListShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublishObjectListShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(PublishCommand, publishCommandShrink_);
    };
    friend void from_json(const Darabonba::Json& j, PublishObjectListShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(PublishCommand, publishCommandShrink_);
    };
    PublishObjectListShrinkRequest() = default ;
    PublishObjectListShrinkRequest(const PublishObjectListShrinkRequest &) = default ;
    PublishObjectListShrinkRequest(PublishObjectListShrinkRequest &&) = default ;
    PublishObjectListShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublishObjectListShrinkRequest() = default ;
    PublishObjectListShrinkRequest& operator=(const PublishObjectListShrinkRequest &) = default ;
    PublishObjectListShrinkRequest& operator=(PublishObjectListShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && return this->publishCommandShrink_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline PublishObjectListShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // publishCommandShrink Field Functions 
    bool hasPublishCommandShrink() const { return this->publishCommandShrink_ != nullptr;};
    void deletePublishCommandShrink() { this->publishCommandShrink_ = nullptr;};
    inline string publishCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(publishCommandShrink_, "") };
    inline PublishObjectListShrinkRequest& setPublishCommandShrink(string publishCommandShrink) { DARABONBA_PTR_SET_VALUE(publishCommandShrink_, publishCommandShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> publishCommandShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
