// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRISKLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRISKLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetRiskListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRiskListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartIndex, startIndex_);
    };
    friend void from_json(const Darabonba::Json& j, GetRiskListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartIndex, startIndex_);
    };
    GetRiskListRequest() = default ;
    GetRiskListRequest(const GetRiskListRequest &) = default ;
    GetRiskListRequest(GetRiskListRequest &&) = default ;
    GetRiskListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRiskListRequest() = default ;
    GetRiskListRequest& operator=(const GetRiskListRequest &) = default ;
    GetRiskListRequest& operator=(GetRiskListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->pageSize_ == nullptr && return this->regionId_ == nullptr && return this->startIndex_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetRiskListRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline GetRiskListRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetRiskListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startIndex Field Functions 
    bool hasStartIndex() const { return this->startIndex_ != nullptr;};
    void deleteStartIndex() { this->startIndex_ = nullptr;};
    inline int64_t startIndex() const { DARABONBA_PTR_GET_DEFAULT(startIndex_, 0L) };
    inline GetRiskListRequest& setStartIndex(int64_t startIndex) { DARABONBA_PTR_SET_VALUE(startIndex_, startIndex) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<int64_t> startIndex_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
