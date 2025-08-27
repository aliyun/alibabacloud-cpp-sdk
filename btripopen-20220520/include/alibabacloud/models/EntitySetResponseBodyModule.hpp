// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTITYSETRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_ENTITYSETRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class EntitySetResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EntitySetResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(add_num, addNum_);
      DARABONBA_PTR_TO_JSON(remove_num, removeNum_);
      DARABONBA_PTR_TO_JSON(selected_user_num, selectedUserNum_);
    };
    friend void from_json(const Darabonba::Json& j, EntitySetResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(add_num, addNum_);
      DARABONBA_PTR_FROM_JSON(remove_num, removeNum_);
      DARABONBA_PTR_FROM_JSON(selected_user_num, selectedUserNum_);
    };
    EntitySetResponseBodyModule() = default ;
    EntitySetResponseBodyModule(const EntitySetResponseBodyModule &) = default ;
    EntitySetResponseBodyModule(EntitySetResponseBodyModule &&) = default ;
    EntitySetResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EntitySetResponseBodyModule() = default ;
    EntitySetResponseBodyModule& operator=(const EntitySetResponseBodyModule &) = default ;
    EntitySetResponseBodyModule& operator=(EntitySetResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addNum_ != nullptr
        && this->removeNum_ != nullptr && this->selectedUserNum_ != nullptr; };
    // addNum Field Functions 
    bool hasAddNum() const { return this->addNum_ != nullptr;};
    void deleteAddNum() { this->addNum_ = nullptr;};
    inline int32_t addNum() const { DARABONBA_PTR_GET_DEFAULT(addNum_, 0) };
    inline EntitySetResponseBodyModule& setAddNum(int32_t addNum) { DARABONBA_PTR_SET_VALUE(addNum_, addNum) };


    // removeNum Field Functions 
    bool hasRemoveNum() const { return this->removeNum_ != nullptr;};
    void deleteRemoveNum() { this->removeNum_ = nullptr;};
    inline int32_t removeNum() const { DARABONBA_PTR_GET_DEFAULT(removeNum_, 0) };
    inline EntitySetResponseBodyModule& setRemoveNum(int32_t removeNum) { DARABONBA_PTR_SET_VALUE(removeNum_, removeNum) };


    // selectedUserNum Field Functions 
    bool hasSelectedUserNum() const { return this->selectedUserNum_ != nullptr;};
    void deleteSelectedUserNum() { this->selectedUserNum_ = nullptr;};
    inline int32_t selectedUserNum() const { DARABONBA_PTR_GET_DEFAULT(selectedUserNum_, 0) };
    inline EntitySetResponseBodyModule& setSelectedUserNum(int32_t selectedUserNum) { DARABONBA_PTR_SET_VALUE(selectedUserNum_, selectedUserNum) };


  protected:
    std::shared_ptr<int32_t> addNum_ = nullptr;
    std::shared_ptr<int32_t> removeNum_ = nullptr;
    std::shared_ptr<int32_t> selectedUserNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
