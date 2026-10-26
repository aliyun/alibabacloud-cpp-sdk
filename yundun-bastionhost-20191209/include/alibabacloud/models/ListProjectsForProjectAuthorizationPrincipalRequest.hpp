// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTSFORPROJECTAUTHORIZATIONPRINCIPALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTSFORPROJECTAUTHORIZATIONPRINCIPALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListProjectsForProjectAuthorizationPrincipalRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectsForProjectAuthorizationPrincipalRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Skip, skip_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectsForProjectAuthorizationPrincipalRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Skip, skip_);
    };
    ListProjectsForProjectAuthorizationPrincipalRequest() = default ;
    ListProjectsForProjectAuthorizationPrincipalRequest(const ListProjectsForProjectAuthorizationPrincipalRequest &) = default ;
    ListProjectsForProjectAuthorizationPrincipalRequest(ListProjectsForProjectAuthorizationPrincipalRequest &&) = default ;
    ListProjectsForProjectAuthorizationPrincipalRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectsForProjectAuthorizationPrincipalRequest() = default ;
    ListProjectsForProjectAuthorizationPrincipalRequest& operator=(const ListProjectsForProjectAuthorizationPrincipalRequest &) = default ;
    ListProjectsForProjectAuthorizationPrincipalRequest& operator=(ListProjectsForProjectAuthorizationPrincipalRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->keyword_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->regionId_ == nullptr && this->skip_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListProjectsForProjectAuthorizationPrincipalRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListProjectsForProjectAuthorizationPrincipalRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListProjectsForProjectAuthorizationPrincipalRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListProjectsForProjectAuthorizationPrincipalRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListProjectsForProjectAuthorizationPrincipalRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // skip Field Functions 
    bool hasSkip() const { return this->skip_ != nullptr;};
    void deleteSkip() { this->skip_ = nullptr;};
    inline int32_t getSkip() const { DARABONBA_PTR_GET_DEFAULT(skip_, 0) };
    inline ListProjectsForProjectAuthorizationPrincipalRequest& setSkip(int32_t skip) { DARABONBA_PTR_SET_VALUE(skip_, skip) };


  protected:
    // The instance ID of the Bastionhost instance.
    // > You can invoke the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to obtain the parameter value.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The name of the project to query. Fuzzy match is supported.
    shared_ptr<string> keyword_ {};
    // The maximum number of projects to return per request. Valid values: 1 to 100. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The paging token used to start a paged query. For the first request, do not pass this parameter or pass an empty string of characters.
    shared_ptr<string> nextToken_ {};
    // The region ID of the Bastionhost instance.
    // > For the mappings between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
    // The number of items to skip.
    // > This parameter takes effect only when NextToken is left empty.
    shared_ptr<int32_t> skip_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
