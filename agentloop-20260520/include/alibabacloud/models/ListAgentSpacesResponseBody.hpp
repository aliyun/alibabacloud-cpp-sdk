// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTSPACESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTSPACESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class ListAgentSpacesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentSpacesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(agentSpaces, agentSpaces_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentSpacesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(agentSpaces, agentSpaces_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListAgentSpacesResponseBody() = default ;
    ListAgentSpacesResponseBody(const ListAgentSpacesResponseBody &) = default ;
    ListAgentSpacesResponseBody(ListAgentSpacesResponseBody &&) = default ;
    ListAgentSpacesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentSpacesResponseBody() = default ;
    ListAgentSpacesResponseBody& operator=(const ListAgentSpacesResponseBody &) = default ;
    ListAgentSpacesResponseBody& operator=(ListAgentSpacesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AgentSpaces : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AgentSpaces& obj) { 
        DARABONBA_PTR_TO_JSON(agentSpace, agentSpace_);
        DARABONBA_PTR_TO_JSON(cmsWorkspace, cmsWorkspace_);
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(mseNamespace, mseNamespace_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
        DARABONBA_PTR_TO_JSON(slsProject, slsProject_);
        DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, AgentSpaces& obj) { 
        DARABONBA_PTR_FROM_JSON(agentSpace, agentSpace_);
        DARABONBA_PTR_FROM_JSON(cmsWorkspace, cmsWorkspace_);
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(mseNamespace, mseNamespace_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        DARABONBA_PTR_FROM_JSON(slsProject, slsProject_);
        DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      };
      AgentSpaces() = default ;
      AgentSpaces(const AgentSpaces &) = default ;
      AgentSpaces(AgentSpaces &&) = default ;
      AgentSpaces(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AgentSpaces() = default ;
      AgentSpaces& operator=(const AgentSpaces &) = default ;
      AgentSpaces& operator=(AgentSpaces &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MseNamespace : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MseNamespace& obj) { 
          DARABONBA_PTR_TO_JSON(namespaceId, namespaceId_);
          DARABONBA_PTR_TO_JSON(namespaceName, namespaceName_);
        };
        friend void from_json(const Darabonba::Json& j, MseNamespace& obj) { 
          DARABONBA_PTR_FROM_JSON(namespaceId, namespaceId_);
          DARABONBA_PTR_FROM_JSON(namespaceName, namespaceName_);
        };
        MseNamespace() = default ;
        MseNamespace(const MseNamespace &) = default ;
        MseNamespace(MseNamespace &&) = default ;
        MseNamespace(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MseNamespace() = default ;
        MseNamespace& operator=(const MseNamespace &) = default ;
        MseNamespace& operator=(MseNamespace &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->namespaceId_ == nullptr
        && this->namespaceName_ == nullptr; };
        // namespaceId Field Functions 
        bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
        void deleteNamespaceId() { this->namespaceId_ = nullptr;};
        inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
        inline MseNamespace& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


        // namespaceName Field Functions 
        bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
        void deleteNamespaceName() { this->namespaceName_ = nullptr;};
        inline string getNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
        inline MseNamespace& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


      protected:
        shared_ptr<string> namespaceId_ {};
        shared_ptr<string> namespaceName_ {};
      };

      virtual bool empty() const override { return this->agentSpace_ == nullptr
        && this->cmsWorkspace_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->mseNamespace_ == nullptr && this->regionId_ == nullptr
        && this->slsProject_ == nullptr && this->updateTime_ == nullptr; };
      // agentSpace Field Functions 
      bool hasAgentSpace() const { return this->agentSpace_ != nullptr;};
      void deleteAgentSpace() { this->agentSpace_ = nullptr;};
      inline string getAgentSpace() const { DARABONBA_PTR_GET_DEFAULT(agentSpace_, "") };
      inline AgentSpaces& setAgentSpace(string agentSpace) { DARABONBA_PTR_SET_VALUE(agentSpace_, agentSpace) };


      // cmsWorkspace Field Functions 
      bool hasCmsWorkspace() const { return this->cmsWorkspace_ != nullptr;};
      void deleteCmsWorkspace() { this->cmsWorkspace_ = nullptr;};
      inline string getCmsWorkspace() const { DARABONBA_PTR_GET_DEFAULT(cmsWorkspace_, "") };
      inline AgentSpaces& setCmsWorkspace(string cmsWorkspace) { DARABONBA_PTR_SET_VALUE(cmsWorkspace_, cmsWorkspace) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline AgentSpaces& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline AgentSpaces& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // mseNamespace Field Functions 
      bool hasMseNamespace() const { return this->mseNamespace_ != nullptr;};
      void deleteMseNamespace() { this->mseNamespace_ = nullptr;};
      inline const AgentSpaces::MseNamespace & getMseNamespace() const { DARABONBA_PTR_GET_CONST(mseNamespace_, AgentSpaces::MseNamespace) };
      inline AgentSpaces::MseNamespace getMseNamespace() { DARABONBA_PTR_GET(mseNamespace_, AgentSpaces::MseNamespace) };
      inline AgentSpaces& setMseNamespace(const AgentSpaces::MseNamespace & mseNamespace) { DARABONBA_PTR_SET_VALUE(mseNamespace_, mseNamespace) };
      inline AgentSpaces& setMseNamespace(AgentSpaces::MseNamespace && mseNamespace) { DARABONBA_PTR_SET_RVALUE(mseNamespace_, mseNamespace) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline AgentSpaces& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // slsProject Field Functions 
      bool hasSlsProject() const { return this->slsProject_ != nullptr;};
      void deleteSlsProject() { this->slsProject_ = nullptr;};
      inline string getSlsProject() const { DARABONBA_PTR_GET_DEFAULT(slsProject_, "") };
      inline AgentSpaces& setSlsProject(string slsProject) { DARABONBA_PTR_SET_VALUE(slsProject_, slsProject) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline AgentSpaces& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<string> agentSpace_ {};
      shared_ptr<string> cmsWorkspace_ {};
      // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
      shared_ptr<string> createTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<AgentSpaces::MseNamespace> mseNamespace_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<string> slsProject_ {};
      // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->agentSpaces_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->total_ == nullptr; };
    // agentSpaces Field Functions 
    bool hasAgentSpaces() const { return this->agentSpaces_ != nullptr;};
    void deleteAgentSpaces() { this->agentSpaces_ = nullptr;};
    inline const vector<ListAgentSpacesResponseBody::AgentSpaces> & getAgentSpaces() const { DARABONBA_PTR_GET_CONST(agentSpaces_, vector<ListAgentSpacesResponseBody::AgentSpaces>) };
    inline vector<ListAgentSpacesResponseBody::AgentSpaces> getAgentSpaces() { DARABONBA_PTR_GET(agentSpaces_, vector<ListAgentSpacesResponseBody::AgentSpaces>) };
    inline ListAgentSpacesResponseBody& setAgentSpaces(const vector<ListAgentSpacesResponseBody::AgentSpaces> & agentSpaces) { DARABONBA_PTR_SET_VALUE(agentSpaces_, agentSpaces) };
    inline ListAgentSpacesResponseBody& setAgentSpaces(vector<ListAgentSpacesResponseBody::AgentSpaces> && agentSpaces) { DARABONBA_PTR_SET_RVALUE(agentSpaces_, agentSpaces) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAgentSpacesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAgentSpacesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAgentSpacesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListAgentSpacesResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<vector<ListAgentSpacesResponseBody::AgentSpaces>> agentSpaces_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
