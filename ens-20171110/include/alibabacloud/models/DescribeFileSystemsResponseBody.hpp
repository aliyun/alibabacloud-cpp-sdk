// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFileSystemsResponseBodyFileSystems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeFileSystemsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFileSystemsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FileSystems, fileSystems_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFileSystemsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSystems, fileSystems_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeFileSystemsResponseBody() = default ;
    DescribeFileSystemsResponseBody(const DescribeFileSystemsResponseBody &) = default ;
    DescribeFileSystemsResponseBody(DescribeFileSystemsResponseBody &&) = default ;
    DescribeFileSystemsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFileSystemsResponseBody() = default ;
    DescribeFileSystemsResponseBody& operator=(const DescribeFileSystemsResponseBody &) = default ;
    DescribeFileSystemsResponseBody& operator=(DescribeFileSystemsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileSystems_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // fileSystems Field Functions 
    bool hasFileSystems() const { return this->fileSystems_ != nullptr;};
    void deleteFileSystems() { this->fileSystems_ = nullptr;};
    inline const vector<DescribeFileSystemsResponseBodyFileSystems> & fileSystems() const { DARABONBA_PTR_GET_CONST(fileSystems_, vector<DescribeFileSystemsResponseBodyFileSystems>) };
    inline vector<DescribeFileSystemsResponseBodyFileSystems> fileSystems() { DARABONBA_PTR_GET(fileSystems_, vector<DescribeFileSystemsResponseBodyFileSystems>) };
    inline DescribeFileSystemsResponseBody& setFileSystems(const vector<DescribeFileSystemsResponseBodyFileSystems> & fileSystems) { DARABONBA_PTR_SET_VALUE(fileSystems_, fileSystems) };
    inline DescribeFileSystemsResponseBody& setFileSystems(vector<DescribeFileSystemsResponseBodyFileSystems> && fileSystems) { DARABONBA_PTR_SET_RVALUE(fileSystems_, fileSystems) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeFileSystemsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeFileSystemsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFileSystemsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeFileSystemsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the file systems.
    std::shared_ptr<vector<DescribeFileSystemsResponseBodyFileSystems>> fileSystems_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
