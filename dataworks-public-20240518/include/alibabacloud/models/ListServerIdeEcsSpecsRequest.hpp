// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVERIDEECSSPECSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVERIDEECSSPECSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListServerIdeEcsSpecsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServerIdeEcsSpecsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorType, acceleratorType_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ListServerIdeEcsSpecsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorType, acceleratorType_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    ListServerIdeEcsSpecsRequest() = default ;
    ListServerIdeEcsSpecsRequest(const ListServerIdeEcsSpecsRequest &) = default ;
    ListServerIdeEcsSpecsRequest(ListServerIdeEcsSpecsRequest &&) = default ;
    ListServerIdeEcsSpecsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServerIdeEcsSpecsRequest() = default ;
    ListServerIdeEcsSpecsRequest& operator=(const ListServerIdeEcsSpecsRequest &) = default ;
    ListServerIdeEcsSpecsRequest& operator=(ListServerIdeEcsSpecsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceleratorType_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->resourceGroupId_ == nullptr; };
    // acceleratorType Field Functions 
    bool hasAcceleratorType() const { return this->acceleratorType_ != nullptr;};
    void deleteAcceleratorType() { this->acceleratorType_ = nullptr;};
    inline string getAcceleratorType() const { DARABONBA_PTR_GET_DEFAULT(acceleratorType_, "") };
    inline ListServerIdeEcsSpecsRequest& setAcceleratorType(string acceleratorType) { DARABONBA_PTR_SET_VALUE(acceleratorType_, acceleratorType) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListServerIdeEcsSpecsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListServerIdeEcsSpecsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListServerIdeEcsSpecsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The accelerator type. Valid values:
    // - CPU: uses only CPU.
    // - GPU: uses GPU acceleration.
    shared_ptr<string> acceleratorType_ {};
    // The maximum number of records to return in a single request.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token used to retrieve the next page of results. You do not need to specify this parameter for the first request.
    shared_ptr<string> nextToken_ {};
    // The DataWorks resource group identifier. You can specify the numeric ID of the resource group or the full identifier in the Serverless_res_group_{tenantId}_{resgId} format.
    // 
    // This parameter is required.
    shared_ptr<string> resourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
