// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRIVATEDNSDOMAINNAMELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRIVATEDNSDOMAINNAMELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribePrivateDnsDomainNameListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePrivateDnsDomainNameListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessInstanceId, accessInstanceId_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePrivateDnsDomainNameListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessInstanceId, accessInstanceId_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
    };
    DescribePrivateDnsDomainNameListRequest() = default ;
    DescribePrivateDnsDomainNameListRequest(const DescribePrivateDnsDomainNameListRequest &) = default ;
    DescribePrivateDnsDomainNameListRequest(DescribePrivateDnsDomainNameListRequest &&) = default ;
    DescribePrivateDnsDomainNameListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePrivateDnsDomainNameListRequest() = default ;
    DescribePrivateDnsDomainNameListRequest& operator=(const DescribePrivateDnsDomainNameListRequest &) = default ;
    DescribePrivateDnsDomainNameListRequest& operator=(DescribePrivateDnsDomainNameListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessInstanceId_ == nullptr
        && this->domainName_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->regionNo_ == nullptr; };
    // accessInstanceId Field Functions 
    bool hasAccessInstanceId() const { return this->accessInstanceId_ != nullptr;};
    void deleteAccessInstanceId() { this->accessInstanceId_ = nullptr;};
    inline string getAccessInstanceId() const { DARABONBA_PTR_GET_DEFAULT(accessInstanceId_, "") };
    inline DescribePrivateDnsDomainNameListRequest& setAccessInstanceId(string accessInstanceId) { DARABONBA_PTR_SET_VALUE(accessInstanceId_, accessInstanceId) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribePrivateDnsDomainNameListRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline DescribePrivateDnsDomainNameListRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribePrivateDnsDomainNameListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribePrivateDnsDomainNameListRequest& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


  protected:
    // This parameter is required.
    shared_ptr<string> accessInstanceId_ {};
    shared_ptr<string> domainName_ {};
    shared_ptr<int32_t> pageNo_ {};
    shared_ptr<int32_t> pageSize_ {};
    // This parameter is required.
    shared_ptr<string> regionNo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
