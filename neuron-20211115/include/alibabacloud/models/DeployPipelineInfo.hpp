// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYPIPELINEINFO_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYPIPELINEINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DeployInstanceInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class DeployPipelineInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployPipelineInfo& obj) { 
      DARABONBA_PTR_TO_JSON(deployInstanceInfos, deployInstanceInfos_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DeployPipelineInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(deployInstanceInfos, deployInstanceInfos_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    DeployPipelineInfo() = default ;
    DeployPipelineInfo(const DeployPipelineInfo &) = default ;
    DeployPipelineInfo(DeployPipelineInfo &&) = default ;
    DeployPipelineInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployPipelineInfo() = default ;
    DeployPipelineInfo& operator=(const DeployPipelineInfo &) = default ;
    DeployPipelineInfo& operator=(DeployPipelineInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deployInstanceInfos_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr; };
    // deployInstanceInfos Field Functions 
    bool hasDeployInstanceInfos() const { return this->deployInstanceInfos_ != nullptr;};
    void deleteDeployInstanceInfos() { this->deployInstanceInfos_ = nullptr;};
    inline const vector<DeployInstanceInfo> & getDeployInstanceInfos() const { DARABONBA_PTR_GET_CONST(deployInstanceInfos_, vector<DeployInstanceInfo>) };
    inline vector<DeployInstanceInfo> getDeployInstanceInfos() { DARABONBA_PTR_GET(deployInstanceInfos_, vector<DeployInstanceInfo>) };
    inline DeployPipelineInfo& setDeployInstanceInfos(const vector<DeployInstanceInfo> & deployInstanceInfos) { DARABONBA_PTR_SET_VALUE(deployInstanceInfos_, deployInstanceInfos) };
    inline DeployPipelineInfo& setDeployInstanceInfos(vector<DeployInstanceInfo> && deployInstanceInfos) { DARABONBA_PTR_SET_RVALUE(deployInstanceInfos_, deployInstanceInfos) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DeployPipelineInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DeployPipelineInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    shared_ptr<vector<DeployInstanceInfo>> deployInstanceInfos_ {};
    shared_ptr<string> id_ {};
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
