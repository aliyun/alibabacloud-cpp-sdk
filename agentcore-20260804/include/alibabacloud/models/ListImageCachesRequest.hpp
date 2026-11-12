// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIMAGECACHESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTIMAGECACHESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class ListImageCachesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListImageCachesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(acrInstanceId, acrInstanceId_);
      DARABONBA_PTR_TO_JSON(digest, digest_);
      DARABONBA_PTR_TO_JSON(imageRefContains, imageRefContains_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(registry, registry_);
      DARABONBA_PTR_TO_JSON(repository, repository_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(tag, tag_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListImageCachesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(acrInstanceId, acrInstanceId_);
      DARABONBA_PTR_FROM_JSON(digest, digest_);
      DARABONBA_PTR_FROM_JSON(imageRefContains, imageRefContains_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(registry, registry_);
      DARABONBA_PTR_FROM_JSON(repository, repository_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(tag, tag_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    ListImageCachesRequest() = default ;
    ListImageCachesRequest(const ListImageCachesRequest &) = default ;
    ListImageCachesRequest(ListImageCachesRequest &&) = default ;
    ListImageCachesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListImageCachesRequest() = default ;
    ListImageCachesRequest& operator=(const ListImageCachesRequest &) = default ;
    ListImageCachesRequest& operator=(ListImageCachesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acrInstanceId_ == nullptr
        && this->digest_ == nullptr && this->imageRefContains_ == nullptr && this->maxResults_ == nullptr && this->namespace_ == nullptr && this->nextToken_ == nullptr
        && this->regionId_ == nullptr && this->registry_ == nullptr && this->repository_ == nullptr && this->status_ == nullptr && this->tag_ == nullptr
        && this->workspaceId_ == nullptr; };
    // acrInstanceId Field Functions 
    bool hasAcrInstanceId() const { return this->acrInstanceId_ != nullptr;};
    void deleteAcrInstanceId() { this->acrInstanceId_ = nullptr;};
    inline string getAcrInstanceId() const { DARABONBA_PTR_GET_DEFAULT(acrInstanceId_, "") };
    inline ListImageCachesRequest& setAcrInstanceId(string acrInstanceId) { DARABONBA_PTR_SET_VALUE(acrInstanceId_, acrInstanceId) };


    // digest Field Functions 
    bool hasDigest() const { return this->digest_ != nullptr;};
    void deleteDigest() { this->digest_ = nullptr;};
    inline string getDigest() const { DARABONBA_PTR_GET_DEFAULT(digest_, "") };
    inline ListImageCachesRequest& setDigest(string digest) { DARABONBA_PTR_SET_VALUE(digest_, digest) };


    // imageRefContains Field Functions 
    bool hasImageRefContains() const { return this->imageRefContains_ != nullptr;};
    void deleteImageRefContains() { this->imageRefContains_ = nullptr;};
    inline string getImageRefContains() const { DARABONBA_PTR_GET_DEFAULT(imageRefContains_, "") };
    inline ListImageCachesRequest& setImageRefContains(string imageRefContains) { DARABONBA_PTR_SET_VALUE(imageRefContains_, imageRefContains) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListImageCachesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListImageCachesRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListImageCachesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListImageCachesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // registry Field Functions 
    bool hasRegistry() const { return this->registry_ != nullptr;};
    void deleteRegistry() { this->registry_ = nullptr;};
    inline string getRegistry() const { DARABONBA_PTR_GET_DEFAULT(registry_, "") };
    inline ListImageCachesRequest& setRegistry(string registry) { DARABONBA_PTR_SET_VALUE(registry_, registry) };


    // repository Field Functions 
    bool hasRepository() const { return this->repository_ != nullptr;};
    void deleteRepository() { this->repository_ = nullptr;};
    inline string getRepository() const { DARABONBA_PTR_GET_DEFAULT(repository_, "") };
    inline ListImageCachesRequest& setRepository(string repository) { DARABONBA_PTR_SET_VALUE(repository_, repository) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListImageCachesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline ListImageCachesRequest& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListImageCachesRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The ID of the source ACR Enterprise instance. The match must be exact. An empty character string is invalid.
    shared_ptr<string> acrInstanceId_ {};
    // The image digest.
    shared_ptr<string> digest_ {};
    // Performs a case-insensitive literal substring search on the full source image reference in the `registry/repository:tag` format. The repository already includes the namespace. If the value is empty after trimming leading and trailing whitespace, it is treated as not provided. Percent signs, underscores, and backslashes are treated as literal characters.
    shared_ptr<string> imageRefContains_ {};
    // The maximum number of results to return. Default value: 20. If you explicitly specify this parameter, it must be an integer from 1 to 100. Otherwise, an `InvalidMaxResults` error is reported. When you paginate, this value must remain the same as the previous page.
    shared_ptr<int32_t> maxResults_ {};
    // The source namespace. The match is case-sensitive and must be exact. Empty strings are invalid.
    shared_ptr<string> namespace_ {};
    // The pagination token. Omit this parameter for the first request. For subsequent requests, pass the `nextToken` value from the previous response as is. When you paginate, you must keep the filter conditions and `maxResults` unchanged. If you change any of these items, you must query the first page again.
    shared_ptr<string> nextToken_ {};
    // The product entry region. This parameter is passed as a query parameter and must match the selected region endpoint and the workspace region.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The domain name of the source registry. The match is case-insensitive and must be exact. Do not include the protocol, path, or tag. Public network and VPC domain names are not considered equal. Empty strings are invalid.
    shared_ptr<string> registry_ {};
    // The name of the repository under the namespace. The match is case-sensitive and must be exact. Do not include the namespace. If you specify this parameter, you must also specify the namespace. Empty strings are invalid.
    shared_ptr<string> repository_ {};
    // Filters by a single cache status. Omit this parameter to query all statuses.
    shared_ptr<string> status_ {};
    // The source image tag. The match is case-sensitive and must be exact. The `latest` tag is not inferred. Empty strings are invalid.
    shared_ptr<string> tag_ {};
    // The workspace ID.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
