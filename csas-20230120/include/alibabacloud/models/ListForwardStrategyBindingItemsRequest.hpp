// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFORWARDSTRATEGYBINDINGITEMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTFORWARDSTRATEGYBINDINGITEMSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListForwardStrategyBindingItemsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListForwardStrategyBindingItemsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ForwardIds, forwardIds_);
      DARABONBA_PTR_TO_JSON(ItemType, itemType_);
    };
    friend void from_json(const Darabonba::Json& j, ListForwardStrategyBindingItemsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ForwardIds, forwardIds_);
      DARABONBA_PTR_FROM_JSON(ItemType, itemType_);
    };
    ListForwardStrategyBindingItemsRequest() = default ;
    ListForwardStrategyBindingItemsRequest(const ListForwardStrategyBindingItemsRequest &) = default ;
    ListForwardStrategyBindingItemsRequest(ListForwardStrategyBindingItemsRequest &&) = default ;
    ListForwardStrategyBindingItemsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListForwardStrategyBindingItemsRequest() = default ;
    ListForwardStrategyBindingItemsRequest& operator=(const ListForwardStrategyBindingItemsRequest &) = default ;
    ListForwardStrategyBindingItemsRequest& operator=(ListForwardStrategyBindingItemsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->forwardIds_ == nullptr
        && this->itemType_ == nullptr; };
    // forwardIds Field Functions 
    bool hasForwardIds() const { return this->forwardIds_ != nullptr;};
    void deleteForwardIds() { this->forwardIds_ = nullptr;};
    inline const vector<string> & getForwardIds() const { DARABONBA_PTR_GET_CONST(forwardIds_, vector<string>) };
    inline vector<string> getForwardIds() { DARABONBA_PTR_GET(forwardIds_, vector<string>) };
    inline ListForwardStrategyBindingItemsRequest& setForwardIds(const vector<string> & forwardIds) { DARABONBA_PTR_SET_VALUE(forwardIds_, forwardIds) };
    inline ListForwardStrategyBindingItemsRequest& setForwardIds(vector<string> && forwardIds) { DARABONBA_PTR_SET_RVALUE(forwardIds_, forwardIds) };


    // itemType Field Functions 
    bool hasItemType() const { return this->itemType_ != nullptr;};
    void deleteItemType() { this->itemType_ = nullptr;};
    inline string getItemType() const { DARABONBA_PTR_GET_DEFAULT(itemType_, "") };
    inline ListForwardStrategyBindingItemsRequest& setItemType(string itemType) { DARABONBA_PTR_SET_VALUE(itemType_, itemType) };


  protected:
    // This parameter is required.
    shared_ptr<vector<string>> forwardIds_ {};
    shared_ptr<string> itemType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
