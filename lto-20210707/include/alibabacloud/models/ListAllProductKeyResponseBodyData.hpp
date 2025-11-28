// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALLPRODUCTKEYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTALLPRODUCTKEYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class ListAllProductKeyResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAllProductKeyResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProductKey, productKey_);
    };
    friend void from_json(const Darabonba::Json& j, ListAllProductKeyResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProductKey, productKey_);
    };
    ListAllProductKeyResponseBodyData() = default ;
    ListAllProductKeyResponseBodyData(const ListAllProductKeyResponseBodyData &) = default ;
    ListAllProductKeyResponseBodyData(ListAllProductKeyResponseBodyData &&) = default ;
    ListAllProductKeyResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAllProductKeyResponseBodyData() = default ;
    ListAllProductKeyResponseBodyData& operator=(const ListAllProductKeyResponseBodyData &) = default ;
    ListAllProductKeyResponseBodyData& operator=(ListAllProductKeyResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->productKey_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListAllProductKeyResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // productKey Field Functions 
    bool hasProductKey() const { return this->productKey_ != nullptr;};
    void deleteProductKey() { this->productKey_ = nullptr;};
    inline string productKey() const { DARABONBA_PTR_GET_DEFAULT(productKey_, "") };
    inline ListAllProductKeyResponseBodyData& setProductKey(string productKey) { DARABONBA_PTR_SET_VALUE(productKey_, productKey) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> productKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
