// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASETVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASETVERSIONSRESPONSEBODY_HPP_
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
  class ListDatasetVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatasetVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
      DARABONBA_PTR_TO_JSON(versions, versions_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatasetVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
      DARABONBA_PTR_FROM_JSON(versions, versions_);
    };
    ListDatasetVersionsResponseBody() = default ;
    ListDatasetVersionsResponseBody(const ListDatasetVersionsResponseBody &) = default ;
    ListDatasetVersionsResponseBody(ListDatasetVersionsResponseBody &&) = default ;
    ListDatasetVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatasetVersionsResponseBody() = default ;
    ListDatasetVersionsResponseBody& operator=(const ListDatasetVersionsResponseBody &) = default ;
    ListDatasetVersionsResponseBody& operator=(ListDatasetVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Versions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Versions& obj) { 
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Versions& obj) { 
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(version, version_);
      };
      Versions() = default ;
      Versions(const Versions &) = default ;
      Versions(Versions &&) = default ;
      Versions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Versions() = default ;
      Versions& operator=(const Versions &) = default ;
      Versions& operator=(Versions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->version_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Versions& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Versions& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Versions& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The creation time of the version, in RFC 3339 format, including time zone information. For example, the Z in 2026-11-11T06:00:00Z indicates UTC.
      shared_ptr<string> createTime_ {};
      // The description provided when the version was created. If no description was provided, an empty string is returned.
      shared_ptr<string> description_ {};
      // The name of the historical version, which corresponds to the name specified when the version was created. This value can be used as the version parameter for DeleteDatasetVersion.
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->total_ == nullptr && this->versions_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDatasetVersionsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDatasetVersionsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDatasetVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListDatasetVersionsResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    // versions Field Functions 
    bool hasVersions() const { return this->versions_ != nullptr;};
    void deleteVersions() { this->versions_ = nullptr;};
    inline const vector<ListDatasetVersionsResponseBody::Versions> & getVersions() const { DARABONBA_PTR_GET_CONST(versions_, vector<ListDatasetVersionsResponseBody::Versions>) };
    inline vector<ListDatasetVersionsResponseBody::Versions> getVersions() { DARABONBA_PTR_GET(versions_, vector<ListDatasetVersionsResponseBody::Versions>) };
    inline ListDatasetVersionsResponseBody& setVersions(const vector<ListDatasetVersionsResponseBody::Versions> & versions) { DARABONBA_PTR_SET_VALUE(versions_, versions) };
    inline ListDatasetVersionsResponseBody& setVersions(vector<ListDatasetVersionsResponseBody::Versions> && versions) { DARABONBA_PTR_SET_RVALUE(versions_, versions) };


  protected:
    // The maximum number of versions per page used for this query, which is not the actual number of versions returned on the current page.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token for the next page. This parameter is returned when a next page exists. To query the next page, pass this value as is to nextToken. If this parameter is not returned or is empty, no next page exists. The example is for demonstration purposes only.
    shared_ptr<string> nextToken_ {};
    // The unique identifier of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The total number of versions of the dataset, excluding deleted versions. This value is not limited by the current page size.
    shared_ptr<int32_t> total_ {};
    // The list of historical versions of the dataset on the current page. An empty array is returned if no versions meet the conditions.
    shared_ptr<vector<ListDatasetVersionsResponseBody::Versions>> versions_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
