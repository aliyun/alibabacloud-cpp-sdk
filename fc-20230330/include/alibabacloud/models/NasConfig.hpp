// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NASCONFIG_HPP_
#define ALIBABACLOUD_MODELS_NASCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/NASMountConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class NASConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NASConfig& obj) { 
      DARABONBA_PTR_TO_JSON(groupId, groupId_);
      DARABONBA_PTR_TO_JSON(mountPoints, mountPoints_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, NASConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(groupId, groupId_);
      DARABONBA_PTR_FROM_JSON(mountPoints, mountPoints_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    NASConfig() = default ;
    NASConfig(const NASConfig &) = default ;
    NASConfig(NASConfig &&) = default ;
    NASConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NASConfig() = default ;
    NASConfig& operator=(const NASConfig &) = default ;
    NASConfig& operator=(NASConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupId_ == nullptr
        && return this->mountPoints_ == nullptr && return this->userId_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int32_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0) };
    inline NASConfig& setGroupId(int32_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // mountPoints Field Functions 
    bool hasMountPoints() const { return this->mountPoints_ != nullptr;};
    void deleteMountPoints() { this->mountPoints_ = nullptr;};
    inline const vector<NASMountConfig> & mountPoints() const { DARABONBA_PTR_GET_CONST(mountPoints_, vector<NASMountConfig>) };
    inline vector<NASMountConfig> mountPoints() { DARABONBA_PTR_GET(mountPoints_, vector<NASMountConfig>) };
    inline NASConfig& setMountPoints(const vector<NASMountConfig> & mountPoints) { DARABONBA_PTR_SET_VALUE(mountPoints_, mountPoints) };
    inline NASConfig& setMountPoints(vector<NASMountConfig> && mountPoints) { DARABONBA_PTR_SET_RVALUE(mountPoints_, mountPoints) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int32_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0) };
    inline NASConfig& setUserId(int32_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<int32_t> groupId_ = nullptr;
    std::shared_ptr<vector<NASMountConfig>> mountPoints_ = nullptr;
    std::shared_ptr<int32_t> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
