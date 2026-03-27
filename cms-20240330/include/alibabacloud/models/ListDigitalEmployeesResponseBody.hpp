// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIGITALEMPLOYEESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDIGITALEMPLOYEESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Tag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListDigitalEmployeesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDigitalEmployeesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(digitalEmployees, digitalEmployees_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListDigitalEmployeesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(digitalEmployees, digitalEmployees_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListDigitalEmployeesResponseBody() = default ;
    ListDigitalEmployeesResponseBody(const ListDigitalEmployeesResponseBody &) = default ;
    ListDigitalEmployeesResponseBody(ListDigitalEmployeesResponseBody &&) = default ;
    ListDigitalEmployeesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDigitalEmployeesResponseBody() = default ;
    ListDigitalEmployeesResponseBody& operator=(const ListDigitalEmployeesResponseBody &) = default ;
    ListDigitalEmployeesResponseBody& operator=(ListDigitalEmployeesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DigitalEmployees : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DigitalEmployees& obj) { 
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(defaultRule, defaultRule_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(displayName, displayName_);
        DARABONBA_PTR_TO_JSON(employeeType, employeeType_);
        DARABONBA_PTR_TO_JSON(knowledges, knowledges_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(roleArn, roleArn_);
        DARABONBA_PTR_TO_JSON(tags, tags_);
        DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, DigitalEmployees& obj) { 
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(defaultRule, defaultRule_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(displayName, displayName_);
        DARABONBA_PTR_FROM_JSON(employeeType, employeeType_);
        DARABONBA_PTR_FROM_JSON(knowledges, knowledges_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(roleArn, roleArn_);
        DARABONBA_PTR_FROM_JSON(tags, tags_);
        DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      };
      DigitalEmployees() = default ;
      DigitalEmployees(const DigitalEmployees &) = default ;
      DigitalEmployees(DigitalEmployees &&) = default ;
      DigitalEmployees(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DigitalEmployees() = default ;
      DigitalEmployees& operator=(const DigitalEmployees &) = default ;
      DigitalEmployees& operator=(DigitalEmployees &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Knowledges : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Knowledges& obj) { 
          DARABONBA_PTR_TO_JSON(bailian, bailian_);
          DARABONBA_PTR_TO_JSON(sop, sop_);
        };
        friend void from_json(const Darabonba::Json& j, Knowledges& obj) { 
          DARABONBA_PTR_FROM_JSON(bailian, bailian_);
          DARABONBA_PTR_FROM_JSON(sop, sop_);
        };
        Knowledges() = default ;
        Knowledges(const Knowledges &) = default ;
        Knowledges(Knowledges &&) = default ;
        Knowledges(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Knowledges() = default ;
        Knowledges& operator=(const Knowledges &) = default ;
        Knowledges& operator=(Knowledges &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Bailian : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Bailian& obj) { 
            DARABONBA_PTR_TO_JSON(attributes, attributes_);
            DARABONBA_PTR_TO_JSON(indexId, indexId_);
            DARABONBA_PTR_TO_JSON(region, region_);
            DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
          };
          friend void from_json(const Darabonba::Json& j, Bailian& obj) { 
            DARABONBA_PTR_FROM_JSON(attributes, attributes_);
            DARABONBA_PTR_FROM_JSON(indexId, indexId_);
            DARABONBA_PTR_FROM_JSON(region, region_);
            DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
          };
          Bailian() = default ;
          Bailian(const Bailian &) = default ;
          Bailian(Bailian &&) = default ;
          Bailian(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Bailian() = default ;
          Bailian& operator=(const Bailian &) = default ;
          Bailian& operator=(Bailian &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->attributes_ == nullptr
        && this->indexId_ == nullptr && this->region_ == nullptr && this->workspaceId_ == nullptr; };
          // attributes Field Functions 
          bool hasAttributes() const { return this->attributes_ != nullptr;};
          void deleteAttributes() { this->attributes_ = nullptr;};
          inline string getAttributes() const { DARABONBA_PTR_GET_DEFAULT(attributes_, "") };
          inline Bailian& setAttributes(string attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };


          // indexId Field Functions 
          bool hasIndexId() const { return this->indexId_ != nullptr;};
          void deleteIndexId() { this->indexId_ = nullptr;};
          inline string getIndexId() const { DARABONBA_PTR_GET_DEFAULT(indexId_, "") };
          inline Bailian& setIndexId(string indexId) { DARABONBA_PTR_SET_VALUE(indexId_, indexId) };


          // region Field Functions 
          bool hasRegion() const { return this->region_ != nullptr;};
          void deleteRegion() { this->region_ = nullptr;};
          inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
          inline Bailian& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


          // workspaceId Field Functions 
          bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
          void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
          inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
          inline Bailian& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


        protected:
          shared_ptr<string> attributes_ {};
          shared_ptr<string> indexId_ {};
          shared_ptr<string> region_ {};
          shared_ptr<string> workspaceId_ {};
        };

        virtual bool empty() const override { return this->bailian_ == nullptr
        && this->sop_ == nullptr; };
        // bailian Field Functions 
        bool hasBailian() const { return this->bailian_ != nullptr;};
        void deleteBailian() { this->bailian_ = nullptr;};
        inline const vector<Knowledges::Bailian> & getBailian() const { DARABONBA_PTR_GET_CONST(bailian_, vector<Knowledges::Bailian>) };
        inline vector<Knowledges::Bailian> getBailian() { DARABONBA_PTR_GET(bailian_, vector<Knowledges::Bailian>) };
        inline Knowledges& setBailian(const vector<Knowledges::Bailian> & bailian) { DARABONBA_PTR_SET_VALUE(bailian_, bailian) };
        inline Knowledges& setBailian(vector<Knowledges::Bailian> && bailian) { DARABONBA_PTR_SET_RVALUE(bailian_, bailian) };


        // sop Field Functions 
        bool hasSop() const { return this->sop_ != nullptr;};
        void deleteSop() { this->sop_ = nullptr;};
        inline const vector<Darabonba::Json> & getSop() const { DARABONBA_PTR_GET_CONST(sop_, vector<Darabonba::Json>) };
        inline vector<Darabonba::Json> getSop() { DARABONBA_PTR_GET(sop_, vector<Darabonba::Json>) };
        inline Knowledges& setSop(const vector<Darabonba::Json> & sop) { DARABONBA_PTR_SET_VALUE(sop_, sop) };
        inline Knowledges& setSop(vector<Darabonba::Json> && sop) { DARABONBA_PTR_SET_RVALUE(sop_, sop) };


      protected:
        shared_ptr<vector<Knowledges::Bailian>> bailian_ {};
        shared_ptr<vector<Darabonba::Json>> sop_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->defaultRule_ == nullptr && this->description_ == nullptr && this->displayName_ == nullptr && this->employeeType_ == nullptr && this->knowledges_ == nullptr
        && this->name_ == nullptr && this->resourceGroupId_ == nullptr && this->roleArn_ == nullptr && this->tags_ == nullptr && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline DigitalEmployees& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // defaultRule Field Functions 
      bool hasDefaultRule() const { return this->defaultRule_ != nullptr;};
      void deleteDefaultRule() { this->defaultRule_ = nullptr;};
      inline string getDefaultRule() const { DARABONBA_PTR_GET_DEFAULT(defaultRule_, "") };
      inline DigitalEmployees& setDefaultRule(string defaultRule) { DARABONBA_PTR_SET_VALUE(defaultRule_, defaultRule) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline DigitalEmployees& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline DigitalEmployees& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // employeeType Field Functions 
      bool hasEmployeeType() const { return this->employeeType_ != nullptr;};
      void deleteEmployeeType() { this->employeeType_ = nullptr;};
      inline string getEmployeeType() const { DARABONBA_PTR_GET_DEFAULT(employeeType_, "") };
      inline DigitalEmployees& setEmployeeType(string employeeType) { DARABONBA_PTR_SET_VALUE(employeeType_, employeeType) };


      // knowledges Field Functions 
      bool hasKnowledges() const { return this->knowledges_ != nullptr;};
      void deleteKnowledges() { this->knowledges_ = nullptr;};
      inline const DigitalEmployees::Knowledges & getKnowledges() const { DARABONBA_PTR_GET_CONST(knowledges_, DigitalEmployees::Knowledges) };
      inline DigitalEmployees::Knowledges getKnowledges() { DARABONBA_PTR_GET(knowledges_, DigitalEmployees::Knowledges) };
      inline DigitalEmployees& setKnowledges(const DigitalEmployees::Knowledges & knowledges) { DARABONBA_PTR_SET_VALUE(knowledges_, knowledges) };
      inline DigitalEmployees& setKnowledges(DigitalEmployees::Knowledges && knowledges) { DARABONBA_PTR_SET_RVALUE(knowledges_, knowledges) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline DigitalEmployees& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline DigitalEmployees& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // roleArn Field Functions 
      bool hasRoleArn() const { return this->roleArn_ != nullptr;};
      void deleteRoleArn() { this->roleArn_ = nullptr;};
      inline string getRoleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
      inline DigitalEmployees& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Tag> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Tag>) };
      inline vector<Tag> getTags() { DARABONBA_PTR_GET(tags_, vector<Tag>) };
      inline DigitalEmployees& setTags(const vector<Tag> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline DigitalEmployees& setTags(vector<Tag> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline DigitalEmployees& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
      shared_ptr<string> createTime_ {};
      shared_ptr<string> defaultRule_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> displayName_ {};
      shared_ptr<string> employeeType_ {};
      shared_ptr<DigitalEmployees::Knowledges> knowledges_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> resourceGroupId_ {};
      shared_ptr<string> roleArn_ {};
      shared_ptr<vector<Tag>> tags_ {};
      // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->digitalEmployees_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->total_ == nullptr; };
    // digitalEmployees Field Functions 
    bool hasDigitalEmployees() const { return this->digitalEmployees_ != nullptr;};
    void deleteDigitalEmployees() { this->digitalEmployees_ = nullptr;};
    inline const vector<ListDigitalEmployeesResponseBody::DigitalEmployees> & getDigitalEmployees() const { DARABONBA_PTR_GET_CONST(digitalEmployees_, vector<ListDigitalEmployeesResponseBody::DigitalEmployees>) };
    inline vector<ListDigitalEmployeesResponseBody::DigitalEmployees> getDigitalEmployees() { DARABONBA_PTR_GET(digitalEmployees_, vector<ListDigitalEmployeesResponseBody::DigitalEmployees>) };
    inline ListDigitalEmployeesResponseBody& setDigitalEmployees(const vector<ListDigitalEmployeesResponseBody::DigitalEmployees> & digitalEmployees) { DARABONBA_PTR_SET_VALUE(digitalEmployees_, digitalEmployees) };
    inline ListDigitalEmployeesResponseBody& setDigitalEmployees(vector<ListDigitalEmployeesResponseBody::DigitalEmployees> && digitalEmployees) { DARABONBA_PTR_SET_RVALUE(digitalEmployees_, digitalEmployees) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDigitalEmployeesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDigitalEmployeesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDigitalEmployeesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListDigitalEmployeesResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<vector<ListDigitalEmployeesResponseBody::DigitalEmployees>> digitalEmployees_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
