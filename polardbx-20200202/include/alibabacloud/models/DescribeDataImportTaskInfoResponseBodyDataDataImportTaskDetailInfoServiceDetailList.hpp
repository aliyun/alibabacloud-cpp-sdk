// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAIMPORTTASKINFORESPONSEBODYDATADATAIMPORTTASKDETAILINFOSERVICEDETAILLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAIMPORTTASKINFORESPONSEBODYDATADATAIMPORTTASKDETAILINFOSERVICEDETAILLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfoServiceDetailListTaskDetailList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfoServiceDetailList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfoServiceDetailList& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskDetailList, taskDetailList_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfoServiceDetailList& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskDetailList, taskDetailList_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfoServiceDetailList() = default ;
    DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfoServiceDetailList(const DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfoServiceDetailList &) = default ;
    DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfoServiceDetailList(DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfoServiceDetailList &&) = default ;
    DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfoServiceDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfoServiceDetailList() = default ;
    DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfoServiceDetailList& operator=(const DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfoServiceDetailList &) = default ;
    DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfoServiceDetailList& operator=(DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfoServiceDetailList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->status_ == nullptr && return this->taskDetailList_ == nullptr && return this->type_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfoServiceDetailList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfoServiceDetailList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskDetailList Field Functions 
    bool hasTaskDetailList() const { return this->taskDetailList_ != nullptr;};
    void deleteTaskDetailList() { this->taskDetailList_ = nullptr;};
    inline const vector<Models::DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfoServiceDetailListTaskDetailList> & taskDetailList() const { DARABONBA_PTR_GET_CONST(taskDetailList_, vector<Models::DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfoServiceDetailListTaskDetailList>) };
    inline vector<Models::DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfoServiceDetailListTaskDetailList> taskDetailList() { DARABONBA_PTR_GET(taskDetailList_, vector<Models::DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfoServiceDetailListTaskDetailList>) };
    inline DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfoServiceDetailList& setTaskDetailList(const vector<Models::DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfoServiceDetailListTaskDetailList> & taskDetailList) { DARABONBA_PTR_SET_VALUE(taskDetailList_, taskDetailList) };
    inline DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfoServiceDetailList& setTaskDetailList(vector<Models::DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfoServiceDetailListTaskDetailList> && taskDetailList) { DARABONBA_PTR_SET_RVALUE(taskDetailList_, taskDetailList) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfoServiceDetailList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<Models::DescribeDataImportTaskInfoResponseBodyDataDataImportTaskDetailInfoServiceDetailListTaskDetailList>> taskDetailList_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
