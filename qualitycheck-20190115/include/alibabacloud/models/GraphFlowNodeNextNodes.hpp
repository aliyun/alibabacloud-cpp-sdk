// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRAPHFLOWNODENEXTNODES_HPP_
#define ALIBABACLOUD_MODELS_GRAPHFLOWNODENEXTNODES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GraphFlowNodeNextNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GraphFlowNodeNextNodes& obj) { 
      DARABONBA_PTR_TO_JSON(CheckType, checkType_);
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(Lambda, lambda_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NextNodeId, nextNodeId_);
      DARABONBA_PTR_TO_JSON(Triggers, triggers_);
    };
    friend void from_json(const Darabonba::Json& j, GraphFlowNodeNextNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckType, checkType_);
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(Lambda, lambda_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NextNodeId, nextNodeId_);
      DARABONBA_PTR_FROM_JSON(Triggers, triggers_);
    };
    GraphFlowNodeNextNodes() = default ;
    GraphFlowNodeNextNodes(const GraphFlowNodeNextNodes &) = default ;
    GraphFlowNodeNextNodes(GraphFlowNodeNextNodes &&) = default ;
    GraphFlowNodeNextNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GraphFlowNodeNextNodes() = default ;
    GraphFlowNodeNextNodes& operator=(const GraphFlowNodeNextNodes &) = default ;
    GraphFlowNodeNextNodes& operator=(GraphFlowNodeNextNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkType_ != nullptr
        && this->index_ != nullptr && this->lambda_ != nullptr && this->name_ != nullptr && this->nextNodeId_ != nullptr && this->triggers_ != nullptr; };
    // checkType Field Functions 
    bool hasCheckType() const { return this->checkType_ != nullptr;};
    void deleteCheckType() { this->checkType_ = nullptr;};
    inline int32_t checkType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, 0) };
    inline GraphFlowNodeNextNodes& setCheckType(int32_t checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline GraphFlowNodeNextNodes& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // lambda Field Functions 
    bool hasLambda() const { return this->lambda_ != nullptr;};
    void deleteLambda() { this->lambda_ = nullptr;};
    inline string lambda() const { DARABONBA_PTR_GET_DEFAULT(lambda_, "") };
    inline GraphFlowNodeNextNodes& setLambda(string lambda) { DARABONBA_PTR_SET_VALUE(lambda_, lambda) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GraphFlowNodeNextNodes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nextNodeId Field Functions 
    bool hasNextNodeId() const { return this->nextNodeId_ != nullptr;};
    void deleteNextNodeId() { this->nextNodeId_ = nullptr;};
    inline int64_t nextNodeId() const { DARABONBA_PTR_GET_DEFAULT(nextNodeId_, 0L) };
    inline GraphFlowNodeNextNodes& setNextNodeId(int64_t nextNodeId) { DARABONBA_PTR_SET_VALUE(nextNodeId_, nextNodeId) };


    // triggers Field Functions 
    bool hasTriggers() const { return this->triggers_ != nullptr;};
    void deleteTriggers() { this->triggers_ = nullptr;};
    inline const vector<string> & triggers() const { DARABONBA_PTR_GET_CONST(triggers_, vector<string>) };
    inline vector<string> triggers() { DARABONBA_PTR_GET(triggers_, vector<string>) };
    inline GraphFlowNodeNextNodes& setTriggers(const vector<string> & triggers) { DARABONBA_PTR_SET_VALUE(triggers_, triggers) };
    inline GraphFlowNodeNextNodes& setTriggers(vector<string> && triggers) { DARABONBA_PTR_SET_RVALUE(triggers_, triggers) };


  protected:
    std::shared_ptr<int32_t> checkType_ = nullptr;
    std::shared_ptr<int32_t> index_ = nullptr;
    std::shared_ptr<string> lambda_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> nextNodeId_ = nullptr;
    std::shared_ptr<vector<string>> triggers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
