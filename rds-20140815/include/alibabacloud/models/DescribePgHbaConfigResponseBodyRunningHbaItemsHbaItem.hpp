// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPGHBACONFIGRESPONSEBODYRUNNINGHBAITEMSHBAITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPGHBACONFIGRESPONSEBODYRUNNINGHBAITEMSHBAITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribePGHbaConfigResponseBodyRunningHbaItemsHbaItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePGHbaConfigResponseBodyRunningHbaItemsHbaItem& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(Database, database_);
      DARABONBA_PTR_TO_JSON(Mask, mask_);
      DARABONBA_PTR_TO_JSON(Method, method_);
      DARABONBA_PTR_TO_JSON(Option, option_);
      DARABONBA_PTR_TO_JSON(PriorityId, priorityId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePGHbaConfigResponseBodyRunningHbaItemsHbaItem& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(Database, database_);
      DARABONBA_PTR_FROM_JSON(Mask, mask_);
      DARABONBA_PTR_FROM_JSON(Method, method_);
      DARABONBA_PTR_FROM_JSON(Option, option_);
      DARABONBA_PTR_FROM_JSON(PriorityId, priorityId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    DescribePGHbaConfigResponseBodyRunningHbaItemsHbaItem() = default ;
    DescribePGHbaConfigResponseBodyRunningHbaItemsHbaItem(const DescribePGHbaConfigResponseBodyRunningHbaItemsHbaItem &) = default ;
    DescribePGHbaConfigResponseBodyRunningHbaItemsHbaItem(DescribePGHbaConfigResponseBodyRunningHbaItemsHbaItem &&) = default ;
    DescribePGHbaConfigResponseBodyRunningHbaItemsHbaItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePGHbaConfigResponseBodyRunningHbaItemsHbaItem() = default ;
    DescribePGHbaConfigResponseBodyRunningHbaItemsHbaItem& operator=(const DescribePGHbaConfigResponseBodyRunningHbaItemsHbaItem &) = default ;
    DescribePGHbaConfigResponseBodyRunningHbaItemsHbaItem& operator=(DescribePGHbaConfigResponseBodyRunningHbaItemsHbaItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && return this->database_ == nullptr && return this->mask_ == nullptr && return this->method_ == nullptr && return this->option_ == nullptr && return this->priorityId_ == nullptr
        && return this->type_ == nullptr && return this->user_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline DescribePGHbaConfigResponseBodyRunningHbaItemsHbaItem& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string database() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline DescribePGHbaConfigResponseBodyRunningHbaItemsHbaItem& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // mask Field Functions 
    bool hasMask() const { return this->mask_ != nullptr;};
    void deleteMask() { this->mask_ = nullptr;};
    inline string mask() const { DARABONBA_PTR_GET_DEFAULT(mask_, "") };
    inline DescribePGHbaConfigResponseBodyRunningHbaItemsHbaItem& setMask(string mask) { DARABONBA_PTR_SET_VALUE(mask_, mask) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string method() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline DescribePGHbaConfigResponseBodyRunningHbaItemsHbaItem& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // option Field Functions 
    bool hasOption() const { return this->option_ != nullptr;};
    void deleteOption() { this->option_ = nullptr;};
    inline string option() const { DARABONBA_PTR_GET_DEFAULT(option_, "") };
    inline DescribePGHbaConfigResponseBodyRunningHbaItemsHbaItem& setOption(string option) { DARABONBA_PTR_SET_VALUE(option_, option) };


    // priorityId Field Functions 
    bool hasPriorityId() const { return this->priorityId_ != nullptr;};
    void deletePriorityId() { this->priorityId_ = nullptr;};
    inline int32_t priorityId() const { DARABONBA_PTR_GET_DEFAULT(priorityId_, 0) };
    inline DescribePGHbaConfigResponseBodyRunningHbaItemsHbaItem& setPriorityId(int32_t priorityId) { DARABONBA_PTR_SET_VALUE(priorityId_, priorityId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribePGHbaConfigResponseBodyRunningHbaItemsHbaItem& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline DescribePGHbaConfigResponseBodyRunningHbaItemsHbaItem& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    // The IP address of the client.
    std::shared_ptr<string> address_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> database_ = nullptr;
    // The mask of the IP address.
    std::shared_ptr<string> mask_ = nullptr;
    // The authentication method.
    std::shared_ptr<string> method_ = nullptr;
    // The value of this parameter varies based on the value of the Method parameter. The value is fixed as null.
    std::shared_ptr<string> option_ = nullptr;
    // The priority.
    std::shared_ptr<int32_t> priorityId_ = nullptr;
    // The connection type. Valor:
    // 
    // *   **host**: The record matches TCP/IP connections, including SSL connections and non-SSL connections.
    // *   **hostssl**: The record matches only TCP/IP connections that are established over SSL.
    // *   **hostnossl**: The record matches only TCP/IP connections that are not established over SSL connections.
    std::shared_ptr<string> type_ = nullptr;
    // The username of the account.
    std::shared_ptr<string> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
