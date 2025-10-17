// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISKDEFAULTKMSKEYIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISKDEFAULTKMSKEYIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDiskDefaultKMSKeyIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiskDefaultKMSKeyIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(KMSKeyId, KMSKeyId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiskDefaultKMSKeyIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(KMSKeyId, KMSKeyId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDiskDefaultKMSKeyIdResponseBody() = default ;
    DescribeDiskDefaultKMSKeyIdResponseBody(const DescribeDiskDefaultKMSKeyIdResponseBody &) = default ;
    DescribeDiskDefaultKMSKeyIdResponseBody(DescribeDiskDefaultKMSKeyIdResponseBody &&) = default ;
    DescribeDiskDefaultKMSKeyIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiskDefaultKMSKeyIdResponseBody() = default ;
    DescribeDiskDefaultKMSKeyIdResponseBody& operator=(const DescribeDiskDefaultKMSKeyIdResponseBody &) = default ;
    DescribeDiskDefaultKMSKeyIdResponseBody& operator=(DescribeDiskDefaultKMSKeyIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->KMSKeyId_ == nullptr
        && return this->requestId_ == nullptr; };
    // KMSKeyId Field Functions 
    bool hasKMSKeyId() const { return this->KMSKeyId_ != nullptr;};
    void deleteKMSKeyId() { this->KMSKeyId_ = nullptr;};
    inline string KMSKeyId() const { DARABONBA_PTR_GET_DEFAULT(KMSKeyId_, "") };
    inline DescribeDiskDefaultKMSKeyIdResponseBody& setKMSKeyId(string KMSKeyId) { DARABONBA_PTR_SET_VALUE(KMSKeyId_, KMSKeyId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDiskDefaultKMSKeyIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the KMS key.
    std::shared_ptr<string> KMSKeyId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
