// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKMOBILESCARDSUPPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKMOBILESCARDSUPPORTREQUEST_HPP_
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
  class CheckMobilesCardSupportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckMobilesCardSupportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Mobiles, mobiles_);
      DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
    };
    friend void from_json(const Darabonba::Json& j, CheckMobilesCardSupportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Mobiles, mobiles_);
      DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
    };
    CheckMobilesCardSupportRequest() = default ;
    CheckMobilesCardSupportRequest(const CheckMobilesCardSupportRequest &) = default ;
    CheckMobilesCardSupportRequest(CheckMobilesCardSupportRequest &&) = default ;
    CheckMobilesCardSupportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckMobilesCardSupportRequest() = default ;
    CheckMobilesCardSupportRequest& operator=(const CheckMobilesCardSupportRequest &) = default ;
    CheckMobilesCardSupportRequest& operator=(CheckMobilesCardSupportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mobiles_ == nullptr
        && return this->templateCode_ == nullptr; };
    // mobiles Field Functions 
    bool hasMobiles() const { return this->mobiles_ != nullptr;};
    void deleteMobiles() { this->mobiles_ = nullptr;};
    inline const vector<Darabonba::Json> & mobiles() const { DARABONBA_PTR_GET_CONST(mobiles_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> mobiles() { DARABONBA_PTR_GET(mobiles_, vector<Darabonba::Json>) };
    inline CheckMobilesCardSupportRequest& setMobiles(const vector<Darabonba::Json> & mobiles) { DARABONBA_PTR_SET_VALUE(mobiles_, mobiles) };
    inline CheckMobilesCardSupportRequest& setMobiles(vector<Darabonba::Json> && mobiles) { DARABONBA_PTR_SET_RVALUE(mobiles_, mobiles) };


    // templateCode Field Functions 
    bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
    void deleteTemplateCode() { this->templateCode_ = nullptr;};
    inline string templateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
    inline CheckMobilesCardSupportRequest& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


  protected:
    // The list of mobile phone numbers that receive messages.
    // 
    // This parameter is required.
    std::shared_ptr<vector<Darabonba::Json>> mobiles_ = nullptr;
    // The code of the message template. You can view the template code in the **Template Code** column on the **Templates** tab of the **Go China** page in the Alibaba Cloud SMS console.
    // 
    // > Make sure that the message template has been approved.
    // 
    // This parameter is required.
    std::shared_ptr<string> templateCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
