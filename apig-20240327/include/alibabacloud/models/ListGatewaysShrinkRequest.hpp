// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListGatewaysShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewaysShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(gatewayType, gatewayType_);
      DARABONBA_PTR_TO_JSON(keyword, keyword_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(tag, tagShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewaysShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(gatewayType, gatewayType_);
      DARABONBA_PTR_FROM_JSON(keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(tag, tagShrink_);
    };
    ListGatewaysShrinkRequest() = default ;
    ListGatewaysShrinkRequest(const ListGatewaysShrinkRequest &) = default ;
    ListGatewaysShrinkRequest(ListGatewaysShrinkRequest &&) = default ;
    ListGatewaysShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewaysShrinkRequest() = default ;
    ListGatewaysShrinkRequest& operator=(const ListGatewaysShrinkRequest &) = default ;
    ListGatewaysShrinkRequest& operator=(ListGatewaysShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gatewayId_ == nullptr
        && this->gatewayType_ == nullptr && this->keyword_ == nullptr && this->name_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->resourceGroupId_ == nullptr && this->tagShrink_ == nullptr; };
    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline ListGatewaysShrinkRequest& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayType Field Functions 
    bool hasGatewayType() const { return this->gatewayType_ != nullptr;};
    void deleteGatewayType() { this->gatewayType_ = nullptr;};
    inline string getGatewayType() const { DARABONBA_PTR_GET_DEFAULT(gatewayType_, "") };
    inline ListGatewaysShrinkRequest& setGatewayType(string gatewayType) { DARABONBA_PTR_SET_VALUE(gatewayType_, gatewayType) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListGatewaysShrinkRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListGatewaysShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListGatewaysShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListGatewaysShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListGatewaysShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tagShrink Field Functions 
    bool hasTagShrink() const { return this->tagShrink_ != nullptr;};
    void deleteTagShrink() { this->tagShrink_ = nullptr;};
    inline string getTagShrink() const { DARABONBA_PTR_GET_DEFAULT(tagShrink_, "") };
    inline ListGatewaysShrinkRequest& setTagShrink(string tagShrink) { DARABONBA_PTR_SET_VALUE(tagShrink_, tagShrink) };


  protected:
    // Retrieve the list of created cloud-native gateways
    shared_ptr<string> gatewayId_ {};
    // The search keyword. A full match is performed. The search is case-insensitive.
    shared_ptr<string> gatewayType_ {};
    // The instance name. If you specify a name, an exact search is performed.
    shared_ptr<string> keyword_ {};
    // The number of entries per page.
    shared_ptr<string> name_ {};
    // The instance ID. If you specify an ID, an exact search is performed.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of the page to return.
    shared_ptr<int32_t> pageSize_ {};
    // rg-aekz3wes3hnre5a
    shared_ptr<string> resourceGroupId_ {};
    // The tags that you want to use for the search.
    shared_ptr<string> tagShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
