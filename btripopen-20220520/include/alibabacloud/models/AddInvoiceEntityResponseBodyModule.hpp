// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDINVOICEENTITYRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_ADDINVOICEENTITYRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class AddInvoiceEntityResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddInvoiceEntityResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(add_num, addNum_);
      DARABONBA_PTR_TO_JSON(selected_user_num, selectedUserNum_);
    };
    friend void from_json(const Darabonba::Json& j, AddInvoiceEntityResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(add_num, addNum_);
      DARABONBA_PTR_FROM_JSON(selected_user_num, selectedUserNum_);
    };
    AddInvoiceEntityResponseBodyModule() = default ;
    AddInvoiceEntityResponseBodyModule(const AddInvoiceEntityResponseBodyModule &) = default ;
    AddInvoiceEntityResponseBodyModule(AddInvoiceEntityResponseBodyModule &&) = default ;
    AddInvoiceEntityResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddInvoiceEntityResponseBodyModule() = default ;
    AddInvoiceEntityResponseBodyModule& operator=(const AddInvoiceEntityResponseBodyModule &) = default ;
    AddInvoiceEntityResponseBodyModule& operator=(AddInvoiceEntityResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addNum_ != nullptr
        && this->selectedUserNum_ != nullptr; };
    // addNum Field Functions 
    bool hasAddNum() const { return this->addNum_ != nullptr;};
    void deleteAddNum() { this->addNum_ = nullptr;};
    inline int32_t addNum() const { DARABONBA_PTR_GET_DEFAULT(addNum_, 0) };
    inline AddInvoiceEntityResponseBodyModule& setAddNum(int32_t addNum) { DARABONBA_PTR_SET_VALUE(addNum_, addNum) };


    // selectedUserNum Field Functions 
    bool hasSelectedUserNum() const { return this->selectedUserNum_ != nullptr;};
    void deleteSelectedUserNum() { this->selectedUserNum_ = nullptr;};
    inline int32_t selectedUserNum() const { DARABONBA_PTR_GET_DEFAULT(selectedUserNum_, 0) };
    inline AddInvoiceEntityResponseBodyModule& setSelectedUserNum(int32_t selectedUserNum) { DARABONBA_PTR_SET_VALUE(selectedUserNum_, selectedUserNum) };


  protected:
    std::shared_ptr<int32_t> addNum_ = nullptr;
    std::shared_ptr<int32_t> selectedUserNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
