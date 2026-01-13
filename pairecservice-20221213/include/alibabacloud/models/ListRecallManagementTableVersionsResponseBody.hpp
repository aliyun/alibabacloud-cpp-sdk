// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECALLMANAGEMENTTABLEVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRECALLMANAGEMENTTABLEVERSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListRecallManagementTableVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRecallManagementTableVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RecallManagementTableVersions, recallManagementTableVersions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRecallManagementTableVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RecallManagementTableVersions, recallManagementTableVersions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRecallManagementTableVersionsResponseBody() = default ;
    ListRecallManagementTableVersionsResponseBody(const ListRecallManagementTableVersionsResponseBody &) = default ;
    ListRecallManagementTableVersionsResponseBody(ListRecallManagementTableVersionsResponseBody &&) = default ;
    ListRecallManagementTableVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRecallManagementTableVersionsResponseBody() = default ;
    ListRecallManagementTableVersionsResponseBody& operator=(const ListRecallManagementTableVersionsResponseBody &) = default ;
    ListRecallManagementTableVersionsResponseBody& operator=(ListRecallManagementTableVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RecallManagementTableVersions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RecallManagementTableVersions& obj) { 
        DARABONBA_PTR_TO_JSON(DataVersion, dataVersion_);
        DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
        DARABONBA_PTR_TO_JSON(PublishEndTime, publishEndTime_);
        DARABONBA_PTR_TO_JSON(PublishStartTime, publishStartTime_);
        DARABONBA_PTR_TO_JSON(RecallManagementTableVersionId, recallManagementTableVersionId_);
        DARABONBA_PTR_TO_JSON(SourceTableDataSize, sourceTableDataSize_);
        DARABONBA_PTR_TO_JSON(SourceTableRowCount, sourceTableRowCount_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, RecallManagementTableVersions& obj) { 
        DARABONBA_PTR_FROM_JSON(DataVersion, dataVersion_);
        DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
        DARABONBA_PTR_FROM_JSON(PublishEndTime, publishEndTime_);
        DARABONBA_PTR_FROM_JSON(PublishStartTime, publishStartTime_);
        DARABONBA_PTR_FROM_JSON(RecallManagementTableVersionId, recallManagementTableVersionId_);
        DARABONBA_PTR_FROM_JSON(SourceTableDataSize, sourceTableDataSize_);
        DARABONBA_PTR_FROM_JSON(SourceTableRowCount, sourceTableRowCount_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      RecallManagementTableVersions() = default ;
      RecallManagementTableVersions(const RecallManagementTableVersions &) = default ;
      RecallManagementTableVersions(RecallManagementTableVersions &&) = default ;
      RecallManagementTableVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RecallManagementTableVersions() = default ;
      RecallManagementTableVersions& operator=(const RecallManagementTableVersions &) = default ;
      RecallManagementTableVersions& operator=(RecallManagementTableVersions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dataVersion_ == nullptr
        && this->effectiveTime_ == nullptr && this->publishEndTime_ == nullptr && this->publishStartTime_ == nullptr && this->recallManagementTableVersionId_ == nullptr && this->sourceTableDataSize_ == nullptr
        && this->sourceTableRowCount_ == nullptr && this->status_ == nullptr; };
      // dataVersion Field Functions 
      bool hasDataVersion() const { return this->dataVersion_ != nullptr;};
      void deleteDataVersion() { this->dataVersion_ = nullptr;};
      inline string getDataVersion() const { DARABONBA_PTR_GET_DEFAULT(dataVersion_, "") };
      inline RecallManagementTableVersions& setDataVersion(string dataVersion) { DARABONBA_PTR_SET_VALUE(dataVersion_, dataVersion) };


      // effectiveTime Field Functions 
      bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
      void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
      inline string getEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
      inline RecallManagementTableVersions& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


      // publishEndTime Field Functions 
      bool hasPublishEndTime() const { return this->publishEndTime_ != nullptr;};
      void deletePublishEndTime() { this->publishEndTime_ = nullptr;};
      inline string getPublishEndTime() const { DARABONBA_PTR_GET_DEFAULT(publishEndTime_, "") };
      inline RecallManagementTableVersions& setPublishEndTime(string publishEndTime) { DARABONBA_PTR_SET_VALUE(publishEndTime_, publishEndTime) };


      // publishStartTime Field Functions 
      bool hasPublishStartTime() const { return this->publishStartTime_ != nullptr;};
      void deletePublishStartTime() { this->publishStartTime_ = nullptr;};
      inline string getPublishStartTime() const { DARABONBA_PTR_GET_DEFAULT(publishStartTime_, "") };
      inline RecallManagementTableVersions& setPublishStartTime(string publishStartTime) { DARABONBA_PTR_SET_VALUE(publishStartTime_, publishStartTime) };


      // recallManagementTableVersionId Field Functions 
      bool hasRecallManagementTableVersionId() const { return this->recallManagementTableVersionId_ != nullptr;};
      void deleteRecallManagementTableVersionId() { this->recallManagementTableVersionId_ = nullptr;};
      inline string getRecallManagementTableVersionId() const { DARABONBA_PTR_GET_DEFAULT(recallManagementTableVersionId_, "") };
      inline RecallManagementTableVersions& setRecallManagementTableVersionId(string recallManagementTableVersionId) { DARABONBA_PTR_SET_VALUE(recallManagementTableVersionId_, recallManagementTableVersionId) };


      // sourceTableDataSize Field Functions 
      bool hasSourceTableDataSize() const { return this->sourceTableDataSize_ != nullptr;};
      void deleteSourceTableDataSize() { this->sourceTableDataSize_ = nullptr;};
      inline int64_t getSourceTableDataSize() const { DARABONBA_PTR_GET_DEFAULT(sourceTableDataSize_, 0L) };
      inline RecallManagementTableVersions& setSourceTableDataSize(int64_t sourceTableDataSize) { DARABONBA_PTR_SET_VALUE(sourceTableDataSize_, sourceTableDataSize) };


      // sourceTableRowCount Field Functions 
      bool hasSourceTableRowCount() const { return this->sourceTableRowCount_ != nullptr;};
      void deleteSourceTableRowCount() { this->sourceTableRowCount_ = nullptr;};
      inline int64_t getSourceTableRowCount() const { DARABONBA_PTR_GET_DEFAULT(sourceTableRowCount_, 0L) };
      inline RecallManagementTableVersions& setSourceTableRowCount(int64_t sourceTableRowCount) { DARABONBA_PTR_SET_VALUE(sourceTableRowCount_, sourceTableRowCount) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline RecallManagementTableVersions& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> dataVersion_ {};
      shared_ptr<string> effectiveTime_ {};
      shared_ptr<string> publishEndTime_ {};
      shared_ptr<string> publishStartTime_ {};
      shared_ptr<string> recallManagementTableVersionId_ {};
      shared_ptr<int64_t> sourceTableDataSize_ {};
      shared_ptr<int64_t> sourceTableRowCount_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->recallManagementTableVersions_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // recallManagementTableVersions Field Functions 
    bool hasRecallManagementTableVersions() const { return this->recallManagementTableVersions_ != nullptr;};
    void deleteRecallManagementTableVersions() { this->recallManagementTableVersions_ = nullptr;};
    inline const vector<ListRecallManagementTableVersionsResponseBody::RecallManagementTableVersions> & getRecallManagementTableVersions() const { DARABONBA_PTR_GET_CONST(recallManagementTableVersions_, vector<ListRecallManagementTableVersionsResponseBody::RecallManagementTableVersions>) };
    inline vector<ListRecallManagementTableVersionsResponseBody::RecallManagementTableVersions> getRecallManagementTableVersions() { DARABONBA_PTR_GET(recallManagementTableVersions_, vector<ListRecallManagementTableVersionsResponseBody::RecallManagementTableVersions>) };
    inline ListRecallManagementTableVersionsResponseBody& setRecallManagementTableVersions(const vector<ListRecallManagementTableVersionsResponseBody::RecallManagementTableVersions> & recallManagementTableVersions) { DARABONBA_PTR_SET_VALUE(recallManagementTableVersions_, recallManagementTableVersions) };
    inline ListRecallManagementTableVersionsResponseBody& setRecallManagementTableVersions(vector<ListRecallManagementTableVersionsResponseBody::RecallManagementTableVersions> && recallManagementTableVersions) { DARABONBA_PTR_SET_RVALUE(recallManagementTableVersions_, recallManagementTableVersions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRecallManagementTableVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListRecallManagementTableVersionsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListRecallManagementTableVersionsResponseBody::RecallManagementTableVersions>> recallManagementTableVersions_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
