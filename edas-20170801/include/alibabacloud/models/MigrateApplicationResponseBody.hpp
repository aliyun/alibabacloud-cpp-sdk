// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGRATEAPPLICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MIGRATEAPPLICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class MigrateApplicationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MigrateApplicationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(data, data_);
    };
    friend void from_json(const Darabonba::Json& j, MigrateApplicationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(data, data_);
    };
    MigrateApplicationResponseBody() = default ;
    MigrateApplicationResponseBody(const MigrateApplicationResponseBody &) = default ;
    MigrateApplicationResponseBody(MigrateApplicationResponseBody &&) = default ;
    MigrateApplicationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MigrateApplicationResponseBody() = default ;
    MigrateApplicationResponseBody& operator=(const MigrateApplicationResponseBody &) = default ;
    MigrateApplicationResponseBody& operator=(MigrateApplicationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(migrationId, migrationId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(migrationId, migrationId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->migrationId_ == nullptr; };
      // migrationId Field Functions 
      bool hasMigrationId() const { return this->migrationId_ != nullptr;};
      void deleteMigrationId() { this->migrationId_ = nullptr;};
      inline string getMigrationId() const { DARABONBA_PTR_GET_DEFAULT(migrationId_, "") };
      inline Data& setMigrationId(string migrationId) { DARABONBA_PTR_SET_VALUE(migrationId_, migrationId) };


    protected:
      // The migration ID.
      shared_ptr<string> migrationId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->data_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline MigrateApplicationResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline MigrateApplicationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const MigrateApplicationResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, MigrateApplicationResponseBody::Data) };
    inline MigrateApplicationResponseBody::Data getData() { DARABONBA_PTR_GET(data_, MigrateApplicationResponseBody::Data) };
    inline MigrateApplicationResponseBody& setData(const MigrateApplicationResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline MigrateApplicationResponseBody& setData(MigrateApplicationResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    // The status code.
    shared_ptr<int32_t> code_ {};
    // The additional information.
    shared_ptr<string> message_ {};
    // The API information.
    shared_ptr<MigrateApplicationResponseBody::Data> data_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
