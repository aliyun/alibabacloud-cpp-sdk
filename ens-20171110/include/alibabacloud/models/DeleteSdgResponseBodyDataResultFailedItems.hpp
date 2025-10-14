// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESDGRESPONSEBODYDATARESULTFAILEDITEMS_HPP_
#define ALIBABACLOUD_MODELS_DELETESDGRESPONSEBODYDATARESULTFAILEDITEMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteSDGResponseBodyDataResultFailedItemsItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DeleteSDGResponseBodyDataResultFailedItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSDGResponseBodyDataResultFailedItems& obj) { 
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(Item, item_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSDGResponseBodyDataResultFailedItems& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(Item, item_);
    };
    DeleteSDGResponseBodyDataResultFailedItems() = default ;
    DeleteSDGResponseBodyDataResultFailedItems(const DeleteSDGResponseBodyDataResultFailedItems &) = default ;
    DeleteSDGResponseBodyDataResultFailedItems(DeleteSDGResponseBodyDataResultFailedItems &&) = default ;
    DeleteSDGResponseBodyDataResultFailedItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSDGResponseBodyDataResultFailedItems() = default ;
    DeleteSDGResponseBodyDataResultFailedItems& operator=(const DeleteSDGResponseBodyDataResultFailedItems &) = default ;
    DeleteSDGResponseBodyDataResultFailedItems& operator=(DeleteSDGResponseBodyDataResultFailedItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errMessage_ == nullptr
        && return this->item_ == nullptr; };
    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string errMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DeleteSDGResponseBodyDataResultFailedItems& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // item Field Functions 
    bool hasItem() const { return this->item_ != nullptr;};
    void deleteItem() { this->item_ = nullptr;};
    inline const Models::DeleteSDGResponseBodyDataResultFailedItemsItem & item() const { DARABONBA_PTR_GET_CONST(item_, Models::DeleteSDGResponseBodyDataResultFailedItemsItem) };
    inline Models::DeleteSDGResponseBodyDataResultFailedItemsItem item() { DARABONBA_PTR_GET(item_, Models::DeleteSDGResponseBodyDataResultFailedItemsItem) };
    inline DeleteSDGResponseBodyDataResultFailedItems& setItem(const Models::DeleteSDGResponseBodyDataResultFailedItemsItem & item) { DARABONBA_PTR_SET_VALUE(item_, item) };
    inline DeleteSDGResponseBodyDataResultFailedItems& setItem(Models::DeleteSDGResponseBodyDataResultFailedItemsItem && item) { DARABONBA_PTR_SET_RVALUE(item_, item) };


  protected:
    // The error message.
    std::shared_ptr<string> errMessage_ = nullptr;
    // Description
    std::shared_ptr<Models::DeleteSDGResponseBodyDataResultFailedItemsItem> item_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
