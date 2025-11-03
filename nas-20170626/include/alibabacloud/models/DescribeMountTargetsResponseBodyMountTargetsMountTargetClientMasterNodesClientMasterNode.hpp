// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMOUNTTARGETSRESPONSEBODYMOUNTTARGETSMOUNTTARGETCLIENTMASTERNODESCLIENTMASTERNODE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMOUNTTARGETSRESPONSEBODYMOUNTTARGETSMOUNTTARGETCLIENTMASTERNODESCLIENTMASTERNODE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodesClientMasterNode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodesClientMasterNode& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultPasswd, defaultPasswd_);
      DARABONBA_PTR_TO_JSON(EcsId, ecsId_);
      DARABONBA_PTR_TO_JSON(EcsIp, ecsIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodesClientMasterNode& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultPasswd, defaultPasswd_);
      DARABONBA_PTR_FROM_JSON(EcsId, ecsId_);
      DARABONBA_PTR_FROM_JSON(EcsIp, ecsIp_);
    };
    DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodesClientMasterNode() = default ;
    DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodesClientMasterNode(const DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodesClientMasterNode &) = default ;
    DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodesClientMasterNode(DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodesClientMasterNode &&) = default ;
    DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodesClientMasterNode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodesClientMasterNode() = default ;
    DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodesClientMasterNode& operator=(const DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodesClientMasterNode &) = default ;
    DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodesClientMasterNode& operator=(DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodesClientMasterNode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultPasswd_ == nullptr
        && return this->ecsId_ == nullptr && return this->ecsIp_ == nullptr; };
    // defaultPasswd Field Functions 
    bool hasDefaultPasswd() const { return this->defaultPasswd_ != nullptr;};
    void deleteDefaultPasswd() { this->defaultPasswd_ = nullptr;};
    inline string defaultPasswd() const { DARABONBA_PTR_GET_DEFAULT(defaultPasswd_, "") };
    inline DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodesClientMasterNode& setDefaultPasswd(string defaultPasswd) { DARABONBA_PTR_SET_VALUE(defaultPasswd_, defaultPasswd) };


    // ecsId Field Functions 
    bool hasEcsId() const { return this->ecsId_ != nullptr;};
    void deleteEcsId() { this->ecsId_ = nullptr;};
    inline string ecsId() const { DARABONBA_PTR_GET_DEFAULT(ecsId_, "") };
    inline DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodesClientMasterNode& setEcsId(string ecsId) { DARABONBA_PTR_SET_VALUE(ecsId_, ecsId) };


    // ecsIp Field Functions 
    bool hasEcsIp() const { return this->ecsIp_ != nullptr;};
    void deleteEcsIp() { this->ecsIp_ = nullptr;};
    inline string ecsIp() const { DARABONBA_PTR_GET_DEFAULT(ecsIp_, "") };
    inline DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodesClientMasterNode& setEcsIp(string ecsIp) { DARABONBA_PTR_SET_VALUE(ecsIp_, ecsIp) };


  protected:
    // The default logon password of the ECS instance.
    std::shared_ptr<string> defaultPasswd_ = nullptr;
    // The ID of the ECS instance on the client management node.
    std::shared_ptr<string> ecsId_ = nullptr;
    // The IP address of the ECS instance on the client management node.
    std::shared_ptr<string> ecsIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
