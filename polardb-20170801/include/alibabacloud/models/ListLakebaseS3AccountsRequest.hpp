// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLAKEBASES3ACCOUNTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTLAKEBASES3ACCOUNTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ListLakebaseS3AccountsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLakebaseS3AccountsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PfsInstanceId, pfsInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListLakebaseS3AccountsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PfsInstanceId, pfsInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListLakebaseS3AccountsRequest() = default ;
    ListLakebaseS3AccountsRequest(const ListLakebaseS3AccountsRequest &) = default ;
    ListLakebaseS3AccountsRequest(ListLakebaseS3AccountsRequest &&) = default ;
    ListLakebaseS3AccountsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLakebaseS3AccountsRequest() = default ;
    ListLakebaseS3AccountsRequest& operator=(const ListLakebaseS3AccountsRequest &) = default ;
    ListLakebaseS3AccountsRequest& operator=(ListLakebaseS3AccountsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->pfsInstanceId_ == nullptr && this->regionId_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListLakebaseS3AccountsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListLakebaseS3AccountsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pfsInstanceId Field Functions 
    bool hasPfsInstanceId() const { return this->pfsInstanceId_ != nullptr;};
    void deletePfsInstanceId() { this->pfsInstanceId_ = nullptr;};
    inline string getPfsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(pfsInstanceId_, "") };
    inline ListLakebaseS3AccountsRequest& setPfsInstanceId(string pfsInstanceId) { DARABONBA_PTR_SET_VALUE(pfsInstanceId_, pfsInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListLakebaseS3AccountsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The PolarFS instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> pfsInstanceId_ {};
    // The region ID.
    // >You can call the [DescribeRegions](https://help.aliyun.com/document_detail/98041.html) operation to query region IDs.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
