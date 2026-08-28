// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTSPECLATESTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTSPECLATESTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
#include <alibabacloud/models/DataResourceValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class GetAgentSpecLatestResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentSpecLatestResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentSpecLatestResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetAgentSpecLatestResponseBody() = default ;
    GetAgentSpecLatestResponseBody(const GetAgentSpecLatestResponseBody &) = default ;
    GetAgentSpecLatestResponseBody(GetAgentSpecLatestResponseBody &&) = default ;
    GetAgentSpecLatestResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentSpecLatestResponseBody() = default ;
    GetAgentSpecLatestResponseBody& operator=(const GetAgentSpecLatestResponseBody &) = default ;
    GetAgentSpecLatestResponseBody& operator=(GetAgentSpecLatestResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(bizTags, bizTags_);
        DARABONBA_PTR_TO_JSON(content, content_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(downloadCount, downloadCount_);
        DARABONBA_PTR_TO_JSON(enable, enable_);
        DARABONBA_PTR_TO_JSON(mcpServers, mcpServers_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(resource, resource_);
        DARABONBA_PTR_TO_JSON(scope, scope_);
        DARABONBA_PTR_TO_JSON(skills, skills_);
        DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(bizTags, bizTags_);
        DARABONBA_PTR_FROM_JSON(content, content_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(downloadCount, downloadCount_);
        DARABONBA_PTR_FROM_JSON(enable, enable_);
        DARABONBA_PTR_FROM_JSON(mcpServers, mcpServers_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(resource, resource_);
        DARABONBA_PTR_FROM_JSON(scope, scope_);
        DARABONBA_PTR_FROM_JSON(skills, skills_);
        DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Skills : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Skills& obj) { 
          DARABONBA_PTR_TO_JSON(name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Skills& obj) { 
          DARABONBA_PTR_FROM_JSON(name, name_);
        };
        Skills() = default ;
        Skills(const Skills &) = default ;
        Skills(Skills &&) = default ;
        Skills(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Skills() = default ;
        Skills& operator=(const Skills &) = default ;
        Skills& operator=(Skills &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Skills& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The name.
        shared_ptr<string> name_ {};
      };

      class McpServers : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const McpServers& obj) { 
          DARABONBA_PTR_TO_JSON(name, name_);
        };
        friend void from_json(const Darabonba::Json& j, McpServers& obj) { 
          DARABONBA_PTR_FROM_JSON(name, name_);
        };
        McpServers() = default ;
        McpServers(const McpServers &) = default ;
        McpServers(McpServers &&) = default ;
        McpServers(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~McpServers() = default ;
        McpServers& operator=(const McpServers &) = default ;
        McpServers& operator=(McpServers &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline McpServers& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The name.
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->bizTags_ == nullptr
        && this->content_ == nullptr && this->description_ == nullptr && this->downloadCount_ == nullptr && this->enable_ == nullptr && this->mcpServers_ == nullptr
        && this->name_ == nullptr && this->resource_ == nullptr && this->scope_ == nullptr && this->skills_ == nullptr && this->updateTime_ == nullptr; };
      // bizTags Field Functions 
      bool hasBizTags() const { return this->bizTags_ != nullptr;};
      void deleteBizTags() { this->bizTags_ = nullptr;};
      inline string getBizTags() const { DARABONBA_PTR_GET_DEFAULT(bizTags_, "") };
      inline Data& setBizTags(string bizTags) { DARABONBA_PTR_SET_VALUE(bizTags_, bizTags) };


      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Data& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // downloadCount Field Functions 
      bool hasDownloadCount() const { return this->downloadCount_ != nullptr;};
      void deleteDownloadCount() { this->downloadCount_ = nullptr;};
      inline int64_t getDownloadCount() const { DARABONBA_PTR_GET_DEFAULT(downloadCount_, 0L) };
      inline Data& setDownloadCount(int64_t downloadCount) { DARABONBA_PTR_SET_VALUE(downloadCount_, downloadCount) };


      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline Data& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      // mcpServers Field Functions 
      bool hasMcpServers() const { return this->mcpServers_ != nullptr;};
      void deleteMcpServers() { this->mcpServers_ = nullptr;};
      inline const vector<Data::McpServers> & getMcpServers() const { DARABONBA_PTR_GET_CONST(mcpServers_, vector<Data::McpServers>) };
      inline vector<Data::McpServers> getMcpServers() { DARABONBA_PTR_GET(mcpServers_, vector<Data::McpServers>) };
      inline Data& setMcpServers(const vector<Data::McpServers> & mcpServers) { DARABONBA_PTR_SET_VALUE(mcpServers_, mcpServers) };
      inline Data& setMcpServers(vector<Data::McpServers> && mcpServers) { DARABONBA_PTR_SET_RVALUE(mcpServers_, mcpServers) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // resource Field Functions 
      bool hasResource() const { return this->resource_ != nullptr;};
      void deleteResource() { this->resource_ = nullptr;};
      inline const map<string, DataResourceValue> & getResource() const { DARABONBA_PTR_GET_CONST(resource_, map<string, DataResourceValue>) };
      inline map<string, DataResourceValue> getResource() { DARABONBA_PTR_GET(resource_, map<string, DataResourceValue>) };
      inline Data& setResource(const map<string, DataResourceValue> & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
      inline Data& setResource(map<string, DataResourceValue> && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


      // scope Field Functions 
      bool hasScope() const { return this->scope_ != nullptr;};
      void deleteScope() { this->scope_ = nullptr;};
      inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
      inline Data& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


      // skills Field Functions 
      bool hasSkills() const { return this->skills_ != nullptr;};
      void deleteSkills() { this->skills_ = nullptr;};
      inline const vector<Data::Skills> & getSkills() const { DARABONBA_PTR_GET_CONST(skills_, vector<Data::Skills>) };
      inline vector<Data::Skills> getSkills() { DARABONBA_PTR_GET(skills_, vector<Data::Skills>) };
      inline Data& setSkills(const vector<Data::Skills> & skills) { DARABONBA_PTR_SET_VALUE(skills_, skills) };
      inline Data& setSkills(vector<Data::Skills> && skills) { DARABONBA_PTR_SET_RVALUE(skills_, skills) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline Data& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The business tags.
      shared_ptr<string> bizTags_ {};
      // The content.
      shared_ptr<string> content_ {};
      // The description.
      shared_ptr<string> description_ {};
      // The download count.
      shared_ptr<int64_t> downloadCount_ {};
      // Indicates whether the AgentSpec is enabled.
      shared_ptr<bool> enable_ {};
      // The list of MCP server references.
      shared_ptr<vector<Data::McpServers>> mcpServers_ {};
      // The name.
      shared_ptr<string> name_ {};
      // The resource file mapping.
      shared_ptr<map<string, DataResourceValue>> resource_ {};
      // The visibility scope.
      shared_ptr<string> scope_ {};
      // The list of skill references.
      shared_ptr<vector<Data::Skills>> skills_ {};
      // The update time. This value is a UNIX timestamp in milliseconds.
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAgentSpecLatestResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAgentSpecLatestResponseBody::Data) };
    inline GetAgentSpecLatestResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAgentSpecLatestResponseBody::Data) };
    inline GetAgentSpecLatestResponseBody& setData(const GetAgentSpecLatestResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAgentSpecLatestResponseBody& setData(GetAgentSpecLatestResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAgentSpecLatestResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<GetAgentSpecLatestResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
