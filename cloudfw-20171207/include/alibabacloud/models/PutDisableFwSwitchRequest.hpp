// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTDISABLEFWSWITCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTDISABLEFWSWITCHREQUEST_HPP_
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
  class PutDisableFwSwitchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutDisableFwSwitchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IpaddrList, ipaddrList_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegionList, regionList_);
      DARABONBA_PTR_TO_JSON(ResourceTypeList, resourceTypeList_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, PutDisableFwSwitchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IpaddrList, ipaddrList_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RegionList, regionList_);
      DARABONBA_PTR_FROM_JSON(ResourceTypeList, resourceTypeList_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    PutDisableFwSwitchRequest() = default ;
    PutDisableFwSwitchRequest(const PutDisableFwSwitchRequest &) = default ;
    PutDisableFwSwitchRequest(PutDisableFwSwitchRequest &&) = default ;
    PutDisableFwSwitchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutDisableFwSwitchRequest() = default ;
    PutDisableFwSwitchRequest& operator=(const PutDisableFwSwitchRequest &) = default ;
    PutDisableFwSwitchRequest& operator=(PutDisableFwSwitchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipaddrList_ == nullptr
        && return this->lang_ == nullptr && return this->regionList_ == nullptr && return this->resourceTypeList_ == nullptr && return this->sourceIp_ == nullptr; };
    // ipaddrList Field Functions 
    bool hasIpaddrList() const { return this->ipaddrList_ != nullptr;};
    void deleteIpaddrList() { this->ipaddrList_ = nullptr;};
    inline const vector<string> & ipaddrList() const { DARABONBA_PTR_GET_CONST(ipaddrList_, vector<string>) };
    inline vector<string> ipaddrList() { DARABONBA_PTR_GET(ipaddrList_, vector<string>) };
    inline PutDisableFwSwitchRequest& setIpaddrList(const vector<string> & ipaddrList) { DARABONBA_PTR_SET_VALUE(ipaddrList_, ipaddrList) };
    inline PutDisableFwSwitchRequest& setIpaddrList(vector<string> && ipaddrList) { DARABONBA_PTR_SET_RVALUE(ipaddrList_, ipaddrList) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline PutDisableFwSwitchRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regionList Field Functions 
    bool hasRegionList() const { return this->regionList_ != nullptr;};
    void deleteRegionList() { this->regionList_ = nullptr;};
    inline const vector<string> & regionList() const { DARABONBA_PTR_GET_CONST(regionList_, vector<string>) };
    inline vector<string> regionList() { DARABONBA_PTR_GET(regionList_, vector<string>) };
    inline PutDisableFwSwitchRequest& setRegionList(const vector<string> & regionList) { DARABONBA_PTR_SET_VALUE(regionList_, regionList) };
    inline PutDisableFwSwitchRequest& setRegionList(vector<string> && regionList) { DARABONBA_PTR_SET_RVALUE(regionList_, regionList) };


    // resourceTypeList Field Functions 
    bool hasResourceTypeList() const { return this->resourceTypeList_ != nullptr;};
    void deleteResourceTypeList() { this->resourceTypeList_ = nullptr;};
    inline const vector<string> & resourceTypeList() const { DARABONBA_PTR_GET_CONST(resourceTypeList_, vector<string>) };
    inline vector<string> resourceTypeList() { DARABONBA_PTR_GET(resourceTypeList_, vector<string>) };
    inline PutDisableFwSwitchRequest& setResourceTypeList(const vector<string> & resourceTypeList) { DARABONBA_PTR_SET_VALUE(resourceTypeList_, resourceTypeList) };
    inline PutDisableFwSwitchRequest& setResourceTypeList(vector<string> && resourceTypeList) { DARABONBA_PTR_SET_RVALUE(resourceTypeList_, resourceTypeList) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline PutDisableFwSwitchRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // The IP addresses.
    // 
    // >  You must specify at least one of the IpaddrList, RegionList, and ResourceTypeList parameters.
    std::shared_ptr<vector<string>> ipaddrList_ = nullptr;
    // The language of the content within the response. Valid values:
    // 
    // *   **zh**: Chinese (default)
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The regions.
    // 
    // >  You must specify at least one of the IpaddrList, RegionList, and ResourceTypeList parameters.
    std::shared_ptr<vector<string>> regionList_ = nullptr;
    // The types of the assets.
    // 
    // > You must specify at least one of the IpaddrList, RegionList, and ResourceTypeList parameters.
    std::shared_ptr<vector<string>> resourceTypeList_ = nullptr;
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
