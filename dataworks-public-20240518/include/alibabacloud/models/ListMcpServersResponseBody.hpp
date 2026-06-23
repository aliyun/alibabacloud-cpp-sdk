// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMCPSERVERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMCPSERVERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListMcpServersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMcpServersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMcpServersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListMcpServersResponseBody() = default ;
    ListMcpServersResponseBody(const ListMcpServersResponseBody &) = default ;
    ListMcpServersResponseBody(ListMcpServersResponseBody &&) = default ;
    ListMcpServersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMcpServersResponseBody() = default ;
    ListMcpServersResponseBody& operator=(const ListMcpServersResponseBody &) = default ;
    ListMcpServersResponseBody& operator=(ListMcpServersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PagingInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PagingInfo& obj) { 
        DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_TO_JSON(McpServers, mcpServers_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PagingInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_FROM_JSON(McpServers, mcpServers_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PagingInfo() = default ;
      PagingInfo(const PagingInfo &) = default ;
      PagingInfo(PagingInfo &&) = default ;
      PagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PagingInfo() = default ;
      PagingInfo& operator=(const PagingInfo &) = default ;
      PagingInfo& operator=(PagingInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class McpServers : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const McpServers& obj) { 
          DARABONBA_PTR_TO_JSON(Config, config_);
          DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
          DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
          DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
          DARABONBA_PTR_TO_JSON(ModifierId, modifierId_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Visibility, visibility_);
        };
        friend void from_json(const Darabonba::Json& j, McpServers& obj) { 
          DARABONBA_PTR_FROM_JSON(Config, config_);
          DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
          DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
          DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
          DARABONBA_PTR_FROM_JSON(ModifierId, modifierId_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Visibility, visibility_);
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
        class Config : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Config& obj) { 
            DARABONBA_ANY_TO_JSON(CustomHeaders, customHeaders_);
            DARABONBA_PTR_TO_JSON(Transport, transport_);
            DARABONBA_PTR_TO_JSON(Url, url_);
          };
          friend void from_json(const Darabonba::Json& j, Config& obj) { 
            DARABONBA_ANY_FROM_JSON(CustomHeaders, customHeaders_);
            DARABONBA_PTR_FROM_JSON(Transport, transport_);
            DARABONBA_PTR_FROM_JSON(Url, url_);
          };
          Config() = default ;
          Config(const Config &) = default ;
          Config(Config &&) = default ;
          Config(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Config() = default ;
          Config& operator=(const Config &) = default ;
          Config& operator=(Config &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->customHeaders_ == nullptr
        && this->transport_ == nullptr && this->url_ == nullptr; };
          // customHeaders Field Functions 
          bool hasCustomHeaders() const { return this->customHeaders_ != nullptr;};
          void deleteCustomHeaders() { this->customHeaders_ = nullptr;};
          inline           const Darabonba::Json & getCustomHeaders() const { DARABONBA_GET(customHeaders_) };
          Darabonba::Json & getCustomHeaders() { DARABONBA_GET(customHeaders_) };
          inline Config& setCustomHeaders(const Darabonba::Json & customHeaders) { DARABONBA_SET_VALUE(customHeaders_, customHeaders) };
          inline Config& setCustomHeaders(Darabonba::Json && customHeaders) { DARABONBA_SET_RVALUE(customHeaders_, customHeaders) };


          // transport Field Functions 
          bool hasTransport() const { return this->transport_ != nullptr;};
          void deleteTransport() { this->transport_ = nullptr;};
          inline string getTransport() const { DARABONBA_PTR_GET_DEFAULT(transport_, "") };
          inline Config& setTransport(string transport) { DARABONBA_PTR_SET_VALUE(transport_, transport) };


          // url Field Functions 
          bool hasUrl() const { return this->url_ != nullptr;};
          void deleteUrl() { this->url_ = nullptr;};
          inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
          inline Config& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        protected:
          // The custom headers.
          Darabonba::Json customHeaders_ {};
          // The transport protocol.
          shared_ptr<string> transport_ {};
          // The service address of the MCP Server.
          shared_ptr<string> url_ {};
        };

        virtual bool empty() const override { return this->config_ == nullptr
        && this->creatorId_ == nullptr && this->gmtCreateTime_ == nullptr && this->gmtModifiedTime_ == nullptr && this->modifierId_ == nullptr && this->name_ == nullptr
        && this->visibility_ == nullptr; };
        // config Field Functions 
        bool hasConfig() const { return this->config_ != nullptr;};
        void deleteConfig() { this->config_ = nullptr;};
        inline const McpServers::Config & getConfig() const { DARABONBA_PTR_GET_CONST(config_, McpServers::Config) };
        inline McpServers::Config getConfig() { DARABONBA_PTR_GET(config_, McpServers::Config) };
        inline McpServers& setConfig(const McpServers::Config & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
        inline McpServers& setConfig(McpServers::Config && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


        // creatorId Field Functions 
        bool hasCreatorId() const { return this->creatorId_ != nullptr;};
        void deleteCreatorId() { this->creatorId_ = nullptr;};
        inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
        inline McpServers& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


        // gmtCreateTime Field Functions 
        bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
        void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
        inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
        inline McpServers& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


        // gmtModifiedTime Field Functions 
        bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
        void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
        inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
        inline McpServers& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


        // modifierId Field Functions 
        bool hasModifierId() const { return this->modifierId_ != nullptr;};
        void deleteModifierId() { this->modifierId_ = nullptr;};
        inline string getModifierId() const { DARABONBA_PTR_GET_DEFAULT(modifierId_, "") };
        inline McpServers& setModifierId(string modifierId) { DARABONBA_PTR_SET_VALUE(modifierId_, modifierId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline McpServers& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // visibility Field Functions 
        bool hasVisibility() const { return this->visibility_ != nullptr;};
        void deleteVisibility() { this->visibility_ = nullptr;};
        inline string getVisibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, "") };
        inline McpServers& setVisibility(string visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


      protected:
        // The connection configuration of the MCP Server.
        shared_ptr<McpServers::Config> config_ {};
        // The creator ID.
        shared_ptr<string> creatorId_ {};
        // The creation time, as a millisecond timestamp.****
        // 
        // Use the UTC time format: yyyy-MM-ddTHH:mmZ
        shared_ptr<string> gmtCreateTime_ {};
        // The last modified time, as a millisecond timestamp.****
        // 
        // Use the UTC time format: yyyy-MM-ddTHH:mmZ
        shared_ptr<string> gmtModifiedTime_ {};
        // The ID of the user who last modified the server.
        shared_ptr<string> modifierId_ {};
        // The name of the MCP Server.
        shared_ptr<string> name_ {};
        // The visibility level.****
        shared_ptr<string> visibility_ {};
      };

      virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->mcpServers_ == nullptr && this->nextToken_ == nullptr && this->totalCount_ == nullptr; };
      // maxResults Field Functions 
      bool hasMaxResults() const { return this->maxResults_ != nullptr;};
      void deleteMaxResults() { this->maxResults_ = nullptr;};
      inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
      inline PagingInfo& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


      // mcpServers Field Functions 
      bool hasMcpServers() const { return this->mcpServers_ != nullptr;};
      void deleteMcpServers() { this->mcpServers_ = nullptr;};
      inline const vector<PagingInfo::McpServers> & getMcpServers() const { DARABONBA_PTR_GET_CONST(mcpServers_, vector<PagingInfo::McpServers>) };
      inline vector<PagingInfo::McpServers> getMcpServers() { DARABONBA_PTR_GET(mcpServers_, vector<PagingInfo::McpServers>) };
      inline PagingInfo& setMcpServers(const vector<PagingInfo::McpServers> & mcpServers) { DARABONBA_PTR_SET_VALUE(mcpServers_, mcpServers) };
      inline PagingInfo& setMcpServers(vector<PagingInfo::McpServers> && mcpServers) { DARABONBA_PTR_SET_RVALUE(mcpServers_, mcpServers) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline PagingInfo& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PagingInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The maximum number of results returned on the current page.****
      shared_ptr<int32_t> maxResults_ {};
      // A list of MCP Server objects.
      shared_ptr<vector<PagingInfo::McpServers>> mcpServers_ {};
      // The token for the next page of results. A null value indicates that all results have been returned.****
      shared_ptr<string> nextToken_ {};
      // The total count of entries that match the filter criteria.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pagingInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // pagingInfo Field Functions 
    bool hasPagingInfo() const { return this->pagingInfo_ != nullptr;};
    void deletePagingInfo() { this->pagingInfo_ = nullptr;};
    inline const ListMcpServersResponseBody::PagingInfo & getPagingInfo() const { DARABONBA_PTR_GET_CONST(pagingInfo_, ListMcpServersResponseBody::PagingInfo) };
    inline ListMcpServersResponseBody::PagingInfo getPagingInfo() { DARABONBA_PTR_GET(pagingInfo_, ListMcpServersResponseBody::PagingInfo) };
    inline ListMcpServersResponseBody& setPagingInfo(const ListMcpServersResponseBody::PagingInfo & pagingInfo) { DARABONBA_PTR_SET_VALUE(pagingInfo_, pagingInfo) };
    inline ListMcpServersResponseBody& setPagingInfo(ListMcpServersResponseBody::PagingInfo && pagingInfo) { DARABONBA_PTR_SET_RVALUE(pagingInfo_, pagingInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMcpServersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The paging information.
    shared_ptr<ListMcpServersResponseBody::PagingInfo> pagingInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
