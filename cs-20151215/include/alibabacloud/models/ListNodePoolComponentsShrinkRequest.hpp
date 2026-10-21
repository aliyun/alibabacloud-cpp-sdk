// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODEPOOLCOMPONENTSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTNODEPOOLCOMPONENTSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ListNodePoolComponentsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodePoolComponentsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(image_id, imageId_);
      DARABONBA_PTR_TO_JSON(image_type, imageType_);
      DARABONBA_PTR_TO_JSON(instance_types, instanceTypesShrink_);
      DARABONBA_PTR_TO_JSON(max_results, maxResults_);
      DARABONBA_PTR_TO_JSON(next_token, nextToken_);
      DARABONBA_PTR_TO_JSON(nodepool_id, nodepoolId_);
      DARABONBA_PTR_TO_JSON(nodepool_type, nodepoolType_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodePoolComponentsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(image_id, imageId_);
      DARABONBA_PTR_FROM_JSON(image_type, imageType_);
      DARABONBA_PTR_FROM_JSON(instance_types, instanceTypesShrink_);
      DARABONBA_PTR_FROM_JSON(max_results, maxResults_);
      DARABONBA_PTR_FROM_JSON(next_token, nextToken_);
      DARABONBA_PTR_FROM_JSON(nodepool_id, nodepoolId_);
      DARABONBA_PTR_FROM_JSON(nodepool_type, nodepoolType_);
    };
    ListNodePoolComponentsShrinkRequest() = default ;
    ListNodePoolComponentsShrinkRequest(const ListNodePoolComponentsShrinkRequest &) = default ;
    ListNodePoolComponentsShrinkRequest(ListNodePoolComponentsShrinkRequest &&) = default ;
    ListNodePoolComponentsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodePoolComponentsShrinkRequest() = default ;
    ListNodePoolComponentsShrinkRequest& operator=(const ListNodePoolComponentsShrinkRequest &) = default ;
    ListNodePoolComponentsShrinkRequest& operator=(ListNodePoolComponentsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageId_ == nullptr
        && this->imageType_ == nullptr && this->instanceTypesShrink_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->nodepoolId_ == nullptr
        && this->nodepoolType_ == nullptr; };
    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline ListNodePoolComponentsShrinkRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageType Field Functions 
    bool hasImageType() const { return this->imageType_ != nullptr;};
    void deleteImageType() { this->imageType_ = nullptr;};
    inline string getImageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
    inline ListNodePoolComponentsShrinkRequest& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


    // instanceTypesShrink Field Functions 
    bool hasInstanceTypesShrink() const { return this->instanceTypesShrink_ != nullptr;};
    void deleteInstanceTypesShrink() { this->instanceTypesShrink_ = nullptr;};
    inline string getInstanceTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(instanceTypesShrink_, "") };
    inline ListNodePoolComponentsShrinkRequest& setInstanceTypesShrink(string instanceTypesShrink) { DARABONBA_PTR_SET_VALUE(instanceTypesShrink_, instanceTypesShrink) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListNodePoolComponentsShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListNodePoolComponentsShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // nodepoolId Field Functions 
    bool hasNodepoolId() const { return this->nodepoolId_ != nullptr;};
    void deleteNodepoolId() { this->nodepoolId_ = nullptr;};
    inline string getNodepoolId() const { DARABONBA_PTR_GET_DEFAULT(nodepoolId_, "") };
    inline ListNodePoolComponentsShrinkRequest& setNodepoolId(string nodepoolId) { DARABONBA_PTR_SET_VALUE(nodepoolId_, nodepoolId) };


    // nodepoolType Field Functions 
    bool hasNodepoolType() const { return this->nodepoolType_ != nullptr;};
    void deleteNodepoolType() { this->nodepoolType_ = nullptr;};
    inline string getNodepoolType() const { DARABONBA_PTR_GET_DEFAULT(nodepoolType_, "") };
    inline ListNodePoolComponentsShrinkRequest& setNodepoolType(string nodepoolType) { DARABONBA_PTR_SET_VALUE(nodepoolType_, nodepoolType) };


  protected:
    // The image ID of the node pool. Either this parameter or image_type is required if nodepool_id is not specified.
    shared_ptr<string> imageId_ {};
    // The image type of the node pool. Either this parameter or image_id is required if nodepool_id is not specified.
    shared_ptr<string> imageType_ {};
    // The instance types of the node pool. This parameter is required if nodepool_id is not specified.
    shared_ptr<string> instanceTypesShrink_ {};
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
