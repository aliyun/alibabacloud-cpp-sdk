// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKFLOWRESPONSEBODYDATAWORKFLOWNODEINFONODES_HPP_
#define ALIBABACLOUD_MODELS_GETWORKFLOWRESPONSEBODYDATAWORKFLOWNODEINFONODES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class GetWorkFlowResponseBodyDataWorkFlowNodeInfoNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkFlowResponseBodyDataWorkFlowNodeInfoNodes& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkFlowResponseBodyDataWorkFlowNodeInfoNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetWorkFlowResponseBodyDataWorkFlowNodeInfoNodes() = default ;
    GetWorkFlowResponseBodyDataWorkFlowNodeInfoNodes(const GetWorkFlowResponseBodyDataWorkFlowNodeInfoNodes &) = default ;
    GetWorkFlowResponseBodyDataWorkFlowNodeInfoNodes(GetWorkFlowResponseBodyDataWorkFlowNodeInfoNodes &&) = default ;
    GetWorkFlowResponseBodyDataWorkFlowNodeInfoNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkFlowResponseBodyDataWorkFlowNodeInfoNodes() = default ;
    GetWorkFlowResponseBodyDataWorkFlowNodeInfoNodes& operator=(const GetWorkFlowResponseBodyDataWorkFlowNodeInfoNodes &) = default ;
    GetWorkFlowResponseBodyDataWorkFlowNodeInfoNodes& operator=(GetWorkFlowResponseBodyDataWorkFlowNodeInfoNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->label_ == nullptr && return this->status_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetWorkFlowResponseBodyDataWorkFlowNodeInfoNodes& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline GetWorkFlowResponseBodyDataWorkFlowNodeInfoNodes& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetWorkFlowResponseBodyDataWorkFlowNodeInfoNodes& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the job.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the job.
    std::shared_ptr<string> label_ = nullptr;
    // The status of the job.
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
