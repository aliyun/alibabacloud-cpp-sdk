// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDIGITALEMPLOYEEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDIGITALEMPLOYEEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
#include <alibabacloud/models/Tag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace STAROps20260428
{
namespace Models
{
  class CreateDigitalEmployeeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDigitalEmployeeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(attributes, attributes_);
      DARABONBA_PTR_TO_JSON(defaultRule, defaultRule_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(knowledges, knowledges_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(roleArn, roleArn_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(toolPolicy, toolPolicy_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDigitalEmployeeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(defaultRule, defaultRule_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(knowledges, knowledges_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(roleArn, roleArn_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(toolPolicy, toolPolicy_);
    };
    CreateDigitalEmployeeRequest() = default ;
    CreateDigitalEmployeeRequest(const CreateDigitalEmployeeRequest &) = default ;
    CreateDigitalEmployeeRequest(CreateDigitalEmployeeRequest &&) = default ;
    CreateDigitalEmployeeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDigitalEmployeeRequest() = default ;
    CreateDigitalEmployeeRequest& operator=(const CreateDigitalEmployeeRequest &) = default ;
    CreateDigitalEmployeeRequest& operator=(CreateDigitalEmployeeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ToolPolicy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ToolPolicy& obj) { 
        DARABONBA_PTR_TO_JSON(aliyun, aliyun_);
      };
      friend void from_json(const Darabonba::Json& j, ToolPolicy& obj) { 
        DARABONBA_PTR_FROM_JSON(aliyun, aliyun_);
      };
      ToolPolicy() = default ;
      ToolPolicy(const ToolPolicy &) = default ;
      ToolPolicy(ToolPolicy &&) = default ;
      ToolPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ToolPolicy() = default ;
      ToolPolicy& operator=(const ToolPolicy &) = default ;
      ToolPolicy& operator=(ToolPolicy &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Aliyun : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Aliyun& obj) { 
          DARABONBA_PTR_TO_JSON(enable, enable_);
          DARABONBA_PTR_TO_JSON(statements, statements_);
        };
        friend void from_json(const Darabonba::Json& j, Aliyun& obj) { 
          DARABONBA_PTR_FROM_JSON(enable, enable_);
          DARABONBA_PTR_FROM_JSON(statements, statements_);
        };
        Aliyun() = default ;
        Aliyun(const Aliyun &) = default ;
        Aliyun(Aliyun &&) = default ;
        Aliyun(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Aliyun() = default ;
        Aliyun& operator=(const Aliyun &) = default ;
        Aliyun& operator=(Aliyun &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Statements : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Statements& obj) { 
            DARABONBA_PTR_TO_JSON(actions, actions_);
            DARABONBA_PTR_TO_JSON(apiVersion, apiVersion_);
            DARABONBA_PTR_TO_JSON(decision, decision_);
            DARABONBA_PTR_TO_JSON(product, product_);
          };
          friend void from_json(const Darabonba::Json& j, Statements& obj) { 
            DARABONBA_PTR_FROM_JSON(actions, actions_);
            DARABONBA_PTR_FROM_JSON(apiVersion, apiVersion_);
            DARABONBA_PTR_FROM_JSON(decision, decision_);
            DARABONBA_PTR_FROM_JSON(product, product_);
          };
          Statements() = default ;
          Statements(const Statements &) = default ;
          Statements(Statements &&) = default ;
          Statements(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Statements() = default ;
          Statements& operator=(const Statements &) = default ;
          Statements& operator=(Statements &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->actions_ == nullptr
        && this->apiVersion_ == nullptr && this->decision_ == nullptr && this->product_ == nullptr; };
          // actions Field Functions 
          bool hasActions() const { return this->actions_ != nullptr;};
          void deleteActions() { this->actions_ = nullptr;};
          inline const vector<string> & getActions() const { DARABONBA_PTR_GET_CONST(actions_, vector<string>) };
          inline vector<string> getActions() { DARABONBA_PTR_GET(actions_, vector<string>) };
          inline Statements& setActions(const vector<string> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
          inline Statements& setActions(vector<string> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


          // apiVersion Field Functions 
          bool hasApiVersion() const { return this->apiVersion_ != nullptr;};
          void deleteApiVersion() { this->apiVersion_ = nullptr;};
          inline string getApiVersion() const { DARABONBA_PTR_GET_DEFAULT(apiVersion_, "") };
          inline Statements& setApiVersion(string apiVersion) { DARABONBA_PTR_SET_VALUE(apiVersion_, apiVersion) };


          // decision Field Functions 
          bool hasDecision() const { return this->decision_ != nullptr;};
          void deleteDecision() { this->decision_ = nullptr;};
          inline string getDecision() const { DARABONBA_PTR_GET_DEFAULT(decision_, "") };
          inline Statements& setDecision(string decision) { DARABONBA_PTR_SET_VALUE(decision_, decision) };


          // product Field Functions 
          bool hasProduct() const { return this->product_ != nullptr;};
          void deleteProduct() { this->product_ = nullptr;};
          inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
          inline Statements& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


        protected:
          // Aliyun OpenAPI Action 列表，格式为 product:ApiName、product:Prefix* 或 product:*。
          shared_ptr<vector<string>> actions_ {};
          // 本条语句对应的 Aliyun OpenAPI API 版本。
          shared_ptr<string> apiVersion_ {};
          // 命中该 API 后的执行策略。
          shared_ptr<string> decision_ {};
          // 本条语句对应的 Aliyun OpenAPI 产品名。
          shared_ptr<string> product_ {};
        };

        virtual bool empty() const override { return this->enable_ == nullptr
        && this->statements_ == nullptr; };
        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
        inline Aliyun& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


        // statements Field Functions 
        bool hasStatements() const { return this->statements_ != nullptr;};
        void deleteStatements() { this->statements_ = nullptr;};
        inline const vector<Aliyun::Statements> & getStatements() const { DARABONBA_PTR_GET_CONST(statements_, vector<Aliyun::Statements>) };
        inline vector<Aliyun::Statements> getStatements() { DARABONBA_PTR_GET(statements_, vector<Aliyun::Statements>) };
        inline Aliyun& setStatements(const vector<Aliyun::Statements> & statements) { DARABONBA_PTR_SET_VALUE(statements_, statements) };
        inline Aliyun& setStatements(vector<Aliyun::Statements> && statements) { DARABONBA_PTR_SET_RVALUE(statements_, statements) };


      protected:
        // 是否启用 Aliyun MCP 工具策略。
        shared_ptr<bool> enable_ {};
        // Aliyun OpenAPI 工具策略语句列表。
        shared_ptr<vector<Aliyun::Statements>> statements_ {};
      };

      virtual bool empty() const override { return this->aliyun_ == nullptr; };
      // aliyun Field Functions 
      bool hasAliyun() const { return this->aliyun_ != nullptr;};
      void deleteAliyun() { this->aliyun_ = nullptr;};
      inline const ToolPolicy::Aliyun & getAliyun() const { DARABONBA_PTR_GET_CONST(aliyun_, ToolPolicy::Aliyun) };
      inline ToolPolicy::Aliyun getAliyun() { DARABONBA_PTR_GET(aliyun_, ToolPolicy::Aliyun) };
      inline ToolPolicy& setAliyun(const ToolPolicy::Aliyun & aliyun) { DARABONBA_PTR_SET_VALUE(aliyun_, aliyun) };
      inline ToolPolicy& setAliyun(ToolPolicy::Aliyun && aliyun) { DARABONBA_PTR_SET_RVALUE(aliyun_, aliyun) };


    protected:
      // Aliyun MCP 工具调用安全策略配置。
      shared_ptr<ToolPolicy::Aliyun> aliyun_ {};
    };

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

    virtual bool empty() const override { return this->attributes_ == nullptr
        && this->defaultRule_ == nullptr && this->description_ == nullptr && this->displayName_ == nullptr && this->knowledges_ == nullptr && this->name_ == nullptr
        && this->resourceGroupId_ == nullptr && this->roleArn_ == nullptr && this->tags_ == nullptr && this->toolPolicy_ == nullptr; };
    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline const map<string, string> & getAttributes() const { DARABONBA_PTR_GET_CONST(attributes_, map<string, string>) };
    inline map<string, string> getAttributes() { DARABONBA_PTR_GET(attributes_, map<string, string>) };
    inline CreateDigitalEmployeeRequest& setAttributes(const map<string, string> & attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };
    inline CreateDigitalEmployeeRequest& setAttributes(map<string, string> && attributes) { DARABONBA_PTR_SET_RVALUE(attributes_, attributes) };


    // defaultRule Field Functions 
    bool hasDefaultRule() const { return this->defaultRule_ != nullptr;};
    void deleteDefaultRule() { this->defaultRule_ = nullptr;};
    inline string getDefaultRule() const { DARABONBA_PTR_GET_DEFAULT(defaultRule_, "") };
    inline CreateDigitalEmployeeRequest& setDefaultRule(string defaultRule) { DARABONBA_PTR_SET_VALUE(defaultRule_, defaultRule) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDigitalEmployeeRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CreateDigitalEmployeeRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // knowledges Field Functions 
    bool hasKnowledges() const { return this->knowledges_ != nullptr;};
    void deleteKnowledges() { this->knowledges_ = nullptr;};
    inline const CreateDigitalEmployeeRequest::Knowledges & getKnowledges() const { DARABONBA_PTR_GET_CONST(knowledges_, CreateDigitalEmployeeRequest::Knowledges) };
    inline CreateDigitalEmployeeRequest::Knowledges getKnowledges() { DARABONBA_PTR_GET(knowledges_, CreateDigitalEmployeeRequest::Knowledges) };
    inline CreateDigitalEmployeeRequest& setKnowledges(const CreateDigitalEmployeeRequest::Knowledges & knowledges) { DARABONBA_PTR_SET_VALUE(knowledges_, knowledges) };
    inline CreateDigitalEmployeeRequest& setKnowledges(CreateDigitalEmployeeRequest::Knowledges && knowledges) { DARABONBA_PTR_SET_RVALUE(knowledges_, knowledges) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateDigitalEmployeeRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateDigitalEmployeeRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // roleArn Field Functions 
    bool hasRoleArn() const { return this->roleArn_ != nullptr;};
    void deleteRoleArn() { this->roleArn_ = nullptr;};
    inline string getRoleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
    inline CreateDigitalEmployeeRequest& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Tag> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Tag>) };
    inline vector<Tag> getTags() { DARABONBA_PTR_GET(tags_, vector<Tag>) };
    inline CreateDigitalEmployeeRequest& setTags(const vector<Tag> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateDigitalEmployeeRequest& setTags(vector<Tag> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // toolPolicy Field Functions 
    bool hasToolPolicy() const { return this->toolPolicy_ != nullptr;};
    void deleteToolPolicy() { this->toolPolicy_ = nullptr;};
    inline const CreateDigitalEmployeeRequest::ToolPolicy & getToolPolicy() const { DARABONBA_PTR_GET_CONST(toolPolicy_, CreateDigitalEmployeeRequest::ToolPolicy) };
    inline CreateDigitalEmployeeRequest::ToolPolicy getToolPolicy() { DARABONBA_PTR_GET(toolPolicy_, CreateDigitalEmployeeRequest::ToolPolicy) };
    inline CreateDigitalEmployeeRequest& setToolPolicy(const CreateDigitalEmployeeRequest::ToolPolicy & toolPolicy) { DARABONBA_PTR_SET_VALUE(toolPolicy_, toolPolicy) };
    inline CreateDigitalEmployeeRequest& setToolPolicy(CreateDigitalEmployeeRequest::ToolPolicy && toolPolicy) { DARABONBA_PTR_SET_RVALUE(toolPolicy_, toolPolicy) };


  protected:
    shared_ptr<map<string, string>> attributes_ {};
    shared_ptr<string> defaultRule_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> displayName_ {};
    shared_ptr<CreateDigitalEmployeeRequest::Knowledges> knowledges_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<string> resourceGroupId_ {};
    // This parameter is required.
    shared_ptr<string> roleArn_ {};
    shared_ptr<vector<Tag>> tags_ {};
    // 数字员工工具调用安全策略配置。
    shared_ptr<CreateDigitalEmployeeRequest::ToolPolicy> toolPolicy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace STAROps20260428
#endif
