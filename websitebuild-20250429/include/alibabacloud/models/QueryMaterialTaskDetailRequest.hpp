// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMATERIALTASKDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMATERIALTASKDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class QueryMaterialTaskDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMaterialTaskDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMaterialTaskDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    QueryMaterialTaskDetailRequest() = default ;
    QueryMaterialTaskDetailRequest(const QueryMaterialTaskDetailRequest &) = default ;
    QueryMaterialTaskDetailRequest(QueryMaterialTaskDetailRequest &&) = default ;
    QueryMaterialTaskDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMaterialTaskDetailRequest() = default ;
    QueryMaterialTaskDetailRequest& operator=(const QueryMaterialTaskDetailRequest &) = default ;
    QueryMaterialTaskDetailRequest& operator=(QueryMaterialTaskDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskId_ == nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline QueryMaterialTaskDetailRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // This parameter is required.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
