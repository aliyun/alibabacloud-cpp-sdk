// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELISTFACEVERIFYINFOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELISTFACEVERIFYINFOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeListFaceVerifyInfosResponseBodyFaceVerifyInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeListFaceVerifyInfosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeListFaceVerifyInfosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FaceVerifyInfos, faceVerifyInfos_);
      DARABONBA_PTR_TO_JSON(ItemsPerPage, itemsPerPage_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeListFaceVerifyInfosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FaceVerifyInfos, faceVerifyInfos_);
      DARABONBA_PTR_FROM_JSON(ItemsPerPage, itemsPerPage_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
    };
    DescribeListFaceVerifyInfosResponseBody() = default ;
    DescribeListFaceVerifyInfosResponseBody(const DescribeListFaceVerifyInfosResponseBody &) = default ;
    DescribeListFaceVerifyInfosResponseBody(DescribeListFaceVerifyInfosResponseBody &&) = default ;
    DescribeListFaceVerifyInfosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeListFaceVerifyInfosResponseBody() = default ;
    DescribeListFaceVerifyInfosResponseBody& operator=(const DescribeListFaceVerifyInfosResponseBody &) = default ;
    DescribeListFaceVerifyInfosResponseBody& operator=(DescribeListFaceVerifyInfosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->faceVerifyInfos_ == nullptr
        && return this->itemsPerPage_ == nullptr && return this->pageNumber_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr && return this->totalPages_ == nullptr; };
    // faceVerifyInfos Field Functions 
    bool hasFaceVerifyInfos() const { return this->faceVerifyInfos_ != nullptr;};
    void deleteFaceVerifyInfos() { this->faceVerifyInfos_ = nullptr;};
    inline const vector<DescribeListFaceVerifyInfosResponseBodyFaceVerifyInfos> & faceVerifyInfos() const { DARABONBA_PTR_GET_CONST(faceVerifyInfos_, vector<DescribeListFaceVerifyInfosResponseBodyFaceVerifyInfos>) };
    inline vector<DescribeListFaceVerifyInfosResponseBodyFaceVerifyInfos> faceVerifyInfos() { DARABONBA_PTR_GET(faceVerifyInfos_, vector<DescribeListFaceVerifyInfosResponseBodyFaceVerifyInfos>) };
    inline DescribeListFaceVerifyInfosResponseBody& setFaceVerifyInfos(const vector<DescribeListFaceVerifyInfosResponseBodyFaceVerifyInfos> & faceVerifyInfos) { DARABONBA_PTR_SET_VALUE(faceVerifyInfos_, faceVerifyInfos) };
    inline DescribeListFaceVerifyInfosResponseBody& setFaceVerifyInfos(vector<DescribeListFaceVerifyInfosResponseBodyFaceVerifyInfos> && faceVerifyInfos) { DARABONBA_PTR_SET_RVALUE(faceVerifyInfos_, faceVerifyInfos) };


    // itemsPerPage Field Functions 
    bool hasItemsPerPage() const { return this->itemsPerPage_ != nullptr;};
    void deleteItemsPerPage() { this->itemsPerPage_ = nullptr;};
    inline int32_t itemsPerPage() const { DARABONBA_PTR_GET_DEFAULT(itemsPerPage_, 0) };
    inline DescribeListFaceVerifyInfosResponseBody& setItemsPerPage(int32_t itemsPerPage) { DARABONBA_PTR_SET_VALUE(itemsPerPage_, itemsPerPage) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeListFaceVerifyInfosResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeListFaceVerifyInfosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeListFaceVerifyInfosResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t totalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline DescribeListFaceVerifyInfosResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    // List of face verification records.
    std::shared_ptr<vector<DescribeListFaceVerifyInfosResponseBodyFaceVerifyInfos>> faceVerifyInfos_ = nullptr;
    // Number of items per page.
    std::shared_ptr<int32_t> itemsPerPage_ = nullptr;
    // Pagination parameter: current page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // ID of the current request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Total number of verifications.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // Total number of pages.
    std::shared_ptr<int32_t> totalPages_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
