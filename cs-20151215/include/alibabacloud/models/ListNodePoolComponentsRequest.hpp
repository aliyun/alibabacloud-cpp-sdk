// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODEPOOLCOMPONENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTNODEPOOLCOMPONENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ListNodePoolComponentsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodePoolComponentsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(image_id, imageId_);
      DARABONBA_PTR_TO_JSON(image_type, imageType_);
      DARABONBA_PTR_TO_JSON(instance_types, instanceTypes_);
      DARABONBA_PTR_TO_JSON(max_results, maxResults_);
      DARABONBA_PTR_TO_JSON(next_token, nextToken_);
      DARABONBA_PTR_TO_JSON(nodepool_id, nodepoolId_);
      DARABONBA_PTR_TO_JSON(nodepool_type, nodepoolType_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodePoolComponentsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(image_id, imageId_);
      DARABONBA_PTR_FROM_JSON(image_type, imageType_);
      DARABONBA_PTR_FROM_JSON(instance_types, instanceTypes_);
      DARABONBA_PTR_FROM_JSON(max_results, maxResults_);
      DARABONBA_PTR_FROM_JSON(next_token, nextToken_);
      DARABONBA_PTR_FROM_JSON(nodepool_id, nodepoolId_);
      DARABONBA_PTR_FROM_JSON(nodepool_type, nodepoolType_);
    };
    ListNodePoolComponentsRequest() = default ;
    ListNodePoolComponentsRequest(const ListNodePoolComponentsRequest &) = default ;
    ListNodePoolComponentsRequest(ListNodePoolComponentsRequest &&) = default ;
    ListNodePoolComponentsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodePoolComponentsRequest() = default ;
    ListNodePoolComponentsRequest& operator=(const ListNodePoolComponentsRequest &) = default ;
    ListNodePoolComponentsRequest& operator=(ListNodePoolComponentsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageId_ == nullptr
        && this->imageType_ == nullptr && this->instanceTypes_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->nodepoolId_ == nullptr
        && this->nodepoolType_ == nullptr; };
    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline ListNodePoolComponentsRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageType Field Functions 
    bool hasImageType() const { return this->imageType_ != nullptr;};
    void deleteImageType() { this->imageType_ = nullptr;};
    inline string getImageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
    inline ListNodePoolComponentsRequest& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


    // instanceTypes Field Functions 
    bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
    void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
    inline const vector<string> & getInstanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, vector<string>) };
    inline vector<string> getInstanceTypes() { DARABONBA_PTR_GET(instanceTypes_, vector<string>) };
    inline ListNodePoolComponentsRequest& setInstanceTypes(const vector<string> & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
    inline ListNodePoolComponentsRequest& setInstanceTypes(vector<string> && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListNodePoolComponentsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListNodePoolComponentsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // nodepoolId Field Functions 
    bool hasNodepoolId() const { return this->nodepoolId_ != nullptr;};
    void deleteNodepoolId() { this->nodepoolId_ = nullptr;};
    inline string getNodepoolId() const { DARABONBA_PTR_GET_DEFAULT(nodepoolId_, "") };
    inline ListNodePoolComponentsRequest& setNodepoolId(string nodepoolId) { DARABONBA_PTR_SET_VALUE(nodepoolId_, nodepoolId) };


    // nodepoolType Field Functions 
    bool hasNodepoolType() const { return this->nodepoolType_ != nullptr;};
    void deleteNodepoolType() { this->nodepoolType_ = nullptr;};
    inline string getNodepoolType() const { DARABONBA_PTR_GET_DEFAULT(nodepoolType_, "") };
    inline ListNodePoolComponentsRequest& setNodepoolType(string nodepoolType) { DARABONBA_PTR_SET_VALUE(nodepoolType_, nodepoolType) };


  protected:
    // The image ID of the node pool. Either this parameter or image_type is required if nodepool_id is not specified.
    shared_ptr<string> imageId_ {};
    // The image type of the node pool. Either this parameter or image_id is required if nodepool_id is not specified.
    shared_ptr<string> imageType_ {};
    // The instance types of the node pool. This parameter is required if nodepool_id is not specified.
    shared_ptr<vector<string>> instanceTypes_ {};
    // The maximum number of results to return. Default value: 200.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token.
    shared_ptr<string> nextToken_ {};
    // The node pool ID. If you specify a node pool ID, the system queries the list of components available for the node pool and ignores other parameters.
    shared_ptr<string> nodepoolId_ {};
    // The node pool type. This parameter is required if nodepool_id is not specified.
    shared_ptr<string> nodepoolType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
