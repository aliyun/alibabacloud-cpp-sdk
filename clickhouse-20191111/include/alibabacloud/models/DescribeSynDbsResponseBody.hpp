// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYNDBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYNDBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeSynDbsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSynDbsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SynDbs, synDbs_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSynDbsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SynDbs, synDbs_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSynDbsResponseBody() = default ;
    DescribeSynDbsResponseBody(const DescribeSynDbsResponseBody &) = default ;
    DescribeSynDbsResponseBody(DescribeSynDbsResponseBody &&) = default ;
    DescribeSynDbsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSynDbsResponseBody() = default ;
    DescribeSynDbsResponseBody& operator=(const DescribeSynDbsResponseBody &) = default ;
    DescribeSynDbsResponseBody& operator=(DescribeSynDbsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SynDbs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SynDbs& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
        DARABONBA_PTR_TO_JSON(RdsId, rdsId_);
        DARABONBA_PTR_TO_JSON(RdsUserName, rdsUserName_);
        DARABONBA_PTR_TO_JSON(RdsVpcUrl, rdsVpcUrl_);
        DARABONBA_PTR_TO_JSON(SynDb, synDb_);
        DARABONBA_PTR_TO_JSON(SynStatus, synStatus_);
      };
      friend void from_json(const Darabonba::Json& j, SynDbs& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
        DARABONBA_PTR_FROM_JSON(RdsId, rdsId_);
        DARABONBA_PTR_FROM_JSON(RdsUserName, rdsUserName_);
        DARABONBA_PTR_FROM_JSON(RdsVpcUrl, rdsVpcUrl_);
        DARABONBA_PTR_FROM_JSON(SynDb, synDb_);
        DARABONBA_PTR_FROM_JSON(SynStatus, synStatus_);
      };
      SynDbs() = default ;
      SynDbs(const SynDbs &) = default ;
      SynDbs(SynDbs &&) = default ;
      SynDbs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SynDbs() = default ;
      SynDbs& operator=(const SynDbs &) = default ;
      SynDbs& operator=(SynDbs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->errorMsg_ == nullptr
        && this->rdsId_ == nullptr && this->rdsUserName_ == nullptr && this->rdsVpcUrl_ == nullptr && this->synDb_ == nullptr && this->synStatus_ == nullptr; };
      // errorMsg Field Functions 
      bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
      void deleteErrorMsg() { this->errorMsg_ = nullptr;};
      inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
      inline SynDbs& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


      // rdsId Field Functions 
      bool hasRdsId() const { return this->rdsId_ != nullptr;};
      void deleteRdsId() { this->rdsId_ = nullptr;};
      inline string getRdsId() const { DARABONBA_PTR_GET_DEFAULT(rdsId_, "") };
      inline SynDbs& setRdsId(string rdsId) { DARABONBA_PTR_SET_VALUE(rdsId_, rdsId) };


      // rdsUserName Field Functions 
      bool hasRdsUserName() const { return this->rdsUserName_ != nullptr;};
      void deleteRdsUserName() { this->rdsUserName_ = nullptr;};
      inline string getRdsUserName() const { DARABONBA_PTR_GET_DEFAULT(rdsUserName_, "") };
      inline SynDbs& setRdsUserName(string rdsUserName) { DARABONBA_PTR_SET_VALUE(rdsUserName_, rdsUserName) };


      // rdsVpcUrl Field Functions 
      bool hasRdsVpcUrl() const { return this->rdsVpcUrl_ != nullptr;};
      void deleteRdsVpcUrl() { this->rdsVpcUrl_ = nullptr;};
      inline string getRdsVpcUrl() const { DARABONBA_PTR_GET_DEFAULT(rdsVpcUrl_, "") };
      inline SynDbs& setRdsVpcUrl(string rdsVpcUrl) { DARABONBA_PTR_SET_VALUE(rdsVpcUrl_, rdsVpcUrl) };


      // synDb Field Functions 
      bool hasSynDb() const { return this->synDb_ != nullptr;};
      void deleteSynDb() { this->synDb_ = nullptr;};
      inline string getSynDb() const { DARABONBA_PTR_GET_DEFAULT(synDb_, "") };
      inline SynDbs& setSynDb(string synDb) { DARABONBA_PTR_SET_VALUE(synDb_, synDb) };


      // synStatus Field Functions 
      bool hasSynStatus() const { return this->synStatus_ != nullptr;};
      void deleteSynStatus() { this->synStatus_ = nullptr;};
      inline bool getSynStatus() const { DARABONBA_PTR_GET_DEFAULT(synStatus_, false) };
      inline SynDbs& setSynStatus(bool synStatus) { DARABONBA_PTR_SET_VALUE(synStatus_, synStatus) };


    protected:
      // *   When the value **true** is returned for the **SynStatus** parameter, the system does not return the ErrorMsg parameter.
      // *   When the value **false** is returned for the **SynStatus** parameter, the system returns for the ErrorMsg parameter the cause why the data synchronization failed.
      shared_ptr<string> errorMsg_ {};
      // The ID of the ApsaraDB RDS for MySQL instance.
      shared_ptr<string> rdsId_ {};
      // The database account that is used to log on to the ApsaraDB RDS for MySQL instance.
      shared_ptr<string> rdsUserName_ {};
      // The internal endpoint of the ApsaraDB RDS for MySQL instance.
      shared_ptr<string> rdsVpcUrl_ {};
      // The name of the database in the ApsaraDB RDS for MySQL instance.
      shared_ptr<string> synDb_ {};
      // Indicates whether the data synchronization succeeded. Valid values:
      // 
      // *   **true**: The data synchronization succeeded.
      // *   **false**: The data synchronization failed.
      shared_ptr<bool> synStatus_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->synDbs_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSynDbsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSynDbsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSynDbsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // synDbs Field Functions 
    bool hasSynDbs() const { return this->synDbs_ != nullptr;};
    void deleteSynDbs() { this->synDbs_ = nullptr;};
    inline const vector<DescribeSynDbsResponseBody::SynDbs> & getSynDbs() const { DARABONBA_PTR_GET_CONST(synDbs_, vector<DescribeSynDbsResponseBody::SynDbs>) };
    inline vector<DescribeSynDbsResponseBody::SynDbs> getSynDbs() { DARABONBA_PTR_GET(synDbs_, vector<DescribeSynDbsResponseBody::SynDbs>) };
    inline DescribeSynDbsResponseBody& setSynDbs(const vector<DescribeSynDbsResponseBody::SynDbs> & synDbs) { DARABONBA_PTR_SET_VALUE(synDbs_, synDbs) };
    inline DescribeSynDbsResponseBody& setSynDbs(vector<DescribeSynDbsResponseBody::SynDbs> && synDbs) { DARABONBA_PTR_SET_RVALUE(synDbs_, synDbs) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSynDbsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about data synchronization between the ApsaraDB for ClickHouse cluster and an ApsaraDB RDS for MySQL instance.
    shared_ptr<vector<DescribeSynDbsResponseBody::SynDbs>> synDbs_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
