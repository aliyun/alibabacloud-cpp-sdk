// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EDITAPPINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_EDITAPPINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class EditAppInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EditAppInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ItemId, itemId_);
    };
    friend void from_json(const Darabonba::Json& j, EditAppInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ItemId, itemId_);
    };
    EditAppInfoResponseBodyData() = default ;
    EditAppInfoResponseBodyData(const EditAppInfoResponseBodyData &) = default ;
    EditAppInfoResponseBodyData(EditAppInfoResponseBodyData &&) = default ;
    EditAppInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EditAppInfoResponseBodyData() = default ;
    EditAppInfoResponseBodyData& operator=(const EditAppInfoResponseBodyData &) = default ;
    EditAppInfoResponseBodyData& operator=(EditAppInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->itemId_ != nullptr; };
    // itemId Field Functions 
    bool hasItemId() const { return this->itemId_ != nullptr;};
    void deleteItemId() { this->itemId_ = nullptr;};
    inline string itemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
    inline EditAppInfoResponseBodyData& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


  protected:
    std::shared_ptr<string> itemId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
