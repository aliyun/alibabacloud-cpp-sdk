// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKDBNAMEZONALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKDBNAMEZONALRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CheckDBNameZonalResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckDBNameZonalResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBName, DBName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckDBNameZonalResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBName, DBName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CheckDBNameZonalResponseBody() = default ;
    CheckDBNameZonalResponseBody(const CheckDBNameZonalResponseBody &) = default ;
    CheckDBNameZonalResponseBody(CheckDBNameZonalResponseBody &&) = default ;
    CheckDBNameZonalResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckDBNameZonalResponseBody() = default ;
    CheckDBNameZonalResponseBody& operator=(const CheckDBNameZonalResponseBody &) = default ;
    CheckDBNameZonalResponseBody& operator=(CheckDBNameZonalResponseBody &&) = default ;
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
    inline CheckDBNameZonalResponseBody& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckDBNameZonalResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> DBName_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
