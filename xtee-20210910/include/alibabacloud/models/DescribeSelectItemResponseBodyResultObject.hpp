// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESELECTITEMRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESELECTITEMRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeSelectItemResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSelectItemResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(monitorStatusList, monitorStatusList_);
      DARABONBA_PTR_TO_JSON(taskIdList, taskIdList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSelectItemResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(monitorStatusList, monitorStatusList_);
      DARABONBA_PTR_FROM_JSON(taskIdList, taskIdList_);
    };
    DescribeSelectItemResponseBodyResultObject() = default ;
    DescribeSelectItemResponseBodyResultObject(const DescribeSelectItemResponseBodyResultObject &) = default ;
    DescribeSelectItemResponseBodyResultObject(DescribeSelectItemResponseBodyResultObject &&) = default ;
    DescribeSelectItemResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSelectItemResponseBodyResultObject() = default ;
    DescribeSelectItemResponseBodyResultObject& operator=(const DescribeSelectItemResponseBodyResultObject &) = default ;
    DescribeSelectItemResponseBodyResultObject& operator=(DescribeSelectItemResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->monitorStatusList_ != nullptr
        && this->taskIdList_ != nullptr; };
    // monitorStatusList Field Functions 
    bool hasMonitorStatusList() const { return this->monitorStatusList_ != nullptr;};
    void deleteMonitorStatusList() { this->monitorStatusList_ = nullptr;};
    inline const vector<string> & monitorStatusList() const { DARABONBA_PTR_GET_CONST(monitorStatusList_, vector<string>) };
    inline vector<string> monitorStatusList() { DARABONBA_PTR_GET(monitorStatusList_, vector<string>) };
    inline DescribeSelectItemResponseBodyResultObject& setMonitorStatusList(const vector<string> & monitorStatusList) { DARABONBA_PTR_SET_VALUE(monitorStatusList_, monitorStatusList) };
    inline DescribeSelectItemResponseBodyResultObject& setMonitorStatusList(vector<string> && monitorStatusList) { DARABONBA_PTR_SET_RVALUE(monitorStatusList_, monitorStatusList) };


    // taskIdList Field Functions 
    bool hasTaskIdList() const { return this->taskIdList_ != nullptr;};
    void deleteTaskIdList() { this->taskIdList_ = nullptr;};
    inline const vector<string> & taskIdList() const { DARABONBA_PTR_GET_CONST(taskIdList_, vector<string>) };
    inline vector<string> taskIdList() { DARABONBA_PTR_GET(taskIdList_, vector<string>) };
    inline DescribeSelectItemResponseBodyResultObject& setTaskIdList(const vector<string> & taskIdList) { DARABONBA_PTR_SET_VALUE(taskIdList_, taskIdList) };
    inline DescribeSelectItemResponseBodyResultObject& setTaskIdList(vector<string> && taskIdList) { DARABONBA_PTR_SET_RVALUE(taskIdList_, taskIdList) };


  protected:
    // Monitoring status list.
    std::shared_ptr<vector<string>> monitorStatusList_ = nullptr;
    // Task ID list.
    std::shared_ptr<vector<string>> taskIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
