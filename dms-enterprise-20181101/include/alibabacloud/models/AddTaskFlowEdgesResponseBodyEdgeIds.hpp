// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDTASKFLOWEDGESRESPONSEBODYEDGEIDS_HPP_
#define ALIBABACLOUD_MODELS_ADDTASKFLOWEDGESRESPONSEBODYEDGEIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class AddTaskFlowEdgesResponseBodyEdgeIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddTaskFlowEdgesResponseBodyEdgeIds& obj) { 
      DARABONBA_PTR_TO_JSON(EdgeId, edgeId_);
    };
    friend void from_json(const Darabonba::Json& j, AddTaskFlowEdgesResponseBodyEdgeIds& obj) { 
      DARABONBA_PTR_FROM_JSON(EdgeId, edgeId_);
    };
    AddTaskFlowEdgesResponseBodyEdgeIds() = default ;
    AddTaskFlowEdgesResponseBodyEdgeIds(const AddTaskFlowEdgesResponseBodyEdgeIds &) = default ;
    AddTaskFlowEdgesResponseBodyEdgeIds(AddTaskFlowEdgesResponseBodyEdgeIds &&) = default ;
    AddTaskFlowEdgesResponseBodyEdgeIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddTaskFlowEdgesResponseBodyEdgeIds() = default ;
    AddTaskFlowEdgesResponseBodyEdgeIds& operator=(const AddTaskFlowEdgesResponseBodyEdgeIds &) = default ;
    AddTaskFlowEdgesResponseBodyEdgeIds& operator=(AddTaskFlowEdgesResponseBodyEdgeIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->edgeId_ != nullptr; };
    // edgeId Field Functions 
    bool hasEdgeId() const { return this->edgeId_ != nullptr;};
    void deleteEdgeId() { this->edgeId_ = nullptr;};
    inline const vector<int64_t> & edgeId() const { DARABONBA_PTR_GET_CONST(edgeId_, vector<int64_t>) };
    inline vector<int64_t> edgeId() { DARABONBA_PTR_GET(edgeId_, vector<int64_t>) };
    inline AddTaskFlowEdgesResponseBodyEdgeIds& setEdgeId(const vector<int64_t> & edgeId) { DARABONBA_PTR_SET_VALUE(edgeId_, edgeId) };
    inline AddTaskFlowEdgesResponseBodyEdgeIds& setEdgeId(vector<int64_t> && edgeId) { DARABONBA_PTR_SET_RVALUE(edgeId_, edgeId) };


  protected:
    std::shared_ptr<vector<int64_t>> edgeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
