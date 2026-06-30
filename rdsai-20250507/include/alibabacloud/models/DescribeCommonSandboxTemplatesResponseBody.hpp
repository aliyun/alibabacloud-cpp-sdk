// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMMONSANDBOXTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMMONSANDBOXTEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class DescribeCommonSandboxTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCommonSandboxTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Templates, templates_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCommonSandboxTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Templates, templates_);
    };
    DescribeCommonSandboxTemplatesResponseBody() = default ;
    DescribeCommonSandboxTemplatesResponseBody(const DescribeCommonSandboxTemplatesResponseBody &) = default ;
    DescribeCommonSandboxTemplatesResponseBody(DescribeCommonSandboxTemplatesResponseBody &&) = default ;
    DescribeCommonSandboxTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCommonSandboxTemplatesResponseBody() = default ;
    DescribeCommonSandboxTemplatesResponseBody& operator=(const DescribeCommonSandboxTemplatesResponseBody &) = default ;
    DescribeCommonSandboxTemplatesResponseBody& operator=(DescribeCommonSandboxTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Templates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Templates& obj) { 
        DARABONBA_PTR_TO_JSON(DefaultCpu, defaultCpu_);
        DARABONBA_PTR_TO_JSON(DefaultMemory, defaultMemory_);
        DARABONBA_PTR_TO_JSON(DefaultReplicas, defaultReplicas_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Templates& obj) { 
        DARABONBA_PTR_FROM_JSON(DefaultCpu, defaultCpu_);
        DARABONBA_PTR_FROM_JSON(DefaultMemory, defaultMemory_);
        DARABONBA_PTR_FROM_JSON(DefaultReplicas, defaultReplicas_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      Templates() = default ;
      Templates(const Templates &) = default ;
      Templates(Templates &&) = default ;
      Templates(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Templates() = default ;
      Templates& operator=(const Templates &) = default ;
      Templates& operator=(Templates &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->defaultCpu_ == nullptr
        && this->defaultMemory_ == nullptr && this->defaultReplicas_ == nullptr && this->description_ == nullptr && this->name_ == nullptr; };
      // defaultCpu Field Functions 
      bool hasDefaultCpu() const { return this->defaultCpu_ != nullptr;};
      void deleteDefaultCpu() { this->defaultCpu_ = nullptr;};
      inline string getDefaultCpu() const { DARABONBA_PTR_GET_DEFAULT(defaultCpu_, "") };
      inline Templates& setDefaultCpu(string defaultCpu) { DARABONBA_PTR_SET_VALUE(defaultCpu_, defaultCpu) };


      // defaultMemory Field Functions 
      bool hasDefaultMemory() const { return this->defaultMemory_ != nullptr;};
      void deleteDefaultMemory() { this->defaultMemory_ = nullptr;};
      inline string getDefaultMemory() const { DARABONBA_PTR_GET_DEFAULT(defaultMemory_, "") };
      inline Templates& setDefaultMemory(string defaultMemory) { DARABONBA_PTR_SET_VALUE(defaultMemory_, defaultMemory) };


      // defaultReplicas Field Functions 
      bool hasDefaultReplicas() const { return this->defaultReplicas_ != nullptr;};
      void deleteDefaultReplicas() { this->defaultReplicas_ = nullptr;};
      inline int64_t getDefaultReplicas() const { DARABONBA_PTR_GET_DEFAULT(defaultReplicas_, 0L) };
      inline Templates& setDefaultReplicas(int64_t defaultReplicas) { DARABONBA_PTR_SET_VALUE(defaultReplicas_, defaultReplicas) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Templates& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Templates& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      shared_ptr<string> defaultCpu_ {};
      shared_ptr<string> defaultMemory_ {};
      shared_ptr<int64_t> defaultReplicas_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->templates_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeCommonSandboxTemplatesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeCommonSandboxTemplatesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCommonSandboxTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templates Field Functions 
    bool hasTemplates() const { return this->templates_ != nullptr;};
    void deleteTemplates() { this->templates_ = nullptr;};
    inline const vector<DescribeCommonSandboxTemplatesResponseBody::Templates> & getTemplates() const { DARABONBA_PTR_GET_CONST(templates_, vector<DescribeCommonSandboxTemplatesResponseBody::Templates>) };
    inline vector<DescribeCommonSandboxTemplatesResponseBody::Templates> getTemplates() { DARABONBA_PTR_GET(templates_, vector<DescribeCommonSandboxTemplatesResponseBody::Templates>) };
    inline DescribeCommonSandboxTemplatesResponseBody& setTemplates(const vector<DescribeCommonSandboxTemplatesResponseBody::Templates> & templates) { DARABONBA_PTR_SET_VALUE(templates_, templates) };
    inline DescribeCommonSandboxTemplatesResponseBody& setTemplates(vector<DescribeCommonSandboxTemplatesResponseBody::Templates> && templates) { DARABONBA_PTR_SET_RVALUE(templates_, templates) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeCommonSandboxTemplatesResponseBody::Templates>> templates_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
