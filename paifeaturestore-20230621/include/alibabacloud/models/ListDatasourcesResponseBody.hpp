// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class ListDatasourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatasourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Datasources, datasources_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatasourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Datasources, datasources_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDatasourcesResponseBody() = default ;
    ListDatasourcesResponseBody(const ListDatasourcesResponseBody &) = default ;
    ListDatasourcesResponseBody(ListDatasourcesResponseBody &&) = default ;
    ListDatasourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatasourcesResponseBody() = default ;
    ListDatasourcesResponseBody& operator=(const ListDatasourcesResponseBody &) = default ;
    ListDatasourcesResponseBody& operator=(ListDatasourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Datasources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Datasources& obj) { 
        DARABONBA_PTR_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(DatasourceId, datasourceId_);
        DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Uri, uri_);
        DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Datasources& obj) { 
        DARABONBA_PTR_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(DatasourceId, datasourceId_);
        DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Uri, uri_);
        DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      };
      Datasources() = default ;
      Datasources(const Datasources &) = default ;
      Datasources(Datasources &&) = default ;
      Datasources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Datasources() = default ;
      Datasources& operator=(const Datasources &) = default ;
      Datasources& operator=(Datasources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->config_ == nullptr
        && this->datasourceId_ == nullptr && this->gmtCreateTime_ == nullptr && this->gmtModifiedTime_ == nullptr && this->name_ == nullptr && this->type_ == nullptr
        && this->uri_ == nullptr && this->workspaceId_ == nullptr; };
      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
      inline Datasources& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


      // datasourceId Field Functions 
      bool hasDatasourceId() const { return this->datasourceId_ != nullptr;};
      void deleteDatasourceId() { this->datasourceId_ = nullptr;};
      inline string getDatasourceId() const { DARABONBA_PTR_GET_DEFAULT(datasourceId_, "") };
      inline Datasources& setDatasourceId(string datasourceId) { DARABONBA_PTR_SET_VALUE(datasourceId_, datasourceId) };


      // gmtCreateTime Field Functions 
      bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
      void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
      inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
      inline Datasources& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


      // gmtModifiedTime Field Functions 
      bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
      void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
      inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
      inline Datasources& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Datasources& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Datasources& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // uri Field Functions 
      bool hasUri() const { return this->uri_ != nullptr;};
      void deleteUri() { this->uri_ = nullptr;};
      inline string getUri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
      inline Datasources& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Datasources& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      shared_ptr<string> config_ {};
      shared_ptr<string> datasourceId_ {};
      shared_ptr<string> gmtCreateTime_ {};
      shared_ptr<string> gmtModifiedTime_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> uri_ {};
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->datasources_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // datasources Field Functions 
    bool hasDatasources() const { return this->datasources_ != nullptr;};
    void deleteDatasources() { this->datasources_ = nullptr;};
    inline const vector<ListDatasourcesResponseBody::Datasources> & getDatasources() const { DARABONBA_PTR_GET_CONST(datasources_, vector<ListDatasourcesResponseBody::Datasources>) };
    inline vector<ListDatasourcesResponseBody::Datasources> getDatasources() { DARABONBA_PTR_GET(datasources_, vector<ListDatasourcesResponseBody::Datasources>) };
    inline ListDatasourcesResponseBody& setDatasources(const vector<ListDatasourcesResponseBody::Datasources> & datasources) { DARABONBA_PTR_SET_VALUE(datasources_, datasources) };
    inline ListDatasourcesResponseBody& setDatasources(vector<ListDatasourcesResponseBody::Datasources> && datasources) { DARABONBA_PTR_SET_RVALUE(datasources_, datasources) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDatasourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListDatasourcesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListDatasourcesResponseBody::Datasources>> datasources_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
