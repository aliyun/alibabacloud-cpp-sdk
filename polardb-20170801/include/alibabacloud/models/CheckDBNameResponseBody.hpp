// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKDBNAMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKDBNAMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CheckDBNameResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckDBNameResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBName, DBName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckDBNameResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBName, DBName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CheckDBNameResponseBody() = default ;
    CheckDBNameResponseBody(const CheckDBNameResponseBody &) = default ;
    CheckDBNameResponseBody(CheckDBNameResponseBody &&) = default ;
    CheckDBNameResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckDBNameResponseBody() = default ;
    CheckDBNameResponseBody& operator=(const CheckDBNameResponseBody &) = default ;
    CheckDBNameResponseBody& operator=(CheckDBNameResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBName_ == nullptr
        && this->requestId_ == nullptr; };
    // DBName Field Functions 
    bool hasDBName() const { return this->DBName_ != nullptr;};
    void deleteDBName() { this->DBName_ = nullptr;};
    inline string getDBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
    inline CheckDBNameResponseBody& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckDBNameResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The name of the database.
    shared_ptr<string> DBName_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
