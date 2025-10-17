// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKERNELVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKERNELVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeKernelVersionResponseBodyAvailableKernelVersions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeKernelVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKernelVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableKernelVersions, availableKernelVersions_);
      DARABONBA_PTR_TO_JSON(ExpireDate, expireDate_);
      DARABONBA_PTR_TO_JSON(KernelVersion, kernelVersion_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKernelVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableKernelVersions, availableKernelVersions_);
      DARABONBA_PTR_FROM_JSON(ExpireDate, expireDate_);
      DARABONBA_PTR_FROM_JSON(KernelVersion, kernelVersion_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeKernelVersionResponseBody() = default ;
    DescribeKernelVersionResponseBody(const DescribeKernelVersionResponseBody &) = default ;
    DescribeKernelVersionResponseBody(DescribeKernelVersionResponseBody &&) = default ;
    DescribeKernelVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKernelVersionResponseBody() = default ;
    DescribeKernelVersionResponseBody& operator=(const DescribeKernelVersionResponseBody &) = default ;
    DescribeKernelVersionResponseBody& operator=(DescribeKernelVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availableKernelVersions_ == nullptr
        && return this->expireDate_ == nullptr && return this->kernelVersion_ == nullptr && return this->requestId_ == nullptr; };
    // availableKernelVersions Field Functions 
    bool hasAvailableKernelVersions() const { return this->availableKernelVersions_ != nullptr;};
    void deleteAvailableKernelVersions() { this->availableKernelVersions_ = nullptr;};
    inline const vector<DescribeKernelVersionResponseBodyAvailableKernelVersions> & availableKernelVersions() const { DARABONBA_PTR_GET_CONST(availableKernelVersions_, vector<DescribeKernelVersionResponseBodyAvailableKernelVersions>) };
    inline vector<DescribeKernelVersionResponseBodyAvailableKernelVersions> availableKernelVersions() { DARABONBA_PTR_GET(availableKernelVersions_, vector<DescribeKernelVersionResponseBodyAvailableKernelVersions>) };
    inline DescribeKernelVersionResponseBody& setAvailableKernelVersions(const vector<DescribeKernelVersionResponseBodyAvailableKernelVersions> & availableKernelVersions) { DARABONBA_PTR_SET_VALUE(availableKernelVersions_, availableKernelVersions) };
    inline DescribeKernelVersionResponseBody& setAvailableKernelVersions(vector<DescribeKernelVersionResponseBodyAvailableKernelVersions> && availableKernelVersions) { DARABONBA_PTR_SET_RVALUE(availableKernelVersions_, availableKernelVersions) };


    // expireDate Field Functions 
    bool hasExpireDate() const { return this->expireDate_ != nullptr;};
    void deleteExpireDate() { this->expireDate_ = nullptr;};
    inline string expireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, "") };
    inline DescribeKernelVersionResponseBody& setExpireDate(string expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


    // kernelVersion Field Functions 
    bool hasKernelVersion() const { return this->kernelVersion_ != nullptr;};
    void deleteKernelVersion() { this->kernelVersion_ = nullptr;};
    inline string kernelVersion() const { DARABONBA_PTR_GET_DEFAULT(kernelVersion_, "") };
    inline DescribeKernelVersionResponseBody& setKernelVersion(string kernelVersion) { DARABONBA_PTR_SET_VALUE(kernelVersion_, kernelVersion) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeKernelVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The minor versions to which you can update the current minor version of the cluster.
    std::shared_ptr<vector<DescribeKernelVersionResponseBodyAvailableKernelVersions>> availableKernelVersions_ = nullptr;
    // The maintenance expiration time of the version. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC. After the time arrives, the system no longer maintains the version. If any issues occur, update the minor version of the cluster to a later version.
    std::shared_ptr<string> expireDate_ = nullptr;
    // The minor version of the cluster. Example: **3.1.8**.
    std::shared_ptr<string> kernelVersion_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
