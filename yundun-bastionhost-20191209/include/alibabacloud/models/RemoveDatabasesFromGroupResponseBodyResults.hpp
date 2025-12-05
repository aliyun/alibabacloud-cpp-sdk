// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEDATABASESFROMGROUPRESPONSEBODYRESULTS_HPP_
#define ALIBABACLOUD_MODELS_REMOVEDATABASESFROMGROUPRESPONSEBODYRESULTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class RemoveDatabasesFromGroupResponseBodyResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveDatabasesFromGroupResponseBodyResults& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DatabaseId, databaseId_);
      DARABONBA_PTR_TO_JSON(HostGroupId, hostGroupId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveDatabasesFromGroupResponseBodyResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DatabaseId, databaseId_);
      DARABONBA_PTR_FROM_JSON(HostGroupId, hostGroupId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
    };
    RemoveDatabasesFromGroupResponseBodyResults() = default ;
    RemoveDatabasesFromGroupResponseBodyResults(const RemoveDatabasesFromGroupResponseBodyResults &) = default ;
    RemoveDatabasesFromGroupResponseBodyResults(RemoveDatabasesFromGroupResponseBodyResults &&) = default ;
    RemoveDatabasesFromGroupResponseBodyResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveDatabasesFromGroupResponseBodyResults() = default ;
    RemoveDatabasesFromGroupResponseBodyResults& operator=(const RemoveDatabasesFromGroupResponseBodyResults &) = default ;
    RemoveDatabasesFromGroupResponseBodyResults& operator=(RemoveDatabasesFromGroupResponseBodyResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->databaseId_ == nullptr && return this->hostGroupId_ == nullptr && return this->message_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline RemoveDatabasesFromGroupResponseBodyResults& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // databaseId Field Functions 
    bool hasDatabaseId() const { return this->databaseId_ != nullptr;};
    void deleteDatabaseId() { this->databaseId_ = nullptr;};
    inline string databaseId() const { DARABONBA_PTR_GET_DEFAULT(databaseId_, "") };
    inline RemoveDatabasesFromGroupResponseBodyResults& setDatabaseId(string databaseId) { DARABONBA_PTR_SET_VALUE(databaseId_, databaseId) };


    // hostGroupId Field Functions 
    bool hasHostGroupId() const { return this->hostGroupId_ != nullptr;};
    void deleteHostGroupId() { this->hostGroupId_ = nullptr;};
    inline string hostGroupId() const { DARABONBA_PTR_GET_DEFAULT(hostGroupId_, "") };
    inline RemoveDatabasesFromGroupResponseBodyResults& setHostGroupId(string hostGroupId) { DARABONBA_PTR_SET_VALUE(hostGroupId_, hostGroupId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline RemoveDatabasesFromGroupResponseBodyResults& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    // The error code that is returned. If OK is returned, the operation was successful. If another error code is returned, the operation failed.
    std::shared_ptr<string> code_ = nullptr;
    // The database ID.
    std::shared_ptr<string> databaseId_ = nullptr;
    // The asset group ID.
    std::shared_ptr<string> hostGroupId_ = nullptr;
    // The error message that is returned.
    std::shared_ptr<string> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
