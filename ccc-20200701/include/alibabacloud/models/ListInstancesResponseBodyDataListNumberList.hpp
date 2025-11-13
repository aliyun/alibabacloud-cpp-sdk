// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYDATALISTNUMBERLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYDATALISTNUMBERLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListInstancesResponseBodyDataListNumberList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesResponseBodyDataListNumberList& obj) { 
      DARABONBA_PTR_TO_JSON(Number, number_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesResponseBodyDataListNumberList& obj) { 
      DARABONBA_PTR_FROM_JSON(Number, number_);
    };
    ListInstancesResponseBodyDataListNumberList() = default ;
    ListInstancesResponseBodyDataListNumberList(const ListInstancesResponseBodyDataListNumberList &) = default ;
    ListInstancesResponseBodyDataListNumberList(ListInstancesResponseBodyDataListNumberList &&) = default ;
    ListInstancesResponseBodyDataListNumberList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesResponseBodyDataListNumberList() = default ;
    ListInstancesResponseBodyDataListNumberList& operator=(const ListInstancesResponseBodyDataListNumberList &) = default ;
    ListInstancesResponseBodyDataListNumberList& operator=(ListInstancesResponseBodyDataListNumberList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->number_ == nullptr; };
    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline string number() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
    inline ListInstancesResponseBodyDataListNumberList& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


  protected:
    std::shared_ptr<string> number_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
