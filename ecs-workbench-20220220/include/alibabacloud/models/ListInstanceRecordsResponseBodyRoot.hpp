// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCERECORDSRESPONSEBODYROOT_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCERECORDSRESPONSEBODYROOT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListInstanceRecordsResponseBodyRootRecordList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EcsWorkbench20220220
{
namespace Models
{
  class ListInstanceRecordsResponseBodyRoot : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceRecordsResponseBodyRoot& obj) { 
      DARABONBA_PTR_TO_JSON(RecordList, recordList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceRecordsResponseBodyRoot& obj) { 
      DARABONBA_PTR_FROM_JSON(RecordList, recordList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListInstanceRecordsResponseBodyRoot() = default ;
    ListInstanceRecordsResponseBodyRoot(const ListInstanceRecordsResponseBodyRoot &) = default ;
    ListInstanceRecordsResponseBodyRoot(ListInstanceRecordsResponseBodyRoot &&) = default ;
    ListInstanceRecordsResponseBodyRoot(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceRecordsResponseBodyRoot() = default ;
    ListInstanceRecordsResponseBodyRoot& operator=(const ListInstanceRecordsResponseBodyRoot &) = default ;
    ListInstanceRecordsResponseBodyRoot& operator=(ListInstanceRecordsResponseBodyRoot &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->recordList_ != nullptr
        && this->totalCount_ != nullptr; };
    // recordList Field Functions 
    bool hasRecordList() const { return this->recordList_ != nullptr;};
    void deleteRecordList() { this->recordList_ = nullptr;};
    inline const vector<Models::ListInstanceRecordsResponseBodyRootRecordList> & recordList() const { DARABONBA_PTR_GET_CONST(recordList_, vector<Models::ListInstanceRecordsResponseBodyRootRecordList>) };
    inline vector<Models::ListInstanceRecordsResponseBodyRootRecordList> recordList() { DARABONBA_PTR_GET(recordList_, vector<Models::ListInstanceRecordsResponseBodyRootRecordList>) };
    inline ListInstanceRecordsResponseBodyRoot& setRecordList(const vector<Models::ListInstanceRecordsResponseBodyRootRecordList> & recordList) { DARABONBA_PTR_SET_VALUE(recordList_, recordList) };
    inline ListInstanceRecordsResponseBodyRoot& setRecordList(vector<Models::ListInstanceRecordsResponseBodyRootRecordList> && recordList) { DARABONBA_PTR_SET_RVALUE(recordList_, recordList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListInstanceRecordsResponseBodyRoot& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<Models::ListInstanceRecordsResponseBodyRootRecordList>> recordList_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EcsWorkbench20220220
#endif
