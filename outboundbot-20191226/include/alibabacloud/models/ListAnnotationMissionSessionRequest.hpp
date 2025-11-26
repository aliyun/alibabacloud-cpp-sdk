// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTANNOTATIONMISSIONSESSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTANNOTATIONMISSIONSESSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListAnnotationMissionSessionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAnnotationMissionSessionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AnnotationMissionId, annotationMissionId_);
      DARABONBA_PTR_TO_JSON(AnnotationMissionSessionId, annotationMissionSessionId_);
      DARABONBA_PTR_TO_JSON(Environment, environment_);
      DARABONBA_PTR_TO_JSON(IncludeStatusListJsonString, includeStatusListJsonString_);
      DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListAnnotationMissionSessionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AnnotationMissionId, annotationMissionId_);
      DARABONBA_PTR_FROM_JSON(AnnotationMissionSessionId, annotationMissionSessionId_);
      DARABONBA_PTR_FROM_JSON(Environment, environment_);
      DARABONBA_PTR_FROM_JSON(IncludeStatusListJsonString, includeStatusListJsonString_);
      DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListAnnotationMissionSessionRequest() = default ;
    ListAnnotationMissionSessionRequest(const ListAnnotationMissionSessionRequest &) = default ;
    ListAnnotationMissionSessionRequest(ListAnnotationMissionSessionRequest &&) = default ;
    ListAnnotationMissionSessionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAnnotationMissionSessionRequest() = default ;
    ListAnnotationMissionSessionRequest& operator=(const ListAnnotationMissionSessionRequest &) = default ;
    ListAnnotationMissionSessionRequest& operator=(ListAnnotationMissionSessionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->annotationMissionId_ == nullptr
        && return this->annotationMissionSessionId_ == nullptr && return this->environment_ == nullptr && return this->includeStatusListJsonString_ == nullptr && return this->pageIndex_ == nullptr && return this->pageSize_ == nullptr; };
    // annotationMissionId Field Functions 
    bool hasAnnotationMissionId() const { return this->annotationMissionId_ != nullptr;};
    void deleteAnnotationMissionId() { this->annotationMissionId_ = nullptr;};
    inline string annotationMissionId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionId_, "") };
    inline ListAnnotationMissionSessionRequest& setAnnotationMissionId(string annotationMissionId) { DARABONBA_PTR_SET_VALUE(annotationMissionId_, annotationMissionId) };


    // annotationMissionSessionId Field Functions 
    bool hasAnnotationMissionSessionId() const { return this->annotationMissionSessionId_ != nullptr;};
    void deleteAnnotationMissionSessionId() { this->annotationMissionSessionId_ = nullptr;};
    inline string annotationMissionSessionId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionSessionId_, "") };
    inline ListAnnotationMissionSessionRequest& setAnnotationMissionSessionId(string annotationMissionSessionId) { DARABONBA_PTR_SET_VALUE(annotationMissionSessionId_, annotationMissionSessionId) };


    // environment Field Functions 
    bool hasEnvironment() const { return this->environment_ != nullptr;};
    void deleteEnvironment() { this->environment_ = nullptr;};
    inline int32_t environment() const { DARABONBA_PTR_GET_DEFAULT(environment_, 0) };
    inline ListAnnotationMissionSessionRequest& setEnvironment(int32_t environment) { DARABONBA_PTR_SET_VALUE(environment_, environment) };


    // includeStatusListJsonString Field Functions 
    bool hasIncludeStatusListJsonString() const { return this->includeStatusListJsonString_ != nullptr;};
    void deleteIncludeStatusListJsonString() { this->includeStatusListJsonString_ = nullptr;};
    inline string includeStatusListJsonString() const { DARABONBA_PTR_GET_DEFAULT(includeStatusListJsonString_, "") };
    inline ListAnnotationMissionSessionRequest& setIncludeStatusListJsonString(string includeStatusListJsonString) { DARABONBA_PTR_SET_VALUE(includeStatusListJsonString_, includeStatusListJsonString) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t pageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline ListAnnotationMissionSessionRequest& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAnnotationMissionSessionRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    std::shared_ptr<string> annotationMissionId_ = nullptr;
    std::shared_ptr<string> annotationMissionSessionId_ = nullptr;
    std::shared_ptr<int32_t> environment_ = nullptr;
    std::shared_ptr<string> includeStatusListJsonString_ = nullptr;
    std::shared_ptr<int32_t> pageIndex_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
