// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLESDLPROTECTEDASSETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLESDLPROTECTEDASSETREQUEST_HPP_
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
  class EnableSdlProtectedAssetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableSdlProtectedAssetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IpList, ipList_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, EnableSdlProtectedAssetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IpList, ipList_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    EnableSdlProtectedAssetRequest() = default ;
    EnableSdlProtectedAssetRequest(const EnableSdlProtectedAssetRequest &) = default ;
    EnableSdlProtectedAssetRequest(EnableSdlProtectedAssetRequest &&) = default ;
    EnableSdlProtectedAssetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableSdlProtectedAssetRequest() = default ;
    EnableSdlProtectedAssetRequest& operator=(const EnableSdlProtectedAssetRequest &) = default ;
    EnableSdlProtectedAssetRequest& operator=(EnableSdlProtectedAssetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipList_ == nullptr
        && this->lang_ == nullptr; };
    // ipList Field Functions 
    bool hasIpList() const { return this->ipList_ != nullptr;};
    void deleteIpList() { this->ipList_ = nullptr;};
    inline const vector<string> & getIpList() const { DARABONBA_PTR_GET_CONST(ipList_, vector<string>) };
    inline vector<string> getIpList() { DARABONBA_PTR_GET(ipList_, vector<string>) };
    inline EnableSdlProtectedAssetRequest& setIpList(const vector<string> & ipList) { DARABONBA_PTR_SET_VALUE(ipList_, ipList) };
    inline EnableSdlProtectedAssetRequest& setIpList(vector<string> && ipList) { DARABONBA_PTR_SET_RVALUE(ipList_, ipList) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline EnableSdlProtectedAssetRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    shared_ptr<vector<string>> ipList_ {};
    shared_ptr<string> lang_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
