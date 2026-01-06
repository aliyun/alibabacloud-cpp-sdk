// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SIMPLELISTREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SIMPLELISTREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class SimpleListReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SimpleListReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(dataList, dataList_);
      DARABONBA_PTR_TO_JSON(hasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(nextCursor, nextCursor_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(size, size_);
    };
    friend void from_json(const Darabonba::Json& j, SimpleListReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(dataList, dataList_);
      DARABONBA_PTR_FROM_JSON(hasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(nextCursor, nextCursor_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(size, size_);
    };
    SimpleListReportResponseBody() = default ;
    SimpleListReportResponseBody(const SimpleListReportResponseBody &) = default ;
    SimpleListReportResponseBody(SimpleListReportResponseBody &&) = default ;
    SimpleListReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SimpleListReportResponseBody() = default ;
    SimpleListReportResponseBody& operator=(const SimpleListReportResponseBody &) = default ;
    SimpleListReportResponseBody& operator=(SimpleListReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataList& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
        DARABONBA_PTR_TO_JSON(CreatorName, creatorName_);
        DARABONBA_PTR_TO_JSON(DeptName, deptName_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
        DARABONBA_PTR_TO_JSON(ReportId, reportId_);
        DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      };
      friend void from_json(const Darabonba::Json& j, DataList& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
        DARABONBA_PTR_FROM_JSON(CreatorName, creatorName_);
        DARABONBA_PTR_FROM_JSON(DeptName, deptName_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
        DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
        DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      };
      DataList() = default ;
      DataList(const DataList &) = default ;
      DataList(DataList &&) = default ;
      DataList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataList() = default ;
      DataList& operator=(const DataList &) = default ;
      DataList& operator=(DataList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->creatorId_ == nullptr && this->creatorName_ == nullptr && this->deptName_ == nullptr && this->remark_ == nullptr && this->reportId_ == nullptr
        && this->templateName_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline DataList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // creatorId Field Functions 
      bool hasCreatorId() const { return this->creatorId_ != nullptr;};
      void deleteCreatorId() { this->creatorId_ = nullptr;};
      inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
      inline DataList& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


      // creatorName Field Functions 
      bool hasCreatorName() const { return this->creatorName_ != nullptr;};
      void deleteCreatorName() { this->creatorName_ = nullptr;};
      inline string getCreatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
      inline DataList& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


      // deptName Field Functions 
      bool hasDeptName() const { return this->deptName_ != nullptr;};
      void deleteDeptName() { this->deptName_ = nullptr;};
      inline string getDeptName() const { DARABONBA_PTR_GET_DEFAULT(deptName_, "") };
      inline DataList& setDeptName(string deptName) { DARABONBA_PTR_SET_VALUE(deptName_, deptName) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline DataList& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // reportId Field Functions 
      bool hasReportId() const { return this->reportId_ != nullptr;};
      void deleteReportId() { this->reportId_ = nullptr;};
      inline string getReportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
      inline DataList& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline DataList& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    protected:
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<string> creatorId_ {};
      shared_ptr<string> creatorName_ {};
      shared_ptr<string> deptName_ {};
      shared_ptr<string> remark_ {};
      shared_ptr<string> reportId_ {};
      shared_ptr<string> templateName_ {};
    };

    virtual bool empty() const override { return this->dataList_ == nullptr
        && this->hasMore_ == nullptr && this->nextCursor_ == nullptr && this->requestId_ == nullptr && this->size_ == nullptr; };
    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<SimpleListReportResponseBody::DataList> & getDataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<SimpleListReportResponseBody::DataList>) };
    inline vector<SimpleListReportResponseBody::DataList> getDataList() { DARABONBA_PTR_GET(dataList_, vector<SimpleListReportResponseBody::DataList>) };
    inline SimpleListReportResponseBody& setDataList(const vector<SimpleListReportResponseBody::DataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline SimpleListReportResponseBody& setDataList(vector<SimpleListReportResponseBody::DataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline SimpleListReportResponseBody& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // nextCursor Field Functions 
    bool hasNextCursor() const { return this->nextCursor_ != nullptr;};
    void deleteNextCursor() { this->nextCursor_ = nullptr;};
    inline int64_t getNextCursor() const { DARABONBA_PTR_GET_DEFAULT(nextCursor_, 0L) };
    inline SimpleListReportResponseBody& setNextCursor(int64_t nextCursor) { DARABONBA_PTR_SET_VALUE(nextCursor_, nextCursor) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SimpleListReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline SimpleListReportResponseBody& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    shared_ptr<vector<SimpleListReportResponseBody::DataList>> dataList_ {};
    shared_ptr<bool> hasMore_ {};
    shared_ptr<int64_t> nextCursor_ {};
    // requestId
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> size_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
