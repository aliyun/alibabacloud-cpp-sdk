// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELFILESETQUOTARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CANCELFILESETQUOTARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class CancelFilesetQuotaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelFilesetQuotaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelFilesetQuotaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CancelFilesetQuotaResponseBody() = default ;
    CancelFilesetQuotaResponseBody(const CancelFilesetQuotaResponseBody &) = default ;
    CancelFilesetQuotaResponseBody(CancelFilesetQuotaResponseBody &&) = default ;
    CancelFilesetQuotaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelFilesetQuotaResponseBody() = default ;
    CancelFilesetQuotaResponseBody& operator=(const CancelFilesetQuotaResponseBody &) = default ;
    CancelFilesetQuotaResponseBody& operator=(CancelFilesetQuotaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CancelFilesetQuotaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
