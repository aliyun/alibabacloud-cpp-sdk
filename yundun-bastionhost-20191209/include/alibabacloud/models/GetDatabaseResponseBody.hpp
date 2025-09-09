// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATABASERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATABASERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDatabaseResponseBodyDatabase.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetDatabaseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDatabaseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Database, database_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDatabaseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Database, database_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDatabaseResponseBody() = default ;
    GetDatabaseResponseBody(const GetDatabaseResponseBody &) = default ;
    GetDatabaseResponseBody(GetDatabaseResponseBody &&) = default ;
    GetDatabaseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDatabaseResponseBody() = default ;
    GetDatabaseResponseBody& operator=(const GetDatabaseResponseBody &) = default ;
    GetDatabaseResponseBody& operator=(GetDatabaseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->database_ != nullptr
        && this->requestId_ != nullptr; };
    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline const GetDatabaseResponseBodyDatabase & database() const { DARABONBA_PTR_GET_CONST(database_, GetDatabaseResponseBodyDatabase) };
    inline GetDatabaseResponseBodyDatabase database() { DARABONBA_PTR_GET(database_, GetDatabaseResponseBodyDatabase) };
    inline GetDatabaseResponseBody& setDatabase(const GetDatabaseResponseBodyDatabase & database) { DARABONBA_PTR_SET_VALUE(database_, database) };
    inline GetDatabaseResponseBody& setDatabase(GetDatabaseResponseBodyDatabase && database) { DARABONBA_PTR_SET_RVALUE(database_, database) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDatabaseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned detailed information about the database.
    std::shared_ptr<GetDatabaseResponseBodyDatabase> database_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
