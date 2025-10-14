// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUPGRADEITEMSRESPONSEBODYUPGRADEITEMS_HPP_
#define ALIBABACLOUD_MODELS_LISTUPGRADEITEMSRESPONSEBODYUPGRADEITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListUpgradeItemsResponseBodyUpgradeItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUpgradeItemsResponseBodyUpgradeItems& obj) { 
      DARABONBA_PTR_TO_JSON(UpgradeItemId, upgradeItemId_);
    };
    friend void from_json(const Darabonba::Json& j, ListUpgradeItemsResponseBodyUpgradeItems& obj) { 
      DARABONBA_PTR_FROM_JSON(UpgradeItemId, upgradeItemId_);
    };
    ListUpgradeItemsResponseBodyUpgradeItems() = default ;
    ListUpgradeItemsResponseBodyUpgradeItems(const ListUpgradeItemsResponseBodyUpgradeItems &) = default ;
    ListUpgradeItemsResponseBodyUpgradeItems(ListUpgradeItemsResponseBodyUpgradeItems &&) = default ;
    ListUpgradeItemsResponseBodyUpgradeItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUpgradeItemsResponseBodyUpgradeItems() = default ;
    ListUpgradeItemsResponseBodyUpgradeItems& operator=(const ListUpgradeItemsResponseBodyUpgradeItems &) = default ;
    ListUpgradeItemsResponseBodyUpgradeItems& operator=(ListUpgradeItemsResponseBodyUpgradeItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->upgradeItemId_ == nullptr; };
    // upgradeItemId Field Functions 
    bool hasUpgradeItemId() const { return this->upgradeItemId_ != nullptr;};
    void deleteUpgradeItemId() { this->upgradeItemId_ = nullptr;};
    inline string upgradeItemId() const { DARABONBA_PTR_GET_DEFAULT(upgradeItemId_, "") };
    inline ListUpgradeItemsResponseBodyUpgradeItems& setUpgradeItemId(string upgradeItemId) { DARABONBA_PTR_SET_VALUE(upgradeItemId_, upgradeItemId) };


  protected:
    std::shared_ptr<string> upgradeItemId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
