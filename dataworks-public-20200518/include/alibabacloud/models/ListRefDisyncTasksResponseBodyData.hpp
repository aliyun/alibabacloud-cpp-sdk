// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREFDISYNCTASKSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTREFDISYNCTASKSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRefDISyncTasksResponseBodyDataDISyncTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListRefDISyncTasksResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRefDISyncTasksResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DISyncTasks, DISyncTasks_);
    };
    friend void from_json(const Darabonba::Json& j, ListRefDISyncTasksResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DISyncTasks, DISyncTasks_);
    };
    ListRefDISyncTasksResponseBodyData() = default ;
    ListRefDISyncTasksResponseBodyData(const ListRefDISyncTasksResponseBodyData &) = default ;
    ListRefDISyncTasksResponseBodyData(ListRefDISyncTasksResponseBodyData &&) = default ;
    ListRefDISyncTasksResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRefDISyncTasksResponseBodyData() = default ;
    ListRefDISyncTasksResponseBodyData& operator=(const ListRefDISyncTasksResponseBodyData &) = default ;
    ListRefDISyncTasksResponseBodyData& operator=(ListRefDISyncTasksResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DISyncTasks_ != nullptr; };
    // DISyncTasks Field Functions 
    bool hasDISyncTasks() const { return this->DISyncTasks_ != nullptr;};
    void deleteDISyncTasks() { this->DISyncTasks_ = nullptr;};
    inline const vector<Models::ListRefDISyncTasksResponseBodyDataDISyncTasks> & DISyncTasks() const { DARABONBA_PTR_GET_CONST(DISyncTasks_, vector<Models::ListRefDISyncTasksResponseBodyDataDISyncTasks>) };
    inline vector<Models::ListRefDISyncTasksResponseBodyDataDISyncTasks> DISyncTasks() { DARABONBA_PTR_GET(DISyncTasks_, vector<Models::ListRefDISyncTasksResponseBodyDataDISyncTasks>) };
    inline ListRefDISyncTasksResponseBodyData& setDISyncTasks(const vector<Models::ListRefDISyncTasksResponseBodyDataDISyncTasks> & DISyncTasks) { DARABONBA_PTR_SET_VALUE(DISyncTasks_, DISyncTasks) };
    inline ListRefDISyncTasksResponseBodyData& setDISyncTasks(vector<Models::ListRefDISyncTasksResponseBodyDataDISyncTasks> && DISyncTasks) { DARABONBA_PTR_SET_RVALUE(DISyncTasks_, DISyncTasks) };


  protected:
    // The details of the synchronization tasks. In most cases, a data source is used by multiple synchronization tasks. Therefore, the value of this parameter is an array. The following parameters are the elements in the array. The sample values of these parameters show the details of a synchronization task.
    std::shared_ptr<vector<Models::ListRefDISyncTasksResponseBodyDataDISyncTasks>> DISyncTasks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
