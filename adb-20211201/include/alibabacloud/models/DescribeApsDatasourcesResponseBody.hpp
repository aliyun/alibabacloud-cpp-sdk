// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPSDATASOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPSDATASOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeApsDatasourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApsDatasourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApsDatasources, apsDatasources_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApsDatasourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApsDatasources, apsDatasources_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeApsDatasourcesResponseBody() = default ;
    DescribeApsDatasourcesResponseBody(const DescribeApsDatasourcesResponseBody &) = default ;
    DescribeApsDatasourcesResponseBody(DescribeApsDatasourcesResponseBody &&) = default ;
    DescribeApsDatasourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApsDatasourcesResponseBody() = default ;
    DescribeApsDatasourcesResponseBody& operator=(const DescribeApsDatasourcesResponseBody &) = default ;
    DescribeApsDatasourcesResponseBody& operator=(DescribeApsDatasourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApsDatasources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApsDatasources& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DatasourceDescription, datasourceDescription_);
        DARABONBA_PTR_TO_JSON(DatasourceId, datasourceId_);
        DARABONBA_PTR_TO_JSON(DatasourceName, datasourceName_);
        DARABONBA_PTR_TO_JSON(DatasourceType, datasourceType_);
        DARABONBA_PTR_TO_JSON(HasJob, hasJob_);
      };
      friend void from_json(const Darabonba::Json& j, ApsDatasources& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DatasourceDescription, datasourceDescription_);
        DARABONBA_PTR_FROM_JSON(DatasourceId, datasourceId_);
        DARABONBA_PTR_FROM_JSON(DatasourceName, datasourceName_);
        DARABONBA_PTR_FROM_JSON(DatasourceType, datasourceType_);
        DARABONBA_PTR_FROM_JSON(HasJob, hasJob_);
      };
      ApsDatasources() = default ;
      ApsDatasources(const ApsDatasources &) = default ;
      ApsDatasources(ApsDatasources &&) = default ;
      ApsDatasources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApsDatasources() = default ;
      ApsDatasources& operator=(const ApsDatasources &) = default ;
      ApsDatasources& operator=(ApsDatasources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->datasourceDescription_ == nullptr && this->datasourceId_ == nullptr && this->datasourceName_ == nullptr && this->datasourceType_ == nullptr && this->hasJob_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ApsDatasources& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // datasourceDescription Field Functions 
      bool hasDatasourceDescription() const { return this->datasourceDescription_ != nullptr;};
      void deleteDatasourceDescription() { this->datasourceDescription_ = nullptr;};
      inline string getDatasourceDescription() const { DARABONBA_PTR_GET_DEFAULT(datasourceDescription_, "") };
      inline ApsDatasources& setDatasourceDescription(string datasourceDescription) { DARABONBA_PTR_SET_VALUE(datasourceDescription_, datasourceDescription) };


      // datasourceId Field Functions 
      bool hasDatasourceId() const { return this->datasourceId_ != nullptr;};
      void deleteDatasourceId() { this->datasourceId_ = nullptr;};
      inline int64_t getDatasourceId() const { DARABONBA_PTR_GET_DEFAULT(datasourceId_, 0L) };
      inline ApsDatasources& setDatasourceId(int64_t datasourceId) { DARABONBA_PTR_SET_VALUE(datasourceId_, datasourceId) };


      // datasourceName Field Functions 
      bool hasDatasourceName() const { return this->datasourceName_ != nullptr;};
      void deleteDatasourceName() { this->datasourceName_ = nullptr;};
      inline string getDatasourceName() const { DARABONBA_PTR_GET_DEFAULT(datasourceName_, "") };
      inline ApsDatasources& setDatasourceName(string datasourceName) { DARABONBA_PTR_SET_VALUE(datasourceName_, datasourceName) };


      // datasourceType Field Functions 
      bool hasDatasourceType() const { return this->datasourceType_ != nullptr;};
      void deleteDatasourceType() { this->datasourceType_ = nullptr;};
      inline string getDatasourceType() const { DARABONBA_PTR_GET_DEFAULT(datasourceType_, "") };
      inline ApsDatasources& setDatasourceType(string datasourceType) { DARABONBA_PTR_SET_VALUE(datasourceType_, datasourceType) };


      // hasJob Field Functions 
      bool hasHasJob() const { return this->hasJob_ != nullptr;};
      void deleteHasJob() { this->hasJob_ = nullptr;};
      inline bool getHasJob() const { DARABONBA_PTR_GET_DEFAULT(hasJob_, false) };
      inline ApsDatasources& setHasJob(bool hasJob) { DARABONBA_PTR_SET_VALUE(hasJob_, hasJob) };


    protected:
      // The time when the data source was created.
      shared_ptr<string> createTime_ {};
      // The description of the data source.
      shared_ptr<string> datasourceDescription_ {};
      // The data source ID.
      shared_ptr<int64_t> datasourceId_ {};
      // The name of the data source.
      shared_ptr<string> datasourceName_ {};
      // The type of the data source.
      shared_ptr<string> datasourceType_ {};
      // Indicates whether a job is using the data source.
      shared_ptr<bool> hasJob_ {};
    };

    virtual bool empty() const override { return this->apsDatasources_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // apsDatasources Field Functions 
    bool hasApsDatasources() const { return this->apsDatasources_ != nullptr;};
    void deleteApsDatasources() { this->apsDatasources_ = nullptr;};
    inline const vector<DescribeApsDatasourcesResponseBody::ApsDatasources> & getApsDatasources() const { DARABONBA_PTR_GET_CONST(apsDatasources_, vector<DescribeApsDatasourcesResponseBody::ApsDatasources>) };
    inline vector<DescribeApsDatasourcesResponseBody::ApsDatasources> getApsDatasources() { DARABONBA_PTR_GET(apsDatasources_, vector<DescribeApsDatasourcesResponseBody::ApsDatasources>) };
    inline DescribeApsDatasourcesResponseBody& setApsDatasources(const vector<DescribeApsDatasourcesResponseBody::ApsDatasources> & apsDatasources) { DARABONBA_PTR_SET_VALUE(apsDatasources_, apsDatasources) };
    inline DescribeApsDatasourcesResponseBody& setApsDatasources(vector<DescribeApsDatasourcesResponseBody::ApsDatasources> && apsDatasources) { DARABONBA_PTR_SET_RVALUE(apsDatasources_, apsDatasources) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeApsDatasourcesResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeApsDatasourcesResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApsDatasourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeApsDatasourcesResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The queried APS data sources.
    shared_ptr<vector<DescribeApsDatasourcesResponseBody::ApsDatasources>> apsDatasources_ {};
    // The page number.
    shared_ptr<string> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<string> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
