// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESDGRESPONSEBODYDATARESULTFAILEDITEMSITEM_HPP_
#define ALIBABACLOUD_MODELS_DELETESDGRESPONSEBODYDATARESULTFAILEDITEMSITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DeleteSDGResponseBodyDataResultFailedItemsItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSDGResponseBodyDataResultFailedItemsItem& obj) { 
      DARABONBA_PTR_TO_JSON(SdgId, sdgId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSDGResponseBodyDataResultFailedItemsItem& obj) { 
      DARABONBA_PTR_FROM_JSON(SdgId, sdgId_);
    };
    DeleteSDGResponseBodyDataResultFailedItemsItem() = default ;
    DeleteSDGResponseBodyDataResultFailedItemsItem(const DeleteSDGResponseBodyDataResultFailedItemsItem &) = default ;
    DeleteSDGResponseBodyDataResultFailedItemsItem(DeleteSDGResponseBodyDataResultFailedItemsItem &&) = default ;
    DeleteSDGResponseBodyDataResultFailedItemsItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSDGResponseBodyDataResultFailedItemsItem() = default ;
    DeleteSDGResponseBodyDataResultFailedItemsItem& operator=(const DeleteSDGResponseBodyDataResultFailedItemsItem &) = default ;
    DeleteSDGResponseBodyDataResultFailedItemsItem& operator=(DeleteSDGResponseBodyDataResultFailedItemsItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sdgId_ != nullptr; };
    // sdgId Field Functions 
    bool hasSdgId() const { return this->sdgId_ != nullptr;};
    void deleteSdgId() { this->sdgId_ = nullptr;};
    inline string sdgId() const { DARABONBA_PTR_GET_DEFAULT(sdgId_, "") };
    inline DeleteSDGResponseBodyDataResultFailedItemsItem& setSdgId(string sdgId) { DARABONBA_PTR_SET_VALUE(sdgId_, sdgId) };


  protected:
    // The ID of the shared data group (SDG).
    std::shared_ptr<string> sdgId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
