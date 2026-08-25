// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPARAMETERSETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPARAMETERSETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class ListParameterSetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListParameterSetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(parameterSets, parameterSets_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListParameterSetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(parameterSets, parameterSets_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListParameterSetsResponseBody() = default ;
    ListParameterSetsResponseBody(const ListParameterSetsResponseBody &) = default ;
    ListParameterSetsResponseBody(ListParameterSetsResponseBody &&) = default ;
    ListParameterSetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListParameterSetsResponseBody() = default ;
    ListParameterSetsResponseBody& operator=(const ListParameterSetsResponseBody &) = default ;
    ListParameterSetsResponseBody& operator=(ListParameterSetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ParameterSets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ParameterSets& obj) { 
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(deletionProtection, deletionProtection_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(parameterSetId, parameterSetId_);
        DARABONBA_PTR_TO_JSON(parameters, parameters_);
        DARABONBA_PTR_TO_JSON(relationList, relationList_);
      };
      friend void from_json(const Darabonba::Json& j, ParameterSets& obj) { 
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(deletionProtection, deletionProtection_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(parameterSetId, parameterSetId_);
        DARABONBA_PTR_FROM_JSON(parameters, parameters_);
        DARABONBA_PTR_FROM_JSON(relationList, relationList_);
      };
      ParameterSets() = default ;
      ParameterSets(const ParameterSets &) = default ;
      ParameterSets(ParameterSets &&) = default ;
      ParameterSets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ParameterSets() = default ;
      ParameterSets& operator=(const ParameterSets &) = default ;
      ParameterSets& operator=(ParameterSets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RelationList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RelationList& obj) { 
          DARABONBA_PTR_TO_JSON(createTime, createTime_);
          DARABONBA_PTR_TO_JSON(resourceId, resourceId_);
          DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
        };
        friend void from_json(const Darabonba::Json& j, RelationList& obj) { 
          DARABONBA_PTR_FROM_JSON(createTime, createTime_);
          DARABONBA_PTR_FROM_JSON(resourceId, resourceId_);
          DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
        };
        RelationList() = default ;
        RelationList(const RelationList &) = default ;
        RelationList(RelationList &&) = default ;
        RelationList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RelationList() = default ;
        RelationList& operator=(const RelationList &) = default ;
        RelationList& operator=(RelationList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->resourceId_ == nullptr && this->resourceType_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline RelationList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // resourceId Field Functions 
        bool hasResourceId() const { return this->resourceId_ != nullptr;};
        void deleteResourceId() { this->resourceId_ = nullptr;};
        inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
        inline RelationList& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline RelationList& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      protected:
        // The creation time in UTC, in the ISO 8601 format of YYYY-MM-DDTHH:mm:ssZ.
        shared_ptr<string> createTime_ {};
        // The resource ID. When the resource type is ModuleVersion, the ID is composed of <moduleId>-<moduleversion>, such as mod-34535345df123fr-v3.
        shared_ptr<string> resourceId_ {};
        // The resource type. Valid values:
        // 
        // - Module: template.
        // - ModuleVersion: template version.
        // - Task: task.
        shared_ptr<string> resourceType_ {};
      };

      class Parameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Parameters& obj) { 
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(secret, secret_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(type, type_);
          DARABONBA_ANY_TO_JSON(value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(secret, secret_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(type, type_);
          DARABONBA_ANY_FROM_JSON(value, value_);
        };
        Parameters() = default ;
        Parameters(const Parameters &) = default ;
        Parameters(Parameters &&) = default ;
        Parameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Parameters() = default ;
        Parameters& operator=(const Parameters &) = default ;
        Parameters& operator=(Parameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->secret_ == nullptr && this->status_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Parameters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // secret Field Functions 
        bool hasSecret() const { return this->secret_ != nullptr;};
        void deleteSecret() { this->secret_ = nullptr;};
        inline bool getSecret() const { DARABONBA_PTR_GET_DEFAULT(secret_, false) };
        inline Parameters& setSecret(bool secret) { DARABONBA_PTR_SET_VALUE(secret_, secret) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Parameters& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Parameters& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline         const Darabonba::Json & getValue() const { DARABONBA_GET(value_) };
        Darabonba::Json & getValue() { DARABONBA_GET(value_) };
        inline Parameters& setValue(const Darabonba::Json & value) { DARABONBA_SET_VALUE(value_, value) };
        inline Parameters& setValue(Darabonba::Json && value) { DARABONBA_SET_RVALUE(value_, value) };


      protected:
        // The name of the parameter.
        shared_ptr<string> name_ {};
        // Specifies whether the parameter is a secret parameter. Secret parameters are hidden in API responses and console displays, and are stored with encryption.
        shared_ptr<bool> secret_ {};
        // The parameter set status. Valid values:
        // 
        // - HAS_VALUE (default): A specific value is defined.
        // 
        // - EXPLICIT_NULL: Explicitly set to null.
        shared_ptr<string> status_ {};
        // The parameter type (string/number/bool/map(string)/list(string)).
        shared_ptr<string> type_ {};
        // The value of the parameter.
        Darabonba::Json value_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->deletionProtection_ == nullptr && this->description_ == nullptr && this->name_ == nullptr && this->parameterSetId_ == nullptr && this->parameters_ == nullptr
        && this->relationList_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ParameterSets& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // deletionProtection Field Functions 
      bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
      void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
      inline bool getDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
      inline ParameterSets& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ParameterSets& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ParameterSets& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // parameterSetId Field Functions 
      bool hasParameterSetId() const { return this->parameterSetId_ != nullptr;};
      void deleteParameterSetId() { this->parameterSetId_ = nullptr;};
      inline string getParameterSetId() const { DARABONBA_PTR_GET_DEFAULT(parameterSetId_, "") };
      inline ParameterSets& setParameterSetId(string parameterSetId) { DARABONBA_PTR_SET_VALUE(parameterSetId_, parameterSetId) };


      // parameters Field Functions 
      bool hasParameters() const { return this->parameters_ != nullptr;};
      void deleteParameters() { this->parameters_ = nullptr;};
      inline const vector<ParameterSets::Parameters> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<ParameterSets::Parameters>) };
      inline vector<ParameterSets::Parameters> getParameters() { DARABONBA_PTR_GET(parameters_, vector<ParameterSets::Parameters>) };
      inline ParameterSets& setParameters(const vector<ParameterSets::Parameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
      inline ParameterSets& setParameters(vector<ParameterSets::Parameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


      // relationList Field Functions 
      bool hasRelationList() const { return this->relationList_ != nullptr;};
      void deleteRelationList() { this->relationList_ = nullptr;};
      inline const vector<ParameterSets::RelationList> & getRelationList() const { DARABONBA_PTR_GET_CONST(relationList_, vector<ParameterSets::RelationList>) };
      inline vector<ParameterSets::RelationList> getRelationList() { DARABONBA_PTR_GET(relationList_, vector<ParameterSets::RelationList>) };
      inline ParameterSets& setRelationList(const vector<ParameterSets::RelationList> & relationList) { DARABONBA_PTR_SET_VALUE(relationList_, relationList) };
      inline ParameterSets& setRelationList(vector<ParameterSets::RelationList> && relationList) { DARABONBA_PTR_SET_RVALUE(relationList_, relationList) };


    protected:
      // The creation time in UTC, in the ISO 8601 format of YYYY-MM-DDTHH:mm:ssZ.
      shared_ptr<string> createTime_ {};
      // Indicates whether deletion protection is enabled.
      shared_ptr<bool> deletionProtection_ {};
      // The description of the parameter set.
      shared_ptr<string> description_ {};
      // The name of the parameter set.
      shared_ptr<string> name_ {};
      // The ID of the parameter set.
      shared_ptr<string> parameterSetId_ {};
      // The parameters in the parameter set.
      shared_ptr<vector<ParameterSets::Parameters>> parameters_ {};
      // The associated resources.
      shared_ptr<vector<ParameterSets::RelationList>> relationList_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->parameterSets_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListParameterSetsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListParameterSetsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // parameterSets Field Functions 
    bool hasParameterSets() const { return this->parameterSets_ != nullptr;};
    void deleteParameterSets() { this->parameterSets_ = nullptr;};
    inline const vector<ListParameterSetsResponseBody::ParameterSets> & getParameterSets() const { DARABONBA_PTR_GET_CONST(parameterSets_, vector<ListParameterSetsResponseBody::ParameterSets>) };
    inline vector<ListParameterSetsResponseBody::ParameterSets> getParameterSets() { DARABONBA_PTR_GET(parameterSets_, vector<ListParameterSetsResponseBody::ParameterSets>) };
    inline ListParameterSetsResponseBody& setParameterSets(const vector<ListParameterSetsResponseBody::ParameterSets> & parameterSets) { DARABONBA_PTR_SET_VALUE(parameterSets_, parameterSets) };
    inline ListParameterSetsResponseBody& setParameterSets(vector<ListParameterSetsResponseBody::ParameterSets> && parameterSets) { DARABONBA_PTR_SET_RVALUE(parameterSets_, parameterSets) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListParameterSetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListParameterSetsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of results returned per page. Default value: 20. Minimum value: 1. Maximum value: 200.
    shared_ptr<int32_t> pageSize_ {};
    // The parameter sets.
    shared_ptr<vector<ListParameterSetsResponseBody::ParameterSets>> parameterSets_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of records.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
