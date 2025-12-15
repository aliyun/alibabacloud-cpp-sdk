// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAVAILABLEIMAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAVAILABLEIMAGESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAvailableImagesResponseBodyImages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListAvailableImagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAvailableImagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Images, images_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAvailableImagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Images, images_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAvailableImagesResponseBody() = default ;
    ListAvailableImagesResponseBody(const ListAvailableImagesResponseBody &) = default ;
    ListAvailableImagesResponseBody(ListAvailableImagesResponseBody &&) = default ;
    ListAvailableImagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAvailableImagesResponseBody() = default ;
    ListAvailableImagesResponseBody& operator=(const ListAvailableImagesResponseBody &) = default ;
    ListAvailableImagesResponseBody& operator=(ListAvailableImagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->images_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr && return this->totalCount_ == nullptr; };
    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const vector<ListAvailableImagesResponseBodyImages> & images() const { DARABONBA_PTR_GET_CONST(images_, vector<ListAvailableImagesResponseBodyImages>) };
    inline vector<ListAvailableImagesResponseBodyImages> images() { DARABONBA_PTR_GET(images_, vector<ListAvailableImagesResponseBodyImages>) };
    inline ListAvailableImagesResponseBody& setImages(const vector<ListAvailableImagesResponseBodyImages> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline ListAvailableImagesResponseBody& setImages(vector<ListAvailableImagesResponseBodyImages> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListAvailableImagesResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListAvailableImagesResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAvailableImagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAvailableImagesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListAvailableImagesResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the images.
    std::shared_ptr<vector<ListAvailableImagesResponseBodyImages>> images_ = nullptr;
    // The page number of the returned page.
    // 
    // *   Pages start from page 1.
    // *   Default value: 1.
    std::shared_ptr<string> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<string> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true: The request was successful.
    // *   false: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
