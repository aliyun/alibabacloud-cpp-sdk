// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTITYADDRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_ENTITYADDRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class EntityAddResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EntityAddResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(add_num, addNum_);
      DARABONBA_PTR_TO_JSON(selected_user_num, selectedUserNum_);
    };
    friend void from_json(const Darabonba::Json& j, EntityAddResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(add_num, addNum_);
      DARABONBA_PTR_FROM_JSON(selected_user_num, selectedUserNum_);
    };
    EntityAddResponseBodyModule() = default ;
    EntityAddResponseBodyModule(const EntityAddResponseBodyModule &) = default ;
    EntityAddResponseBodyModule(EntityAddResponseBodyModule &&) = default ;
    EntityAddResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EntityAddResponseBodyModule() = default ;
    EntityAddResponseBodyModule& operator=(const EntityAddResponseBodyModule &) = default ;
    EntityAddResponseBodyModule& operator=(EntityAddResponseBodyModule &&) = default ;
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
    inline EntityAddResponseBodyModule& setAddNum(int32_t addNum) { DARABONBA_PTR_SET_VALUE(addNum_, addNum) };


    // selectedUserNum Field Functions 
    bool hasSelectedUserNum() const { return this->selectedUserNum_ != nullptr;};
    void deleteSelectedUserNum() { this->selectedUserNum_ = nullptr;};
    inline int32_t selectedUserNum() const { DARABONBA_PTR_GET_DEFAULT(selectedUserNum_, 0) };
    inline EntityAddResponseBodyModule& setSelectedUserNum(int32_t selectedUserNum) { DARABONBA_PTR_SET_VALUE(selectedUserNum_, selectedUserNum) };


  protected:
    std::shared_ptr<int32_t> addNum_ = nullptr;
    std::shared_ptr<int32_t> selectedUserNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
