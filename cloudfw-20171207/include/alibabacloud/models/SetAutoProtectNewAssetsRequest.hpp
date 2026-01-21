// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETAUTOPROTECTNEWASSETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETAUTOPROTECTNEWASSETSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class SetAutoProtectNewAssetsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetAutoProtectNewAssetsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoProtect, autoProtect_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, SetAutoProtectNewAssetsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoProtect, autoProtect_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    SetAutoProtectNewAssetsRequest() = default ;
    SetAutoProtectNewAssetsRequest(const SetAutoProtectNewAssetsRequest &) = default ;
    SetAutoProtectNewAssetsRequest(SetAutoProtectNewAssetsRequest &&) = default ;
    SetAutoProtectNewAssetsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetAutoProtectNewAssetsRequest() = default ;
    SetAutoProtectNewAssetsRequest& operator=(const SetAutoProtectNewAssetsRequest &) = default ;
    SetAutoProtectNewAssetsRequest& operator=(SetAutoProtectNewAssetsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoProtect_ == nullptr
        && this->lang_ == nullptr && this->sourceIp_ == nullptr; };
    // autoProtect Field Functions 
    bool hasAutoProtect() const { return this->autoProtect_ != nullptr;};
    void deleteAutoProtect() { this->autoProtect_ = nullptr;};
    inline bool getAutoProtect() const { DARABONBA_PTR_GET_DEFAULT(autoProtect_, false) };
    inline SetAutoProtectNewAssetsRequest& setAutoProtect(bool autoProtect) { DARABONBA_PTR_SET_VALUE(autoProtect_, autoProtect) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SetAutoProtectNewAssetsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline SetAutoProtectNewAssetsRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // This parameter is required.
    shared_ptr<bool> autoProtect_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> sourceIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
