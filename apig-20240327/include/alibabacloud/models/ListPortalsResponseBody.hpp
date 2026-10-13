// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPORTALSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPORTALSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HiMarketPortalDomainConfig.hpp>
#include <alibabacloud/models/HiMarketPortalSettingConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListPortalsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPortalsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPortalsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListPortalsResponseBody() = default ;
    ListPortalsResponseBody(const ListPortalsResponseBody &) = default ;
    ListPortalsResponseBody(ListPortalsResponseBody &&) = default ;
    ListPortalsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPortalsResponseBody() = default ;
    ListPortalsResponseBody& operator=(const ListPortalsResponseBody &) = default ;
    ListPortalsResponseBody& operator=(ListPortalsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(content, content_);
        DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(content, content_);
        DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
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
      class Content : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Content& obj) { 
          DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
          DARABONBA_PTR_TO_JSON(description, description_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(portalDomainConfig, portalDomainConfig_);
          DARABONBA_PTR_TO_JSON(portalId, portalId_);
          DARABONBA_PTR_TO_JSON(portalSettingConfig, portalSettingConfig_);
          DARABONBA_PTR_TO_JSON(regionId, regionId_);
        };
        friend void from_json(const Darabonba::Json& j, Content& obj) { 
          DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
          DARABONBA_PTR_FROM_JSON(description, description_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(portalDomainConfig, portalDomainConfig_);
          DARABONBA_PTR_FROM_JSON(portalId, portalId_);
          DARABONBA_PTR_FROM_JSON(portalSettingConfig, portalSettingConfig_);
          DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        };
        Content() = default ;
        Content(const Content &) = default ;
        Content(Content &&) = default ;
        Content(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Content() = default ;
        Content& operator=(const Content &) = default ;
        Content& operator=(Content &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr && this->portalDomainConfig_ == nullptr && this->portalId_ == nullptr && this->portalSettingConfig_ == nullptr
        && this->regionId_ == nullptr; };
        // createdAt Field Functions 
        bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
        void deleteCreatedAt() { this->createdAt_ = nullptr;};
        inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
        inline Content& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Content& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Content& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // portalDomainConfig Field Functions 
        bool hasPortalDomainConfig() const { return this->portalDomainConfig_ != nullptr;};
        void deletePortalDomainConfig() { this->portalDomainConfig_ = nullptr;};
        inline const vector<HiMarketPortalDomainConfig> & getPortalDomainConfig() const { DARABONBA_PTR_GET_CONST(portalDomainConfig_, vector<HiMarketPortalDomainConfig>) };
        inline vector<HiMarketPortalDomainConfig> getPortalDomainConfig() { DARABONBA_PTR_GET(portalDomainConfig_, vector<HiMarketPortalDomainConfig>) };
        inline Content& setPortalDomainConfig(const vector<HiMarketPortalDomainConfig> & portalDomainConfig) { DARABONBA_PTR_SET_VALUE(portalDomainConfig_, portalDomainConfig) };
        inline Content& setPortalDomainConfig(vector<HiMarketPortalDomainConfig> && portalDomainConfig) { DARABONBA_PTR_SET_RVALUE(portalDomainConfig_, portalDomainConfig) };


        // portalId Field Functions 
        bool hasPortalId() const { return this->portalId_ != nullptr;};
        void deletePortalId() { this->portalId_ = nullptr;};
        inline string getPortalId() const { DARABONBA_PTR_GET_DEFAULT(portalId_, "") };
        inline Content& setPortalId(string portalId) { DARABONBA_PTR_SET_VALUE(portalId_, portalId) };


        // portalSettingConfig Field Functions 
        bool hasPortalSettingConfig() const { return this->portalSettingConfig_ != nullptr;};
        void deletePortalSettingConfig() { this->portalSettingConfig_ = nullptr;};
        inline const HiMarketPortalSettingConfig & getPortalSettingConfig() const { DARABONBA_PTR_GET_CONST(portalSettingConfig_, HiMarketPortalSettingConfig) };
        inline HiMarketPortalSettingConfig getPortalSettingConfig() { DARABONBA_PTR_GET(portalSettingConfig_, HiMarketPortalSettingConfig) };
        inline Content& setPortalSettingConfig(const HiMarketPortalSettingConfig & portalSettingConfig) { DARABONBA_PTR_SET_VALUE(portalSettingConfig_, portalSettingConfig) };
        inline Content& setPortalSettingConfig(HiMarketPortalSettingConfig && portalSettingConfig) { DARABONBA_PTR_SET_RVALUE(portalSettingConfig_, portalSettingConfig) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Content& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      protected:
        // The creation time in ISO 8601 (RFC 3339) format in the UTC time zone, such as 2026-05-15T10:00:00Z.
        shared_ptr<string> createdAt_ {};
        // The portal description, which is the Description property of the portal resource.
        shared_ptr<string> description_ {};
        // The portal name, which is the Name property of the portal resource.
        shared_ptr<string> name_ {};
        // The list of portal domain configurations. The list element is named domainConfig.
        shared_ptr<vector<HiMarketPortalDomainConfig>> portalDomainConfig_ {};
        // The portal ID, which is the primary ID of the portal resource. It can be used in GetPortal, UpdatePortal, and DeletePortal to locate the portal at /himarket/v1/portals/{portalId}.
        shared_ptr<string> portalId_ {};
        // The portal configuration, including whether username and password authentication is enabled, whether developer registrations are automatically approved, and whether subscription requests are automatically approved.
        shared_ptr<HiMarketPortalSettingConfig> portalSettingConfig_ {};
        // The region ID, which corresponds to the RegionId property of the portal resource.
        shared_ptr<string> regionId_ {};
      };

      virtual bool empty() const override { return this->content_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline const vector<Data::Content> & getContent() const { DARABONBA_PTR_GET_CONST(content_, vector<Data::Content>) };
      inline vector<Data::Content> getContent() { DARABONBA_PTR_GET(content_, vector<Data::Content>) };
      inline Data& setContent(const vector<Data::Content> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
      inline Data& setContent(vector<Data::Content> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The list of portals. The list element is named portalConfig, and each element contains the information of a HiMarket developer portal.
      shared_ptr<vector<Data::Content>> content_ {};
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The page size.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListPortalsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListPortalsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListPortalsResponseBody::Data) };
    inline ListPortalsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListPortalsResponseBody::Data) };
    inline ListPortalsResponseBody& setData(const ListPortalsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListPortalsResponseBody& setData(ListPortalsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListPortalsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListPortalsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPortalsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPortalsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response status code.
    shared_ptr<string> code_ {};
    // The response data.
    shared_ptr<ListPortalsResponseBody::Data> data_ {};
    // The maximum number of entries returned in this request.
    shared_ptr<int32_t> maxResults_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The pagination token for the next page.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
