// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGSTOREEXISTSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGSTOREEXISTSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeLogStoreExistStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogStoreExistStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExistStatus, existStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogStoreExistStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExistStatus, existStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLogStoreExistStatusResponseBody() = default ;
    DescribeLogStoreExistStatusResponseBody(const DescribeLogStoreExistStatusResponseBody &) = default ;
    DescribeLogStoreExistStatusResponseBody(DescribeLogStoreExistStatusResponseBody &&) = default ;
    DescribeLogStoreExistStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogStoreExistStatusResponseBody() = default ;
    DescribeLogStoreExistStatusResponseBody& operator=(const DescribeLogStoreExistStatusResponseBody &) = default ;
    DescribeLogStoreExistStatusResponseBody& operator=(DescribeLogStoreExistStatusResponseBody &&) = default ;
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
    inline DescribeLogStoreExistStatusResponseBody& setExistStatus(bool existStatus) { DARABONBA_PTR_SET_VALUE(existStatus_, existStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLogStoreExistStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether a Logstore is created for Anti-DDoS Pro or Anti-DDoS Premium. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> existStatus_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
