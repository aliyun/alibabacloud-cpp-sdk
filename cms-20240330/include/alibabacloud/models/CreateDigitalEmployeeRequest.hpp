// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDIGITALEMPLOYEEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDIGITALEMPLOYEEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CreateDigitalEmployeeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDigitalEmployeeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(defaultRule, defaultRule_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(knowledges, knowledges_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(roleArn, roleArn_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDigitalEmployeeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(defaultRule, defaultRule_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(knowledges, knowledges_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(roleArn, roleArn_);
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
    class Knowledges : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Knowledges& obj) { 
        DARABONBA_PTR_TO_JSON(bailian, bailian_);
      };
      friend void from_json(const Darabonba::Json& j, Knowledges& obj) { 
        DARABONBA_PTR_FROM_JSON(bailian, bailian_);
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

      virtual bool empty() const override { return this->bailian_ == nullptr; };
      // bailian Field Functions 
      bool hasBailian() const { return this->bailian_ != nullptr;};
      void deleteBailian() { this->bailian_ = nullptr;};
      inline const vector<Knowledges::Bailian> & getBailian() const { DARABONBA_PTR_GET_CONST(bailian_, vector<Knowledges::Bailian>) };
      inline vector<Knowledges::Bailian> getBailian() { DARABONBA_PTR_GET(bailian_, vector<Knowledges::Bailian>) };
      inline Knowledges& setBailian(const vector<Knowledges::Bailian> & bailian) { DARABONBA_PTR_SET_VALUE(bailian_, bailian) };
      inline Knowledges& setBailian(vector<Knowledges::Bailian> && bailian) { DARABONBA_PTR_SET_RVALUE(bailian_, bailian) };


    protected:
      shared_ptr<vector<Knowledges::Bailian>> bailian_ {};
    };

    virtual bool empty() const override { return this->defaultRule_ == nullptr
        && this->description_ == nullptr && this->displayName_ == nullptr && this->knowledges_ == nullptr && this->name_ == nullptr && this->roleArn_ == nullptr; };
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


    // roleArn Field Functions 
    bool hasRoleArn() const { return this->roleArn_ != nullptr;};
    void deleteRoleArn() { this->roleArn_ = nullptr;};
    inline string getRoleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
    inline CreateDigitalEmployeeRequest& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


  protected:
    shared_ptr<string> defaultRule_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> displayName_ {};
    shared_ptr<CreateDigitalEmployeeRequest::Knowledges> knowledges_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    // This parameter is required.
    shared_ptr<string> roleArn_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
