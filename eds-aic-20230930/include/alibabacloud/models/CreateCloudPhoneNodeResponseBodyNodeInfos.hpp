// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLOUDPHONENODERESPONSEBODYNODEINFOS_HPP_
#define ALIBABACLOUD_MODELS_CREATECLOUDPHONENODERESPONSEBODYNODEINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class CreateCloudPhoneNodeResponseBodyNodeInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCloudPhoneNodeResponseBodyNodeInfos& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCloudPhoneNodeResponseBodyNodeInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
    };
    CreateCloudPhoneNodeResponseBodyNodeInfos() = default ;
    CreateCloudPhoneNodeResponseBodyNodeInfos(const CreateCloudPhoneNodeResponseBodyNodeInfos &) = default ;
    CreateCloudPhoneNodeResponseBodyNodeInfos(CreateCloudPhoneNodeResponseBodyNodeInfos &&) = default ;
    CreateCloudPhoneNodeResponseBodyNodeInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCloudPhoneNodeResponseBodyNodeInfos() = default ;
    CreateCloudPhoneNodeResponseBodyNodeInfos& operator=(const CreateCloudPhoneNodeResponseBodyNodeInfos &) = default ;
    CreateCloudPhoneNodeResponseBodyNodeInfos& operator=(CreateCloudPhoneNodeResponseBodyNodeInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceIds_ != nullptr
        && this->nodeId_ != nullptr; };
    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline CreateCloudPhoneNodeResponseBodyNodeInfos& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline CreateCloudPhoneNodeResponseBodyNodeInfos& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline CreateCloudPhoneNodeResponseBodyNodeInfos& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


  protected:
    // The IDs of the cloud phone instances.
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
    // The ID of the cloud phone matrix.
    std::shared_ptr<string> nodeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
