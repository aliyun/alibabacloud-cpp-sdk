// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATABASERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATABASERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class CreateDatabaseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDatabaseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseId, databaseId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDatabaseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseId, databaseId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateDatabaseResponseBody() = default ;
    CreateDatabaseResponseBody(const CreateDatabaseResponseBody &) = default ;
    CreateDatabaseResponseBody(CreateDatabaseResponseBody &&) = default ;
    CreateDatabaseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDatabaseResponseBody() = default ;
    CreateDatabaseResponseBody& operator=(const CreateDatabaseResponseBody &) = default ;
    CreateDatabaseResponseBody& operator=(CreateDatabaseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->databaseId_ == nullptr
        && this->requestId_ == nullptr; };
    // databaseId Field Functions 
    bool hasDatabaseId() const { return this->databaseId_ != nullptr;};
    void deleteDatabaseId() { this->databaseId_ = nullptr;};
    inline string getDatabaseId() const { DARABONBA_PTR_GET_DEFAULT(databaseId_, "") };
    inline CreateDatabaseResponseBody& setDatabaseId(string databaseId) { DARABONBA_PTR_SET_VALUE(databaseId_, databaseId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDatabaseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The database ID.
    shared_ptr<string> databaseId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
