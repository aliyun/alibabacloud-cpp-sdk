// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INITMULTIPARTFILEUPLOADSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INITMULTIPARTFILEUPLOADSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class InitMultipartFileUploadShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InitMultipartFileUploadShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Option, optionShrink_);
      DARABONBA_PTR_TO_JSON(ParentDentryUuid, parentDentryUuid_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
    };
    friend void from_json(const Darabonba::Json& j, InitMultipartFileUploadShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Option, optionShrink_);
      DARABONBA_PTR_FROM_JSON(ParentDentryUuid, parentDentryUuid_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
    };
    InitMultipartFileUploadShrinkRequest() = default ;
    InitMultipartFileUploadShrinkRequest(const InitMultipartFileUploadShrinkRequest &) = default ;
    InitMultipartFileUploadShrinkRequest(InitMultipartFileUploadShrinkRequest &&) = default ;
    InitMultipartFileUploadShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InitMultipartFileUploadShrinkRequest() = default ;
    InitMultipartFileUploadShrinkRequest& operator=(const InitMultipartFileUploadShrinkRequest &) = default ;
    InitMultipartFileUploadShrinkRequest& operator=(InitMultipartFileUploadShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->optionShrink_ == nullptr
        && this->parentDentryUuid_ == nullptr && this->tenantContextShrink_ == nullptr; };
    // optionShrink Field Functions 
    bool hasOptionShrink() const { return this->optionShrink_ != nullptr;};
    void deleteOptionShrink() { this->optionShrink_ = nullptr;};
    inline string getOptionShrink() const { DARABONBA_PTR_GET_DEFAULT(optionShrink_, "") };
    inline InitMultipartFileUploadShrinkRequest& setOptionShrink(string optionShrink) { DARABONBA_PTR_SET_VALUE(optionShrink_, optionShrink) };


    // parentDentryUuid Field Functions 
    bool hasParentDentryUuid() const { return this->parentDentryUuid_ != nullptr;};
    void deleteParentDentryUuid() { this->parentDentryUuid_ = nullptr;};
    inline string getParentDentryUuid() const { DARABONBA_PTR_GET_DEFAULT(parentDentryUuid_, "") };
    inline InitMultipartFileUploadShrinkRequest& setParentDentryUuid(string parentDentryUuid) { DARABONBA_PTR_SET_VALUE(parentDentryUuid_, parentDentryUuid) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string getTenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline InitMultipartFileUploadShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


  protected:
    shared_ptr<string> optionShrink_ {};
    shared_ptr<string> parentDentryUuid_ {};
    shared_ptr<string> tenantContextShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
