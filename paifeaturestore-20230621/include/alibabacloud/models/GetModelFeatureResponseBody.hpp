// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODELFEATURERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMODELFEATURERESPONSEBODY_HPP_
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
  class GetModelFeatureResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModelFeatureResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExportTrainingSetTableScript, exportTrainingSetTableScript_);
      DARABONBA_PTR_TO_JSON(Features, features_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(LabelPriorityLevel, labelPriorityLevel_);
      DARABONBA_PTR_TO_JSON(LabelTableId, labelTableId_);
      DARABONBA_PTR_TO_JSON(LabelTableName, labelTableName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Relations, relations_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TrainingSetFGTable, trainingSetFGTable_);
      DARABONBA_PTR_TO_JSON(TrainingSetTable, trainingSetTable_);
    };
    friend void from_json(const Darabonba::Json& j, GetModelFeatureResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExportTrainingSetTableScript, exportTrainingSetTableScript_);
      DARABONBA_PTR_FROM_JSON(Features, features_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(LabelPriorityLevel, labelPriorityLevel_);
      DARABONBA_PTR_FROM_JSON(LabelTableId, labelTableId_);
      DARABONBA_PTR_FROM_JSON(LabelTableName, labelTableName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Relations, relations_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TrainingSetFGTable, trainingSetFGTable_);
      DARABONBA_PTR_FROM_JSON(TrainingSetTable, trainingSetTable_);
    };
    GetModelFeatureResponseBody() = default ;
    GetModelFeatureResponseBody(const GetModelFeatureResponseBody &) = default ;
    GetModelFeatureResponseBody(GetModelFeatureResponseBody &&) = default ;
    GetModelFeatureResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModelFeatureResponseBody() = default ;
    GetModelFeatureResponseBody& operator=(const GetModelFeatureResponseBody &) = default ;
    GetModelFeatureResponseBody& operator=(GetModelFeatureResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Relations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Relations& obj) { 
        DARABONBA_PTR_TO_JSON(Domains, domains_);
        DARABONBA_PTR_TO_JSON(Links, links_);
      };
      friend void from_json(const Darabonba::Json& j, Relations& obj) { 
        DARABONBA_PTR_FROM_JSON(Domains, domains_);
        DARABONBA_PTR_FROM_JSON(Links, links_);
      };
      Relations() = default ;
      Relations(const Relations &) = default ;
      Relations(Relations &&) = default ;
      Relations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Relations() = default ;
      Relations& operator=(const Relations &) = default ;
      Relations& operator=(Relations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Links : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Links& obj) { 
          DARABONBA_PTR_TO_JSON(From, from_);
          DARABONBA_PTR_TO_JSON(Link, link_);
          DARABONBA_PTR_TO_JSON(To, to_);
        };
        friend void from_json(const Darabonba::Json& j, Links& obj) { 
          DARABONBA_PTR_FROM_JSON(From, from_);
          DARABONBA_PTR_FROM_JSON(Link, link_);
          DARABONBA_PTR_FROM_JSON(To, to_);
        };
        Links() = default ;
        Links(const Links &) = default ;
        Links(Links &&) = default ;
        Links(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Links() = default ;
        Links& operator=(const Links &) = default ;
        Links& operator=(Links &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->from_ == nullptr
        && this->link_ == nullptr && this->to_ == nullptr; };
        // from Field Functions 
        bool hasFrom() const { return this->from_ != nullptr;};
        void deleteFrom() { this->from_ = nullptr;};
        inline string getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
        inline Links& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


        // link Field Functions 
        bool hasLink() const { return this->link_ != nullptr;};
        void deleteLink() { this->link_ = nullptr;};
        inline string getLink() const { DARABONBA_PTR_GET_DEFAULT(link_, "") };
        inline Links& setLink(string link) { DARABONBA_PTR_SET_VALUE(link_, link) };


        // to Field Functions 
        bool hasTo() const { return this->to_ != nullptr;};
        void deleteTo() { this->to_ = nullptr;};
        inline string getTo() const { DARABONBA_PTR_GET_DEFAULT(to_, "") };
        inline Links& setTo(string to) { DARABONBA_PTR_SET_VALUE(to_, to) };


      protected:
        shared_ptr<string> from_ {};
        shared_ptr<string> link_ {};
        shared_ptr<string> to_ {};
      };

      class Domains : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Domains& obj) { 
          DARABONBA_PTR_TO_JSON(DomainType, domainType_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Domains& obj) { 
          DARABONBA_PTR_FROM_JSON(DomainType, domainType_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        Domains() = default ;
        Domains(const Domains &) = default ;
        Domains(Domains &&) = default ;
        Domains(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Domains() = default ;
        Domains& operator=(const Domains &) = default ;
        Domains& operator=(Domains &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->domainType_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr; };
        // domainType Field Functions 
        bool hasDomainType() const { return this->domainType_ != nullptr;};
        void deleteDomainType() { this->domainType_ = nullptr;};
        inline string getDomainType() const { DARABONBA_PTR_GET_DEFAULT(domainType_, "") };
        inline Domains& setDomainType(string domainType) { DARABONBA_PTR_SET_VALUE(domainType_, domainType) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Domains& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Domains& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> domainType_ {};
        // Domain ID。
        shared_ptr<string> id_ {};
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->domains_ == nullptr
        && this->links_ == nullptr; };
      // domains Field Functions 
      bool hasDomains() const { return this->domains_ != nullptr;};
      void deleteDomains() { this->domains_ = nullptr;};
      inline const vector<Relations::Domains> & getDomains() const { DARABONBA_PTR_GET_CONST(domains_, vector<Relations::Domains>) };
      inline vector<Relations::Domains> getDomains() { DARABONBA_PTR_GET(domains_, vector<Relations::Domains>) };
      inline Relations& setDomains(const vector<Relations::Domains> & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
      inline Relations& setDomains(vector<Relations::Domains> && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


      // links Field Functions 
      bool hasLinks() const { return this->links_ != nullptr;};
      void deleteLinks() { this->links_ = nullptr;};
      inline const vector<Relations::Links> & getLinks() const { DARABONBA_PTR_GET_CONST(links_, vector<Relations::Links>) };
      inline vector<Relations::Links> getLinks() { DARABONBA_PTR_GET(links_, vector<Relations::Links>) };
      inline Relations& setLinks(const vector<Relations::Links> & links) { DARABONBA_PTR_SET_VALUE(links_, links) };
      inline Relations& setLinks(vector<Relations::Links> && links) { DARABONBA_PTR_SET_RVALUE(links_, links) };


    protected:
      shared_ptr<vector<Relations::Domains>> domains_ {};
      shared_ptr<vector<Relations::Links>> links_ {};
    };

    class Features : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Features& obj) { 
        DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
        DARABONBA_PTR_TO_JSON(FeatureViewId, featureViewId_);
        DARABONBA_PTR_TO_JSON(FeatureViewName, featureViewName_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Features& obj) { 
        DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
        DARABONBA_PTR_FROM_JSON(FeatureViewId, featureViewId_);
        DARABONBA_PTR_FROM_JSON(FeatureViewName, featureViewName_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Features() = default ;
      Features(const Features &) = default ;
      Features(Features &&) = default ;
      Features(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Features() = default ;
      Features& operator=(const Features &) = default ;
      Features& operator=(Features &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliasName_ == nullptr
        && this->featureViewId_ == nullptr && this->featureViewName_ == nullptr && this->name_ == nullptr && this->type_ == nullptr; };
      // aliasName Field Functions 
      bool hasAliasName() const { return this->aliasName_ != nullptr;};
      void deleteAliasName() { this->aliasName_ = nullptr;};
      inline string getAliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
      inline Features& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


      // featureViewId Field Functions 
      bool hasFeatureViewId() const { return this->featureViewId_ != nullptr;};
      void deleteFeatureViewId() { this->featureViewId_ = nullptr;};
      inline string getFeatureViewId() const { DARABONBA_PTR_GET_DEFAULT(featureViewId_, "") };
      inline Features& setFeatureViewId(string featureViewId) { DARABONBA_PTR_SET_VALUE(featureViewId_, featureViewId) };


      // featureViewName Field Functions 
      bool hasFeatureViewName() const { return this->featureViewName_ != nullptr;};
      void deleteFeatureViewName() { this->featureViewName_ = nullptr;};
      inline string getFeatureViewName() const { DARABONBA_PTR_GET_DEFAULT(featureViewName_, "") };
      inline Features& setFeatureViewName(string featureViewName) { DARABONBA_PTR_SET_VALUE(featureViewName_, featureViewName) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Features& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Features& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> aliasName_ {};
      shared_ptr<string> featureViewId_ {};
      shared_ptr<string> featureViewName_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->exportTrainingSetTableScript_ == nullptr
        && this->features_ == nullptr && this->gmtCreateTime_ == nullptr && this->gmtModifiedTime_ == nullptr && this->labelPriorityLevel_ == nullptr && this->labelTableId_ == nullptr
        && this->labelTableName_ == nullptr && this->name_ == nullptr && this->owner_ == nullptr && this->projectId_ == nullptr && this->projectName_ == nullptr
        && this->relations_ == nullptr && this->requestId_ == nullptr && this->trainingSetFGTable_ == nullptr && this->trainingSetTable_ == nullptr; };
    // exportTrainingSetTableScript Field Functions 
    bool hasExportTrainingSetTableScript() const { return this->exportTrainingSetTableScript_ != nullptr;};
    void deleteExportTrainingSetTableScript() { this->exportTrainingSetTableScript_ = nullptr;};
    inline string getExportTrainingSetTableScript() const { DARABONBA_PTR_GET_DEFAULT(exportTrainingSetTableScript_, "") };
    inline GetModelFeatureResponseBody& setExportTrainingSetTableScript(string exportTrainingSetTableScript) { DARABONBA_PTR_SET_VALUE(exportTrainingSetTableScript_, exportTrainingSetTableScript) };


    // features Field Functions 
    bool hasFeatures() const { return this->features_ != nullptr;};
    void deleteFeatures() { this->features_ = nullptr;};
    inline const vector<GetModelFeatureResponseBody::Features> & getFeatures() const { DARABONBA_PTR_GET_CONST(features_, vector<GetModelFeatureResponseBody::Features>) };
    inline vector<GetModelFeatureResponseBody::Features> getFeatures() { DARABONBA_PTR_GET(features_, vector<GetModelFeatureResponseBody::Features>) };
    inline GetModelFeatureResponseBody& setFeatures(const vector<GetModelFeatureResponseBody::Features> & features) { DARABONBA_PTR_SET_VALUE(features_, features) };
    inline GetModelFeatureResponseBody& setFeatures(vector<GetModelFeatureResponseBody::Features> && features) { DARABONBA_PTR_SET_RVALUE(features_, features) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline GetModelFeatureResponseBody& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline GetModelFeatureResponseBody& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // labelPriorityLevel Field Functions 
    bool hasLabelPriorityLevel() const { return this->labelPriorityLevel_ != nullptr;};
    void deleteLabelPriorityLevel() { this->labelPriorityLevel_ = nullptr;};
    inline int64_t getLabelPriorityLevel() const { DARABONBA_PTR_GET_DEFAULT(labelPriorityLevel_, 0L) };
    inline GetModelFeatureResponseBody& setLabelPriorityLevel(int64_t labelPriorityLevel) { DARABONBA_PTR_SET_VALUE(labelPriorityLevel_, labelPriorityLevel) };


    // labelTableId Field Functions 
    bool hasLabelTableId() const { return this->labelTableId_ != nullptr;};
    void deleteLabelTableId() { this->labelTableId_ = nullptr;};
    inline string getLabelTableId() const { DARABONBA_PTR_GET_DEFAULT(labelTableId_, "") };
    inline GetModelFeatureResponseBody& setLabelTableId(string labelTableId) { DARABONBA_PTR_SET_VALUE(labelTableId_, labelTableId) };


    // labelTableName Field Functions 
    bool hasLabelTableName() const { return this->labelTableName_ != nullptr;};
    void deleteLabelTableName() { this->labelTableName_ = nullptr;};
    inline string getLabelTableName() const { DARABONBA_PTR_GET_DEFAULT(labelTableName_, "") };
    inline GetModelFeatureResponseBody& setLabelTableName(string labelTableName) { DARABONBA_PTR_SET_VALUE(labelTableName_, labelTableName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetModelFeatureResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline GetModelFeatureResponseBody& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline GetModelFeatureResponseBody& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline GetModelFeatureResponseBody& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // relations Field Functions 
    bool hasRelations() const { return this->relations_ != nullptr;};
    void deleteRelations() { this->relations_ = nullptr;};
    inline const GetModelFeatureResponseBody::Relations & getRelations() const { DARABONBA_PTR_GET_CONST(relations_, GetModelFeatureResponseBody::Relations) };
    inline GetModelFeatureResponseBody::Relations getRelations() { DARABONBA_PTR_GET(relations_, GetModelFeatureResponseBody::Relations) };
    inline GetModelFeatureResponseBody& setRelations(const GetModelFeatureResponseBody::Relations & relations) { DARABONBA_PTR_SET_VALUE(relations_, relations) };
    inline GetModelFeatureResponseBody& setRelations(GetModelFeatureResponseBody::Relations && relations) { DARABONBA_PTR_SET_RVALUE(relations_, relations) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetModelFeatureResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // trainingSetFGTable Field Functions 
    bool hasTrainingSetFGTable() const { return this->trainingSetFGTable_ != nullptr;};
    void deleteTrainingSetFGTable() { this->trainingSetFGTable_ = nullptr;};
    inline string getTrainingSetFGTable() const { DARABONBA_PTR_GET_DEFAULT(trainingSetFGTable_, "") };
    inline GetModelFeatureResponseBody& setTrainingSetFGTable(string trainingSetFGTable) { DARABONBA_PTR_SET_VALUE(trainingSetFGTable_, trainingSetFGTable) };


    // trainingSetTable Field Functions 
    bool hasTrainingSetTable() const { return this->trainingSetTable_ != nullptr;};
    void deleteTrainingSetTable() { this->trainingSetTable_ = nullptr;};
    inline string getTrainingSetTable() const { DARABONBA_PTR_GET_DEFAULT(trainingSetTable_, "") };
    inline GetModelFeatureResponseBody& setTrainingSetTable(string trainingSetTable) { DARABONBA_PTR_SET_VALUE(trainingSetTable_, trainingSetTable) };


  protected:
    shared_ptr<string> exportTrainingSetTableScript_ {};
    shared_ptr<vector<GetModelFeatureResponseBody::Features>> features_ {};
    shared_ptr<string> gmtCreateTime_ {};
    shared_ptr<string> gmtModifiedTime_ {};
    shared_ptr<int64_t> labelPriorityLevel_ {};
    shared_ptr<string> labelTableId_ {};
    shared_ptr<string> labelTableName_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> owner_ {};
    shared_ptr<string> projectId_ {};
    shared_ptr<string> projectName_ {};
    shared_ptr<GetModelFeatureResponseBody::Relations> relations_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> trainingSetFGTable_ {};
    shared_ptr<string> trainingSetTable_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
