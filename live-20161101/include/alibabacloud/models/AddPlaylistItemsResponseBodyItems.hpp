// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDPLAYLISTITEMSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_ADDPLAYLISTITEMSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddPlaylistItemsResponseBodyItemsFailedItems.hpp>
#include <alibabacloud/models/AddPlaylistItemsResponseBodyItemsSuccessItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class AddPlaylistItemsResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddPlaylistItemsResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(FailedItems, failedItems_);
      DARABONBA_PTR_TO_JSON(SuccessItems, successItems_);
    };
    friend void from_json(const Darabonba::Json& j, AddPlaylistItemsResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedItems, failedItems_);
      DARABONBA_PTR_FROM_JSON(SuccessItems, successItems_);
    };
    AddPlaylistItemsResponseBodyItems() = default ;
    AddPlaylistItemsResponseBodyItems(const AddPlaylistItemsResponseBodyItems &) = default ;
    AddPlaylistItemsResponseBodyItems(AddPlaylistItemsResponseBodyItems &&) = default ;
    AddPlaylistItemsResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddPlaylistItemsResponseBodyItems() = default ;
    AddPlaylistItemsResponseBodyItems& operator=(const AddPlaylistItemsResponseBodyItems &) = default ;
    AddPlaylistItemsResponseBodyItems& operator=(AddPlaylistItemsResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failedItems_ == nullptr
        && return this->successItems_ == nullptr; };
    // failedItems Field Functions 
    bool hasFailedItems() const { return this->failedItems_ != nullptr;};
    void deleteFailedItems() { this->failedItems_ = nullptr;};
    inline const vector<Models::AddPlaylistItemsResponseBodyItemsFailedItems> & failedItems() const { DARABONBA_PTR_GET_CONST(failedItems_, vector<Models::AddPlaylistItemsResponseBodyItemsFailedItems>) };
    inline vector<Models::AddPlaylistItemsResponseBodyItemsFailedItems> failedItems() { DARABONBA_PTR_GET(failedItems_, vector<Models::AddPlaylistItemsResponseBodyItemsFailedItems>) };
    inline AddPlaylistItemsResponseBodyItems& setFailedItems(const vector<Models::AddPlaylistItemsResponseBodyItemsFailedItems> & failedItems) { DARABONBA_PTR_SET_VALUE(failedItems_, failedItems) };
    inline AddPlaylistItemsResponseBodyItems& setFailedItems(vector<Models::AddPlaylistItemsResponseBodyItemsFailedItems> && failedItems) { DARABONBA_PTR_SET_RVALUE(failedItems_, failedItems) };


    // successItems Field Functions 
    bool hasSuccessItems() const { return this->successItems_ != nullptr;};
    void deleteSuccessItems() { this->successItems_ = nullptr;};
    inline const vector<Models::AddPlaylistItemsResponseBodyItemsSuccessItems> & successItems() const { DARABONBA_PTR_GET_CONST(successItems_, vector<Models::AddPlaylistItemsResponseBodyItemsSuccessItems>) };
    inline vector<Models::AddPlaylistItemsResponseBodyItemsSuccessItems> successItems() { DARABONBA_PTR_GET(successItems_, vector<Models::AddPlaylistItemsResponseBodyItemsSuccessItems>) };
    inline AddPlaylistItemsResponseBodyItems& setSuccessItems(const vector<Models::AddPlaylistItemsResponseBodyItemsSuccessItems> & successItems) { DARABONBA_PTR_SET_VALUE(successItems_, successItems) };
    inline AddPlaylistItemsResponseBodyItems& setSuccessItems(vector<Models::AddPlaylistItemsResponseBodyItemsSuccessItems> && successItems) { DARABONBA_PTR_SET_RVALUE(successItems_, successItems) };


  protected:
    // The episodes that failed to be added.
    std::shared_ptr<vector<Models::AddPlaylistItemsResponseBodyItemsFailedItems>> failedItems_ = nullptr;
    // The episodes that were added.
    std::shared_ptr<vector<Models::AddPlaylistItemsResponseBodyItemsSuccessItems>> successItems_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
