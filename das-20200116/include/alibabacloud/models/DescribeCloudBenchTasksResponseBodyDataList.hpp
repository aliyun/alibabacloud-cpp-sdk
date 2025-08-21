// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDBENCHTASKSRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDBENCHTASKSRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeCloudBenchTasksResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudBenchTasksResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(cloudbenchTasks, cloudbenchTasks_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudBenchTasksResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(cloudbenchTasks, cloudbenchTasks_);
    };
    DescribeCloudBenchTasksResponseBodyDataList() = default ;
    DescribeCloudBenchTasksResponseBodyDataList(const DescribeCloudBenchTasksResponseBodyDataList &) = default ;
    DescribeCloudBenchTasksResponseBodyDataList(DescribeCloudBenchTasksResponseBodyDataList &&) = default ;
    DescribeCloudBenchTasksResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudBenchTasksResponseBodyDataList() = default ;
    DescribeCloudBenchTasksResponseBodyDataList& operator=(const DescribeCloudBenchTasksResponseBodyDataList &) = default ;
    DescribeCloudBenchTasksResponseBodyDataList& operator=(DescribeCloudBenchTasksResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cloudbenchTasks_ != nullptr; };
    // cloudbenchTasks Field Functions 
    bool hasCloudbenchTasks() const { return this->cloudbenchTasks_ != nullptr;};
    void deleteCloudbenchTasks() { this->cloudbenchTasks_ = nullptr;};
    inline const vector<Models::DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks> & cloudbenchTasks() const { DARABONBA_PTR_GET_CONST(cloudbenchTasks_, vector<Models::DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks>) };
    inline vector<Models::DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks> cloudbenchTasks() { DARABONBA_PTR_GET(cloudbenchTasks_, vector<Models::DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks>) };
    inline DescribeCloudBenchTasksResponseBodyDataList& setCloudbenchTasks(const vector<Models::DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks> & cloudbenchTasks) { DARABONBA_PTR_SET_VALUE(cloudbenchTasks_, cloudbenchTasks) };
    inline DescribeCloudBenchTasksResponseBodyDataList& setCloudbenchTasks(vector<Models::DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks> && cloudbenchTasks) { DARABONBA_PTR_SET_RVALUE(cloudbenchTasks_, cloudbenchTasks) };


  protected:
    std::shared_ptr<vector<Models::DescribeCloudBenchTasksResponseBodyDataListCloudbenchTasks>> cloudbenchTasks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
