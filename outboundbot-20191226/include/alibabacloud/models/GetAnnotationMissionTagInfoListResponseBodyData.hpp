// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETANNOTATIONMISSIONTAGINFOLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETANNOTATIONMISSIONTAGINFOLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAnnotationMissionTagInfoListResponseBodyDataAnnotationMissionTagInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class GetAnnotationMissionTagInfoListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAnnotationMissionTagInfoListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AnnotationMissionTagInfoList, annotationMissionTagInfoList_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAnnotationMissionTagInfoListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AnnotationMissionTagInfoList, annotationMissionTagInfoList_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAnnotationMissionTagInfoListResponseBodyData() = default ;
    GetAnnotationMissionTagInfoListResponseBodyData(const GetAnnotationMissionTagInfoListResponseBodyData &) = default ;
    GetAnnotationMissionTagInfoListResponseBodyData(GetAnnotationMissionTagInfoListResponseBodyData &&) = default ;
    GetAnnotationMissionTagInfoListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAnnotationMissionTagInfoListResponseBodyData() = default ;
    GetAnnotationMissionTagInfoListResponseBodyData& operator=(const GetAnnotationMissionTagInfoListResponseBodyData &) = default ;
    GetAnnotationMissionTagInfoListResponseBodyData& operator=(GetAnnotationMissionTagInfoListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->annotationMissionTagInfoList_ == nullptr
        && return this->message_ == nullptr && return this->success_ == nullptr; };
    // annotationMissionTagInfoList Field Functions 
    bool hasAnnotationMissionTagInfoList() const { return this->annotationMissionTagInfoList_ != nullptr;};
    void deleteAnnotationMissionTagInfoList() { this->annotationMissionTagInfoList_ = nullptr;};
    inline const vector<Models::GetAnnotationMissionTagInfoListResponseBodyDataAnnotationMissionTagInfoList> & annotationMissionTagInfoList() const { DARABONBA_PTR_GET_CONST(annotationMissionTagInfoList_, vector<Models::GetAnnotationMissionTagInfoListResponseBodyDataAnnotationMissionTagInfoList>) };
    inline vector<Models::GetAnnotationMissionTagInfoListResponseBodyDataAnnotationMissionTagInfoList> annotationMissionTagInfoList() { DARABONBA_PTR_GET(annotationMissionTagInfoList_, vector<Models::GetAnnotationMissionTagInfoListResponseBodyDataAnnotationMissionTagInfoList>) };
    inline GetAnnotationMissionTagInfoListResponseBodyData& setAnnotationMissionTagInfoList(const vector<Models::GetAnnotationMissionTagInfoListResponseBodyDataAnnotationMissionTagInfoList> & annotationMissionTagInfoList) { DARABONBA_PTR_SET_VALUE(annotationMissionTagInfoList_, annotationMissionTagInfoList) };
    inline GetAnnotationMissionTagInfoListResponseBodyData& setAnnotationMissionTagInfoList(vector<Models::GetAnnotationMissionTagInfoListResponseBodyDataAnnotationMissionTagInfoList> && annotationMissionTagInfoList) { DARABONBA_PTR_SET_RVALUE(annotationMissionTagInfoList_, annotationMissionTagInfoList) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAnnotationMissionTagInfoListResponseBodyData& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAnnotationMissionTagInfoListResponseBodyData& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<vector<Models::GetAnnotationMissionTagInfoListResponseBodyDataAnnotationMissionTagInfoList>> annotationMissionTagInfoList_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
