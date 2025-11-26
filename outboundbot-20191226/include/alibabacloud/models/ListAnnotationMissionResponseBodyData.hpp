// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTANNOTATIONMISSIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTANNOTATIONMISSIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAnnotationMissionResponseBodyDataAnnotationMissionList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListAnnotationMissionResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAnnotationMissionResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AnnotationMissionList, annotationMissionList_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalPageCount, totalPageCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAnnotationMissionResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AnnotationMissionList, annotationMissionList_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalPageCount, totalPageCount_);
    };
    ListAnnotationMissionResponseBodyData() = default ;
    ListAnnotationMissionResponseBodyData(const ListAnnotationMissionResponseBodyData &) = default ;
    ListAnnotationMissionResponseBodyData(ListAnnotationMissionResponseBodyData &&) = default ;
    ListAnnotationMissionResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAnnotationMissionResponseBodyData() = default ;
    ListAnnotationMissionResponseBodyData& operator=(const ListAnnotationMissionResponseBodyData &) = default ;
    ListAnnotationMissionResponseBodyData& operator=(ListAnnotationMissionResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->annotationMissionList_ == nullptr
        && return this->message_ == nullptr && return this->pageIndex_ == nullptr && return this->pageSize_ == nullptr && return this->success_ == nullptr && return this->totalCount_ == nullptr
        && return this->totalPageCount_ == nullptr; };
    // annotationMissionList Field Functions 
    bool hasAnnotationMissionList() const { return this->annotationMissionList_ != nullptr;};
    void deleteAnnotationMissionList() { this->annotationMissionList_ = nullptr;};
    inline const vector<Models::ListAnnotationMissionResponseBodyDataAnnotationMissionList> & annotationMissionList() const { DARABONBA_PTR_GET_CONST(annotationMissionList_, vector<Models::ListAnnotationMissionResponseBodyDataAnnotationMissionList>) };
    inline vector<Models::ListAnnotationMissionResponseBodyDataAnnotationMissionList> annotationMissionList() { DARABONBA_PTR_GET(annotationMissionList_, vector<Models::ListAnnotationMissionResponseBodyDataAnnotationMissionList>) };
    inline ListAnnotationMissionResponseBodyData& setAnnotationMissionList(const vector<Models::ListAnnotationMissionResponseBodyDataAnnotationMissionList> & annotationMissionList) { DARABONBA_PTR_SET_VALUE(annotationMissionList_, annotationMissionList) };
    inline ListAnnotationMissionResponseBodyData& setAnnotationMissionList(vector<Models::ListAnnotationMissionResponseBodyDataAnnotationMissionList> && annotationMissionList) { DARABONBA_PTR_SET_RVALUE(annotationMissionList_, annotationMissionList) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAnnotationMissionResponseBodyData& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int64_t pageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0L) };
    inline ListAnnotationMissionResponseBodyData& setPageIndex(int64_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListAnnotationMissionResponseBodyData& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAnnotationMissionResponseBodyData& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListAnnotationMissionResponseBodyData& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPageCount Field Functions 
    bool hasTotalPageCount() const { return this->totalPageCount_ != nullptr;};
    void deleteTotalPageCount() { this->totalPageCount_ = nullptr;};
    inline int64_t totalPageCount() const { DARABONBA_PTR_GET_DEFAULT(totalPageCount_, 0L) };
    inline ListAnnotationMissionResponseBodyData& setTotalPageCount(int64_t totalPageCount) { DARABONBA_PTR_SET_VALUE(totalPageCount_, totalPageCount) };


  protected:
    std::shared_ptr<vector<Models::ListAnnotationMissionResponseBodyDataAnnotationMissionList>> annotationMissionList_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<int64_t> pageIndex_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
    std::shared_ptr<int64_t> totalPageCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
