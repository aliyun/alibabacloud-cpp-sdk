// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListClustersRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListClustersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClustersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(ClusterAliasName, clusterAliasName_);
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestPars, requestPars_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListClustersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(ClusterAliasName, clusterAliasName_);
      DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestPars, requestPars_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    ListClustersRequest() = default ;
    ListClustersRequest(const ListClustersRequest &) = default ;
    ListClustersRequest(ListClustersRequest &&) = default ;
    ListClustersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClustersRequest() = default ;
    ListClustersRequest& operator=(const ListClustersRequest &) = default ;
    ListClustersRequest& operator=(ListClustersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->clusterAliasName_ == nullptr && return this->keyId_ == nullptr && return this->pageNum_ == nullptr && return this->pageSize_ == nullptr && return this->regionId_ == nullptr
        && return this->requestPars_ == nullptr && return this->resourceGroupId_ == nullptr && return this->tag_ == nullptr && return this->vpcId_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline ListClustersRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // clusterAliasName Field Functions 
    bool hasClusterAliasName() const { return this->clusterAliasName_ != nullptr;};
    void deleteClusterAliasName() { this->clusterAliasName_ = nullptr;};
    inline string clusterAliasName() const { DARABONBA_PTR_GET_DEFAULT(clusterAliasName_, "") };
    inline ListClustersRequest& setClusterAliasName(string clusterAliasName) { DARABONBA_PTR_SET_VALUE(clusterAliasName_, clusterAliasName) };


    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string keyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline ListClustersRequest& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline ListClustersRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListClustersRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListClustersRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestPars Field Functions 
    bool hasRequestPars() const { return this->requestPars_ != nullptr;};
    void deleteRequestPars() { this->requestPars_ = nullptr;};
    inline string requestPars() const { DARABONBA_PTR_GET_DEFAULT(requestPars_, "") };
    inline ListClustersRequest& setRequestPars(string requestPars) { DARABONBA_PTR_SET_VALUE(requestPars_, requestPars) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListClustersRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListClustersRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListClustersRequestTag>) };
    inline vector<ListClustersRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<ListClustersRequestTag>) };
    inline ListClustersRequest& setTag(const vector<ListClustersRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListClustersRequest& setTag(vector<ListClustersRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListClustersRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The alias of the instance. Fuzzy match is supported.
    std::shared_ptr<string> clusterAliasName_ = nullptr;
    std::shared_ptr<string> keyId_ = nullptr;
    // The number of the page to return.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // The number of entries to return on each page.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the region in which the instance resides. The region is supported by MSE.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The extended request parameters in the JSON format.
    std::shared_ptr<string> requestPars_ = nullptr;
    // The ID of the resource group. For more information about resource groups, see the topic "View basic information of a resource group."
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The list of tags. A maximum number of 20 tags are supported.
    std::shared_ptr<vector<ListClustersRequestTag>> tag_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
