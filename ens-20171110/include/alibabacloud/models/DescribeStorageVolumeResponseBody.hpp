// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTORAGEVOLUMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTORAGEVOLUMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeStorageVolumeResponseBodyStorageVolumes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeStorageVolumeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStorageVolumeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StorageVolumes, storageVolumes_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStorageVolumeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StorageVolumes, storageVolumes_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeStorageVolumeResponseBody() = default ;
    DescribeStorageVolumeResponseBody(const DescribeStorageVolumeResponseBody &) = default ;
    DescribeStorageVolumeResponseBody(DescribeStorageVolumeResponseBody &&) = default ;
    DescribeStorageVolumeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStorageVolumeResponseBody() = default ;
    DescribeStorageVolumeResponseBody& operator=(const DescribeStorageVolumeResponseBody &) = default ;
    DescribeStorageVolumeResponseBody& operator=(DescribeStorageVolumeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->storageVolumes_ != nullptr && this->totalCount_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeStorageVolumeResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeStorageVolumeResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeStorageVolumeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // storageVolumes Field Functions 
    bool hasStorageVolumes() const { return this->storageVolumes_ != nullptr;};
    void deleteStorageVolumes() { this->storageVolumes_ = nullptr;};
    inline const vector<DescribeStorageVolumeResponseBodyStorageVolumes> & storageVolumes() const { DARABONBA_PTR_GET_CONST(storageVolumes_, vector<DescribeStorageVolumeResponseBodyStorageVolumes>) };
    inline vector<DescribeStorageVolumeResponseBodyStorageVolumes> storageVolumes() { DARABONBA_PTR_GET(storageVolumes_, vector<DescribeStorageVolumeResponseBodyStorageVolumes>) };
    inline DescribeStorageVolumeResponseBody& setStorageVolumes(const vector<DescribeStorageVolumeResponseBodyStorageVolumes> & storageVolumes) { DARABONBA_PTR_SET_VALUE(storageVolumes_, storageVolumes) };
    inline DescribeStorageVolumeResponseBody& setStorageVolumes(vector<DescribeStorageVolumeResponseBodyStorageVolumes> && storageVolumes) { DARABONBA_PTR_SET_RVALUE(storageVolumes_, storageVolumes) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeStorageVolumeResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number. Default value: **1**.
    std::shared_ptr<string> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<string> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The list of returned results.
    std::shared_ptr<vector<DescribeStorageVolumeResponseBodyStorageVolumes>> storageVolumes_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
