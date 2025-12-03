// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHVSCTOMOUNTPOINTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHVSCTOMOUNTPOINTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AttachVscToMountPointsRequestAttachInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class AttachVscToMountPointsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachVscToMountPointsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AttachInfos, attachInfos_);
      DARABONBA_PTR_TO_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_TO_JSON(UseAssumeRoleChkServerPerm, useAssumeRoleChkServerPerm_);
    };
    friend void from_json(const Darabonba::Json& j, AttachVscToMountPointsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachInfos, attachInfos_);
      DARABONBA_PTR_FROM_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_FROM_JSON(UseAssumeRoleChkServerPerm, useAssumeRoleChkServerPerm_);
    };
    AttachVscToMountPointsRequest() = default ;
    AttachVscToMountPointsRequest(const AttachVscToMountPointsRequest &) = default ;
    AttachVscToMountPointsRequest(AttachVscToMountPointsRequest &&) = default ;
    AttachVscToMountPointsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachVscToMountPointsRequest() = default ;
    AttachVscToMountPointsRequest& operator=(const AttachVscToMountPointsRequest &) = default ;
    AttachVscToMountPointsRequest& operator=(AttachVscToMountPointsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attachInfos_ == nullptr
        && return this->inputRegionId_ == nullptr && return this->useAssumeRoleChkServerPerm_ == nullptr; };
    // attachInfos Field Functions 
    bool hasAttachInfos() const { return this->attachInfos_ != nullptr;};
    void deleteAttachInfos() { this->attachInfos_ = nullptr;};
    inline const vector<AttachVscToMountPointsRequestAttachInfos> & attachInfos() const { DARABONBA_PTR_GET_CONST(attachInfos_, vector<AttachVscToMountPointsRequestAttachInfos>) };
    inline vector<AttachVscToMountPointsRequestAttachInfos> attachInfos() { DARABONBA_PTR_GET(attachInfos_, vector<AttachVscToMountPointsRequestAttachInfos>) };
    inline AttachVscToMountPointsRequest& setAttachInfos(const vector<AttachVscToMountPointsRequestAttachInfos> & attachInfos) { DARABONBA_PTR_SET_VALUE(attachInfos_, attachInfos) };
    inline AttachVscToMountPointsRequest& setAttachInfos(vector<AttachVscToMountPointsRequestAttachInfos> && attachInfos) { DARABONBA_PTR_SET_RVALUE(attachInfos_, attachInfos) };


    // inputRegionId Field Functions 
    bool hasInputRegionId() const { return this->inputRegionId_ != nullptr;};
    void deleteInputRegionId() { this->inputRegionId_ = nullptr;};
    inline string inputRegionId() const { DARABONBA_PTR_GET_DEFAULT(inputRegionId_, "") };
    inline AttachVscToMountPointsRequest& setInputRegionId(string inputRegionId) { DARABONBA_PTR_SET_VALUE(inputRegionId_, inputRegionId) };


    // useAssumeRoleChkServerPerm Field Functions 
    bool hasUseAssumeRoleChkServerPerm() const { return this->useAssumeRoleChkServerPerm_ != nullptr;};
    void deleteUseAssumeRoleChkServerPerm() { this->useAssumeRoleChkServerPerm_ = nullptr;};
    inline bool useAssumeRoleChkServerPerm() const { DARABONBA_PTR_GET_DEFAULT(useAssumeRoleChkServerPerm_, false) };
    inline AttachVscToMountPointsRequest& setUseAssumeRoleChkServerPerm(bool useAssumeRoleChkServerPerm) { DARABONBA_PTR_SET_VALUE(useAssumeRoleChkServerPerm_, useAssumeRoleChkServerPerm) };


  protected:
    std::shared_ptr<vector<AttachVscToMountPointsRequestAttachInfos>> attachInfos_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> inputRegionId_ = nullptr;
    std::shared_ptr<bool> useAssumeRoleChkServerPerm_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
