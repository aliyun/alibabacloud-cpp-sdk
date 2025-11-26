// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETANNOTATIONMISSIONSUMMARYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETANNOTATIONMISSIONSUMMARYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAnnotationMissionSummaryResponseBodyDataAsrSummaryInfo.hpp>
#include <alibabacloud/models/GetAnnotationMissionSummaryResponseBodyDataIntentSummaryInfo.hpp>
#include <alibabacloud/models/GetAnnotationMissionSummaryResponseBodyDataTagSummaryInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class GetAnnotationMissionSummaryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAnnotationMissionSummaryResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AnnotationMissionId, annotationMissionId_);
      DARABONBA_PTR_TO_JSON(AsrSummaryInfo, asrSummaryInfo_);
      DARABONBA_PTR_TO_JSON(IntentSummaryInfo, intentSummaryInfo_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TagSummaryInfo, tagSummaryInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetAnnotationMissionSummaryResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AnnotationMissionId, annotationMissionId_);
      DARABONBA_PTR_FROM_JSON(AsrSummaryInfo, asrSummaryInfo_);
      DARABONBA_PTR_FROM_JSON(IntentSummaryInfo, intentSummaryInfo_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TagSummaryInfo, tagSummaryInfo_);
    };
    GetAnnotationMissionSummaryResponseBodyData() = default ;
    GetAnnotationMissionSummaryResponseBodyData(const GetAnnotationMissionSummaryResponseBodyData &) = default ;
    GetAnnotationMissionSummaryResponseBodyData(GetAnnotationMissionSummaryResponseBodyData &&) = default ;
    GetAnnotationMissionSummaryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAnnotationMissionSummaryResponseBodyData() = default ;
    GetAnnotationMissionSummaryResponseBodyData& operator=(const GetAnnotationMissionSummaryResponseBodyData &) = default ;
    GetAnnotationMissionSummaryResponseBodyData& operator=(GetAnnotationMissionSummaryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->annotationMissionId_ == nullptr
        && return this->asrSummaryInfo_ == nullptr && return this->intentSummaryInfo_ == nullptr && return this->message_ == nullptr && return this->success_ == nullptr && return this->tagSummaryInfo_ == nullptr; };
    // annotationMissionId Field Functions 
    bool hasAnnotationMissionId() const { return this->annotationMissionId_ != nullptr;};
    void deleteAnnotationMissionId() { this->annotationMissionId_ = nullptr;};
    inline string annotationMissionId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionId_, "") };
    inline GetAnnotationMissionSummaryResponseBodyData& setAnnotationMissionId(string annotationMissionId) { DARABONBA_PTR_SET_VALUE(annotationMissionId_, annotationMissionId) };


    // asrSummaryInfo Field Functions 
    bool hasAsrSummaryInfo() const { return this->asrSummaryInfo_ != nullptr;};
    void deleteAsrSummaryInfo() { this->asrSummaryInfo_ = nullptr;};
    inline const Models::GetAnnotationMissionSummaryResponseBodyDataAsrSummaryInfo & asrSummaryInfo() const { DARABONBA_PTR_GET_CONST(asrSummaryInfo_, Models::GetAnnotationMissionSummaryResponseBodyDataAsrSummaryInfo) };
    inline Models::GetAnnotationMissionSummaryResponseBodyDataAsrSummaryInfo asrSummaryInfo() { DARABONBA_PTR_GET(asrSummaryInfo_, Models::GetAnnotationMissionSummaryResponseBodyDataAsrSummaryInfo) };
    inline GetAnnotationMissionSummaryResponseBodyData& setAsrSummaryInfo(const Models::GetAnnotationMissionSummaryResponseBodyDataAsrSummaryInfo & asrSummaryInfo) { DARABONBA_PTR_SET_VALUE(asrSummaryInfo_, asrSummaryInfo) };
    inline GetAnnotationMissionSummaryResponseBodyData& setAsrSummaryInfo(Models::GetAnnotationMissionSummaryResponseBodyDataAsrSummaryInfo && asrSummaryInfo) { DARABONBA_PTR_SET_RVALUE(asrSummaryInfo_, asrSummaryInfo) };


    // intentSummaryInfo Field Functions 
    bool hasIntentSummaryInfo() const { return this->intentSummaryInfo_ != nullptr;};
    void deleteIntentSummaryInfo() { this->intentSummaryInfo_ = nullptr;};
    inline const Models::GetAnnotationMissionSummaryResponseBodyDataIntentSummaryInfo & intentSummaryInfo() const { DARABONBA_PTR_GET_CONST(intentSummaryInfo_, Models::GetAnnotationMissionSummaryResponseBodyDataIntentSummaryInfo) };
    inline Models::GetAnnotationMissionSummaryResponseBodyDataIntentSummaryInfo intentSummaryInfo() { DARABONBA_PTR_GET(intentSummaryInfo_, Models::GetAnnotationMissionSummaryResponseBodyDataIntentSummaryInfo) };
    inline GetAnnotationMissionSummaryResponseBodyData& setIntentSummaryInfo(const Models::GetAnnotationMissionSummaryResponseBodyDataIntentSummaryInfo & intentSummaryInfo) { DARABONBA_PTR_SET_VALUE(intentSummaryInfo_, intentSummaryInfo) };
    inline GetAnnotationMissionSummaryResponseBodyData& setIntentSummaryInfo(Models::GetAnnotationMissionSummaryResponseBodyDataIntentSummaryInfo && intentSummaryInfo) { DARABONBA_PTR_SET_RVALUE(intentSummaryInfo_, intentSummaryInfo) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAnnotationMissionSummaryResponseBodyData& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAnnotationMissionSummaryResponseBodyData& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tagSummaryInfo Field Functions 
    bool hasTagSummaryInfo() const { return this->tagSummaryInfo_ != nullptr;};
    void deleteTagSummaryInfo() { this->tagSummaryInfo_ = nullptr;};
    inline const Models::GetAnnotationMissionSummaryResponseBodyDataTagSummaryInfo & tagSummaryInfo() const { DARABONBA_PTR_GET_CONST(tagSummaryInfo_, Models::GetAnnotationMissionSummaryResponseBodyDataTagSummaryInfo) };
    inline Models::GetAnnotationMissionSummaryResponseBodyDataTagSummaryInfo tagSummaryInfo() { DARABONBA_PTR_GET(tagSummaryInfo_, Models::GetAnnotationMissionSummaryResponseBodyDataTagSummaryInfo) };
    inline GetAnnotationMissionSummaryResponseBodyData& setTagSummaryInfo(const Models::GetAnnotationMissionSummaryResponseBodyDataTagSummaryInfo & tagSummaryInfo) { DARABONBA_PTR_SET_VALUE(tagSummaryInfo_, tagSummaryInfo) };
    inline GetAnnotationMissionSummaryResponseBodyData& setTagSummaryInfo(Models::GetAnnotationMissionSummaryResponseBodyDataTagSummaryInfo && tagSummaryInfo) { DARABONBA_PTR_SET_RVALUE(tagSummaryInfo_, tagSummaryInfo) };


  protected:
    std::shared_ptr<string> annotationMissionId_ = nullptr;
    std::shared_ptr<Models::GetAnnotationMissionSummaryResponseBodyDataAsrSummaryInfo> asrSummaryInfo_ = nullptr;
    std::shared_ptr<Models::GetAnnotationMissionSummaryResponseBodyDataIntentSummaryInfo> intentSummaryInfo_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<Models::GetAnnotationMissionSummaryResponseBodyDataTagSummaryInfo> tagSummaryInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
