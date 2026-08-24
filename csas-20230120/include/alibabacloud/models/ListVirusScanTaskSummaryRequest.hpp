// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVIRUSSCANTASKSUMMARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTVIRUSSCANTASKSUMMARYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListVirusScanTaskSummaryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVirusScanTaskSummaryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TaskIds, taskIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListVirusScanTaskSummaryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskIds, taskIds_);
    };
    ListVirusScanTaskSummaryRequest() = default ;
    ListVirusScanTaskSummaryRequest(const ListVirusScanTaskSummaryRequest &) = default ;
    ListVirusScanTaskSummaryRequest(ListVirusScanTaskSummaryRequest &&) = default ;
    ListVirusScanTaskSummaryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVirusScanTaskSummaryRequest() = default ;
    ListVirusScanTaskSummaryRequest& operator=(const ListVirusScanTaskSummaryRequest &) = default ;
    ListVirusScanTaskSummaryRequest& operator=(ListVirusScanTaskSummaryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskIds_ == nullptr; };
    // taskIds Field Functions 
    bool hasTaskIds() const { return this->taskIds_ != nullptr;};
    void deleteTaskIds() { this->taskIds_ = nullptr;};
    inline const vector<string> & getTaskIds() const { DARABONBA_PTR_GET_CONST(taskIds_, vector<string>) };
    inline vector<string> getTaskIds() { DARABONBA_PTR_GET(taskIds_, vector<string>) };
    inline ListVirusScanTaskSummaryRequest& setTaskIds(const vector<string> & taskIds) { DARABONBA_PTR_SET_VALUE(taskIds_, taskIds) };
    inline ListVirusScanTaskSummaryRequest& setTaskIds(vector<string> && taskIds) { DARABONBA_PTR_SET_RVALUE(taskIds_, taskIds) };


  protected:
    // This parameter is required.
    shared_ptr<vector<string>> taskIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
