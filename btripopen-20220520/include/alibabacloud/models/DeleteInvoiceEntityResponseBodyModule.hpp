// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEINVOICEENTITYRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_DELETEINVOICEENTITYRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class DeleteInvoiceEntityResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteInvoiceEntityResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(remove_num, removeNum_);
      DARABONBA_PTR_TO_JSON(selected_user_num, selectedUserNum_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteInvoiceEntityResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(remove_num, removeNum_);
      DARABONBA_PTR_FROM_JSON(selected_user_num, selectedUserNum_);
    };
    DeleteInvoiceEntityResponseBodyModule() = default ;
    DeleteInvoiceEntityResponseBodyModule(const DeleteInvoiceEntityResponseBodyModule &) = default ;
    DeleteInvoiceEntityResponseBodyModule(DeleteInvoiceEntityResponseBodyModule &&) = default ;
    DeleteInvoiceEntityResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteInvoiceEntityResponseBodyModule() = default ;
    DeleteInvoiceEntityResponseBodyModule& operator=(const DeleteInvoiceEntityResponseBodyModule &) = default ;
    DeleteInvoiceEntityResponseBodyModule& operator=(DeleteInvoiceEntityResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->removeNum_ != nullptr
        && this->selectedUserNum_ != nullptr; };
    // removeNum Field Functions 
    bool hasRemoveNum() const { return this->removeNum_ != nullptr;};
    void deleteRemoveNum() { this->removeNum_ = nullptr;};
    inline int32_t removeNum() const { DARABONBA_PTR_GET_DEFAULT(removeNum_, 0) };
    inline DeleteInvoiceEntityResponseBodyModule& setRemoveNum(int32_t removeNum) { DARABONBA_PTR_SET_VALUE(removeNum_, removeNum) };


    // selectedUserNum Field Functions 
    bool hasSelectedUserNum() const { return this->selectedUserNum_ != nullptr;};
    void deleteSelectedUserNum() { this->selectedUserNum_ = nullptr;};
    inline int32_t selectedUserNum() const { DARABONBA_PTR_GET_DEFAULT(selectedUserNum_, 0) };
    inline DeleteInvoiceEntityResponseBodyModule& setSelectedUserNum(int32_t selectedUserNum) { DARABONBA_PTR_SET_VALUE(selectedUserNum_, selectedUserNum) };


  protected:
    std::shared_ptr<int32_t> removeNum_ = nullptr;
    std::shared_ptr<int32_t> selectedUserNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
