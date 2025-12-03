// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHVSCTOMOUNTPOINTSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHVSCTOMOUNTPOINTSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class AttachVscToMountPointsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachVscToMountPointsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AttachInfos, attachInfosShrink_);
      DARABONBA_PTR_TO_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_TO_JSON(UseAssumeRoleChkServerPerm, useAssumeRoleChkServerPerm_);
    };
    friend void from_json(const Darabonba::Json& j, AttachVscToMountPointsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachInfos, attachInfosShrink_);
      DARABONBA_PTR_FROM_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_FROM_JSON(UseAssumeRoleChkServerPerm, useAssumeRoleChkServerPerm_);
    };
    AttachVscToMountPointsShrinkRequest() = default ;
    AttachVscToMountPointsShrinkRequest(const AttachVscToMountPointsShrinkRequest &) = default ;
    AttachVscToMountPointsShrinkRequest(AttachVscToMountPointsShrinkRequest &&) = default ;
    AttachVscToMountPointsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachVscToMountPointsShrinkRequest() = default ;
    AttachVscToMountPointsShrinkRequest& operator=(const AttachVscToMountPointsShrinkRequest &) = default ;
    AttachVscToMountPointsShrinkRequest& operator=(AttachVscToMountPointsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attachInfosShrink_ == nullptr
        && return this->inputRegionId_ == nullptr && return this->useAssumeRoleChkServerPerm_ == nullptr; };
    // attachInfosShrink Field Functions 
    bool hasAttachInfosShrink() const { return this->attachInfosShrink_ != nullptr;};
    void deleteAttachInfosShrink() { this->attachInfosShrink_ = nullptr;};
    inline string attachInfosShrink() const { DARABONBA_PTR_GET_DEFAULT(attachInfosShrink_, "") };
    inline AttachVscToMountPointsShrinkRequest& setAttachInfosShrink(string attachInfosShrink) { DARABONBA_PTR_SET_VALUE(attachInfosShrink_, attachInfosShrink) };


    // inputRegionId Field Functions 
    bool hasInputRegionId() const { return this->inputRegionId_ != nullptr;};
    void deleteInputRegionId() { this->inputRegionId_ = nullptr;};
    inline string inputRegionId() const { DARABONBA_PTR_GET_DEFAULT(inputRegionId_, "") };
    inline AttachVscToMountPointsShrinkRequest& setInputRegionId(string inputRegionId) { DARABONBA_PTR_SET_VALUE(inputRegionId_, inputRegionId) };


    // useAssumeRoleChkServerPerm Field Functions 
    bool hasUseAssumeRoleChkServerPerm() const { return this->useAssumeRoleChkServerPerm_ != nullptr;};
    void deleteUseAssumeRoleChkServerPerm() { this->useAssumeRoleChkServerPerm_ = nullptr;};
    inline bool useAssumeRoleChkServerPerm() const { DARABONBA_PTR_GET_DEFAULT(useAssumeRoleChkServerPerm_, false) };
    inline AttachVscToMountPointsShrinkRequest& setUseAssumeRoleChkServerPerm(bool useAssumeRoleChkServerPerm) { DARABONBA_PTR_SET_VALUE(useAssumeRoleChkServerPerm_, useAssumeRoleChkServerPerm) };


  protected:
    std::shared_ptr<string> attachInfosShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> inputRegionId_ = nullptr;
    std::shared_ptr<bool> useAssumeRoleChkServerPerm_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
