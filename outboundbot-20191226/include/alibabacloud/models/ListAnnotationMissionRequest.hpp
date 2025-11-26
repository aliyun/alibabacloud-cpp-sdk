// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTANNOTATIONMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTANNOTATIONMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListAnnotationMissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAnnotationMissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AnnotationMissionId, annotationMissionId_);
      DARABONBA_PTR_TO_JSON(AnnotationMissionName, annotationMissionName_);
      DARABONBA_PTR_TO_JSON(AnnotationStatusListFilter, annotationStatusListFilter_);
      DARABONBA_PTR_TO_JSON(AnnotationStatusListStringFilter, annotationStatusListStringFilter_);
      DARABONBA_PTR_TO_JSON(CreateTimeEndFilter, createTimeEndFilter_);
      DARABONBA_PTR_TO_JSON(CreateTimeStartFilter, createTimeStartFilter_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListAnnotationMissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AnnotationMissionId, annotationMissionId_);
      DARABONBA_PTR_FROM_JSON(AnnotationMissionName, annotationMissionName_);
      DARABONBA_PTR_FROM_JSON(AnnotationStatusListFilter, annotationStatusListFilter_);
      DARABONBA_PTR_FROM_JSON(AnnotationStatusListStringFilter, annotationStatusListStringFilter_);
      DARABONBA_PTR_FROM_JSON(CreateTimeEndFilter, createTimeEndFilter_);
      DARABONBA_PTR_FROM_JSON(CreateTimeStartFilter, createTimeStartFilter_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListAnnotationMissionRequest() = default ;
    ListAnnotationMissionRequest(const ListAnnotationMissionRequest &) = default ;
    ListAnnotationMissionRequest(ListAnnotationMissionRequest &&) = default ;
    ListAnnotationMissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAnnotationMissionRequest() = default ;
    ListAnnotationMissionRequest& operator=(const ListAnnotationMissionRequest &) = default ;
    ListAnnotationMissionRequest& operator=(ListAnnotationMissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->annotationMissionId_ == nullptr
        && return this->annotationMissionName_ == nullptr && return this->annotationStatusListFilter_ == nullptr && return this->annotationStatusListStringFilter_ == nullptr && return this->createTimeEndFilter_ == nullptr && return this->createTimeStartFilter_ == nullptr
        && return this->instanceId_ == nullptr && return this->pageIndex_ == nullptr && return this->pageSize_ == nullptr; };
    // annotationMissionId Field Functions 
    bool hasAnnotationMissionId() const { return this->annotationMissionId_ != nullptr;};
    void deleteAnnotationMissionId() { this->annotationMissionId_ = nullptr;};
    inline string annotationMissionId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionId_, "") };
    inline ListAnnotationMissionRequest& setAnnotationMissionId(string annotationMissionId) { DARABONBA_PTR_SET_VALUE(annotationMissionId_, annotationMissionId) };


    // annotationMissionName Field Functions 
    bool hasAnnotationMissionName() const { return this->annotationMissionName_ != nullptr;};
    void deleteAnnotationMissionName() { this->annotationMissionName_ = nullptr;};
    inline string annotationMissionName() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionName_, "") };
    inline ListAnnotationMissionRequest& setAnnotationMissionName(string annotationMissionName) { DARABONBA_PTR_SET_VALUE(annotationMissionName_, annotationMissionName) };


    // annotationStatusListFilter Field Functions 
    bool hasAnnotationStatusListFilter() const { return this->annotationStatusListFilter_ != nullptr;};
    void deleteAnnotationStatusListFilter() { this->annotationStatusListFilter_ = nullptr;};
    inline const vector<int32_t> & annotationStatusListFilter() const { DARABONBA_PTR_GET_CONST(annotationStatusListFilter_, vector<int32_t>) };
    inline vector<int32_t> annotationStatusListFilter() { DARABONBA_PTR_GET(annotationStatusListFilter_, vector<int32_t>) };
    inline ListAnnotationMissionRequest& setAnnotationStatusListFilter(const vector<int32_t> & annotationStatusListFilter) { DARABONBA_PTR_SET_VALUE(annotationStatusListFilter_, annotationStatusListFilter) };
    inline ListAnnotationMissionRequest& setAnnotationStatusListFilter(vector<int32_t> && annotationStatusListFilter) { DARABONBA_PTR_SET_RVALUE(annotationStatusListFilter_, annotationStatusListFilter) };


    // annotationStatusListStringFilter Field Functions 
    bool hasAnnotationStatusListStringFilter() const { return this->annotationStatusListStringFilter_ != nullptr;};
    void deleteAnnotationStatusListStringFilter() { this->annotationStatusListStringFilter_ = nullptr;};
    inline string annotationStatusListStringFilter() const { DARABONBA_PTR_GET_DEFAULT(annotationStatusListStringFilter_, "") };
    inline ListAnnotationMissionRequest& setAnnotationStatusListStringFilter(string annotationStatusListStringFilter) { DARABONBA_PTR_SET_VALUE(annotationStatusListStringFilter_, annotationStatusListStringFilter) };


    // createTimeEndFilter Field Functions 
    bool hasCreateTimeEndFilter() const { return this->createTimeEndFilter_ != nullptr;};
    void deleteCreateTimeEndFilter() { this->createTimeEndFilter_ = nullptr;};
    inline int64_t createTimeEndFilter() const { DARABONBA_PTR_GET_DEFAULT(createTimeEndFilter_, 0L) };
    inline ListAnnotationMissionRequest& setCreateTimeEndFilter(int64_t createTimeEndFilter) { DARABONBA_PTR_SET_VALUE(createTimeEndFilter_, createTimeEndFilter) };


    // createTimeStartFilter Field Functions 
    bool hasCreateTimeStartFilter() const { return this->createTimeStartFilter_ != nullptr;};
    void deleteCreateTimeStartFilter() { this->createTimeStartFilter_ = nullptr;};
    inline int64_t createTimeStartFilter() const { DARABONBA_PTR_GET_DEFAULT(createTimeStartFilter_, 0L) };
    inline ListAnnotationMissionRequest& setCreateTimeStartFilter(int64_t createTimeStartFilter) { DARABONBA_PTR_SET_VALUE(createTimeStartFilter_, createTimeStartFilter) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListAnnotationMissionRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t pageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline ListAnnotationMissionRequest& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAnnotationMissionRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    std::shared_ptr<string> annotationMissionId_ = nullptr;
    std::shared_ptr<string> annotationMissionName_ = nullptr;
    std::shared_ptr<vector<int32_t>> annotationStatusListFilter_ = nullptr;
    std::shared_ptr<string> annotationStatusListStringFilter_ = nullptr;
    std::shared_ptr<int64_t> createTimeEndFilter_ = nullptr;
    std::shared_ptr<int64_t> createTimeStartFilter_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int32_t> pageIndex_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
