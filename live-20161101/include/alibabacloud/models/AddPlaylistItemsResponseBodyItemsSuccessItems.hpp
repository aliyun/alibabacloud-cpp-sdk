// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDPLAYLISTITEMSRESPONSEBODYITEMSSUCCESSITEMS_HPP_
#define ALIBABACLOUD_MODELS_ADDPLAYLISTITEMSRESPONSEBODYITEMSSUCCESSITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class AddPlaylistItemsResponseBodyItemsSuccessItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddPlaylistItemsResponseBodyItemsSuccessItems& obj) { 
      DARABONBA_PTR_TO_JSON(ItemId, itemId_);
      DARABONBA_PTR_TO_JSON(ItemName, itemName_);
    };
    friend void from_json(const Darabonba::Json& j, AddPlaylistItemsResponseBodyItemsSuccessItems& obj) { 
      DARABONBA_PTR_FROM_JSON(ItemId, itemId_);
      DARABONBA_PTR_FROM_JSON(ItemName, itemName_);
    };
    AddPlaylistItemsResponseBodyItemsSuccessItems() = default ;
    AddPlaylistItemsResponseBodyItemsSuccessItems(const AddPlaylistItemsResponseBodyItemsSuccessItems &) = default ;
    AddPlaylistItemsResponseBodyItemsSuccessItems(AddPlaylistItemsResponseBodyItemsSuccessItems &&) = default ;
    AddPlaylistItemsResponseBodyItemsSuccessItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddPlaylistItemsResponseBodyItemsSuccessItems() = default ;
    AddPlaylistItemsResponseBodyItemsSuccessItems& operator=(const AddPlaylistItemsResponseBodyItemsSuccessItems &) = default ;
    AddPlaylistItemsResponseBodyItemsSuccessItems& operator=(AddPlaylistItemsResponseBodyItemsSuccessItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->itemId_ != nullptr
        && this->itemName_ != nullptr; };
    // itemId Field Functions 
    bool hasItemId() const { return this->itemId_ != nullptr;};
    void deleteItemId() { this->itemId_ = nullptr;};
    inline string itemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
    inline AddPlaylistItemsResponseBodyItemsSuccessItems& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


    // itemName Field Functions 
    bool hasItemName() const { return this->itemName_ != nullptr;};
    void deleteItemName() { this->itemName_ = nullptr;};
    inline string itemName() const { DARABONBA_PTR_GET_DEFAULT(itemName_, "") };
    inline AddPlaylistItemsResponseBodyItemsSuccessItems& setItemName(string itemName) { DARABONBA_PTR_SET_VALUE(itemName_, itemName) };


  protected:
    // The ID of the episode.
    std::shared_ptr<string> itemId_ = nullptr;
    // The name of the episode.
    std::shared_ptr<string> itemName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
