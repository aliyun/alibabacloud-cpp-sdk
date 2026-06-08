// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATACOLLECTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATACOLLECTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ListDataCollectionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataCollectionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataCollectionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListDataCollectionsResponseBody() = default ;
    ListDataCollectionsResponseBody(const ListDataCollectionsResponseBody &) = default ;
    ListDataCollectionsResponseBody(ListDataCollectionsResponseBody &&) = default ;
    ListDataCollectionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataCollectionsResponseBody() = default ;
    ListDataCollectionsResponseBody& operator=(const ListDataCollectionsResponseBody &) = default ;
    ListDataCollectionsResponseBody& operator=(ListDataCollectionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(created, created_);
        DARABONBA_PTR_TO_JSON(dataCollectionType, dataCollectionType_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(industryName, industryName_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(sundialId, sundialId_);
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(updated, updated_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(created, created_);
        DARABONBA_PTR_FROM_JSON(dataCollectionType, dataCollectionType_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(industryName, industryName_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(sundialId, sundialId_);
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(updated, updated_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->created_ == nullptr
        && this->dataCollectionType_ == nullptr && this->id_ == nullptr && this->industryName_ == nullptr && this->name_ == nullptr && this->status_ == nullptr
        && this->sundialId_ == nullptr && this->type_ == nullptr && this->updated_ == nullptr; };
      // created Field Functions 
      bool hasCreated() const { return this->created_ != nullptr;};
      void deleteCreated() { this->created_ = nullptr;};
      inline int32_t getCreated() const { DARABONBA_PTR_GET_DEFAULT(created_, 0) };
      inline Result& setCreated(int32_t created) { DARABONBA_PTR_SET_VALUE(created_, created) };


      // dataCollectionType Field Functions 
      bool hasDataCollectionType() const { return this->dataCollectionType_ != nullptr;};
      void deleteDataCollectionType() { this->dataCollectionType_ = nullptr;};
      inline string getDataCollectionType() const { DARABONBA_PTR_GET_DEFAULT(dataCollectionType_, "") };
      inline Result& setDataCollectionType(string dataCollectionType) { DARABONBA_PTR_SET_VALUE(dataCollectionType_, dataCollectionType) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Result& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // industryName Field Functions 
      bool hasIndustryName() const { return this->industryName_ != nullptr;};
      void deleteIndustryName() { this->industryName_ = nullptr;};
      inline string getIndustryName() const { DARABONBA_PTR_GET_DEFAULT(industryName_, "") };
      inline Result& setIndustryName(string industryName) { DARABONBA_PTR_SET_VALUE(industryName_, industryName) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Result& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Result& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // sundialId Field Functions 
      bool hasSundialId() const { return this->sundialId_ != nullptr;};
      void deleteSundialId() { this->sundialId_ = nullptr;};
      inline string getSundialId() const { DARABONBA_PTR_GET_DEFAULT(sundialId_, "") };
      inline Result& setSundialId(string sundialId) { DARABONBA_PTR_SET_VALUE(sundialId_, sundialId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Result& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // updated Field Functions 
      bool hasUpdated() const { return this->updated_ != nullptr;};
      void deleteUpdated() { this->updated_ = nullptr;};
      inline int32_t getUpdated() const { DARABONBA_PTR_GET_DEFAULT(updated_, 0) };
      inline Result& setUpdated(int32_t updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


    protected:
      // The time when the task was created.
      shared_ptr<int32_t> created_ {};
      // The type of data collected. Valid values:
      // 
      // *   behavior: behavioral data.
      // *   item_info: project information.
      // *   industry_specific: industry-specific data.
      shared_ptr<string> dataCollectionType_ {};
      // The data collection ID.
      shared_ptr<string> id_ {};
      // The industry name. Valid values:
      // 
      // *   general
      // *   ecommerce
      shared_ptr<string> industryName_ {};
      // The name of the data collection task.
      shared_ptr<string> name_ {};
      // The status of the data collection feature. Valid values:
      // 
      // *   0: The feature is disabled.
      // *   1: The feature is being enabled.
      // *   2: The feature is enabled.
      // *   3: The feature failed to be enabled.
      shared_ptr<int32_t> status_ {};
      // The sundial ID.
      shared_ptr<string> sundialId_ {};
      // The type of the source from which data was collected. Valid values:
      // 
      // *   server
      // *   web
      // *   app
      // 
      // Only server is supported.
      shared_ptr<string> type_ {};
      // The time when the data collection task was updated.
      shared_ptr<int32_t> updated_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataCollectionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListDataCollectionsResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListDataCollectionsResponseBody::Result>) };
    inline vector<ListDataCollectionsResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListDataCollectionsResponseBody::Result>) };
    inline ListDataCollectionsResponseBody& setResult(const vector<ListDataCollectionsResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListDataCollectionsResponseBody& setResult(vector<ListDataCollectionsResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDataCollectionsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The details of the data collection task.
    // 
    // For more information, see [DataCollection](https://help.aliyun.com/document_detail/173605.html).
    shared_ptr<vector<ListDataCollectionsResponseBody::Result>> result_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
