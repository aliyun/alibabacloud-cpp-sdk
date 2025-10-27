// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROPERTYUSERITEMRESPONSEBODYPROPERTYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROPERTYUSERITEMRESPONSEBODYPROPERTYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribePropertyUserItemResponseBodyPropertyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePropertyUserItemResponseBodyPropertyItems& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePropertyUserItemResponseBodyPropertyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    DescribePropertyUserItemResponseBodyPropertyItems() = default ;
    DescribePropertyUserItemResponseBodyPropertyItems(const DescribePropertyUserItemResponseBodyPropertyItems &) = default ;
    DescribePropertyUserItemResponseBodyPropertyItems(DescribePropertyUserItemResponseBodyPropertyItems &&) = default ;
    DescribePropertyUserItemResponseBodyPropertyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePropertyUserItemResponseBodyPropertyItems() = default ;
    DescribePropertyUserItemResponseBodyPropertyItems& operator=(const DescribePropertyUserItemResponseBodyPropertyItems &) = default ;
    DescribePropertyUserItemResponseBodyPropertyItems& operator=(DescribePropertyUserItemResponseBodyPropertyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->user_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribePropertyUserItemResponseBodyPropertyItems& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline DescribePropertyUserItemResponseBodyPropertyItems& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    // The number of servers that belong to the account.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The name of the account.
    std::shared_ptr<string> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
