// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROBOTNODERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTROBOTNODERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class ListRobotNodeResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRobotNodeResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(IsOutput, isOutput_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(NodeIdentifier, nodeIdentifier_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(ProcessName, processName_);
    };
    friend void from_json(const Darabonba::Json& j, ListRobotNodeResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(IsOutput, isOutput_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(NodeIdentifier, nodeIdentifier_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(ProcessName, processName_);
    };
    ListRobotNodeResponseBodyData() = default ;
    ListRobotNodeResponseBodyData(const ListRobotNodeResponseBodyData &) = default ;
    ListRobotNodeResponseBodyData(ListRobotNodeResponseBodyData &&) = default ;
    ListRobotNodeResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRobotNodeResponseBodyData() = default ;
    ListRobotNodeResponseBodyData& operator=(const ListRobotNodeResponseBodyData &) = default ;
    ListRobotNodeResponseBodyData& operator=(ListRobotNodeResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isOutput_ == nullptr
        && return this->modelName_ == nullptr && return this->nodeIdentifier_ == nullptr && return this->nodeName_ == nullptr && return this->processName_ == nullptr; };
    // isOutput Field Functions 
    bool hasIsOutput() const { return this->isOutput_ != nullptr;};
    void deleteIsOutput() { this->isOutput_ = nullptr;};
    inline int32_t isOutput() const { DARABONBA_PTR_GET_DEFAULT(isOutput_, 0) };
    inline ListRobotNodeResponseBodyData& setIsOutput(int32_t isOutput) { DARABONBA_PTR_SET_VALUE(isOutput_, isOutput) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string modelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline ListRobotNodeResponseBodyData& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // nodeIdentifier Field Functions 
    bool hasNodeIdentifier() const { return this->nodeIdentifier_ != nullptr;};
    void deleteNodeIdentifier() { this->nodeIdentifier_ = nullptr;};
    inline string nodeIdentifier() const { DARABONBA_PTR_GET_DEFAULT(nodeIdentifier_, "") };
    inline ListRobotNodeResponseBodyData& setNodeIdentifier(string nodeIdentifier) { DARABONBA_PTR_SET_VALUE(nodeIdentifier_, nodeIdentifier) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline ListRobotNodeResponseBodyData& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // processName Field Functions 
    bool hasProcessName() const { return this->processName_ != nullptr;};
    void deleteProcessName() { this->processName_ = nullptr;};
    inline string processName() const { DARABONBA_PTR_GET_DEFAULT(processName_, "") };
    inline ListRobotNodeResponseBodyData& setProcessName(string processName) { DARABONBA_PTR_SET_VALUE(processName_, processName) };


  protected:
    std::shared_ptr<int32_t> isOutput_ = nullptr;
    std::shared_ptr<string> modelName_ = nullptr;
    std::shared_ptr<string> nodeIdentifier_ = nullptr;
    std::shared_ptr<string> nodeName_ = nullptr;
    std::shared_ptr<string> processName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
