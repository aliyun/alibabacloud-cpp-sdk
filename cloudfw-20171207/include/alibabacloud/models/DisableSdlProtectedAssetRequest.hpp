// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLESDLPROTECTEDASSETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISABLESDLPROTECTEDASSETREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DisableSdlProtectedAssetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableSdlProtectedAssetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IpList, ipList_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, DisableSdlProtectedAssetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IpList, ipList_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    DisableSdlProtectedAssetRequest() = default ;
    DisableSdlProtectedAssetRequest(const DisableSdlProtectedAssetRequest &) = default ;
    DisableSdlProtectedAssetRequest(DisableSdlProtectedAssetRequest &&) = default ;
    DisableSdlProtectedAssetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableSdlProtectedAssetRequest() = default ;
    DisableSdlProtectedAssetRequest& operator=(const DisableSdlProtectedAssetRequest &) = default ;
    DisableSdlProtectedAssetRequest& operator=(DisableSdlProtectedAssetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipList_ == nullptr
        && return this->lang_ == nullptr; };
    // ipList Field Functions 
    bool hasIpList() const { return this->ipList_ != nullptr;};
    void deleteIpList() { this->ipList_ = nullptr;};
    inline const vector<string> & ipList() const { DARABONBA_PTR_GET_CONST(ipList_, vector<string>) };
    inline vector<string> ipList() { DARABONBA_PTR_GET(ipList_, vector<string>) };
    inline DisableSdlProtectedAssetRequest& setIpList(const vector<string> & ipList) { DARABONBA_PTR_SET_VALUE(ipList_, ipList) };
    inline DisableSdlProtectedAssetRequest& setIpList(vector<string> && ipList) { DARABONBA_PTR_SET_RVALUE(ipList_, ipList) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DisableSdlProtectedAssetRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    std::shared_ptr<vector<string>> ipList_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
