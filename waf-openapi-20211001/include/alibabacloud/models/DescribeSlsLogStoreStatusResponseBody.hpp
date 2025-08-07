// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLSLOGSTORESTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLSLOGSTORESTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeSlsLogStoreStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlsLogStoreStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExistStatus, existStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlsLogStoreStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExistStatus, existStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeSlsLogStoreStatusResponseBody() = default ;
    DescribeSlsLogStoreStatusResponseBody(const DescribeSlsLogStoreStatusResponseBody &) = default ;
    DescribeSlsLogStoreStatusResponseBody(DescribeSlsLogStoreStatusResponseBody &&) = default ;
    DescribeSlsLogStoreStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlsLogStoreStatusResponseBody() = default ;
    DescribeSlsLogStoreStatusResponseBody& operator=(const DescribeSlsLogStoreStatusResponseBody &) = default ;
    DescribeSlsLogStoreStatusResponseBody& operator=(DescribeSlsLogStoreStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->existStatus_ != nullptr
        && this->requestId_ != nullptr; };
    // existStatus Field Functions 
    bool hasExistStatus() const { return this->existStatus_ != nullptr;};
    void deleteExistStatus() { this->existStatus_ = nullptr;};
    inline bool existStatus() const { DARABONBA_PTR_GET_DEFAULT(existStatus_, false) };
    inline DescribeSlsLogStoreStatusResponseBody& setExistStatus(bool existStatus) { DARABONBA_PTR_SET_VALUE(existStatus_, existStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSlsLogStoreStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether a Logstore is created for WAF. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> existStatus_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
