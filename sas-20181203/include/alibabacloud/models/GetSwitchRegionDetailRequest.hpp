// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSWITCHREGIONDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSWITCHREGIONDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetSwitchRegionDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSwitchRegionDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetSwitchRegionDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetSwitchRegionDetailRequest() = default ;
    GetSwitchRegionDetailRequest(const GetSwitchRegionDetailRequest &) = default ;
    GetSwitchRegionDetailRequest(GetSwitchRegionDetailRequest &&) = default ;
    GetSwitchRegionDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSwitchRegionDetailRequest() = default ;
    GetSwitchRegionDetailRequest& operator=(const GetSwitchRegionDetailRequest &) = default ;
    GetSwitchRegionDetailRequest& operator=(GetSwitchRegionDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->type_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline GetSwitchRegionDetailRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetSwitchRegionDetailRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The language type for the request and response messages. Default value: **zh**. Valid values:
    // - **zh**: Chinese
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // The service switchover type. Valid values:
    // 
    // - **sg_switch**: The server connection is migrated from China to Singapore.
    // - **sls_meta_version_switch_stage_1**: The log analysis delivery field upgrade switchover.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
