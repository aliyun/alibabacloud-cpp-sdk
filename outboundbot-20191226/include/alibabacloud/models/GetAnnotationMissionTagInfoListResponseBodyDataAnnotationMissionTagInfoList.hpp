// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETANNOTATIONMISSIONTAGINFOLISTRESPONSEBODYDATAANNOTATIONMISSIONTAGINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_GETANNOTATIONMISSIONTAGINFOLISTRESPONSEBODYDATAANNOTATIONMISSIONTAGINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class GetAnnotationMissionTagInfoListResponseBodyDataAnnotationMissionTagInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAnnotationMissionTagInfoListResponseBodyDataAnnotationMissionTagInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(AnnotationMissionTagInfoDescription, annotationMissionTagInfoDescription_);
      DARABONBA_PTR_TO_JSON(AnnotationMissionTagInfoId, annotationMissionTagInfoId_);
      DARABONBA_PTR_TO_JSON(AnnotationMissionTagInfoName, annotationMissionTagInfoName_);
      DARABONBA_PTR_TO_JSON(Delete, delete_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAnnotationMissionTagInfoListResponseBodyDataAnnotationMissionTagInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(AnnotationMissionTagInfoDescription, annotationMissionTagInfoDescription_);
      DARABONBA_PTR_FROM_JSON(AnnotationMissionTagInfoId, annotationMissionTagInfoId_);
      DARABONBA_PTR_FROM_JSON(AnnotationMissionTagInfoName, annotationMissionTagInfoName_);
      DARABONBA_PTR_FROM_JSON(Delete, delete_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    GetAnnotationMissionTagInfoListResponseBodyDataAnnotationMissionTagInfoList() = default ;
    GetAnnotationMissionTagInfoListResponseBodyDataAnnotationMissionTagInfoList(const GetAnnotationMissionTagInfoListResponseBodyDataAnnotationMissionTagInfoList &) = default ;
    GetAnnotationMissionTagInfoListResponseBodyDataAnnotationMissionTagInfoList(GetAnnotationMissionTagInfoListResponseBodyDataAnnotationMissionTagInfoList &&) = default ;
    GetAnnotationMissionTagInfoListResponseBodyDataAnnotationMissionTagInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAnnotationMissionTagInfoListResponseBodyDataAnnotationMissionTagInfoList() = default ;
    GetAnnotationMissionTagInfoListResponseBodyDataAnnotationMissionTagInfoList& operator=(const GetAnnotationMissionTagInfoListResponseBodyDataAnnotationMissionTagInfoList &) = default ;
    GetAnnotationMissionTagInfoListResponseBodyDataAnnotationMissionTagInfoList& operator=(GetAnnotationMissionTagInfoListResponseBodyDataAnnotationMissionTagInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->annotationMissionTagInfoDescription_ == nullptr
        && return this->annotationMissionTagInfoId_ == nullptr && return this->annotationMissionTagInfoName_ == nullptr && return this->delete_ == nullptr && return this->instanceId_ == nullptr && return this->tenantId_ == nullptr; };
    // annotationMissionTagInfoDescription Field Functions 
    bool hasAnnotationMissionTagInfoDescription() const { return this->annotationMissionTagInfoDescription_ != nullptr;};
    void deleteAnnotationMissionTagInfoDescription() { this->annotationMissionTagInfoDescription_ = nullptr;};
    inline string annotationMissionTagInfoDescription() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionTagInfoDescription_, "") };
    inline GetAnnotationMissionTagInfoListResponseBodyDataAnnotationMissionTagInfoList& setAnnotationMissionTagInfoDescription(string annotationMissionTagInfoDescription) { DARABONBA_PTR_SET_VALUE(annotationMissionTagInfoDescription_, annotationMissionTagInfoDescription) };


    // annotationMissionTagInfoId Field Functions 
    bool hasAnnotationMissionTagInfoId() const { return this->annotationMissionTagInfoId_ != nullptr;};
    void deleteAnnotationMissionTagInfoId() { this->annotationMissionTagInfoId_ = nullptr;};
    inline string annotationMissionTagInfoId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionTagInfoId_, "") };
    inline GetAnnotationMissionTagInfoListResponseBodyDataAnnotationMissionTagInfoList& setAnnotationMissionTagInfoId(string annotationMissionTagInfoId) { DARABONBA_PTR_SET_VALUE(annotationMissionTagInfoId_, annotationMissionTagInfoId) };


    // annotationMissionTagInfoName Field Functions 
    bool hasAnnotationMissionTagInfoName() const { return this->annotationMissionTagInfoName_ != nullptr;};
    void deleteAnnotationMissionTagInfoName() { this->annotationMissionTagInfoName_ = nullptr;};
    inline string annotationMissionTagInfoName() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionTagInfoName_, "") };
    inline GetAnnotationMissionTagInfoListResponseBodyDataAnnotationMissionTagInfoList& setAnnotationMissionTagInfoName(string annotationMissionTagInfoName) { DARABONBA_PTR_SET_VALUE(annotationMissionTagInfoName_, annotationMissionTagInfoName) };


    // delete Field Functions 
    bool hasDelete() const { return this->delete_ != nullptr;};
    void deleteDelete() { this->delete_ = nullptr;};
    inline bool _delete() const { DARABONBA_PTR_GET_DEFAULT(delete_, false) };
    inline GetAnnotationMissionTagInfoListResponseBodyDataAnnotationMissionTagInfoList& setDelete(bool _delete) { DARABONBA_PTR_SET_VALUE(delete_, _delete) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetAnnotationMissionTagInfoListResponseBodyDataAnnotationMissionTagInfoList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetAnnotationMissionTagInfoListResponseBodyDataAnnotationMissionTagInfoList& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    std::shared_ptr<string> annotationMissionTagInfoDescription_ = nullptr;
    std::shared_ptr<string> annotationMissionTagInfoId_ = nullptr;
    std::shared_ptr<string> annotationMissionTagInfoName_ = nullptr;
    std::shared_ptr<bool> delete_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
