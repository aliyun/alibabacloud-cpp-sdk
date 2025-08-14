// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYVIDEOTASKINFORESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYVIDEOTASKINFORESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryVideoTaskInfoResponseBodyDataListTaskResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class QueryVideoTaskInfoResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryVideoTaskInfoResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskResult, taskResult_);
      DARABONBA_PTR_TO_JSON(TaskUuid, taskUuid_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, QueryVideoTaskInfoResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskResult, taskResult_);
      DARABONBA_PTR_FROM_JSON(TaskUuid, taskUuid_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    QueryVideoTaskInfoResponseBodyDataList() = default ;
    QueryVideoTaskInfoResponseBodyDataList(const QueryVideoTaskInfoResponseBodyDataList &) = default ;
    QueryVideoTaskInfoResponseBodyDataList(QueryVideoTaskInfoResponseBodyDataList &&) = default ;
    QueryVideoTaskInfoResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryVideoTaskInfoResponseBodyDataList() = default ;
    QueryVideoTaskInfoResponseBodyDataList& operator=(const QueryVideoTaskInfoResponseBodyDataList &) = default ;
    QueryVideoTaskInfoResponseBodyDataList& operator=(QueryVideoTaskInfoResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->status_ != nullptr
        && this->taskResult_ != nullptr && this->taskUuid_ != nullptr && this->title_ != nullptr && this->type_ != nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline QueryVideoTaskInfoResponseBodyDataList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskResult Field Functions 
    bool hasTaskResult() const { return this->taskResult_ != nullptr;};
    void deleteTaskResult() { this->taskResult_ = nullptr;};
    inline const Models::QueryVideoTaskInfoResponseBodyDataListTaskResult & taskResult() const { DARABONBA_PTR_GET_CONST(taskResult_, Models::QueryVideoTaskInfoResponseBodyDataListTaskResult) };
    inline Models::QueryVideoTaskInfoResponseBodyDataListTaskResult taskResult() { DARABONBA_PTR_GET(taskResult_, Models::QueryVideoTaskInfoResponseBodyDataListTaskResult) };
    inline QueryVideoTaskInfoResponseBodyDataList& setTaskResult(const Models::QueryVideoTaskInfoResponseBodyDataListTaskResult & taskResult) { DARABONBA_PTR_SET_VALUE(taskResult_, taskResult) };
    inline QueryVideoTaskInfoResponseBodyDataList& setTaskResult(Models::QueryVideoTaskInfoResponseBodyDataListTaskResult && taskResult) { DARABONBA_PTR_SET_RVALUE(taskResult_, taskResult) };


    // taskUuid Field Functions 
    bool hasTaskUuid() const { return this->taskUuid_ != nullptr;};
    void deleteTaskUuid() { this->taskUuid_ = nullptr;};
    inline string taskUuid() const { DARABONBA_PTR_GET_DEFAULT(taskUuid_, "") };
    inline QueryVideoTaskInfoResponseBodyDataList& setTaskUuid(string taskUuid) { DARABONBA_PTR_SET_VALUE(taskUuid_, taskUuid) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline QueryVideoTaskInfoResponseBodyDataList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline QueryVideoTaskInfoResponseBodyDataList& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<Models::QueryVideoTaskInfoResponseBodyDataListTaskResult> taskResult_ = nullptr;
    std::shared_ptr<string> taskUuid_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
