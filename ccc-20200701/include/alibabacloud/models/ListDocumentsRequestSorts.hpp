// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCUMENTSREQUESTSORTS_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCUMENTSREQUESTSORTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListDocumentsRequestSorts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDocumentsRequestSorts& obj) { 
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PropertyName, propertyName_);
    };
    friend void from_json(const Darabonba::Json& j, ListDocumentsRequestSorts& obj) { 
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PropertyName, propertyName_);
    };
    ListDocumentsRequestSorts() = default ;
    ListDocumentsRequestSorts(const ListDocumentsRequestSorts &) = default ;
    ListDocumentsRequestSorts(ListDocumentsRequestSorts &&) = default ;
    ListDocumentsRequestSorts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDocumentsRequestSorts() = default ;
    ListDocumentsRequestSorts& operator=(const ListDocumentsRequestSorts &) = default ;
    ListDocumentsRequestSorts& operator=(ListDocumentsRequestSorts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->order_ != nullptr
        && this->propertyName_ != nullptr; };
    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListDocumentsRequestSorts& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // propertyName Field Functions 
    bool hasPropertyName() const { return this->propertyName_ != nullptr;};
    void deletePropertyName() { this->propertyName_ = nullptr;};
    inline string propertyName() const { DARABONBA_PTR_GET_DEFAULT(propertyName_, "") };
    inline ListDocumentsRequestSorts& setPropertyName(string propertyName) { DARABONBA_PTR_SET_VALUE(propertyName_, propertyName) };


  protected:
    std::shared_ptr<string> order_ = nullptr;
    std::shared_ptr<string> propertyName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
