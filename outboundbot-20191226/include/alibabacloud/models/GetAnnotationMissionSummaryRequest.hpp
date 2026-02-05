// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETANNOTATIONMISSIONSUMMARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETANNOTATIONMISSIONSUMMARYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class GetAnnotationMissionSummaryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAnnotationMissionSummaryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AnnotationMissionId, annotationMissionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAnnotationMissionSummaryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AnnotationMissionId, annotationMissionId_);
    };
    GetAnnotationMissionSummaryRequest() = default ;
    GetAnnotationMissionSummaryRequest(const GetAnnotationMissionSummaryRequest &) = default ;
    GetAnnotationMissionSummaryRequest(GetAnnotationMissionSummaryRequest &&) = default ;
    GetAnnotationMissionSummaryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAnnotationMissionSummaryRequest() = default ;
    GetAnnotationMissionSummaryRequest& operator=(const GetAnnotationMissionSummaryRequest &) = default ;
    GetAnnotationMissionSummaryRequest& operator=(GetAnnotationMissionSummaryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->annotationMissionId_ == nullptr; };
    // annotationMissionId Field Functions 
    bool hasAnnotationMissionId() const { return this->annotationMissionId_ != nullptr;};
    void deleteAnnotationMissionId() { this->annotationMissionId_ = nullptr;};
    inline string getAnnotationMissionId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionId_, "") };
    inline GetAnnotationMissionSummaryRequest& setAnnotationMissionId(string annotationMissionId) { DARABONBA_PTR_SET_VALUE(annotationMissionId_, annotationMissionId) };


  protected:
    shared_ptr<string> annotationMissionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
