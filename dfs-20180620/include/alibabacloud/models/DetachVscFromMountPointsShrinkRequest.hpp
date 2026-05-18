// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHVSCFROMMOUNTPOINTSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHVSCFROMMOUNTPOINTSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class DetachVscFromMountPointsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachVscFromMountPointsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DetachInfos, detachInfosShrink_);
      DARABONBA_PTR_TO_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_TO_JSON(UseAssumeRoleChkServerPerm, useAssumeRoleChkServerPerm_);
    };
    friend void from_json(const Darabonba::Json& j, DetachVscFromMountPointsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DetachInfos, detachInfosShrink_);
      DARABONBA_PTR_FROM_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_FROM_JSON(UseAssumeRoleChkServerPerm, useAssumeRoleChkServerPerm_);
    };
    DetachVscFromMountPointsShrinkRequest() = default ;
    DetachVscFromMountPointsShrinkRequest(const DetachVscFromMountPointsShrinkRequest &) = default ;
    DetachVscFromMountPointsShrinkRequest(DetachVscFromMountPointsShrinkRequest &&) = default ;
    DetachVscFromMountPointsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachVscFromMountPointsShrinkRequest() = default ;
    DetachVscFromMountPointsShrinkRequest& operator=(const DetachVscFromMountPointsShrinkRequest &) = default ;
    DetachVscFromMountPointsShrinkRequest& operator=(DetachVscFromMountPointsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->detachInfosShrink_ == nullptr
        && this->inputRegionId_ == nullptr && this->useAssumeRoleChkServerPerm_ == nullptr; };
    // detachInfosShrink Field Functions 
    bool hasDetachInfosShrink() const { return this->detachInfosShrink_ != nullptr;};
    void deleteDetachInfosShrink() { this->detachInfosShrink_ = nullptr;};
    inline string getDetachInfosShrink() const { DARABONBA_PTR_GET_DEFAULT(detachInfosShrink_, "") };
    inline DetachVscFromMountPointsShrinkRequest& setDetachInfosShrink(string detachInfosShrink) { DARABONBA_PTR_SET_VALUE(detachInfosShrink_, detachInfosShrink) };


    // inputRegionId Field Functions 
    bool hasInputRegionId() const { return this->inputRegionId_ != nullptr;};
    void deleteInputRegionId() { this->inputRegionId_ = nullptr;};
    inline string getInputRegionId() const { DARABONBA_PTR_GET_DEFAULT(inputRegionId_, "") };
    inline DetachVscFromMountPointsShrinkRequest& setInputRegionId(string inputRegionId) { DARABONBA_PTR_SET_VALUE(inputRegionId_, inputRegionId) };


    // useAssumeRoleChkServerPerm Field Functions 
    bool hasUseAssumeRoleChkServerPerm() const { return this->useAssumeRoleChkServerPerm_ != nullptr;};
    void deleteUseAssumeRoleChkServerPerm() { this->useAssumeRoleChkServerPerm_ = nullptr;};
    inline bool getUseAssumeRoleChkServerPerm() const { DARABONBA_PTR_GET_DEFAULT(useAssumeRoleChkServerPerm_, false) };
    inline DetachVscFromMountPointsShrinkRequest& setUseAssumeRoleChkServerPerm(bool useAssumeRoleChkServerPerm) { DARABONBA_PTR_SET_VALUE(useAssumeRoleChkServerPerm_, useAssumeRoleChkServerPerm) };


  protected:
    shared_ptr<string> detachInfosShrink_ {};
    // This parameter is required.
    shared_ptr<string> inputRegionId_ {};
    shared_ptr<bool> useAssumeRoleChkServerPerm_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
