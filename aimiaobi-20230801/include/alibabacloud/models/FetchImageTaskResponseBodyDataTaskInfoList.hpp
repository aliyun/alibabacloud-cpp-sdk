// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FETCHIMAGETASKRESPONSEBODYDATATASKINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_FETCHIMAGETASKRESPONSEBODYDATATASKINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FetchImageTaskResponseBodyDataTaskInfoListImageList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class FetchImageTaskResponseBodyDataTaskInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FetchImageTaskResponseBodyDataTaskInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ImageList, imageList_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
    };
    friend void from_json(const Darabonba::Json& j, FetchImageTaskResponseBodyDataTaskInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ImageList, imageList_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
    };
    FetchImageTaskResponseBodyDataTaskInfoList() = default ;
    FetchImageTaskResponseBodyDataTaskInfoList(const FetchImageTaskResponseBodyDataTaskInfoList &) = default ;
    FetchImageTaskResponseBodyDataTaskInfoList(FetchImageTaskResponseBodyDataTaskInfoList &&) = default ;
    FetchImageTaskResponseBodyDataTaskInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FetchImageTaskResponseBodyDataTaskInfoList() = default ;
    FetchImageTaskResponseBodyDataTaskInfoList& operator=(const FetchImageTaskResponseBodyDataTaskInfoList &) = default ;
    FetchImageTaskResponseBodyDataTaskInfoList& operator=(FetchImageTaskResponseBodyDataTaskInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->imageList_ == nullptr && return this->taskId_ == nullptr && return this->taskStatus_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline FetchImageTaskResponseBodyDataTaskInfoList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // imageList Field Functions 
    bool hasImageList() const { return this->imageList_ != nullptr;};
    void deleteImageList() { this->imageList_ = nullptr;};
    inline const vector<Models::FetchImageTaskResponseBodyDataTaskInfoListImageList> & imageList() const { DARABONBA_PTR_GET_CONST(imageList_, vector<Models::FetchImageTaskResponseBodyDataTaskInfoListImageList>) };
    inline vector<Models::FetchImageTaskResponseBodyDataTaskInfoListImageList> imageList() { DARABONBA_PTR_GET(imageList_, vector<Models::FetchImageTaskResponseBodyDataTaskInfoListImageList>) };
    inline FetchImageTaskResponseBodyDataTaskInfoList& setImageList(const vector<Models::FetchImageTaskResponseBodyDataTaskInfoListImageList> & imageList) { DARABONBA_PTR_SET_VALUE(imageList_, imageList) };
    inline FetchImageTaskResponseBodyDataTaskInfoList& setImageList(vector<Models::FetchImageTaskResponseBodyDataTaskInfoListImageList> && imageList) { DARABONBA_PTR_SET_RVALUE(imageList_, imageList) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline FetchImageTaskResponseBodyDataTaskInfoList& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline FetchImageTaskResponseBodyDataTaskInfoList& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


  protected:
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<vector<Models::FetchImageTaskResponseBodyDataTaskInfoListImageList>> imageList_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> taskStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
