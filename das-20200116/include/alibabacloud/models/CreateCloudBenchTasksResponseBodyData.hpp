// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLOUDBENCHTASKSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATECLOUDBENCHTASKSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class CreateCloudBenchTasksResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCloudBenchTasksResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(taskIds, taskIds_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCloudBenchTasksResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(taskIds, taskIds_);
    };
    CreateCloudBenchTasksResponseBodyData() = default ;
    CreateCloudBenchTasksResponseBodyData(const CreateCloudBenchTasksResponseBodyData &) = default ;
    CreateCloudBenchTasksResponseBodyData(CreateCloudBenchTasksResponseBodyData &&) = default ;
    CreateCloudBenchTasksResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCloudBenchTasksResponseBodyData() = default ;
    CreateCloudBenchTasksResponseBodyData& operator=(const CreateCloudBenchTasksResponseBodyData &) = default ;
    CreateCloudBenchTasksResponseBodyData& operator=(CreateCloudBenchTasksResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->taskIds_ != nullptr; };
    // taskIds Field Functions 
    bool hasTaskIds() const { return this->taskIds_ != nullptr;};
    void deleteTaskIds() { this->taskIds_ = nullptr;};
    inline const vector<string> & taskIds() const { DARABONBA_PTR_GET_CONST(taskIds_, vector<string>) };
    inline vector<string> taskIds() { DARABONBA_PTR_GET(taskIds_, vector<string>) };
    inline CreateCloudBenchTasksResponseBodyData& setTaskIds(const vector<string> & taskIds) { DARABONBA_PTR_SET_VALUE(taskIds_, taskIds) };
    inline CreateCloudBenchTasksResponseBodyData& setTaskIds(vector<string> && taskIds) { DARABONBA_PTR_SET_RVALUE(taskIds_, taskIds) };


  protected:
    std::shared_ptr<vector<string>> taskIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
