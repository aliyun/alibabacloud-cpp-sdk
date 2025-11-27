// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RDSCUSTOMINITRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RDSCUSTOMINITRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class RdsCustomInitResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RdsCustomInitResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RegisterUidSuccess, registerUidSuccess_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RdsCustomInitResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RegisterUidSuccess, registerUidSuccess_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RdsCustomInitResponseBody() = default ;
    RdsCustomInitResponseBody(const RdsCustomInitResponseBody &) = default ;
    RdsCustomInitResponseBody(RdsCustomInitResponseBody &&) = default ;
    RdsCustomInitResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RdsCustomInitResponseBody() = default ;
    RdsCustomInitResponseBody& operator=(const RdsCustomInitResponseBody &) = default ;
    RdsCustomInitResponseBody& operator=(RdsCustomInitResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->registerUidSuccess_ == nullptr
        && return this->requestId_ == nullptr; };
    // registerUidSuccess Field Functions 
    bool hasRegisterUidSuccess() const { return this->registerUidSuccess_ != nullptr;};
    void deleteRegisterUidSuccess() { this->registerUidSuccess_ = nullptr;};
    inline bool registerUidSuccess() const { DARABONBA_PTR_GET_DEFAULT(registerUidSuccess_, false) };
    inline RdsCustomInitResponseBody& setRegisterUidSuccess(bool registerUidSuccess) { DARABONBA_PTR_SET_VALUE(registerUidSuccess_, registerUidSuccess) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RdsCustomInitResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<bool> registerUidSuccess_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
