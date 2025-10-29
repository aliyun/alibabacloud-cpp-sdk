// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEHTTPSDOMAINLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEHTTPSDOMAINLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveHttpsDomainListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveHttpsDomainListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveHttpsDomainListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeLiveHttpsDomainListRequest() = default ;
    DescribeLiveHttpsDomainListRequest(const DescribeLiveHttpsDomainListRequest &) = default ;
    DescribeLiveHttpsDomainListRequest(DescribeLiveHttpsDomainListRequest &&) = default ;
    DescribeLiveHttpsDomainListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveHttpsDomainListRequest() = default ;
    DescribeLiveHttpsDomainListRequest& operator=(const DescribeLiveHttpsDomainListRequest &) = default ;
    DescribeLiveHttpsDomainListRequest& operator=(DescribeLiveHttpsDomainListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyword_ == nullptr
        && return this->ownerId_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->regionId_ == nullptr; };
    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline DescribeLiveHttpsDomainListRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeLiveHttpsDomainListRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeLiveHttpsDomainListRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLiveHttpsDomainListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeLiveHttpsDomainListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The accelerated domain name.
    std::shared_ptr<string> keyword_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The page number. Valid values: **1 to 10000**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: **20**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
