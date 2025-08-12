// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHOSTAVAILABILITYLISTRESPONSEBODYTASKLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHOSTAVAILABILITYLISTRESPONSEBODYTASKLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeHostAvailabilityListResponseBodyTaskList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHostAvailabilityListResponseBodyTaskList& obj) { 
      DARABONBA_PTR_TO_JSON(NodeTaskConfig, nodeTaskConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHostAvailabilityListResponseBodyTaskList& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeTaskConfig, nodeTaskConfig_);
    };
    DescribeHostAvailabilityListResponseBodyTaskList() = default ;
    DescribeHostAvailabilityListResponseBodyTaskList(const DescribeHostAvailabilityListResponseBodyTaskList &) = default ;
    DescribeHostAvailabilityListResponseBodyTaskList(DescribeHostAvailabilityListResponseBodyTaskList &&) = default ;
    DescribeHostAvailabilityListResponseBodyTaskList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHostAvailabilityListResponseBodyTaskList() = default ;
    DescribeHostAvailabilityListResponseBodyTaskList& operator=(const DescribeHostAvailabilityListResponseBodyTaskList &) = default ;
    DescribeHostAvailabilityListResponseBodyTaskList& operator=(DescribeHostAvailabilityListResponseBodyTaskList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nodeTaskConfig_ != nullptr; };
    // nodeTaskConfig Field Functions 
    bool hasNodeTaskConfig() const { return this->nodeTaskConfig_ != nullptr;};
    void deleteNodeTaskConfig() { this->nodeTaskConfig_ = nullptr;};
    inline const vector<Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfig> & nodeTaskConfig() const { DARABONBA_PTR_GET_CONST(nodeTaskConfig_, vector<Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfig>) };
    inline vector<Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfig> nodeTaskConfig() { DARABONBA_PTR_GET(nodeTaskConfig_, vector<Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfig>) };
    inline DescribeHostAvailabilityListResponseBodyTaskList& setNodeTaskConfig(const vector<Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfig> & nodeTaskConfig) { DARABONBA_PTR_SET_VALUE(nodeTaskConfig_, nodeTaskConfig) };
    inline DescribeHostAvailabilityListResponseBodyTaskList& setNodeTaskConfig(vector<Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfig> && nodeTaskConfig) { DARABONBA_PTR_SET_RVALUE(nodeTaskConfig_, nodeTaskConfig) };


  protected:
    std::shared_ptr<vector<Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfig>> nodeTaskConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
