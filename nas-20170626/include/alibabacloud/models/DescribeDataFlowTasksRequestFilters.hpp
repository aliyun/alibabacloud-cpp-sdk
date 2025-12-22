// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAFLOWTASKSREQUESTFILTERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAFLOWTASKSREQUESTFILTERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeDataFlowTasksRequestFilters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataFlowTasksRequestFilters& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataFlowTasksRequestFilters& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeDataFlowTasksRequestFilters() = default ;
    DescribeDataFlowTasksRequestFilters(const DescribeDataFlowTasksRequestFilters &) = default ;
    DescribeDataFlowTasksRequestFilters(DescribeDataFlowTasksRequestFilters &&) = default ;
    DescribeDataFlowTasksRequestFilters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataFlowTasksRequestFilters() = default ;
    DescribeDataFlowTasksRequestFilters& operator=(const DescribeDataFlowTasksRequestFilters &) = default ;
    DescribeDataFlowTasksRequestFilters& operator=(DescribeDataFlowTasksRequestFilters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->value_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeDataFlowTasksRequestFilters& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeDataFlowTasksRequestFilters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The filter name.
    // 
    // Valid value:
    // 
    // *   DataFlowIds: filters dataflow tasks by dataflow ID.
    // *   TaskIds: filters dataflow tasks by task ID.
    // *   Originator: filters dataflow tasks by task initiator.
    // *   TaskActions: filters dataflow tasks by task type.
    // *   DataTypes: filters dataflow tasks by data type.
    // *   Status: filters dataflow tasks by dataflow status.
    // *   CreateTimeBegin: filters dataflow tasks that are created after a specified time.
    // *   CreateTimeEnd: filters dataflow tasks that are created before a specified time.
    // *   StartTimeBegin: filters dataflow tasks that are started after a specified time.
    // *   StartTimeEnd: filters dataflow tasks that are started before a specified time.
    // *   EndTimeBegin: filters dataflow tasks that are stopped after a specified time.
    // *   EndTimeEnd: filters dataflow tasks that are stopped before a specified time.
    std::shared_ptr<string> key_ = nullptr;
    // The value of the filter. This parameter does not support wildcards.
    // 
    // *   If Key is set to DataFlowIds, set Value to a dataflow ID or a part of the dataflow ID. You can specify a dataflow ID or a group of dataflow IDs. You can specify a maximum of 10 dataflow IDs. Example: `df-194433a5be31****` or `df-194433a512a2****,df-234533a5be31****`.
    // *   If Key is set to TaskId, set Value to a dataflow task ID or a part of the dataflow task ID. You can specify a dataflow task ID or a group of dataflow task IDs. You can specify a maximum of 10 dataflow task IDs. Example: `task-38aa8e890f45****` or `task-38aa8e890f45****,task-29ae8e890f45****`.
    // *   If Key is set to TaskActions, set Value to the type of dataflow task. The task type can be **Import**, **Export**, **Evict**, **Inventory**, **StreamImport**, or **StreamExport**. Combined query is supported. CPFS for Lingjun supports only the Import, Export, StreamImport, and StreamExport tasks. Only CPFS for Lingjun V2.6.0 and later support the StreamImport and StreamExport tasks.
    // *   If Key is set to DataTypes, set Value to the data type of the dataflow task. The data type can be MetaAndData, Metadata, or Data. Combined query is supported.
    // *   If Key is set to Originator, set Value to the initiator of the dataflow task. The initiator can be User or System.
    // *   If Key is set to Status, set Value to the status of the dataflow task. The status can be Pending, Executing, Failed, Completed, Canceling, or Canceled. Combined query is supported.
    // *   If Key is set to CreateTimeBegin, set Value to the beginning of the time range to create the dataflow task. Time format: `yyyy-MM-ddThh:mmZ`.
    // *   If Key is set to CreateTimeEnd, set Value to the end of the time range to create the dataflow task. Time format: `yyyy-MM-ddThh:mmZ`.
    // *   If Key is set to StartTimeBegin, set Value to the beginning of the time range to start the dataflow task. Time format: `yyyy-MM-ddThh:mmZ`.
    // *   If Key is set to StartTimeEnd, set Value to the end of the time range to start the dataflow task. Time format: `yyyy-MM-ddThh:mmZ`.
    // *   If Key is set to EndTimeBegin, set Value to the beginning of the time range to stop the dataflow task. Time format: `yyyy-MM-ddThh:mmZ`.
    // *   If Key is set to EndTimeEnd, set Value to the end of the time range to stop the dataflow task. Time format: `yyyy-MM-ddThh:mmZ`.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
