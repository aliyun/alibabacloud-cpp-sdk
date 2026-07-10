// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEWHITELISTSETTINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEWHITELISTSETTINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DeleteWhitelistSettingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteWhitelistSettingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ids, ids_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteWhitelistSettingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ids, ids_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    DeleteWhitelistSettingRequest() = default ;
    DeleteWhitelistSettingRequest(const DeleteWhitelistSettingRequest &) = default ;
    DeleteWhitelistSettingRequest(DeleteWhitelistSettingRequest &&) = default ;
    DeleteWhitelistSettingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteWhitelistSettingRequest() = default ;
    DeleteWhitelistSettingRequest& operator=(const DeleteWhitelistSettingRequest &) = default ;
    DeleteWhitelistSettingRequest& operator=(DeleteWhitelistSettingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ids_ == nullptr
        && this->lang_ == nullptr && this->serviceCode_ == nullptr && this->sourceIp_ == nullptr; };
    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline string getIds() const { DARABONBA_PTR_GET_DEFAULT(ids_, "") };
    inline DeleteWhitelistSettingRequest& setIds(string ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DeleteWhitelistSettingRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // serviceCode Field Functions 
    bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
    void deleteServiceCode() { this->serviceCode_ = nullptr;};
    inline string getServiceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
    inline DeleteWhitelistSettingRequest& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DeleteWhitelistSettingRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // The list of rule IDs to delete.
    // 
    // This parameter is required.
    shared_ptr<string> ids_ {};
    // The language of the user information to delete. Valid values:
    // - **zh**: Chinese.
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // The service code of the ID Verification product. Set the value to **antcloudauth**.
    // 
    // This parameter is required.
    shared_ptr<string> serviceCode_ {};
    // The source IP address of the visitor. CIDR format and IPv4 format are supported. Example: 10.0.3.0/24.
    shared_ptr<string> sourceIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
