// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NODETYPESTATISTIC_HPP_
#define ALIBABACLOUD_MODELS_NODETYPESTATISTIC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class NodeTypeStatistic : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NodeTypeStatistic& obj) { 
      DARABONBA_PTR_TO_JSON(CanBeBoundCount, canBeBoundCount_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, NodeTypeStatistic& obj) { 
      DARABONBA_PTR_FROM_JSON(CanBeBoundCount, canBeBoundCount_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    NodeTypeStatistic() = default ;
    NodeTypeStatistic(const NodeTypeStatistic &) = default ;
    NodeTypeStatistic(NodeTypeStatistic &&) = default ;
    NodeTypeStatistic(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NodeTypeStatistic() = default ;
    NodeTypeStatistic& operator=(const NodeTypeStatistic &) = default ;
    NodeTypeStatistic& operator=(NodeTypeStatistic &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->canBeBoundCount_ == nullptr
        && this->nodeType_ == nullptr && this->totalCount_ == nullptr; };
    // canBeBoundCount Field Functions 
    bool hasCanBeBoundCount() const { return this->canBeBoundCount_ != nullptr;};
    void deleteCanBeBoundCount() { this->canBeBoundCount_ = nullptr;};
    inline int32_t getCanBeBoundCount() const { DARABONBA_PTR_GET_DEFAULT(canBeBoundCount_, 0) };
    inline NodeTypeStatistic& setCanBeBoundCount(int32_t canBeBoundCount) { DARABONBA_PTR_SET_VALUE(canBeBoundCount_, canBeBoundCount) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline NodeTypeStatistic& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline NodeTypeStatistic& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> canBeBoundCount_ {};
    shared_ptr<string> nodeType_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
