// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FETCHIMAGETASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_FETCHIMAGETASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FetchImageTaskResponseBodyDataTaskInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class FetchImageTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FetchImageTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(TaskInfoList, taskInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, FetchImageTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskInfoList, taskInfoList_);
    };
    FetchImageTaskResponseBodyData() = default ;
    FetchImageTaskResponseBodyData(const FetchImageTaskResponseBodyData &) = default ;
    FetchImageTaskResponseBodyData(FetchImageTaskResponseBodyData &&) = default ;
    FetchImageTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FetchImageTaskResponseBodyData() = default ;
    FetchImageTaskResponseBodyData& operator=(const FetchImageTaskResponseBodyData &) = default ;
    FetchImageTaskResponseBodyData& operator=(FetchImageTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskInfoList_ == nullptr; };
    // taskInfoList Field Functions 
    bool hasTaskInfoList() const { return this->taskInfoList_ != nullptr;};
    void deleteTaskInfoList() { this->taskInfoList_ = nullptr;};
    inline const vector<Models::FetchImageTaskResponseBodyDataTaskInfoList> & taskInfoList() const { DARABONBA_PTR_GET_CONST(taskInfoList_, vector<Models::FetchImageTaskResponseBodyDataTaskInfoList>) };
    inline vector<Models::FetchImageTaskResponseBodyDataTaskInfoList> taskInfoList() { DARABONBA_PTR_GET(taskInfoList_, vector<Models::FetchImageTaskResponseBodyDataTaskInfoList>) };
    inline FetchImageTaskResponseBodyData& setTaskInfoList(const vector<Models::FetchImageTaskResponseBodyDataTaskInfoList> & taskInfoList) { DARABONBA_PTR_SET_VALUE(taskInfoList_, taskInfoList) };
    inline FetchImageTaskResponseBodyData& setTaskInfoList(vector<Models::FetchImageTaskResponseBodyDataTaskInfoList> && taskInfoList) { DARABONBA_PTR_SET_RVALUE(taskInfoList_, taskInfoList) };


  protected:
    std::shared_ptr<vector<Models::FetchImageTaskResponseBodyDataTaskInfoList>> taskInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
