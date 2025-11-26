// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEANNOTATIONMISSIONTAGINFOLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEANNOTATIONMISSIONTAGINFOLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SaveAnnotationMissionTagInfoListRequestAnnotationMissionTagInfoList.hpp>
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
    virtual bool empty() const override { return this->annotationMissionTagInfoList_ == nullptr
        && return this->annotationMissionTagInfoListJsonString_ == nullptr && return this->instanceId_ == nullptr && return this->reset_ == nullptr; };
    // annotationMissionTagInfoList Field Functions 
    bool hasAnnotationMissionTagInfoList() const { return this->annotationMissionTagInfoList_ != nullptr;};
    void deleteAnnotationMissionTagInfoList() { this->annotationMissionTagInfoList_ = nullptr;};
    inline const vector<SaveAnnotationMissionTagInfoListRequestAnnotationMissionTagInfoList> & annotationMissionTagInfoList() const { DARABONBA_PTR_GET_CONST(annotationMissionTagInfoList_, vector<SaveAnnotationMissionTagInfoListRequestAnnotationMissionTagInfoList>) };
    inline vector<SaveAnnotationMissionTagInfoListRequestAnnotationMissionTagInfoList> annotationMissionTagInfoList() { DARABONBA_PTR_GET(annotationMissionTagInfoList_, vector<SaveAnnotationMissionTagInfoListRequestAnnotationMissionTagInfoList>) };
    inline SaveAnnotationMissionTagInfoListRequest& setAnnotationMissionTagInfoList(const vector<SaveAnnotationMissionTagInfoListRequestAnnotationMissionTagInfoList> & annotationMissionTagInfoList) { DARABONBA_PTR_SET_VALUE(annotationMissionTagInfoList_, annotationMissionTagInfoList) };
    inline SaveAnnotationMissionTagInfoListRequest& setAnnotationMissionTagInfoList(vector<SaveAnnotationMissionTagInfoListRequestAnnotationMissionTagInfoList> && annotationMissionTagInfoList) { DARABONBA_PTR_SET_RVALUE(annotationMissionTagInfoList_, annotationMissionTagInfoList) };


    // annotationMissionTagInfoListJsonString Field Functions 
    bool hasAnnotationMissionTagInfoListJsonString() const { return this->annotationMissionTagInfoListJsonString_ != nullptr;};
    void deleteAnnotationMissionTagInfoListJsonString() { this->annotationMissionTagInfoListJsonString_ = nullptr;};
    inline string annotationMissionTagInfoListJsonString() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionTagInfoListJsonString_, "") };
    inline SaveAnnotationMissionTagInfoListRequest& setAnnotationMissionTagInfoListJsonString(string annotationMissionTagInfoListJsonString) { DARABONBA_PTR_SET_VALUE(annotationMissionTagInfoListJsonString_, annotationMissionTagInfoListJsonString) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SaveAnnotationMissionTagInfoListRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // reset Field Functions 
    bool hasReset() const { return this->reset_ != nullptr;};
    void deleteReset() { this->reset_ = nullptr;};
    inline bool reset() const { DARABONBA_PTR_GET_DEFAULT(reset_, false) };
    inline SaveAnnotationMissionTagInfoListRequest& setReset(bool reset) { DARABONBA_PTR_SET_VALUE(reset_, reset) };


  protected:
    std::shared_ptr<vector<SaveAnnotationMissionTagInfoListRequestAnnotationMissionTagInfoList>> annotationMissionTagInfoList_ = nullptr;
    std::shared_ptr<string> annotationMissionTagInfoListJsonString_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<bool> reset_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
