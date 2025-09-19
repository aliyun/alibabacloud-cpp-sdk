// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETATTACKPATHEVENTDETAILRESPONSEBODYATTACKPATHEVENTPATHEVENTEDGELIST_HPP_
#define ALIBABACLOUD_MODELS_GETATTACKPATHEVENTDETAILRESPONSEBODYATTACKPATHEVENTPATHEVENTEDGELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAttackPathEventDetailResponseBodyAttackPathEventPathEventEdgeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAttackPathEventDetailResponseBodyAttackPathEventPathEventEdgeList& obj) { 
      DARABONBA_PTR_TO_JSON(EdgeId, edgeId_);
      DARABONBA_PTR_TO_JSON(EdgeType, edgeType_);
      DARABONBA_PTR_TO_JSON(ElementType, elementType_);
      DARABONBA_PTR_TO_JSON(EndNodeUuid, endNodeUuid_);
      DARABONBA_PTR_TO_JSON(RepairSuggestionDisplay, repairSuggestionDisplay_);
      DARABONBA_PTR_TO_JSON(StartNodeUuid, startNodeUuid_);
    };
    friend void from_json(const Darabonba::Json& j, GetAttackPathEventDetailResponseBodyAttackPathEventPathEventEdgeList& obj) { 
      DARABONBA_PTR_FROM_JSON(EdgeId, edgeId_);
      DARABONBA_PTR_FROM_JSON(EdgeType, edgeType_);
      DARABONBA_PTR_FROM_JSON(ElementType, elementType_);
      DARABONBA_PTR_FROM_JSON(EndNodeUuid, endNodeUuid_);
      DARABONBA_PTR_FROM_JSON(RepairSuggestionDisplay, repairSuggestionDisplay_);
      DARABONBA_PTR_FROM_JSON(StartNodeUuid, startNodeUuid_);
    };
    GetAttackPathEventDetailResponseBodyAttackPathEventPathEventEdgeList() = default ;
    GetAttackPathEventDetailResponseBodyAttackPathEventPathEventEdgeList(const GetAttackPathEventDetailResponseBodyAttackPathEventPathEventEdgeList &) = default ;
    GetAttackPathEventDetailResponseBodyAttackPathEventPathEventEdgeList(GetAttackPathEventDetailResponseBodyAttackPathEventPathEventEdgeList &&) = default ;
    GetAttackPathEventDetailResponseBodyAttackPathEventPathEventEdgeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAttackPathEventDetailResponseBodyAttackPathEventPathEventEdgeList() = default ;
    GetAttackPathEventDetailResponseBodyAttackPathEventPathEventEdgeList& operator=(const GetAttackPathEventDetailResponseBodyAttackPathEventPathEventEdgeList &) = default ;
    GetAttackPathEventDetailResponseBodyAttackPathEventPathEventEdgeList& operator=(GetAttackPathEventDetailResponseBodyAttackPathEventPathEventEdgeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->edgeId_ != nullptr
        && this->edgeType_ != nullptr && this->elementType_ != nullptr && this->endNodeUuid_ != nullptr && this->repairSuggestionDisplay_ != nullptr && this->startNodeUuid_ != nullptr; };
    // edgeId Field Functions 
    bool hasEdgeId() const { return this->edgeId_ != nullptr;};
    void deleteEdgeId() { this->edgeId_ = nullptr;};
    inline int64_t edgeId() const { DARABONBA_PTR_GET_DEFAULT(edgeId_, 0L) };
    inline GetAttackPathEventDetailResponseBodyAttackPathEventPathEventEdgeList& setEdgeId(int64_t edgeId) { DARABONBA_PTR_SET_VALUE(edgeId_, edgeId) };


    // edgeType Field Functions 
    bool hasEdgeType() const { return this->edgeType_ != nullptr;};
    void deleteEdgeType() { this->edgeType_ = nullptr;};
    inline string edgeType() const { DARABONBA_PTR_GET_DEFAULT(edgeType_, "") };
    inline GetAttackPathEventDetailResponseBodyAttackPathEventPathEventEdgeList& setEdgeType(string edgeType) { DARABONBA_PTR_SET_VALUE(edgeType_, edgeType) };


    // elementType Field Functions 
    bool hasElementType() const { return this->elementType_ != nullptr;};
    void deleteElementType() { this->elementType_ = nullptr;};
    inline string elementType() const { DARABONBA_PTR_GET_DEFAULT(elementType_, "") };
    inline GetAttackPathEventDetailResponseBodyAttackPathEventPathEventEdgeList& setElementType(string elementType) { DARABONBA_PTR_SET_VALUE(elementType_, elementType) };


    // endNodeUuid Field Functions 
    bool hasEndNodeUuid() const { return this->endNodeUuid_ != nullptr;};
    void deleteEndNodeUuid() { this->endNodeUuid_ = nullptr;};
    inline string endNodeUuid() const { DARABONBA_PTR_GET_DEFAULT(endNodeUuid_, "") };
    inline GetAttackPathEventDetailResponseBodyAttackPathEventPathEventEdgeList& setEndNodeUuid(string endNodeUuid) { DARABONBA_PTR_SET_VALUE(endNodeUuid_, endNodeUuid) };


    // repairSuggestionDisplay Field Functions 
    bool hasRepairSuggestionDisplay() const { return this->repairSuggestionDisplay_ != nullptr;};
    void deleteRepairSuggestionDisplay() { this->repairSuggestionDisplay_ = nullptr;};
    inline string repairSuggestionDisplay() const { DARABONBA_PTR_GET_DEFAULT(repairSuggestionDisplay_, "") };
    inline GetAttackPathEventDetailResponseBodyAttackPathEventPathEventEdgeList& setRepairSuggestionDisplay(string repairSuggestionDisplay) { DARABONBA_PTR_SET_VALUE(repairSuggestionDisplay_, repairSuggestionDisplay) };


    // startNodeUuid Field Functions 
    bool hasStartNodeUuid() const { return this->startNodeUuid_ != nullptr;};
    void deleteStartNodeUuid() { this->startNodeUuid_ = nullptr;};
    inline string startNodeUuid() const { DARABONBA_PTR_GET_DEFAULT(startNodeUuid_, "") };
    inline GetAttackPathEventDetailResponseBodyAttackPathEventPathEventEdgeList& setStartNodeUuid(string startNodeUuid) { DARABONBA_PTR_SET_VALUE(startNodeUuid_, startNodeUuid) };


  protected:
    // Edge ID.
    std::shared_ptr<int64_t> edgeId_ = nullptr;
    // Edge type.
    std::shared_ptr<string> edgeType_ = nullptr;
    // Edge element type.
    std::shared_ptr<string> elementType_ = nullptr;
    // UUID of the end node of the edge.
    std::shared_ptr<string> endNodeUuid_ = nullptr;
    // Description of the repair suggestion.
    std::shared_ptr<string> repairSuggestionDisplay_ = nullptr;
    // UUID of the start node of the edge.
    std::shared_ptr<string> startNodeUuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
