// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETANNOTATIONMISSIONTAGINFOLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETANNOTATIONMISSIONTAGINFOLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class GetAnnotationMissionTagInfoListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAnnotationMissionTagInfoListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, GetAnnotationMissionTagInfoListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    GetAnnotationMissionTagInfoListRequest() = default ;
    GetAnnotationMissionTagInfoListRequest(const GetAnnotationMissionTagInfoListRequest &) = default ;
    GetAnnotationMissionTagInfoListRequest(GetAnnotationMissionTagInfoListRequest &&) = default ;
    GetAnnotationMissionTagInfoListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAnnotationMissionTagInfoListRequest() = default ;
    GetAnnotationMissionTagInfoListRequest& operator=(const GetAnnotationMissionTagInfoListRequest &) = default ;
    GetAnnotationMissionTagInfoListRequest& operator=(GetAnnotationMissionTagInfoListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->pageIndex_ == nullptr && return this->pageSize_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetAnnotationMissionTagInfoListRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t pageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline GetAnnotationMissionTagInfoListRequest& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetAnnotationMissionTagInfoListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int32_t> pageIndex_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
