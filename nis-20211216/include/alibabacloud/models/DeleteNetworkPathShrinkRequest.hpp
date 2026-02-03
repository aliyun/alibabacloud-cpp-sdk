// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETENETWORKPATHSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETENETWORKPATHSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class DeleteNetworkPathShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteNetworkPathShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkPathIds, networkPathIdsShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteNetworkPathShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkPathIds, networkPathIdsShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteNetworkPathShrinkRequest() = default ;
    DeleteNetworkPathShrinkRequest(const DeleteNetworkPathShrinkRequest &) = default ;
    DeleteNetworkPathShrinkRequest(DeleteNetworkPathShrinkRequest &&) = default ;
    DeleteNetworkPathShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteNetworkPathShrinkRequest() = default ;
    DeleteNetworkPathShrinkRequest& operator=(const DeleteNetworkPathShrinkRequest &) = default ;
    DeleteNetworkPathShrinkRequest& operator=(DeleteNetworkPathShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->networkPathIdsShrink_ == nullptr
        && this->regionId_ == nullptr; };
    // networkPathIdsShrink Field Functions 
    bool hasNetworkPathIdsShrink() const { return this->networkPathIdsShrink_ != nullptr;};
    void deleteNetworkPathIdsShrink() { this->networkPathIdsShrink_ = nullptr;};
    inline string getNetworkPathIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(networkPathIdsShrink_, "") };
    inline DeleteNetworkPathShrinkRequest& setNetworkPathIdsShrink(string networkPathIdsShrink) { DARABONBA_PTR_SET_VALUE(networkPathIdsShrink_, networkPathIdsShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteNetworkPathShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The IDs of network paths.
    // 
    // This parameter is required.
    shared_ptr<string> networkPathIdsShrink_ {};
    // The region ID of the network path that you want to delete.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
