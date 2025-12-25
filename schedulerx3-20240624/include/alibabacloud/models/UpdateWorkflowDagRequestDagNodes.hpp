// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWORKFLOWDAGREQUESTDAGNODES_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWORKFLOWDAGREQUESTDAGNODES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateWorkflowDAGRequestDagNodesCoordinate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class UpdateWorkflowDAGRequestDagNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWorkflowDAGRequestDagNodes& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Coordinate, coordinate_);
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWorkflowDAGRequestDagNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Coordinate, coordinate_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    UpdateWorkflowDAGRequestDagNodes() = default ;
    UpdateWorkflowDAGRequestDagNodes(const UpdateWorkflowDAGRequestDagNodes &) = default ;
    UpdateWorkflowDAGRequestDagNodes(UpdateWorkflowDAGRequestDagNodes &&) = default ;
    UpdateWorkflowDAGRequestDagNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWorkflowDAGRequestDagNodes() = default ;
    UpdateWorkflowDAGRequestDagNodes& operator=(const UpdateWorkflowDAGRequestDagNodes &) = default ;
    UpdateWorkflowDAGRequestDagNodes& operator=(UpdateWorkflowDAGRequestDagNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->coordinate_ == nullptr && return this->id_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline UpdateWorkflowDAGRequestDagNodes& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // coordinate Field Functions 
    bool hasCoordinate() const { return this->coordinate_ != nullptr;};
    void deleteCoordinate() { this->coordinate_ = nullptr;};
    inline const Models::UpdateWorkflowDAGRequestDagNodesCoordinate & coordinate() const { DARABONBA_PTR_GET_CONST(coordinate_, Models::UpdateWorkflowDAGRequestDagNodesCoordinate) };
    inline Models::UpdateWorkflowDAGRequestDagNodesCoordinate coordinate() { DARABONBA_PTR_GET(coordinate_, Models::UpdateWorkflowDAGRequestDagNodesCoordinate) };
    inline UpdateWorkflowDAGRequestDagNodes& setCoordinate(const Models::UpdateWorkflowDAGRequestDagNodesCoordinate & coordinate) { DARABONBA_PTR_SET_VALUE(coordinate_, coordinate) };
    inline UpdateWorkflowDAGRequestDagNodes& setCoordinate(Models::UpdateWorkflowDAGRequestDagNodesCoordinate && coordinate) { DARABONBA_PTR_SET_RVALUE(coordinate_, coordinate) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateWorkflowDAGRequestDagNodes& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<Models::UpdateWorkflowDAGRequestDagNodesCoordinate> coordinate_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
