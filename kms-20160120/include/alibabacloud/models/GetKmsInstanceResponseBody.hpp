// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKMSINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETKMSINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetKmsInstanceResponseBodyKmsInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class GetKmsInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKmsInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(KmsInstance, kmsInstance_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetKmsInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(KmsInstance, kmsInstance_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetKmsInstanceResponseBody() = default ;
    GetKmsInstanceResponseBody(const GetKmsInstanceResponseBody &) = default ;
    GetKmsInstanceResponseBody(GetKmsInstanceResponseBody &&) = default ;
    GetKmsInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKmsInstanceResponseBody() = default ;
    GetKmsInstanceResponseBody& operator=(const GetKmsInstanceResponseBody &) = default ;
    GetKmsInstanceResponseBody& operator=(GetKmsInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->kmsInstance_ == nullptr
        && return this->requestId_ == nullptr; };
    // kmsInstance Field Functions 
    bool hasKmsInstance() const { return this->kmsInstance_ != nullptr;};
    void deleteKmsInstance() { this->kmsInstance_ = nullptr;};
    inline const GetKmsInstanceResponseBodyKmsInstance & kmsInstance() const { DARABONBA_PTR_GET_CONST(kmsInstance_, GetKmsInstanceResponseBodyKmsInstance) };
    inline GetKmsInstanceResponseBodyKmsInstance kmsInstance() { DARABONBA_PTR_GET(kmsInstance_, GetKmsInstanceResponseBodyKmsInstance) };
    inline GetKmsInstanceResponseBody& setKmsInstance(const GetKmsInstanceResponseBodyKmsInstance & kmsInstance) { DARABONBA_PTR_SET_VALUE(kmsInstance_, kmsInstance) };
    inline GetKmsInstanceResponseBody& setKmsInstance(GetKmsInstanceResponseBodyKmsInstance && kmsInstance) { DARABONBA_PTR_SET_RVALUE(kmsInstance_, kmsInstance) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetKmsInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the KMS instance.
    std::shared_ptr<GetKmsInstanceResponseBodyKmsInstance> kmsInstance_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
