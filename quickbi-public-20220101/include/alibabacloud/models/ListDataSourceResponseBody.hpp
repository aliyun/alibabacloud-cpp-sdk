// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ListDataSourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListDataSourceResponseBody() = default ;
    ListDataSourceResponseBody(const ListDataSourceResponseBody &) = default ;
    ListDataSourceResponseBody(ListDataSourceResponseBody &&) = default ;
    ListDataSourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSourceResponseBody() = default ;
    ListDataSourceResponseBody& operator=(const ListDataSourceResponseBody &) = default ;
    ListDataSourceResponseBody& operator=(ListDataSourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
        DARABONBA_PTR_TO_JSON(CreatorName, creatorName_);
        DARABONBA_PTR_TO_JSON(DatasourceId, datasourceId_);
        DARABONBA_PTR_TO_JSON(DsType, dsType_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(ParentDsType, parentDsType_);
        DARABONBA_PTR_TO_JSON(ShowName, showName_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
        DARABONBA_PTR_FROM_JSON(CreatorName, creatorName_);
        DARABONBA_PTR_FROM_JSON(DatasourceId, datasourceId_);
        DARABONBA_PTR_FROM_JSON(DsType, dsType_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(ParentDsType, parentDsType_);
        DARABONBA_PTR_FROM_JSON(ShowName, showName_);
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
      virtual bool empty() const override { return this->creatorId_ == nullptr
        && this->creatorName_ == nullptr && this->datasourceId_ == nullptr && this->dsType_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->parentDsType_ == nullptr && this->showName_ == nullptr; };
      // creatorId Field Functions 
      bool hasCreatorId() const { return this->creatorId_ != nullptr;};
      void deleteCreatorId() { this->creatorId_ = nullptr;};
      inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
      inline Result& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


      // creatorName Field Functions 
      bool hasCreatorName() const { return this->creatorName_ != nullptr;};
      void deleteCreatorName() { this->creatorName_ = nullptr;};
      inline string getCreatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
      inline Result& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


      // datasourceId Field Functions 
      bool hasDatasourceId() const { return this->datasourceId_ != nullptr;};
      void deleteDatasourceId() { this->datasourceId_ = nullptr;};
      inline string getDatasourceId() const { DARABONBA_PTR_GET_DEFAULT(datasourceId_, "") };
      inline Result& setDatasourceId(string datasourceId) { DARABONBA_PTR_SET_VALUE(datasourceId_, datasourceId) };


      // dsType Field Functions 
      bool hasDsType() const { return this->dsType_ != nullptr;};
      void deleteDsType() { this->dsType_ = nullptr;};
      inline string getDsType() const { DARABONBA_PTR_GET_DEFAULT(dsType_, "") };
      inline Result& setDsType(string dsType) { DARABONBA_PTR_SET_VALUE(dsType_, dsType) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Result& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Result& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // parentDsType Field Functions 
      bool hasParentDsType() const { return this->parentDsType_ != nullptr;};
      void deleteParentDsType() { this->parentDsType_ = nullptr;};
      inline string getParentDsType() const { DARABONBA_PTR_GET_DEFAULT(parentDsType_, "") };
      inline Result& setParentDsType(string parentDsType) { DARABONBA_PTR_SET_VALUE(parentDsType_, parentDsType) };


      // showName Field Functions 
      bool hasShowName() const { return this->showName_ != nullptr;};
      void deleteShowName() { this->showName_ = nullptr;};
      inline string getShowName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
      inline Result& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


    protected:
      // Quick BI user ID of the creator.
      shared_ptr<string> creatorId_ {};
      // Owner\\"s nickname.
      shared_ptr<string> creatorName_ {};
      // Data source ID.
      shared_ptr<string> datasourceId_ {};
      // Data source type.
      shared_ptr<string> dsType_ {};
      // Creation time of the data source, in yyyy-MM-dd HH:mm:ss format.
      shared_ptr<string> gmtCreate_ {};
      // Modification time.
      shared_ptr<string> gmtModified_ {};
      // Primary data source type for multi-engine data sources.
      shared_ptr<string> parentDsType_ {};
      // Display name of the data source.
      shared_ptr<string> showName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataSourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListDataSourceResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListDataSourceResponseBody::Result>) };
    inline vector<ListDataSourceResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListDataSourceResponseBody::Result>) };
    inline ListDataSourceResponseBody& setResult(const vector<ListDataSourceResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListDataSourceResponseBody& setResult(vector<ListDataSourceResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDataSourceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Array of data source information.
    shared_ptr<vector<ListDataSourceResponseBody::Result>> result_ {};
    // Whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
