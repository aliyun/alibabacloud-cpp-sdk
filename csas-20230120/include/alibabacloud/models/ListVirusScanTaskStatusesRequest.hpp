// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVIRUSSCANTASKSTATUSESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTVIRUSSCANTASKSTATUSESREQUEST_HPP_
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
  class ListVirusScanTaskStatusesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVirusScanTaskStatusesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TaskIds, taskIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListVirusScanTaskStatusesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskIds, taskIds_);
    };
    ListVirusScanTaskStatusesRequest() = default ;
    ListVirusScanTaskStatusesRequest(const ListVirusScanTaskStatusesRequest &) = default ;
    ListVirusScanTaskStatusesRequest(ListVirusScanTaskStatusesRequest &&) = default ;
    ListVirusScanTaskStatusesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVirusScanTaskStatusesRequest() = default ;
    ListVirusScanTaskStatusesRequest& operator=(const ListVirusScanTaskStatusesRequest &) = default ;
    ListVirusScanTaskStatusesRequest& operator=(ListVirusScanTaskStatusesRequest &&) = default ;
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
    inline ListVirusScanTaskStatusesRequest& setTaskIds(const vector<string> & taskIds) { DARABONBA_PTR_SET_VALUE(taskIds_, taskIds) };
    inline ListVirusScanTaskStatusesRequest& setTaskIds(vector<string> && taskIds) { DARABONBA_PTR_SET_RVALUE(taskIds_, taskIds) };


  protected:
    // The collection of virus scan task IDs. The collection must contain at least one ID, and duplicate IDs are not allowed.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> taskIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
