// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEIMAGETASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GENERATEIMAGETASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GenerateImageTaskResponseBodyDataTaskList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GenerateImageTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateImageTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(TaskList, taskList_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateImageTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskList, taskList_);
    };
    GenerateImageTaskResponseBodyData() = default ;
    GenerateImageTaskResponseBodyData(const GenerateImageTaskResponseBodyData &) = default ;
    GenerateImageTaskResponseBodyData(GenerateImageTaskResponseBodyData &&) = default ;
    GenerateImageTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateImageTaskResponseBodyData() = default ;
    GenerateImageTaskResponseBodyData& operator=(const GenerateImageTaskResponseBodyData &) = default ;
    GenerateImageTaskResponseBodyData& operator=(GenerateImageTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskList_ == nullptr; };
    // taskList Field Functions 
    bool hasTaskList() const { return this->taskList_ != nullptr;};
    void deleteTaskList() { this->taskList_ = nullptr;};
    inline const vector<Models::GenerateImageTaskResponseBodyDataTaskList> & taskList() const { DARABONBA_PTR_GET_CONST(taskList_, vector<Models::GenerateImageTaskResponseBodyDataTaskList>) };
    inline vector<Models::GenerateImageTaskResponseBodyDataTaskList> taskList() { DARABONBA_PTR_GET(taskList_, vector<Models::GenerateImageTaskResponseBodyDataTaskList>) };
    inline GenerateImageTaskResponseBodyData& setTaskList(const vector<Models::GenerateImageTaskResponseBodyDataTaskList> & taskList) { DARABONBA_PTR_SET_VALUE(taskList_, taskList) };
    inline GenerateImageTaskResponseBodyData& setTaskList(vector<Models::GenerateImageTaskResponseBodyDataTaskList> && taskList) { DARABONBA_PTR_SET_RVALUE(taskList_, taskList) };


  protected:
    std::shared_ptr<vector<Models::GenerateImageTaskResponseBodyDataTaskList>> taskList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
