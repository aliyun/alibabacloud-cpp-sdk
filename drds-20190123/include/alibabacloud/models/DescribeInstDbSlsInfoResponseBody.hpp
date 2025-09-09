// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTDBSLSINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTDBSLSINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstDbSlsInfoResponseBodyAuditInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeInstDbSlsInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstDbSlsInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuditInfo, auditInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstDbSlsInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuditInfo, auditInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeInstDbSlsInfoResponseBody() = default ;
    DescribeInstDbSlsInfoResponseBody(const DescribeInstDbSlsInfoResponseBody &) = default ;
    DescribeInstDbSlsInfoResponseBody(DescribeInstDbSlsInfoResponseBody &&) = default ;
    DescribeInstDbSlsInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstDbSlsInfoResponseBody() = default ;
    DescribeInstDbSlsInfoResponseBody& operator=(const DescribeInstDbSlsInfoResponseBody &) = default ;
    DescribeInstDbSlsInfoResponseBody& operator=(DescribeInstDbSlsInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->auditInfo_ != nullptr
        && this->requestId_ != nullptr && this->success_ != nullptr; };
    // auditInfo Field Functions 
    bool hasAuditInfo() const { return this->auditInfo_ != nullptr;};
    void deleteAuditInfo() { this->auditInfo_ = nullptr;};
    inline const DescribeInstDbSlsInfoResponseBodyAuditInfo & auditInfo() const { DARABONBA_PTR_GET_CONST(auditInfo_, DescribeInstDbSlsInfoResponseBodyAuditInfo) };
    inline DescribeInstDbSlsInfoResponseBodyAuditInfo auditInfo() { DARABONBA_PTR_GET(auditInfo_, DescribeInstDbSlsInfoResponseBodyAuditInfo) };
    inline DescribeInstDbSlsInfoResponseBody& setAuditInfo(const DescribeInstDbSlsInfoResponseBodyAuditInfo & auditInfo) { DARABONBA_PTR_SET_VALUE(auditInfo_, auditInfo) };
    inline DescribeInstDbSlsInfoResponseBody& setAuditInfo(DescribeInstDbSlsInfoResponseBodyAuditInfo && auditInfo) { DARABONBA_PTR_SET_RVALUE(auditInfo_, auditInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstDbSlsInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeInstDbSlsInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details of the SQL audit.
    std::shared_ptr<DescribeInstDbSlsInfoResponseBodyAuditInfo> auditInfo_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
