// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPRIVATEDNSDOMAINNAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPRIVATEDNSDOMAINNAMEREQUEST_HPP_
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
  class DeletePrivateDnsDomainNameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePrivateDnsDomainNameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessInstanceId, accessInstanceId_);
      DARABONBA_PTR_TO_JSON(DomainNameList, domainNameList_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePrivateDnsDomainNameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessInstanceId, accessInstanceId_);
      DARABONBA_PTR_FROM_JSON(DomainNameList, domainNameList_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
    };
    DeletePrivateDnsDomainNameRequest() = default ;
    DeletePrivateDnsDomainNameRequest(const DeletePrivateDnsDomainNameRequest &) = default ;
    DeletePrivateDnsDomainNameRequest(DeletePrivateDnsDomainNameRequest &&) = default ;
    DeletePrivateDnsDomainNameRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePrivateDnsDomainNameRequest() = default ;
    DeletePrivateDnsDomainNameRequest& operator=(const DeletePrivateDnsDomainNameRequest &) = default ;
    DeletePrivateDnsDomainNameRequest& operator=(DeletePrivateDnsDomainNameRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessInstanceId_ == nullptr
        && return this->domainNameList_ == nullptr && return this->regionNo_ == nullptr; };
    // accessInstanceId Field Functions 
    bool hasAccessInstanceId() const { return this->accessInstanceId_ != nullptr;};
    void deleteAccessInstanceId() { this->accessInstanceId_ = nullptr;};
    inline string accessInstanceId() const { DARABONBA_PTR_GET_DEFAULT(accessInstanceId_, "") };
    inline DeletePrivateDnsDomainNameRequest& setAccessInstanceId(string accessInstanceId) { DARABONBA_PTR_SET_VALUE(accessInstanceId_, accessInstanceId) };


    // domainNameList Field Functions 
    bool hasDomainNameList() const { return this->domainNameList_ != nullptr;};
    void deleteDomainNameList() { this->domainNameList_ = nullptr;};
    inline const vector<string> & domainNameList() const { DARABONBA_PTR_GET_CONST(domainNameList_, vector<string>) };
    inline vector<string> domainNameList() { DARABONBA_PTR_GET(domainNameList_, vector<string>) };
    inline DeletePrivateDnsDomainNameRequest& setDomainNameList(const vector<string> & domainNameList) { DARABONBA_PTR_SET_VALUE(domainNameList_, domainNameList) };
    inline DeletePrivateDnsDomainNameRequest& setDomainNameList(vector<string> && domainNameList) { DARABONBA_PTR_SET_RVALUE(domainNameList_, domainNameList) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DeletePrivateDnsDomainNameRequest& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


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
