// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOTHESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOTHESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace XrEngine20221111
{
namespace Models
{
  class ListClothesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClothesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Categories, categoriesShrink_);
      DARABONBA_PTR_TO_JSON(ClothSize, clothSize_);
      DARABONBA_PTR_TO_JSON(Current, current_);
      DARABONBA_PTR_TO_JSON(JwtToken, jwtToken_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListClothesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Categories, categoriesShrink_);
      DARABONBA_PTR_FROM_JSON(ClothSize, clothSize_);
      DARABONBA_PTR_FROM_JSON(Current, current_);
      DARABONBA_PTR_FROM_JSON(JwtToken, jwtToken_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListClothesShrinkRequest() = default ;
    ListClothesShrinkRequest(const ListClothesShrinkRequest &) = default ;
    ListClothesShrinkRequest(ListClothesShrinkRequest &&) = default ;
    ListClothesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClothesShrinkRequest() = default ;
    ListClothesShrinkRequest& operator=(const ListClothesShrinkRequest &) = default ;
    ListClothesShrinkRequest& operator=(ListClothesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoriesShrink_ == nullptr
        && this->clothSize_ == nullptr && this->current_ == nullptr && this->jwtToken_ == nullptr && this->name_ == nullptr && this->size_ == nullptr
        && this->type_ == nullptr; };
    // categoriesShrink Field Functions 
    bool hasCategoriesShrink() const { return this->categoriesShrink_ != nullptr;};
    void deleteCategoriesShrink() { this->categoriesShrink_ = nullptr;};
    inline string getCategoriesShrink() const { DARABONBA_PTR_GET_DEFAULT(categoriesShrink_, "") };
    inline ListClothesShrinkRequest& setCategoriesShrink(string categoriesShrink) { DARABONBA_PTR_SET_VALUE(categoriesShrink_, categoriesShrink) };


    // clothSize Field Functions 
    bool hasClothSize() const { return this->clothSize_ != nullptr;};
    void deleteClothSize() { this->clothSize_ = nullptr;};
    inline string getClothSize() const { DARABONBA_PTR_GET_DEFAULT(clothSize_, "") };
    inline ListClothesShrinkRequest& setClothSize(string clothSize) { DARABONBA_PTR_SET_VALUE(clothSize_, clothSize) };


    // current Field Functions 
    bool hasCurrent() const { return this->current_ != nullptr;};
    void deleteCurrent() { this->current_ = nullptr;};
    inline int32_t getCurrent() const { DARABONBA_PTR_GET_DEFAULT(current_, 0) };
    inline ListClothesShrinkRequest& setCurrent(int32_t current) { DARABONBA_PTR_SET_VALUE(current_, current) };


    // jwtToken Field Functions 
    bool hasJwtToken() const { return this->jwtToken_ != nullptr;};
    void deleteJwtToken() { this->jwtToken_ = nullptr;};
    inline string getJwtToken() const { DARABONBA_PTR_GET_DEFAULT(jwtToken_, "") };
    inline ListClothesShrinkRequest& setJwtToken(string jwtToken) { DARABONBA_PTR_SET_VALUE(jwtToken_, jwtToken) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListClothesShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ListClothesShrinkRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListClothesShrinkRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> categoriesShrink_ {};
    shared_ptr<string> clothSize_ {};
    shared_ptr<int32_t> current_ {};
    shared_ptr<string> jwtToken_ {};
    shared_ptr<string> name_ {};
    shared_ptr<int32_t> size_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace XrEngine20221111
#endif
