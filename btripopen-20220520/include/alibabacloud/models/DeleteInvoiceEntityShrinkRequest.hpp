// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEINVOICEENTITYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEINVOICEENTITYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class DeleteInvoiceEntityShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteInvoiceEntityShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(del_all, delAll_);
      DARABONBA_PTR_TO_JSON(entities, entitiesShrink_);
      DARABONBA_PTR_TO_JSON(third_part_id, thirdPartId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteInvoiceEntityShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(del_all, delAll_);
      DARABONBA_PTR_FROM_JSON(entities, entitiesShrink_);
      DARABONBA_PTR_FROM_JSON(third_part_id, thirdPartId_);
    };
    DeleteInvoiceEntityShrinkRequest() = default ;
    DeleteInvoiceEntityShrinkRequest(const DeleteInvoiceEntityShrinkRequest &) = default ;
    DeleteInvoiceEntityShrinkRequest(DeleteInvoiceEntityShrinkRequest &&) = default ;
    DeleteInvoiceEntityShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteInvoiceEntityShrinkRequest() = default ;
    DeleteInvoiceEntityShrinkRequest& operator=(const DeleteInvoiceEntityShrinkRequest &) = default ;
    DeleteInvoiceEntityShrinkRequest& operator=(DeleteInvoiceEntityShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->delAll_ != nullptr
        && this->entitiesShrink_ != nullptr && this->thirdPartId_ != nullptr; };
    // delAll Field Functions 
    bool hasDelAll() const { return this->delAll_ != nullptr;};
    void deleteDelAll() { this->delAll_ = nullptr;};
    inline bool delAll() const { DARABONBA_PTR_GET_DEFAULT(delAll_, false) };
    inline DeleteInvoiceEntityShrinkRequest& setDelAll(bool delAll) { DARABONBA_PTR_SET_VALUE(delAll_, delAll) };


    // entitiesShrink Field Functions 
    bool hasEntitiesShrink() const { return this->entitiesShrink_ != nullptr;};
    void deleteEntitiesShrink() { this->entitiesShrink_ = nullptr;};
    inline string entitiesShrink() const { DARABONBA_PTR_GET_DEFAULT(entitiesShrink_, "") };
    inline DeleteInvoiceEntityShrinkRequest& setEntitiesShrink(string entitiesShrink) { DARABONBA_PTR_SET_VALUE(entitiesShrink_, entitiesShrink) };


    // thirdPartId Field Functions 
    bool hasThirdPartId() const { return this->thirdPartId_ != nullptr;};
    void deleteThirdPartId() { this->thirdPartId_ = nullptr;};
    inline string thirdPartId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartId_, "") };
    inline DeleteInvoiceEntityShrinkRequest& setThirdPartId(string thirdPartId) { DARABONBA_PTR_SET_VALUE(thirdPartId_, thirdPartId) };


  protected:
    std::shared_ptr<bool> delAll_ = nullptr;
    std::shared_ptr<string> entitiesShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> thirdPartId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
