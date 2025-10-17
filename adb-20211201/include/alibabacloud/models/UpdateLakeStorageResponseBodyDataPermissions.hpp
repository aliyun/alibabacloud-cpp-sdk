// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELAKESTORAGERESPONSEBODYDATAPERMISSIONS_HPP_
#define ALIBABACLOUD_MODELS_UPDATELAKESTORAGERESPONSEBODYDATAPERMISSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class UpdateLakeStorageResponseBodyDataPermissions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLakeStorageResponseBodyDataPermissions& obj) { 
      DARABONBA_PTR_TO_JSON(Account, account_);
      DARABONBA_PTR_TO_JSON(Read, read_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Write, write_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLakeStorageResponseBodyDataPermissions& obj) { 
      DARABONBA_PTR_FROM_JSON(Account, account_);
      DARABONBA_PTR_FROM_JSON(Read, read_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Write, write_);
    };
    UpdateLakeStorageResponseBodyDataPermissions() = default ;
    UpdateLakeStorageResponseBodyDataPermissions(const UpdateLakeStorageResponseBodyDataPermissions &) = default ;
    UpdateLakeStorageResponseBodyDataPermissions(UpdateLakeStorageResponseBodyDataPermissions &&) = default ;
    UpdateLakeStorageResponseBodyDataPermissions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLakeStorageResponseBodyDataPermissions() = default ;
    UpdateLakeStorageResponseBodyDataPermissions& operator=(const UpdateLakeStorageResponseBodyDataPermissions &) = default ;
    UpdateLakeStorageResponseBodyDataPermissions& operator=(UpdateLakeStorageResponseBodyDataPermissions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->account_ == nullptr
        && return this->read_ == nullptr && return this->type_ == nullptr && return this->write_ == nullptr; };
    // account Field Functions 
    bool hasAccount() const { return this->account_ != nullptr;};
    void deleteAccount() { this->account_ = nullptr;};
    inline string account() const { DARABONBA_PTR_GET_DEFAULT(account_, "") };
    inline UpdateLakeStorageResponseBodyDataPermissions& setAccount(string account) { DARABONBA_PTR_SET_VALUE(account_, account) };


    // read Field Functions 
    bool hasRead() const { return this->read_ != nullptr;};
    void deleteRead() { this->read_ = nullptr;};
    inline bool read() const { DARABONBA_PTR_GET_DEFAULT(read_, false) };
    inline UpdateLakeStorageResponseBodyDataPermissions& setRead(bool read) { DARABONBA_PTR_SET_VALUE(read_, read) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateLakeStorageResponseBodyDataPermissions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // write Field Functions 
    bool hasWrite() const { return this->write_ != nullptr;};
    void deleteWrite() { this->write_ = nullptr;};
    inline bool write() const { DARABONBA_PTR_GET_DEFAULT(write_, false) };
    inline UpdateLakeStorageResponseBodyDataPermissions& setWrite(bool write) { DARABONBA_PTR_SET_VALUE(write_, write) };


  protected:
    // The account ID.
    std::shared_ptr<string> account_ = nullptr;
    // The read permissions.
    std::shared_ptr<bool> read_ = nullptr;
    // The account type.
    std::shared_ptr<string> type_ = nullptr;
    // The write permissions.
    std::shared_ptr<bool> write_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
