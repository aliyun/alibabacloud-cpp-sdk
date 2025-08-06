// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGECLOUDPHONENODERESPONSEBODYNODEINFOS_HPP_
#define ALIBABACLOUD_MODELS_CHANGECLOUDPHONENODERESPONSEBODYNODEINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ChangeCloudPhoneNodeResponseBodyNodeInfosInstanceInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class ChangeCloudPhoneNodeResponseBodyNodeInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeCloudPhoneNodeResponseBodyNodeInfos& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceInfos, instanceInfos_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeCloudPhoneNodeResponseBodyNodeInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceInfos, instanceInfos_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
    };
    ChangeCloudPhoneNodeResponseBodyNodeInfos() = default ;
    ChangeCloudPhoneNodeResponseBodyNodeInfos(const ChangeCloudPhoneNodeResponseBodyNodeInfos &) = default ;
    ChangeCloudPhoneNodeResponseBodyNodeInfos(ChangeCloudPhoneNodeResponseBodyNodeInfos &&) = default ;
    ChangeCloudPhoneNodeResponseBodyNodeInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeCloudPhoneNodeResponseBodyNodeInfos() = default ;
    ChangeCloudPhoneNodeResponseBodyNodeInfos& operator=(const ChangeCloudPhoneNodeResponseBodyNodeInfos &) = default ;
    ChangeCloudPhoneNodeResponseBodyNodeInfos& operator=(ChangeCloudPhoneNodeResponseBodyNodeInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceInfos_ != nullptr
        && this->nodeId_ != nullptr; };
    // instanceInfos Field Functions 
    bool hasInstanceInfos() const { return this->instanceInfos_ != nullptr;};
    void deleteInstanceInfos() { this->instanceInfos_ = nullptr;};
    inline const vector<Models::ChangeCloudPhoneNodeResponseBodyNodeInfosInstanceInfos> & instanceInfos() const { DARABONBA_PTR_GET_CONST(instanceInfos_, vector<Models::ChangeCloudPhoneNodeResponseBodyNodeInfosInstanceInfos>) };
    inline vector<Models::ChangeCloudPhoneNodeResponseBodyNodeInfosInstanceInfos> instanceInfos() { DARABONBA_PTR_GET(instanceInfos_, vector<Models::ChangeCloudPhoneNodeResponseBodyNodeInfosInstanceInfos>) };
    inline ChangeCloudPhoneNodeResponseBodyNodeInfos& setInstanceInfos(const vector<Models::ChangeCloudPhoneNodeResponseBodyNodeInfosInstanceInfos> & instanceInfos) { DARABONBA_PTR_SET_VALUE(instanceInfos_, instanceInfos) };
    inline ChangeCloudPhoneNodeResponseBodyNodeInfos& setInstanceInfos(vector<Models::ChangeCloudPhoneNodeResponseBodyNodeInfosInstanceInfos> && instanceInfos) { DARABONBA_PTR_SET_RVALUE(instanceInfos_, instanceInfos) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline ChangeCloudPhoneNodeResponseBodyNodeInfos& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


  protected:
    std::shared_ptr<vector<Models::ChangeCloudPhoneNodeResponseBodyNodeInfosInstanceInfos>> instanceInfos_ = nullptr;
    std::shared_ptr<string> nodeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
