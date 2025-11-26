// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEANNOTATIONMISSIONSESSIONLISTRESPONSEBODYDATASAVEANNOTATIONMISSIONSESSIONLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEANNOTATIONMISSIONSESSIONLISTRESPONSEBODYDATASAVEANNOTATIONMISSIONSESSIONLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class SaveAnnotationMissionSessionListResponseBodyDataSaveAnnotationMissionSessionListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveAnnotationMissionSessionListResponseBodyDataSaveAnnotationMissionSessionListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AnnotationMissionSessionListJsonString, annotationMissionSessionListJsonString_);
    };
    friend void from_json(const Darabonba::Json& j, SaveAnnotationMissionSessionListResponseBodyDataSaveAnnotationMissionSessionListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AnnotationMissionSessionListJsonString, annotationMissionSessionListJsonString_);
    };
    SaveAnnotationMissionSessionListResponseBodyDataSaveAnnotationMissionSessionListRequest() = default ;
    SaveAnnotationMissionSessionListResponseBodyDataSaveAnnotationMissionSessionListRequest(const SaveAnnotationMissionSessionListResponseBodyDataSaveAnnotationMissionSessionListRequest &) = default ;
    SaveAnnotationMissionSessionListResponseBodyDataSaveAnnotationMissionSessionListRequest(SaveAnnotationMissionSessionListResponseBodyDataSaveAnnotationMissionSessionListRequest &&) = default ;
    SaveAnnotationMissionSessionListResponseBodyDataSaveAnnotationMissionSessionListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveAnnotationMissionSessionListResponseBodyDataSaveAnnotationMissionSessionListRequest() = default ;
    SaveAnnotationMissionSessionListResponseBodyDataSaveAnnotationMissionSessionListRequest& operator=(const SaveAnnotationMissionSessionListResponseBodyDataSaveAnnotationMissionSessionListRequest &) = default ;
    SaveAnnotationMissionSessionListResponseBodyDataSaveAnnotationMissionSessionListRequest& operator=(SaveAnnotationMissionSessionListResponseBodyDataSaveAnnotationMissionSessionListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->annotationMissionSessionListJsonString_ == nullptr; };
    // annotationMissionSessionListJsonString Field Functions 
    bool hasAnnotationMissionSessionListJsonString() const { return this->annotationMissionSessionListJsonString_ != nullptr;};
    void deleteAnnotationMissionSessionListJsonString() { this->annotationMissionSessionListJsonString_ = nullptr;};
    inline string annotationMissionSessionListJsonString() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionSessionListJsonString_, "") };
    inline SaveAnnotationMissionSessionListResponseBodyDataSaveAnnotationMissionSessionListRequest& setAnnotationMissionSessionListJsonString(string annotationMissionSessionListJsonString) { DARABONBA_PTR_SET_VALUE(annotationMissionSessionListJsonString_, annotationMissionSessionListJsonString) };


  protected:
    std::shared_ptr<string> annotationMissionSessionListJsonString_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
