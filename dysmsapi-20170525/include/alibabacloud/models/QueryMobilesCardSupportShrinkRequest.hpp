// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMOBILESCARDSUPPORTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMOBILESCARDSUPPORTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class QueryMobilesCardSupportShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMobilesCardSupportShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EncryptType, encryptType_);
      DARABONBA_PTR_TO_JSON(Mobiles, mobilesShrink_);
      DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMobilesCardSupportShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EncryptType, encryptType_);
      DARABONBA_PTR_FROM_JSON(Mobiles, mobilesShrink_);
      DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
    };
    QueryMobilesCardSupportShrinkRequest() = default ;
    QueryMobilesCardSupportShrinkRequest(const QueryMobilesCardSupportShrinkRequest &) = default ;
    QueryMobilesCardSupportShrinkRequest(QueryMobilesCardSupportShrinkRequest &&) = default ;
    QueryMobilesCardSupportShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMobilesCardSupportShrinkRequest() = default ;
    QueryMobilesCardSupportShrinkRequest& operator=(const QueryMobilesCardSupportShrinkRequest &) = default ;
    QueryMobilesCardSupportShrinkRequest& operator=(QueryMobilesCardSupportShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->encryptType_ == nullptr
        && this->mobilesShrink_ == nullptr && this->templateCode_ == nullptr; };
    // encryptType Field Functions 
    bool hasEncryptType() const { return this->encryptType_ != nullptr;};
    void deleteEncryptType() { this->encryptType_ = nullptr;};
    inline string getEncryptType() const { DARABONBA_PTR_GET_DEFAULT(encryptType_, "") };
    inline QueryMobilesCardSupportShrinkRequest& setEncryptType(string encryptType) { DARABONBA_PTR_SET_VALUE(encryptType_, encryptType) };


    // mobilesShrink Field Functions 
    bool hasMobilesShrink() const { return this->mobilesShrink_ != nullptr;};
    void deleteMobilesShrink() { this->mobilesShrink_ = nullptr;};
    inline string getMobilesShrink() const { DARABONBA_PTR_GET_DEFAULT(mobilesShrink_, "") };
    inline QueryMobilesCardSupportShrinkRequest& setMobilesShrink(string mobilesShrink) { DARABONBA_PTR_SET_VALUE(mobilesShrink_, mobilesShrink) };


    // templateCode Field Functions 
    bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
    void deleteTemplateCode() { this->templateCode_ = nullptr;};
    inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
    inline QueryMobilesCardSupportShrinkRequest& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


  protected:
    shared_ptr<string> encryptType_ {};
    // The list of mobile phone numbers.
    // 
    // This parameter is required.
    shared_ptr<string> mobilesShrink_ {};
    // The code of the message template. You can view the template code in the **Template Code** column on the **Templates** tab of the **Go China** page in the Alibaba Cloud SMS console.
    // 
    // > Make sure that the message template has been approved.
    // 
    // This parameter is required.
    shared_ptr<string> templateCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
