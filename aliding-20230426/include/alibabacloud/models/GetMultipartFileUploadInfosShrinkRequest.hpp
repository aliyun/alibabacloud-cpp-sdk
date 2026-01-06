// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMULTIPARTFILEUPLOADINFOSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMULTIPARTFILEUPLOADINFOSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetMultipartFileUploadInfosShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMultipartFileUploadInfosShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Option, optionShrink_);
      DARABONBA_PTR_TO_JSON(PartNumbers, partNumbersShrink_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_TO_JSON(UploadKey, uploadKey_);
    };
    friend void from_json(const Darabonba::Json& j, GetMultipartFileUploadInfosShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Option, optionShrink_);
      DARABONBA_PTR_FROM_JSON(PartNumbers, partNumbersShrink_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_FROM_JSON(UploadKey, uploadKey_);
    };
    GetMultipartFileUploadInfosShrinkRequest() = default ;
    GetMultipartFileUploadInfosShrinkRequest(const GetMultipartFileUploadInfosShrinkRequest &) = default ;
    GetMultipartFileUploadInfosShrinkRequest(GetMultipartFileUploadInfosShrinkRequest &&) = default ;
    GetMultipartFileUploadInfosShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMultipartFileUploadInfosShrinkRequest() = default ;
    GetMultipartFileUploadInfosShrinkRequest& operator=(const GetMultipartFileUploadInfosShrinkRequest &) = default ;
    GetMultipartFileUploadInfosShrinkRequest& operator=(GetMultipartFileUploadInfosShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->optionShrink_ == nullptr
        && this->partNumbersShrink_ == nullptr && this->tenantContextShrink_ == nullptr && this->uploadKey_ == nullptr; };
    // optionShrink Field Functions 
    bool hasOptionShrink() const { return this->optionShrink_ != nullptr;};
    void deleteOptionShrink() { this->optionShrink_ = nullptr;};
    inline string getOptionShrink() const { DARABONBA_PTR_GET_DEFAULT(optionShrink_, "") };
    inline GetMultipartFileUploadInfosShrinkRequest& setOptionShrink(string optionShrink) { DARABONBA_PTR_SET_VALUE(optionShrink_, optionShrink) };


    // partNumbersShrink Field Functions 
    bool hasPartNumbersShrink() const { return this->partNumbersShrink_ != nullptr;};
    void deletePartNumbersShrink() { this->partNumbersShrink_ = nullptr;};
    inline string getPartNumbersShrink() const { DARABONBA_PTR_GET_DEFAULT(partNumbersShrink_, "") };
    inline GetMultipartFileUploadInfosShrinkRequest& setPartNumbersShrink(string partNumbersShrink) { DARABONBA_PTR_SET_VALUE(partNumbersShrink_, partNumbersShrink) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string getTenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline GetMultipartFileUploadInfosShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


    // uploadKey Field Functions 
    bool hasUploadKey() const { return this->uploadKey_ != nullptr;};
    void deleteUploadKey() { this->uploadKey_ = nullptr;};
    inline string getUploadKey() const { DARABONBA_PTR_GET_DEFAULT(uploadKey_, "") };
    inline GetMultipartFileUploadInfosShrinkRequest& setUploadKey(string uploadKey) { DARABONBA_PTR_SET_VALUE(uploadKey_, uploadKey) };


  protected:
    shared_ptr<string> optionShrink_ {};
    shared_ptr<string> partNumbersShrink_ {};
    shared_ptr<string> tenantContextShrink_ {};
    shared_ptr<string> uploadKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
