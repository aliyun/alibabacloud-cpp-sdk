// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLISHSTANDARDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUBLISHSTANDARDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class PublishStandardShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublishStandardShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(PublishCommand, publishCommandShrink_);
    };
    friend void from_json(const Darabonba::Json& j, PublishStandardShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(PublishCommand, publishCommandShrink_);
    };
    PublishStandardShrinkRequest() = default ;
    PublishStandardShrinkRequest(const PublishStandardShrinkRequest &) = default ;
    PublishStandardShrinkRequest(PublishStandardShrinkRequest &&) = default ;
    PublishStandardShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublishStandardShrinkRequest() = default ;
    PublishStandardShrinkRequest& operator=(const PublishStandardShrinkRequest &) = default ;
    PublishStandardShrinkRequest& operator=(PublishStandardShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->publishCommandShrink_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline PublishStandardShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // publishCommandShrink Field Functions 
    bool hasPublishCommandShrink() const { return this->publishCommandShrink_ != nullptr;};
    void deletePublishCommandShrink() { this->publishCommandShrink_ = nullptr;};
    inline string getPublishCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(publishCommandShrink_, "") };
    inline PublishStandardShrinkRequest& setPublishCommandShrink(string publishCommandShrink) { DARABONBA_PTR_SET_VALUE(publishCommandShrink_, publishCommandShrink) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<string> publishCommandShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
