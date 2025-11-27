// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeADInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeADInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ADDNS, ADDNS_);
      DARABONBA_PTR_TO_JSON(ADServerIpAddress, ADServerIpAddress_);
      DARABONBA_PTR_TO_JSON(ADStatus, ADStatus_);
      DARABONBA_PTR_TO_JSON(AbnormalReason, abnormalReason_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeADInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ADDNS, ADDNS_);
      DARABONBA_PTR_FROM_JSON(ADServerIpAddress, ADServerIpAddress_);
      DARABONBA_PTR_FROM_JSON(ADStatus, ADStatus_);
      DARABONBA_PTR_FROM_JSON(AbnormalReason, abnormalReason_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    DescribeADInfoResponseBody() = default ;
    DescribeADInfoResponseBody(const DescribeADInfoResponseBody &) = default ;
    DescribeADInfoResponseBody(DescribeADInfoResponseBody &&) = default ;
    DescribeADInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeADInfoResponseBody() = default ;
    DescribeADInfoResponseBody& operator=(const DescribeADInfoResponseBody &) = default ;
    DescribeADInfoResponseBody& operator=(DescribeADInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ADDNS_ == nullptr
        && return this->ADServerIpAddress_ == nullptr && return this->ADStatus_ == nullptr && return this->abnormalReason_ == nullptr && return this->requestId_ == nullptr && return this->userName_ == nullptr; };
    // ADDNS Field Functions 
    bool hasADDNS() const { return this->ADDNS_ != nullptr;};
    void deleteADDNS() { this->ADDNS_ = nullptr;};
    inline string ADDNS() const { DARABONBA_PTR_GET_DEFAULT(ADDNS_, "") };
    inline DescribeADInfoResponseBody& setADDNS(string ADDNS) { DARABONBA_PTR_SET_VALUE(ADDNS_, ADDNS) };


    // ADServerIpAddress Field Functions 
    bool hasADServerIpAddress() const { return this->ADServerIpAddress_ != nullptr;};
    void deleteADServerIpAddress() { this->ADServerIpAddress_ = nullptr;};
    inline string ADServerIpAddress() const { DARABONBA_PTR_GET_DEFAULT(ADServerIpAddress_, "") };
    inline DescribeADInfoResponseBody& setADServerIpAddress(string ADServerIpAddress) { DARABONBA_PTR_SET_VALUE(ADServerIpAddress_, ADServerIpAddress) };


    // ADStatus Field Functions 
    bool hasADStatus() const { return this->ADStatus_ != nullptr;};
    void deleteADStatus() { this->ADStatus_ = nullptr;};
    inline string ADStatus() const { DARABONBA_PTR_GET_DEFAULT(ADStatus_, "") };
    inline DescribeADInfoResponseBody& setADStatus(string ADStatus) { DARABONBA_PTR_SET_VALUE(ADStatus_, ADStatus) };


    // abnormalReason Field Functions 
    bool hasAbnormalReason() const { return this->abnormalReason_ != nullptr;};
    void deleteAbnormalReason() { this->abnormalReason_ = nullptr;};
    inline string abnormalReason() const { DARABONBA_PTR_GET_DEFAULT(abnormalReason_, "") };
    inline DescribeADInfoResponseBody& setAbnormalReason(string abnormalReason) { DARABONBA_PTR_SET_VALUE(abnormalReason_, abnormalReason) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeADInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline DescribeADInfoResponseBody& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The DNS information about the AD domain.
    std::shared_ptr<string> ADDNS_ = nullptr;
    // The service IP address of the AD domain.
    std::shared_ptr<string> ADServerIpAddress_ = nullptr;
    // The status of the AD domain. Valid values:
    // 
    // *   **-1**: The instance is being added to the AD domain.
    // *   **0**: The instance fails to be added to the AD domain.
    // *   **1**: The instance is added to the AD domain.
    std::shared_ptr<string> ADStatus_ = nullptr;
    // The cause of the error.
    std::shared_ptr<string> abnormalReason_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The username of the AD domain.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
