// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EDITPLAYLISTRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_EDITPLAYLISTRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/EditPlaylistResponseBodyItemsFailedItems.hpp>
#include <alibabacloud/models/EditPlaylistResponseBodyItemsSuccessItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class EditPlaylistResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EditPlaylistResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(FailedItems, failedItems_);
      DARABONBA_PTR_TO_JSON(SuccessItems, successItems_);
    };
    friend void from_json(const Darabonba::Json& j, EditPlaylistResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedItems, failedItems_);
      DARABONBA_PTR_FROM_JSON(SuccessItems, successItems_);
    };
    EditPlaylistResponseBodyItems() = default ;
    EditPlaylistResponseBodyItems(const EditPlaylistResponseBodyItems &) = default ;
    EditPlaylistResponseBodyItems(EditPlaylistResponseBodyItems &&) = default ;
    EditPlaylistResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EditPlaylistResponseBodyItems() = default ;
    EditPlaylistResponseBodyItems& operator=(const EditPlaylistResponseBodyItems &) = default ;
    EditPlaylistResponseBodyItems& operator=(EditPlaylistResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failedItems_ != nullptr
        && this->successItems_ != nullptr; };
    // failedItems Field Functions 
    bool hasFailedItems() const { return this->failedItems_ != nullptr;};
    void deleteFailedItems() { this->failedItems_ = nullptr;};
    inline const vector<Models::EditPlaylistResponseBodyItemsFailedItems> & failedItems() const { DARABONBA_PTR_GET_CONST(failedItems_, vector<Models::EditPlaylistResponseBodyItemsFailedItems>) };
    inline vector<Models::EditPlaylistResponseBodyItemsFailedItems> failedItems() { DARABONBA_PTR_GET(failedItems_, vector<Models::EditPlaylistResponseBodyItemsFailedItems>) };
    inline EditPlaylistResponseBodyItems& setFailedItems(const vector<Models::EditPlaylistResponseBodyItemsFailedItems> & failedItems) { DARABONBA_PTR_SET_VALUE(failedItems_, failedItems) };
    inline EditPlaylistResponseBodyItems& setFailedItems(vector<Models::EditPlaylistResponseBodyItemsFailedItems> && failedItems) { DARABONBA_PTR_SET_RVALUE(failedItems_, failedItems) };


    // successItems Field Functions 
    bool hasSuccessItems() const { return this->successItems_ != nullptr;};
    void deleteSuccessItems() { this->successItems_ = nullptr;};
    inline const vector<Models::EditPlaylistResponseBodyItemsSuccessItems> & successItems() const { DARABONBA_PTR_GET_CONST(successItems_, vector<Models::EditPlaylistResponseBodyItemsSuccessItems>) };
    inline vector<Models::EditPlaylistResponseBodyItemsSuccessItems> successItems() { DARABONBA_PTR_GET(successItems_, vector<Models::EditPlaylistResponseBodyItemsSuccessItems>) };
    inline EditPlaylistResponseBodyItems& setSuccessItems(const vector<Models::EditPlaylistResponseBodyItemsSuccessItems> & successItems) { DARABONBA_PTR_SET_VALUE(successItems_, successItems) };
    inline EditPlaylistResponseBodyItems& setSuccessItems(vector<Models::EditPlaylistResponseBodyItemsSuccessItems> && successItems) { DARABONBA_PTR_SET_RVALUE(successItems_, successItems) };


  protected:
    // The episodes that failed to be added.
    std::shared_ptr<vector<Models::EditPlaylistResponseBodyItemsFailedItems>> failedItems_ = nullptr;
    // The episodes that were added.
    std::shared_ptr<vector<Models::EditPlaylistResponseBodyItemsSuccessItems>> successItems_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
