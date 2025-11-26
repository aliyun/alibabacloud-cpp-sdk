// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTANNOTATIONMISSIONSESSIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTANNOTATIONMISSIONSESSIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListAnnotationMissionSessionResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAnnotationMissionSessionResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AnnotationMissionId, annotationMissionId_);
      DARABONBA_PTR_TO_JSON(AnnotationMissionSessionList, annotationMissionSessionList_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAnnotationMissionSessionResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AnnotationMissionId, annotationMissionId_);
      DARABONBA_PTR_FROM_JSON(AnnotationMissionSessionList, annotationMissionSessionList_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAnnotationMissionSessionResponseBodyData() = default ;
    ListAnnotationMissionSessionResponseBodyData(const ListAnnotationMissionSessionResponseBodyData &) = default ;
    ListAnnotationMissionSessionResponseBodyData(ListAnnotationMissionSessionResponseBodyData &&) = default ;
    ListAnnotationMissionSessionResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAnnotationMissionSessionResponseBodyData() = default ;
    ListAnnotationMissionSessionResponseBodyData& operator=(const ListAnnotationMissionSessionResponseBodyData &) = default ;
    ListAnnotationMissionSessionResponseBodyData& operator=(ListAnnotationMissionSessionResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->annotationMissionId_ == nullptr
        && return this->annotationMissionSessionList_ == nullptr && return this->message_ == nullptr && return this->success_ == nullptr && return this->totalCount_ == nullptr; };
    // annotationMissionId Field Functions 
    bool hasAnnotationMissionId() const { return this->annotationMissionId_ != nullptr;};
    void deleteAnnotationMissionId() { this->annotationMissionId_ = nullptr;};
    inline string annotationMissionId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionId_, "") };
    inline ListAnnotationMissionSessionResponseBodyData& setAnnotationMissionId(string annotationMissionId) { DARABONBA_PTR_SET_VALUE(annotationMissionId_, annotationMissionId) };


    // annotationMissionSessionList Field Functions 
    bool hasAnnotationMissionSessionList() const { return this->annotationMissionSessionList_ != nullptr;};
    void deleteAnnotationMissionSessionList() { this->annotationMissionSessionList_ = nullptr;};
    inline const vector<Models::ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionList> & annotationMissionSessionList() const { DARABONBA_PTR_GET_CONST(annotationMissionSessionList_, vector<Models::ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionList>) };
    inline vector<Models::ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionList> annotationMissionSessionList() { DARABONBA_PTR_GET(annotationMissionSessionList_, vector<Models::ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionList>) };
    inline ListAnnotationMissionSessionResponseBodyData& setAnnotationMissionSessionList(const vector<Models::ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionList> & annotationMissionSessionList) { DARABONBA_PTR_SET_VALUE(annotationMissionSessionList_, annotationMissionSessionList) };
    inline ListAnnotationMissionSessionResponseBodyData& setAnnotationMissionSessionList(vector<Models::ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionList> && annotationMissionSessionList) { DARABONBA_PTR_SET_RVALUE(annotationMissionSessionList_, annotationMissionSessionList) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAnnotationMissionSessionResponseBodyData& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAnnotationMissionSessionResponseBodyData& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListAnnotationMissionSessionResponseBodyData& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<string> annotationMissionId_ = nullptr;
    std::shared_ptr<vector<Models::ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionList>> annotationMissionSessionList_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
