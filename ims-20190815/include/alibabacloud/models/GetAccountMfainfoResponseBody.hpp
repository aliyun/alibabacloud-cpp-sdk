// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCOUNTMFAINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETACCOUNTMFAINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetAccountMFAInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccountMFAInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IsMFAEnable, isMFAEnable_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccountMFAInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IsMFAEnable, isMFAEnable_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAccountMFAInfoResponseBody() = default ;
    GetAccountMFAInfoResponseBody(const GetAccountMFAInfoResponseBody &) = default ;
    GetAccountMFAInfoResponseBody(GetAccountMFAInfoResponseBody &&) = default ;
    GetAccountMFAInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccountMFAInfoResponseBody() = default ;
    GetAccountMFAInfoResponseBody& operator=(const GetAccountMFAInfoResponseBody &) = default ;
    GetAccountMFAInfoResponseBody& operator=(GetAccountMFAInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isMFAEnable_ != nullptr
        && this->requestId_ != nullptr; };
    // isMFAEnable Field Functions 
    bool hasIsMFAEnable() const { return this->isMFAEnable_ != nullptr;};
    void deleteIsMFAEnable() { this->isMFAEnable_ = nullptr;};
    inline bool isMFAEnable() const { DARABONBA_PTR_GET_DEFAULT(isMFAEnable_, false) };
    inline GetAccountMFAInfoResponseBody& setIsMFAEnable(bool isMFAEnable) { DARABONBA_PTR_SET_VALUE(isMFAEnable_, isMFAEnable) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAccountMFAInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether MFA devices are enabled. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> isMFAEnable_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
