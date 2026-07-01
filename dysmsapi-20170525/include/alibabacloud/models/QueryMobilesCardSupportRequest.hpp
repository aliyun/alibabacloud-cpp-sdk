// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMOBILESCARDSUPPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMOBILESCARDSUPPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class QueryMobilesCardSupportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMobilesCardSupportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EncryptType, encryptType_);
      DARABONBA_PTR_TO_JSON(Mobiles, mobiles_);
      DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMobilesCardSupportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EncryptType, encryptType_);
      DARABONBA_PTR_FROM_JSON(Mobiles, mobiles_);
      DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
    };
    QueryMobilesCardSupportRequest() = default ;
    QueryMobilesCardSupportRequest(const QueryMobilesCardSupportRequest &) = default ;
    QueryMobilesCardSupportRequest(QueryMobilesCardSupportRequest &&) = default ;
    QueryMobilesCardSupportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMobilesCardSupportRequest() = default ;
    QueryMobilesCardSupportRequest& operator=(const QueryMobilesCardSupportRequest &) = default ;
    QueryMobilesCardSupportRequest& operator=(QueryMobilesCardSupportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->encryptType_ == nullptr
        && this->mobiles_ == nullptr && this->templateCode_ == nullptr; };
    // encryptType Field Functions 
    bool hasEncryptType() const { return this->encryptType_ != nullptr;};
    void deleteEncryptType() { this->encryptType_ = nullptr;};
    inline string getEncryptType() const { DARABONBA_PTR_GET_DEFAULT(encryptType_, "") };
    inline QueryMobilesCardSupportRequest& setEncryptType(string encryptType) { DARABONBA_PTR_SET_VALUE(encryptType_, encryptType) };


    // mobiles Field Functions 
    bool hasMobiles() const { return this->mobiles_ != nullptr;};
    void deleteMobiles() { this->mobiles_ = nullptr;};
    inline const vector<Darabonba::Json> & getMobiles() const { DARABONBA_PTR_GET_CONST(mobiles_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getMobiles() { DARABONBA_PTR_GET(mobiles_, vector<Darabonba::Json>) };
    inline QueryMobilesCardSupportRequest& setMobiles(const vector<Darabonba::Json> & mobiles) { DARABONBA_PTR_SET_VALUE(mobiles_, mobiles) };
    inline QueryMobilesCardSupportRequest& setMobiles(vector<Darabonba::Json> && mobiles) { DARABONBA_PTR_SET_RVALUE(mobiles_, mobiles) };


    // templateCode Field Functions 
    bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
    void deleteTemplateCode() { this->templateCode_ = nullptr;};
    inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
    inline QueryMobilesCardSupportRequest& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


  protected:
    // The encryption method for the phone number. Valid values:
    // - SHA1: SHA1 encryption.
    // - NORMAL: no encryption. The phone number is transmitted in plaintext.
    shared_ptr<string> encryptType_ {};
    // The list of phone numbers.
    // 
    // This parameter is required.
    shared_ptr<vector<Darabonba::Json>> mobiles_ {};
    // The code of the card SMS template. To view the code, log on to the console and choose **Domestic Messages** > [Template Management](https://dysms.console.aliyun.com/domestic/text/template).
    // 
    // >The template must be added and approved.
    // 
    // This parameter is required.
    shared_ptr<string> templateCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
