// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_POLLTASKRESULTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_POLLTASKRESULTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PollTaskResultResponseBodyDataTaskDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class PollTaskResultResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PollTaskResultResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(TaskDetail, taskDetail_);
    };
    friend void from_json(const Darabonba::Json& j, PollTaskResultResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskDetail, taskDetail_);
    };
    PollTaskResultResponseBodyData() = default ;
    PollTaskResultResponseBodyData(const PollTaskResultResponseBodyData &) = default ;
    PollTaskResultResponseBodyData(PollTaskResultResponseBodyData &&) = default ;
    PollTaskResultResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PollTaskResultResponseBodyData() = default ;
    PollTaskResultResponseBodyData& operator=(const PollTaskResultResponseBodyData &) = default ;
    PollTaskResultResponseBodyData& operator=(PollTaskResultResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskDetail_ == nullptr; };
    // taskDetail Field Functions 
    bool hasTaskDetail() const { return this->taskDetail_ != nullptr;};
    void deleteTaskDetail() { this->taskDetail_ = nullptr;};
    inline const vector<Models::PollTaskResultResponseBodyDataTaskDetail> & taskDetail() const { DARABONBA_PTR_GET_CONST(taskDetail_, vector<Models::PollTaskResultResponseBodyDataTaskDetail>) };
    inline vector<Models::PollTaskResultResponseBodyDataTaskDetail> taskDetail() { DARABONBA_PTR_GET(taskDetail_, vector<Models::PollTaskResultResponseBodyDataTaskDetail>) };
    inline PollTaskResultResponseBodyData& setTaskDetail(const vector<Models::PollTaskResultResponseBodyDataTaskDetail> & taskDetail) { DARABONBA_PTR_SET_VALUE(taskDetail_, taskDetail) };
    inline PollTaskResultResponseBodyData& setTaskDetail(vector<Models::PollTaskResultResponseBodyDataTaskDetail> && taskDetail) { DARABONBA_PTR_SET_RVALUE(taskDetail_, taskDetail) };


  protected:
    std::shared_ptr<vector<Models::PollTaskResultResponseBodyDataTaskDetail>> taskDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
