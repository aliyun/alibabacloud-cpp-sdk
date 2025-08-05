// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVAULTREPLICATIONREGIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVAULTREPLICATIONREGIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVaultReplicationRegionsResponseBodyRegions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeVaultReplicationRegionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVaultReplicationRegionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Regions, regions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVaultReplicationRegionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Regions, regions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeVaultReplicationRegionsResponseBody() = default ;
    DescribeVaultReplicationRegionsResponseBody(const DescribeVaultReplicationRegionsResponseBody &) = default ;
    DescribeVaultReplicationRegionsResponseBody(DescribeVaultReplicationRegionsResponseBody &&) = default ;
    DescribeVaultReplicationRegionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVaultReplicationRegionsResponseBody() = default ;
    DescribeVaultReplicationRegionsResponseBody& operator=(const DescribeVaultReplicationRegionsResponseBody &) = default ;
    DescribeVaultReplicationRegionsResponseBody& operator=(DescribeVaultReplicationRegionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->message_ != nullptr && this->regions_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeVaultReplicationRegionsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeVaultReplicationRegionsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // regions Field Functions 
    bool hasRegions() const { return this->regions_ != nullptr;};
    void deleteRegions() { this->regions_ = nullptr;};
    inline const DescribeVaultReplicationRegionsResponseBodyRegions & regions() const { DARABONBA_PTR_GET_CONST(regions_, DescribeVaultReplicationRegionsResponseBodyRegions) };
    inline DescribeVaultReplicationRegionsResponseBodyRegions regions() { DARABONBA_PTR_GET(regions_, DescribeVaultReplicationRegionsResponseBodyRegions) };
    inline DescribeVaultReplicationRegionsResponseBody& setRegions(const DescribeVaultReplicationRegionsResponseBodyRegions & regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };
    inline DescribeVaultReplicationRegionsResponseBody& setRegions(DescribeVaultReplicationRegionsResponseBodyRegions && regions) { DARABONBA_PTR_SET_RVALUE(regions_, regions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVaultReplicationRegionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeVaultReplicationRegionsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code. The status code 200 indicates that the call is successful.
    std::shared_ptr<string> code_ = nullptr;
    // The message that is returned. If the call is successful, "successful" is returned. If the call fails, an error message is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The regions that support cross-region replication.
    std::shared_ptr<DescribeVaultReplicationRegionsResponseBodyRegions> regions_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the call is successful.
    // 
    // *   true: The call is successful.
    // *   false: The call fails.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
