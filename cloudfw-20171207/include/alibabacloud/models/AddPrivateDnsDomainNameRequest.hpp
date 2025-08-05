// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDPRIVATEDNSDOMAINNAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDPRIVATEDNSDOMAINNAMEREQUEST_HPP_
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
  class AddPrivateDnsDomainNameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddPrivateDnsDomainNameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessInstanceId, accessInstanceId_);
      DARABONBA_PTR_TO_JSON(DomainNameList, domainNameList_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
    };
    friend void from_json(const Darabonba::Json& j, AddPrivateDnsDomainNameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessInstanceId, accessInstanceId_);
      DARABONBA_PTR_FROM_JSON(DomainNameList, domainNameList_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
    };
    AddPrivateDnsDomainNameRequest() = default ;
    AddPrivateDnsDomainNameRequest(const AddPrivateDnsDomainNameRequest &) = default ;
    AddPrivateDnsDomainNameRequest(AddPrivateDnsDomainNameRequest &&) = default ;
    AddPrivateDnsDomainNameRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddPrivateDnsDomainNameRequest() = default ;
    AddPrivateDnsDomainNameRequest& operator=(const AddPrivateDnsDomainNameRequest &) = default ;
    AddPrivateDnsDomainNameRequest& operator=(AddPrivateDnsDomainNameRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessInstanceId_ != nullptr
        && this->domainNameList_ != nullptr && this->regionNo_ != nullptr; };
    // accessInstanceId Field Functions 
    bool hasAccessInstanceId() const { return this->accessInstanceId_ != nullptr;};
    void deleteAccessInstanceId() { this->accessInstanceId_ = nullptr;};
    inline string accessInstanceId() const { DARABONBA_PTR_GET_DEFAULT(accessInstanceId_, "") };
    inline AddPrivateDnsDomainNameRequest& setAccessInstanceId(string accessInstanceId) { DARABONBA_PTR_SET_VALUE(accessInstanceId_, accessInstanceId) };


    // domainNameList Field Functions 
    bool hasDomainNameList() const { return this->domainNameList_ != nullptr;};
    void deleteDomainNameList() { this->domainNameList_ = nullptr;};
    inline const vector<string> & domainNameList() const { DARABONBA_PTR_GET_CONST(domainNameList_, vector<string>) };
    inline vector<string> domainNameList() { DARABONBA_PTR_GET(domainNameList_, vector<string>) };
    inline AddPrivateDnsDomainNameRequest& setDomainNameList(const vector<string> & domainNameList) { DARABONBA_PTR_SET_VALUE(domainNameList_, domainNameList) };
    inline AddPrivateDnsDomainNameRequest& setDomainNameList(vector<string> && domainNameList) { DARABONBA_PTR_SET_RVALUE(domainNameList_, domainNameList) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline AddPrivateDnsDomainNameRequest& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> accessInstanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> domainNameList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
