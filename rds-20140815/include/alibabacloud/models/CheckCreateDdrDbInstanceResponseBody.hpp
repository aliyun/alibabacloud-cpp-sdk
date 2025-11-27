// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKCREATEDDRDBINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKCREATEDDRDBINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CheckCreateDdrDBInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckCreateDdrDBInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IsValid, isValid_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckCreateDdrDBInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IsValid, isValid_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CheckCreateDdrDBInstanceResponseBody() = default ;
    CheckCreateDdrDBInstanceResponseBody(const CheckCreateDdrDBInstanceResponseBody &) = default ;
    CheckCreateDdrDBInstanceResponseBody(CheckCreateDdrDBInstanceResponseBody &&) = default ;
    CheckCreateDdrDBInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckCreateDdrDBInstanceResponseBody() = default ;
    CheckCreateDdrDBInstanceResponseBody& operator=(const CheckCreateDdrDBInstanceResponseBody &) = default ;
    CheckCreateDdrDBInstanceResponseBody& operator=(CheckCreateDdrDBInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isValid_ == nullptr
        && return this->requestId_ == nullptr; };
    // isValid Field Functions 
    bool hasIsValid() const { return this->isValid_ != nullptr;};
    void deleteIsValid() { this->isValid_ = nullptr;};
    inline string isValid() const { DARABONBA_PTR_GET_DEFAULT(isValid_, "") };
    inline CheckCreateDdrDBInstanceResponseBody& setIsValid(string isValid) { DARABONBA_PTR_SET_VALUE(isValid_, isValid) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckCreateDdrDBInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether the data of the source instance can be restored across regions. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<string> isValid_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
