// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEFAULTKMSINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDEFAULTKMSINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class GetDefaultKmsInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDefaultKmsInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultKmsInstanceId, defaultKmsInstanceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDefaultKmsInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultKmsInstanceId, defaultKmsInstanceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDefaultKmsInstanceResponseBody() = default ;
    GetDefaultKmsInstanceResponseBody(const GetDefaultKmsInstanceResponseBody &) = default ;
    GetDefaultKmsInstanceResponseBody(GetDefaultKmsInstanceResponseBody &&) = default ;
    GetDefaultKmsInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDefaultKmsInstanceResponseBody() = default ;
    GetDefaultKmsInstanceResponseBody& operator=(const GetDefaultKmsInstanceResponseBody &) = default ;
    GetDefaultKmsInstanceResponseBody& operator=(GetDefaultKmsInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultKmsInstanceId_ == nullptr
        && return this->requestId_ == nullptr; };
    // defaultKmsInstanceId Field Functions 
    bool hasDefaultKmsInstanceId() const { return this->defaultKmsInstanceId_ != nullptr;};
    void deleteDefaultKmsInstanceId() { this->defaultKmsInstanceId_ = nullptr;};
    inline string defaultKmsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(defaultKmsInstanceId_, "") };
    inline GetDefaultKmsInstanceResponseBody& setDefaultKmsInstanceId(string defaultKmsInstanceId) { DARABONBA_PTR_SET_VALUE(defaultKmsInstanceId_, defaultKmsInstanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDefaultKmsInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> defaultKmsInstanceId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
