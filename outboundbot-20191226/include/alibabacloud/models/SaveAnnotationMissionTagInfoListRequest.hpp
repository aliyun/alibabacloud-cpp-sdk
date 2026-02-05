// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEANNOTATIONMISSIONTAGINFOLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEANNOTATIONMISSIONTAGINFOLISTREQUEST_HPP_
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
  class SaveAnnotationMissionTagInfoListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveAnnotationMissionTagInfoListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AnnotationMissionTagInfoList, annotationMissionTagInfoList_);
      DARABONBA_PTR_TO_JSON(AnnotationMissionTagInfoListJsonString, annotationMissionTagInfoListJsonString_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Reset, reset_);
    };
    friend void from_json(const Darabonba::Json& j, SaveAnnotationMissionTagInfoListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AnnotationMissionTagInfoList, annotationMissionTagInfoList_);
      DARABONBA_PTR_FROM_JSON(AnnotationMissionTagInfoListJsonString, annotationMissionTagInfoListJsonString_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Reset, reset_);
    };
    SaveAnnotationMissionTagInfoListRequest() = default ;
    SaveAnnotationMissionTagInfoListRequest(const SaveAnnotationMissionTagInfoListRequest &) = default ;
    SaveAnnotationMissionTagInfoListRequest(SaveAnnotationMissionTagInfoListRequest &&) = default ;
    SaveAnnotationMissionTagInfoListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveAnnotationMissionTagInfoListRequest() = default ;
    SaveAnnotationMissionTagInfoListRequest& operator=(const SaveAnnotationMissionTagInfoListRequest &) = default ;
    SaveAnnotationMissionTagInfoListRequest& operator=(SaveAnnotationMissionTagInfoListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AnnotationMissionTagInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AnnotationMissionTagInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(AnnotationMissionTagInfoDescription, annotationMissionTagInfoDescription_);
        DARABONBA_PTR_TO_JSON(AnnotationMissionTagInfoId, annotationMissionTagInfoId_);
        DARABONBA_PTR_TO_JSON(AnnotationMissionTagInfoName, annotationMissionTagInfoName_);
        DARABONBA_PTR_TO_JSON(Delete, delete_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      };
      friend void from_json(const Darabonba::Json& j, AnnotationMissionTagInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(AnnotationMissionTagInfoDescription, annotationMissionTagInfoDescription_);
        DARABONBA_PTR_FROM_JSON(AnnotationMissionTagInfoId, annotationMissionTagInfoId_);
        DARABONBA_PTR_FROM_JSON(AnnotationMissionTagInfoName, annotationMissionTagInfoName_);
        DARABONBA_PTR_FROM_JSON(Delete, delete_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      };
      AnnotationMissionTagInfoList() = default ;
      AnnotationMissionTagInfoList(const AnnotationMissionTagInfoList &) = default ;
      AnnotationMissionTagInfoList(AnnotationMissionTagInfoList &&) = default ;
      AnnotationMissionTagInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AnnotationMissionTagInfoList() = default ;
      AnnotationMissionTagInfoList& operator=(const AnnotationMissionTagInfoList &) = default ;
      AnnotationMissionTagInfoList& operator=(AnnotationMissionTagInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->annotationMissionTagInfoDescription_ == nullptr
        && this->annotationMissionTagInfoId_ == nullptr && this->annotationMissionTagInfoName_ == nullptr && this->delete_ == nullptr && this->instanceId_ == nullptr && this->tenantId_ == nullptr; };
      // annotationMissionTagInfoDescription Field Functions 
      bool hasAnnotationMissionTagInfoDescription() const { return this->annotationMissionTagInfoDescription_ != nullptr;};
      void deleteAnnotationMissionTagInfoDescription() { this->annotationMissionTagInfoDescription_ = nullptr;};
      inline string getAnnotationMissionTagInfoDescription() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionTagInfoDescription_, "") };
      inline AnnotationMissionTagInfoList& setAnnotationMissionTagInfoDescription(string annotationMissionTagInfoDescription) { DARABONBA_PTR_SET_VALUE(annotationMissionTagInfoDescription_, annotationMissionTagInfoDescription) };


      // annotationMissionTagInfoId Field Functions 
      bool hasAnnotationMissionTagInfoId() const { return this->annotationMissionTagInfoId_ != nullptr;};
      void deleteAnnotationMissionTagInfoId() { this->annotationMissionTagInfoId_ = nullptr;};
      inline string getAnnotationMissionTagInfoId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionTagInfoId_, "") };
      inline AnnotationMissionTagInfoList& setAnnotationMissionTagInfoId(string annotationMissionTagInfoId) { DARABONBA_PTR_SET_VALUE(annotationMissionTagInfoId_, annotationMissionTagInfoId) };


      // annotationMissionTagInfoName Field Functions 
      bool hasAnnotationMissionTagInfoName() const { return this->annotationMissionTagInfoName_ != nullptr;};
      void deleteAnnotationMissionTagInfoName() { this->annotationMissionTagInfoName_ = nullptr;};
      inline string getAnnotationMissionTagInfoName() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionTagInfoName_, "") };
      inline AnnotationMissionTagInfoList& setAnnotationMissionTagInfoName(string annotationMissionTagInfoName) { DARABONBA_PTR_SET_VALUE(annotationMissionTagInfoName_, annotationMissionTagInfoName) };


      // delete Field Functions 
      bool hasDelete() const { return this->delete_ != nullptr;};
      void deleteDelete() { this->delete_ = nullptr;};
      inline bool getDelete() const { DARABONBA_PTR_GET_DEFAULT(delete_, false) };
      inline AnnotationMissionTagInfoList& setDelete(bool _delete) { DARABONBA_PTR_SET_VALUE(delete_, _delete) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline AnnotationMissionTagInfoList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline AnnotationMissionTagInfoList& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    protected:
      shared_ptr<string> annotationMissionTagInfoDescription_ {};
      // tag id
      shared_ptr<string> annotationMissionTagInfoId_ {};
      shared_ptr<string> annotationMissionTagInfoName_ {};
      shared_ptr<bool> delete_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> tenantId_ {};
    };

    virtual bool empty() const override { return this->annotationMissionTagInfoList_ == nullptr
        && this->annotationMissionTagInfoListJsonString_ == nullptr && this->instanceId_ == nullptr && this->reset_ == nullptr; };
    // annotationMissionTagInfoList Field Functions 
    bool hasAnnotationMissionTagInfoList() const { return this->annotationMissionTagInfoList_ != nullptr;};
    void deleteAnnotationMissionTagInfoList() { this->annotationMissionTagInfoList_ = nullptr;};
    inline const vector<SaveAnnotationMissionTagInfoListRequest::AnnotationMissionTagInfoList> & getAnnotationMissionTagInfoList() const { DARABONBA_PTR_GET_CONST(annotationMissionTagInfoList_, vector<SaveAnnotationMissionTagInfoListRequest::AnnotationMissionTagInfoList>) };
    inline vector<SaveAnnotationMissionTagInfoListRequest::AnnotationMissionTagInfoList> getAnnotationMissionTagInfoList() { DARABONBA_PTR_GET(annotationMissionTagInfoList_, vector<SaveAnnotationMissionTagInfoListRequest::AnnotationMissionTagInfoList>) };
    inline SaveAnnotationMissionTagInfoListRequest& setAnnotationMissionTagInfoList(const vector<SaveAnnotationMissionTagInfoListRequest::AnnotationMissionTagInfoList> & annotationMissionTagInfoList) { DARABONBA_PTR_SET_VALUE(annotationMissionTagInfoList_, annotationMissionTagInfoList) };
    inline SaveAnnotationMissionTagInfoListRequest& setAnnotationMissionTagInfoList(vector<SaveAnnotationMissionTagInfoListRequest::AnnotationMissionTagInfoList> && annotationMissionTagInfoList) { DARABONBA_PTR_SET_RVALUE(annotationMissionTagInfoList_, annotationMissionTagInfoList) };


    // annotationMissionTagInfoListJsonString Field Functions 
    bool hasAnnotationMissionTagInfoListJsonString() const { return this->annotationMissionTagInfoListJsonString_ != nullptr;};
    void deleteAnnotationMissionTagInfoListJsonString() { this->annotationMissionTagInfoListJsonString_ = nullptr;};
    inline string getAnnotationMissionTagInfoListJsonString() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionTagInfoListJsonString_, "") };
    inline SaveAnnotationMissionTagInfoListRequest& setAnnotationMissionTagInfoListJsonString(string annotationMissionTagInfoListJsonString) { DARABONBA_PTR_SET_VALUE(annotationMissionTagInfoListJsonString_, annotationMissionTagInfoListJsonString) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SaveAnnotationMissionTagInfoListRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // reset Field Functions 
    bool hasReset() const { return this->reset_ != nullptr;};
    void deleteReset() { this->reset_ = nullptr;};
    inline bool getReset() const { DARABONBA_PTR_GET_DEFAULT(reset_, false) };
    inline SaveAnnotationMissionTagInfoListRequest& setReset(bool reset) { DARABONBA_PTR_SET_VALUE(reset_, reset) };


  protected:
    shared_ptr<vector<SaveAnnotationMissionTagInfoListRequest::AnnotationMissionTagInfoList>> annotationMissionTagInfoList_ {};
    shared_ptr<string> annotationMissionTagInfoListJsonString_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<bool> reset_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
