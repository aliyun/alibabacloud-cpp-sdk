// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECHECKITEMRESPONSEBODYCHECKITEMS_HPP_
#define ALIBABACLOUD_MODELS_DELETECHECKITEMRESPONSEBODYCHECKITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DeleteCheckItemResponseBodyCheckItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCheckItemResponseBodyCheckItems& obj) { 
      DARABONBA_PTR_TO_JSON(CheckId, checkId_);
      DARABONBA_PTR_TO_JSON(CheckShowName, checkShowName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCheckItemResponseBodyCheckItems& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
      DARABONBA_PTR_FROM_JSON(CheckShowName, checkShowName_);
    };
    DeleteCheckItemResponseBodyCheckItems() = default ;
    DeleteCheckItemResponseBodyCheckItems(const DeleteCheckItemResponseBodyCheckItems &) = default ;
    DeleteCheckItemResponseBodyCheckItems(DeleteCheckItemResponseBodyCheckItems &&) = default ;
    DeleteCheckItemResponseBodyCheckItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCheckItemResponseBodyCheckItems() = default ;
    DeleteCheckItemResponseBodyCheckItems& operator=(const DeleteCheckItemResponseBodyCheckItems &) = default ;
    DeleteCheckItemResponseBodyCheckItems& operator=(DeleteCheckItemResponseBodyCheckItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkId_ == nullptr
        && return this->checkShowName_ == nullptr; };
    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline int64_t checkId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
    inline DeleteCheckItemResponseBodyCheckItems& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // checkShowName Field Functions 
    bool hasCheckShowName() const { return this->checkShowName_ != nullptr;};
    void deleteCheckShowName() { this->checkShowName_ = nullptr;};
    inline string checkShowName() const { DARABONBA_PTR_GET_DEFAULT(checkShowName_, "") };
    inline DeleteCheckItemResponseBodyCheckItems& setCheckShowName(string checkShowName) { DARABONBA_PTR_SET_VALUE(checkShowName_, checkShowName) };


  protected:
    // Check item ID.
    std::shared_ptr<int64_t> checkId_ = nullptr;
    // Check item name.
    std::shared_ptr<string> checkShowName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
