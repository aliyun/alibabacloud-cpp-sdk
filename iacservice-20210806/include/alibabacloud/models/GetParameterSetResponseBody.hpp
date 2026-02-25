// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPARAMETERSETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPARAMETERSETRESPONSEBODY_HPP_
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
  class GetParameterSetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetParameterSetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(parameterSet, parameterSet_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetParameterSetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(parameterSet, parameterSet_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetParameterSetResponseBody() = default ;
    GetParameterSetResponseBody(const GetParameterSetResponseBody &) = default ;
    GetParameterSetResponseBody(GetParameterSetResponseBody &&) = default ;
    GetParameterSetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetParameterSetResponseBody() = default ;
    GetParameterSetResponseBody& operator=(const GetParameterSetResponseBody &) = default ;
    GetParameterSetResponseBody& operator=(GetParameterSetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ParameterSet : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ParameterSet& obj) { 
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(parameterSetId, parameterSetId_);
        DARABONBA_PTR_TO_JSON(parameters, parameters_);
        DARABONBA_PTR_TO_JSON(relationList, relationList_);
      };
      friend void from_json(const Darabonba::Json& j, ParameterSet& obj) { 
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(parameterSetId, parameterSetId_);
        DARABONBA_PTR_FROM_JSON(parameters, parameters_);
        DARABONBA_PTR_FROM_JSON(relationList, relationList_);
      };
      ParameterSet() = default ;
      ParameterSet(const ParameterSet &) = default ;
      ParameterSet(ParameterSet &&) = default ;
      ParameterSet(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ParameterSet() = default ;
      ParameterSet& operator=(const ParameterSet &) = default ;
      ParameterSet& operator=(ParameterSet &&) = default ;
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
        shared_ptr<string> createTime_ {};
        shared_ptr<string> resourceId_ {};
        shared_ptr<string> resourceType_ {};
      };

      class Parameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Parameters& obj) { 
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(type, type_);
          DARABONBA_ANY_TO_JSON(value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
          DARABONBA_PTR_FROM_JSON(name, name_);
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
        && this->status_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Parameters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


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
        shared_ptr<string> name_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> type_ {};
        Darabonba::Json value_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr && this->parameterSetId_ == nullptr && this->parameters_ == nullptr && this->relationList_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ParameterSet& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ParameterSet& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ParameterSet& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // parameterSetId Field Functions 
      bool hasParameterSetId() const { return this->parameterSetId_ != nullptr;};
      void deleteParameterSetId() { this->parameterSetId_ = nullptr;};
      inline string getParameterSetId() const { DARABONBA_PTR_GET_DEFAULT(parameterSetId_, "") };
      inline ParameterSet& setParameterSetId(string parameterSetId) { DARABONBA_PTR_SET_VALUE(parameterSetId_, parameterSetId) };


      // parameters Field Functions 
      bool hasParameters() const { return this->parameters_ != nullptr;};
      void deleteParameters() { this->parameters_ = nullptr;};
      inline const vector<ParameterSet::Parameters> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<ParameterSet::Parameters>) };
      inline vector<ParameterSet::Parameters> getParameters() { DARABONBA_PTR_GET(parameters_, vector<ParameterSet::Parameters>) };
      inline ParameterSet& setParameters(const vector<ParameterSet::Parameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
      inline ParameterSet& setParameters(vector<ParameterSet::Parameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


      // relationList Field Functions 
      bool hasRelationList() const { return this->relationList_ != nullptr;};
      void deleteRelationList() { this->relationList_ = nullptr;};
      inline const vector<ParameterSet::RelationList> & getRelationList() const { DARABONBA_PTR_GET_CONST(relationList_, vector<ParameterSet::RelationList>) };
      inline vector<ParameterSet::RelationList> getRelationList() { DARABONBA_PTR_GET(relationList_, vector<ParameterSet::RelationList>) };
      inline ParameterSet& setRelationList(const vector<ParameterSet::RelationList> & relationList) { DARABONBA_PTR_SET_VALUE(relationList_, relationList) };
      inline ParameterSet& setRelationList(vector<ParameterSet::RelationList> && relationList) { DARABONBA_PTR_SET_RVALUE(relationList_, relationList) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> parameterSetId_ {};
      shared_ptr<vector<ParameterSet::Parameters>> parameters_ {};
      shared_ptr<vector<ParameterSet::RelationList>> relationList_ {};
    };

    virtual bool empty() const override { return this->parameterSet_ == nullptr
        && this->requestId_ == nullptr; };
    // parameterSet Field Functions 
    bool hasParameterSet() const { return this->parameterSet_ != nullptr;};
    void deleteParameterSet() { this->parameterSet_ = nullptr;};
    inline const GetParameterSetResponseBody::ParameterSet & getParameterSet() const { DARABONBA_PTR_GET_CONST(parameterSet_, GetParameterSetResponseBody::ParameterSet) };
    inline GetParameterSetResponseBody::ParameterSet getParameterSet() { DARABONBA_PTR_GET(parameterSet_, GetParameterSetResponseBody::ParameterSet) };
    inline GetParameterSetResponseBody& setParameterSet(const GetParameterSetResponseBody::ParameterSet & parameterSet) { DARABONBA_PTR_SET_VALUE(parameterSet_, parameterSet) };
    inline GetParameterSetResponseBody& setParameterSet(GetParameterSetResponseBody::ParameterSet && parameterSet) { DARABONBA_PTR_SET_RVALUE(parameterSet_, parameterSet) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetParameterSetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetParameterSetResponseBody::ParameterSet> parameterSet_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
