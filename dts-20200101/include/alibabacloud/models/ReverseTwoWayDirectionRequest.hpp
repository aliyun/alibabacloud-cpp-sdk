// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVERSETWOWAYDIRECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REVERSETWOWAYDIRECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class ReverseTwoWayDirectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReverseTwoWayDirectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DtsInstanceId, dtsInstanceId_);
      DARABONBA_PTR_TO_JSON(IgnoreErrorSubJob, ignoreErrorSubJob_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ReverseTwoWayDirectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DtsInstanceId, dtsInstanceId_);
      DARABONBA_PTR_FROM_JSON(IgnoreErrorSubJob, ignoreErrorSubJob_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    ReverseTwoWayDirectionRequest() = default ;
    ReverseTwoWayDirectionRequest(const ReverseTwoWayDirectionRequest &) = default ;
    ReverseTwoWayDirectionRequest(ReverseTwoWayDirectionRequest &&) = default ;
    ReverseTwoWayDirectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReverseTwoWayDirectionRequest() = default ;
    ReverseTwoWayDirectionRequest& operator=(const ReverseTwoWayDirectionRequest &) = default ;
    ReverseTwoWayDirectionRequest& operator=(ReverseTwoWayDirectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dtsInstanceId_ == nullptr
        && this->ignoreErrorSubJob_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr; };
    // dtsInstanceId Field Functions 
    bool hasDtsInstanceId() const { return this->dtsInstanceId_ != nullptr;};
    void deleteDtsInstanceId() { this->dtsInstanceId_ = nullptr;};
    inline string getDtsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dtsInstanceId_, "") };
    inline ReverseTwoWayDirectionRequest& setDtsInstanceId(string dtsInstanceId) { DARABONBA_PTR_SET_VALUE(dtsInstanceId_, dtsInstanceId) };


    // ignoreErrorSubJob Field Functions 
    bool hasIgnoreErrorSubJob() const { return this->ignoreErrorSubJob_ != nullptr;};
    void deleteIgnoreErrorSubJob() { this->ignoreErrorSubJob_ = nullptr;};
    inline bool getIgnoreErrorSubJob() const { DARABONBA_PTR_GET_DEFAULT(ignoreErrorSubJob_, false) };
    inline ReverseTwoWayDirectionRequest& setIgnoreErrorSubJob(bool ignoreErrorSubJob) { DARABONBA_PTR_SET_VALUE(ignoreErrorSubJob_, ignoreErrorSubJob) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ReverseTwoWayDirectionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ReverseTwoWayDirectionRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    shared_ptr<string> dtsInstanceId_ {};
    shared_ptr<bool> ignoreErrorSubJob_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
