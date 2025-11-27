// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETASKSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETASKSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTasksResponseBodyItemsTaskProgressInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeTasksResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTasksResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(TaskProgressInfo, taskProgressInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTasksResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskProgressInfo, taskProgressInfo_);
    };
    DescribeTasksResponseBodyItems() = default ;
    DescribeTasksResponseBodyItems(const DescribeTasksResponseBodyItems &) = default ;
    DescribeTasksResponseBodyItems(DescribeTasksResponseBodyItems &&) = default ;
    DescribeTasksResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTasksResponseBodyItems() = default ;
    DescribeTasksResponseBodyItems& operator=(const DescribeTasksResponseBodyItems &) = default ;
    DescribeTasksResponseBodyItems& operator=(DescribeTasksResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskProgressInfo_ == nullptr; };
    // taskProgressInfo Field Functions 
    bool hasTaskProgressInfo() const { return this->taskProgressInfo_ != nullptr;};
    void deleteTaskProgressInfo() { this->taskProgressInfo_ = nullptr;};
    inline const vector<Models::DescribeTasksResponseBodyItemsTaskProgressInfo> & taskProgressInfo() const { DARABONBA_PTR_GET_CONST(taskProgressInfo_, vector<Models::DescribeTasksResponseBodyItemsTaskProgressInfo>) };
    inline vector<Models::DescribeTasksResponseBodyItemsTaskProgressInfo> taskProgressInfo() { DARABONBA_PTR_GET(taskProgressInfo_, vector<Models::DescribeTasksResponseBodyItemsTaskProgressInfo>) };
    inline DescribeTasksResponseBodyItems& setTaskProgressInfo(const vector<Models::DescribeTasksResponseBodyItemsTaskProgressInfo> & taskProgressInfo) { DARABONBA_PTR_SET_VALUE(taskProgressInfo_, taskProgressInfo) };
    inline DescribeTasksResponseBodyItems& setTaskProgressInfo(vector<Models::DescribeTasksResponseBodyItemsTaskProgressInfo> && taskProgressInfo) { DARABONBA_PTR_SET_RVALUE(taskProgressInfo_, taskProgressInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeTasksResponseBodyItemsTaskProgressInfo>> taskProgressInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
