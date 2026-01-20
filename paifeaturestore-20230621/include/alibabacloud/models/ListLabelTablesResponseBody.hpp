// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLABELTABLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLABELTABLESRESPONSEBODY_HPP_
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
  class ListLabelTablesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLabelTablesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LabelTables, labelTables_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListLabelTablesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LabelTables, labelTables_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListLabelTablesResponseBody() = default ;
    ListLabelTablesResponseBody(const ListLabelTablesResponseBody &) = default ;
    ListLabelTablesResponseBody(ListLabelTablesResponseBody &&) = default ;
    ListLabelTablesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLabelTablesResponseBody() = default ;
    ListLabelTablesResponseBody& operator=(const ListLabelTablesResponseBody &) = default ;
    ListLabelTablesResponseBody& operator=(ListLabelTablesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LabelTables : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LabelTables& obj) { 
        DARABONBA_PTR_TO_JSON(DatasourceId, datasourceId_);
        DARABONBA_PTR_TO_JSON(DatasourceName, datasourceName_);
        DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_TO_JSON(LabelTableId, labelTableId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      };
      friend void from_json(const Darabonba::Json& j, LabelTables& obj) { 
        DARABONBA_PTR_FROM_JSON(DatasourceId, datasourceId_);
        DARABONBA_PTR_FROM_JSON(DatasourceName, datasourceName_);
        DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_FROM_JSON(LabelTableId, labelTableId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      };
      LabelTables() = default ;
      LabelTables(const LabelTables &) = default ;
      LabelTables(LabelTables &&) = default ;
      LabelTables(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LabelTables() = default ;
      LabelTables& operator=(const LabelTables &) = default ;
      LabelTables& operator=(LabelTables &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->datasourceId_ == nullptr
        && this->datasourceName_ == nullptr && this->gmtCreateTime_ == nullptr && this->gmtModifiedTime_ == nullptr && this->labelTableId_ == nullptr && this->name_ == nullptr
        && this->owner_ == nullptr && this->projectId_ == nullptr && this->projectName_ == nullptr; };
      // datasourceId Field Functions 
      bool hasDatasourceId() const { return this->datasourceId_ != nullptr;};
      void deleteDatasourceId() { this->datasourceId_ = nullptr;};
      inline string getDatasourceId() const { DARABONBA_PTR_GET_DEFAULT(datasourceId_, "") };
      inline LabelTables& setDatasourceId(string datasourceId) { DARABONBA_PTR_SET_VALUE(datasourceId_, datasourceId) };


      // datasourceName Field Functions 
      bool hasDatasourceName() const { return this->datasourceName_ != nullptr;};
      void deleteDatasourceName() { this->datasourceName_ = nullptr;};
      inline string getDatasourceName() const { DARABONBA_PTR_GET_DEFAULT(datasourceName_, "") };
      inline LabelTables& setDatasourceName(string datasourceName) { DARABONBA_PTR_SET_VALUE(datasourceName_, datasourceName) };


      // gmtCreateTime Field Functions 
      bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
      void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
      inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
      inline LabelTables& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


      // gmtModifiedTime Field Functions 
      bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
      void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
      inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
      inline LabelTables& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


      // labelTableId Field Functions 
      bool hasLabelTableId() const { return this->labelTableId_ != nullptr;};
      void deleteLabelTableId() { this->labelTableId_ = nullptr;};
      inline string getLabelTableId() const { DARABONBA_PTR_GET_DEFAULT(labelTableId_, "") };
      inline LabelTables& setLabelTableId(string labelTableId) { DARABONBA_PTR_SET_VALUE(labelTableId_, labelTableId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline LabelTables& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline LabelTables& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
      inline LabelTables& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // projectName Field Functions 
      bool hasProjectName() const { return this->projectName_ != nullptr;};
      void deleteProjectName() { this->projectName_ = nullptr;};
      inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
      inline LabelTables& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    protected:
      shared_ptr<string> datasourceId_ {};
      shared_ptr<string> datasourceName_ {};
      shared_ptr<string> gmtCreateTime_ {};
      shared_ptr<string> gmtModifiedTime_ {};
      shared_ptr<string> labelTableId_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> owner_ {};
      shared_ptr<string> projectId_ {};
      shared_ptr<string> projectName_ {};
    };

    virtual bool empty() const override { return this->labelTables_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // labelTables Field Functions 
    bool hasLabelTables() const { return this->labelTables_ != nullptr;};
    void deleteLabelTables() { this->labelTables_ = nullptr;};
    inline const vector<ListLabelTablesResponseBody::LabelTables> & getLabelTables() const { DARABONBA_PTR_GET_CONST(labelTables_, vector<ListLabelTablesResponseBody::LabelTables>) };
    inline vector<ListLabelTablesResponseBody::LabelTables> getLabelTables() { DARABONBA_PTR_GET(labelTables_, vector<ListLabelTablesResponseBody::LabelTables>) };
    inline ListLabelTablesResponseBody& setLabelTables(const vector<ListLabelTablesResponseBody::LabelTables> & labelTables) { DARABONBA_PTR_SET_VALUE(labelTables_, labelTables) };
    inline ListLabelTablesResponseBody& setLabelTables(vector<ListLabelTablesResponseBody::LabelTables> && labelTables) { DARABONBA_PTR_SET_RVALUE(labelTables_, labelTables) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLabelTablesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListLabelTablesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListLabelTablesResponseBody::LabelTables>> labelTables_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
