// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFEATUREVIEWSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFEATUREVIEWSRESPONSEBODY_HPP_
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
  class ListFeatureViewsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFeatureViewsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FeatureViews, featureViews_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListFeatureViewsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FeatureViews, featureViews_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListFeatureViewsResponseBody() = default ;
    ListFeatureViewsResponseBody(const ListFeatureViewsResponseBody &) = default ;
    ListFeatureViewsResponseBody(ListFeatureViewsResponseBody &&) = default ;
    ListFeatureViewsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFeatureViewsResponseBody() = default ;
    ListFeatureViewsResponseBody& operator=(const ListFeatureViewsResponseBody &) = default ;
    ListFeatureViewsResponseBody& operator=(ListFeatureViewsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FeatureViews : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FeatureViews& obj) { 
        DARABONBA_PTR_TO_JSON(FeatureEntityName, featureEntityName_);
        DARABONBA_PTR_TO_JSON(FeatureViewId, featureViewId_);
        DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
        DARABONBA_PTR_TO_JSON(RegisterDatasourceId, registerDatasourceId_);
        DARABONBA_PTR_TO_JSON(RegisterDatasourceName, registerDatasourceName_);
        DARABONBA_PTR_TO_JSON(RegisterTable, registerTable_);
        DARABONBA_PTR_TO_JSON(TTL, TTL_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(WriteToFeatureDB, writeToFeatureDB_);
      };
      friend void from_json(const Darabonba::Json& j, FeatureViews& obj) { 
        DARABONBA_PTR_FROM_JSON(FeatureEntityName, featureEntityName_);
        DARABONBA_PTR_FROM_JSON(FeatureViewId, featureViewId_);
        DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
        DARABONBA_PTR_FROM_JSON(RegisterDatasourceId, registerDatasourceId_);
        DARABONBA_PTR_FROM_JSON(RegisterDatasourceName, registerDatasourceName_);
        DARABONBA_PTR_FROM_JSON(RegisterTable, registerTable_);
        DARABONBA_PTR_FROM_JSON(TTL, TTL_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(WriteToFeatureDB, writeToFeatureDB_);
      };
      FeatureViews() = default ;
      FeatureViews(const FeatureViews &) = default ;
      FeatureViews(FeatureViews &&) = default ;
      FeatureViews(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FeatureViews() = default ;
      FeatureViews& operator=(const FeatureViews &) = default ;
      FeatureViews& operator=(FeatureViews &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->featureEntityName_ == nullptr
        && this->featureViewId_ == nullptr && this->gmtCreateTime_ == nullptr && this->gmtModifiedTime_ == nullptr && this->name_ == nullptr && this->owner_ == nullptr
        && this->projectId_ == nullptr && this->projectName_ == nullptr && this->registerDatasourceId_ == nullptr && this->registerDatasourceName_ == nullptr && this->registerTable_ == nullptr
        && this->TTL_ == nullptr && this->type_ == nullptr && this->writeToFeatureDB_ == nullptr; };
      // featureEntityName Field Functions 
      bool hasFeatureEntityName() const { return this->featureEntityName_ != nullptr;};
      void deleteFeatureEntityName() { this->featureEntityName_ = nullptr;};
      inline string getFeatureEntityName() const { DARABONBA_PTR_GET_DEFAULT(featureEntityName_, "") };
      inline FeatureViews& setFeatureEntityName(string featureEntityName) { DARABONBA_PTR_SET_VALUE(featureEntityName_, featureEntityName) };


      // featureViewId Field Functions 
      bool hasFeatureViewId() const { return this->featureViewId_ != nullptr;};
      void deleteFeatureViewId() { this->featureViewId_ = nullptr;};
      inline string getFeatureViewId() const { DARABONBA_PTR_GET_DEFAULT(featureViewId_, "") };
      inline FeatureViews& setFeatureViewId(string featureViewId) { DARABONBA_PTR_SET_VALUE(featureViewId_, featureViewId) };


      // gmtCreateTime Field Functions 
      bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
      void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
      inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
      inline FeatureViews& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


      // gmtModifiedTime Field Functions 
      bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
      void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
      inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
      inline FeatureViews& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline FeatureViews& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline FeatureViews& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
      inline FeatureViews& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // projectName Field Functions 
      bool hasProjectName() const { return this->projectName_ != nullptr;};
      void deleteProjectName() { this->projectName_ = nullptr;};
      inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
      inline FeatureViews& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


      // registerDatasourceId Field Functions 
      bool hasRegisterDatasourceId() const { return this->registerDatasourceId_ != nullptr;};
      void deleteRegisterDatasourceId() { this->registerDatasourceId_ = nullptr;};
      inline string getRegisterDatasourceId() const { DARABONBA_PTR_GET_DEFAULT(registerDatasourceId_, "") };
      inline FeatureViews& setRegisterDatasourceId(string registerDatasourceId) { DARABONBA_PTR_SET_VALUE(registerDatasourceId_, registerDatasourceId) };


      // registerDatasourceName Field Functions 
      bool hasRegisterDatasourceName() const { return this->registerDatasourceName_ != nullptr;};
      void deleteRegisterDatasourceName() { this->registerDatasourceName_ = nullptr;};
      inline string getRegisterDatasourceName() const { DARABONBA_PTR_GET_DEFAULT(registerDatasourceName_, "") };
      inline FeatureViews& setRegisterDatasourceName(string registerDatasourceName) { DARABONBA_PTR_SET_VALUE(registerDatasourceName_, registerDatasourceName) };


      // registerTable Field Functions 
      bool hasRegisterTable() const { return this->registerTable_ != nullptr;};
      void deleteRegisterTable() { this->registerTable_ = nullptr;};
      inline string getRegisterTable() const { DARABONBA_PTR_GET_DEFAULT(registerTable_, "") };
      inline FeatureViews& setRegisterTable(string registerTable) { DARABONBA_PTR_SET_VALUE(registerTable_, registerTable) };


      // TTL Field Functions 
      bool hasTTL() const { return this->TTL_ != nullptr;};
      void deleteTTL() { this->TTL_ = nullptr;};
      inline int32_t getTTL() const { DARABONBA_PTR_GET_DEFAULT(TTL_, 0) };
      inline FeatureViews& setTTL(int32_t TTL) { DARABONBA_PTR_SET_VALUE(TTL_, TTL) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline FeatureViews& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // writeToFeatureDB Field Functions 
      bool hasWriteToFeatureDB() const { return this->writeToFeatureDB_ != nullptr;};
      void deleteWriteToFeatureDB() { this->writeToFeatureDB_ = nullptr;};
      inline bool getWriteToFeatureDB() const { DARABONBA_PTR_GET_DEFAULT(writeToFeatureDB_, false) };
      inline FeatureViews& setWriteToFeatureDB(bool writeToFeatureDB) { DARABONBA_PTR_SET_VALUE(writeToFeatureDB_, writeToFeatureDB) };


    protected:
      shared_ptr<string> featureEntityName_ {};
      shared_ptr<string> featureViewId_ {};
      shared_ptr<string> gmtCreateTime_ {};
      shared_ptr<string> gmtModifiedTime_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> owner_ {};
      shared_ptr<string> projectId_ {};
      shared_ptr<string> projectName_ {};
      shared_ptr<string> registerDatasourceId_ {};
      shared_ptr<string> registerDatasourceName_ {};
      shared_ptr<string> registerTable_ {};
      shared_ptr<int32_t> TTL_ {};
      shared_ptr<string> type_ {};
      shared_ptr<bool> writeToFeatureDB_ {};
    };

    virtual bool empty() const override { return this->featureViews_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // featureViews Field Functions 
    bool hasFeatureViews() const { return this->featureViews_ != nullptr;};
    void deleteFeatureViews() { this->featureViews_ = nullptr;};
    inline const vector<ListFeatureViewsResponseBody::FeatureViews> & getFeatureViews() const { DARABONBA_PTR_GET_CONST(featureViews_, vector<ListFeatureViewsResponseBody::FeatureViews>) };
    inline vector<ListFeatureViewsResponseBody::FeatureViews> getFeatureViews() { DARABONBA_PTR_GET(featureViews_, vector<ListFeatureViewsResponseBody::FeatureViews>) };
    inline ListFeatureViewsResponseBody& setFeatureViews(const vector<ListFeatureViewsResponseBody::FeatureViews> & featureViews) { DARABONBA_PTR_SET_VALUE(featureViews_, featureViews) };
    inline ListFeatureViewsResponseBody& setFeatureViews(vector<ListFeatureViewsResponseBody::FeatureViews> && featureViews) { DARABONBA_PTR_SET_RVALUE(featureViews_, featureViews) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFeatureViewsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListFeatureViewsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListFeatureViewsResponseBody::FeatureViews>> featureViews_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
