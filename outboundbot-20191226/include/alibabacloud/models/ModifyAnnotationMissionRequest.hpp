// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYANNOTATIONMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYANNOTATIONMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ModifyAnnotationMissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAnnotationMissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AnnotationMissionId, annotationMissionId_);
      DARABONBA_PTR_TO_JSON(AnnotationMissionName, annotationMissionName_);
      DARABONBA_PTR_TO_JSON(AnnotationStatus, annotationStatus_);
      DARABONBA_PTR_TO_JSON(Delete, delete_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAnnotationMissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AnnotationMissionId, annotationMissionId_);
      DARABONBA_PTR_FROM_JSON(AnnotationMissionName, annotationMissionName_);
      DARABONBA_PTR_FROM_JSON(AnnotationStatus, annotationStatus_);
      DARABONBA_PTR_FROM_JSON(Delete, delete_);
    };
    ModifyAnnotationMissionRequest() = default ;
    ModifyAnnotationMissionRequest(const ModifyAnnotationMissionRequest &) = default ;
    ModifyAnnotationMissionRequest(ModifyAnnotationMissionRequest &&) = default ;
    ModifyAnnotationMissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAnnotationMissionRequest() = default ;
    ModifyAnnotationMissionRequest& operator=(const ModifyAnnotationMissionRequest &) = default ;
    ModifyAnnotationMissionRequest& operator=(ModifyAnnotationMissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->annotationMissionId_ == nullptr
        && return this->annotationMissionName_ == nullptr && return this->annotationStatus_ == nullptr && return this->delete_ == nullptr; };
    // annotationMissionId Field Functions 
    bool hasAnnotationMissionId() const { return this->annotationMissionId_ != nullptr;};
    void deleteAnnotationMissionId() { this->annotationMissionId_ = nullptr;};
    inline string annotationMissionId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionId_, "") };
    inline ModifyAnnotationMissionRequest& setAnnotationMissionId(string annotationMissionId) { DARABONBA_PTR_SET_VALUE(annotationMissionId_, annotationMissionId) };


    // annotationMissionName Field Functions 
    bool hasAnnotationMissionName() const { return this->annotationMissionName_ != nullptr;};
    void deleteAnnotationMissionName() { this->annotationMissionName_ = nullptr;};
    inline string annotationMissionName() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionName_, "") };
    inline ModifyAnnotationMissionRequest& setAnnotationMissionName(string annotationMissionName) { DARABONBA_PTR_SET_VALUE(annotationMissionName_, annotationMissionName) };


    // annotationStatus Field Functions 
    bool hasAnnotationStatus() const { return this->annotationStatus_ != nullptr;};
    void deleteAnnotationStatus() { this->annotationStatus_ = nullptr;};
    inline int32_t annotationStatus() const { DARABONBA_PTR_GET_DEFAULT(annotationStatus_, 0) };
    inline ModifyAnnotationMissionRequest& setAnnotationStatus(int32_t annotationStatus) { DARABONBA_PTR_SET_VALUE(annotationStatus_, annotationStatus) };


    // delete Field Functions 
    bool hasDelete() const { return this->delete_ != nullptr;};
    void deleteDelete() { this->delete_ = nullptr;};
    inline bool _delete() const { DARABONBA_PTR_GET_DEFAULT(delete_, false) };
    inline ModifyAnnotationMissionRequest& setDelete(bool _delete) { DARABONBA_PTR_SET_VALUE(delete_, _delete) };


  protected:
    std::shared_ptr<string> annotationMissionId_ = nullptr;
    std::shared_ptr<string> annotationMissionName_ = nullptr;
    std::shared_ptr<int32_t> annotationStatus_ = nullptr;
    std::shared_ptr<bool> delete_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
