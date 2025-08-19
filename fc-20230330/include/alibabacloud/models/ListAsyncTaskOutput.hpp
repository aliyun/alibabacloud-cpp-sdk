// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTASYNCTASKOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_LISTASYNCTASKOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AsyncTask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class ListAsyncTaskOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAsyncTaskOutput& obj) { 
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(tasks, tasks_);
    };
    friend void from_json(const Darabonba::Json& j, ListAsyncTaskOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(tasks, tasks_);
    };
    ListAsyncTaskOutput() = default ;
    ListAsyncTaskOutput(const ListAsyncTaskOutput &) = default ;
    ListAsyncTaskOutput(ListAsyncTaskOutput &&) = default ;
    ListAsyncTaskOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAsyncTaskOutput() = default ;
    ListAsyncTaskOutput& operator=(const ListAsyncTaskOutput &) = default ;
    ListAsyncTaskOutput& operator=(ListAsyncTaskOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextToken_ != nullptr
        && this->tasks_ != nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAsyncTaskOutput& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<AsyncTask> & tasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<AsyncTask>) };
    inline vector<AsyncTask> tasks() { DARABONBA_PTR_GET(tasks_, vector<AsyncTask>) };
    inline ListAsyncTaskOutput& setTasks(const vector<AsyncTask> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline ListAsyncTaskOutput& setTasks(vector<AsyncTask> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


  protected:
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<vector<AsyncTask>> tasks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
