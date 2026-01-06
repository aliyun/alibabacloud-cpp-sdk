// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKERNELVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKERNELVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class AvailableKernelVersions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AvailableKernelVersions& obj) { 
        DARABONBA_PTR_TO_JSON(ExpireDate, expireDate_);
        DARABONBA_PTR_TO_JSON(KernelVersion, kernelVersion_);
        DARABONBA_PTR_TO_JSON(ReleaseDate, releaseDate_);
      };
      friend void from_json(const Darabonba::Json& j, AvailableKernelVersions& obj) { 
        DARABONBA_PTR_FROM_JSON(ExpireDate, expireDate_);
        DARABONBA_PTR_FROM_JSON(KernelVersion, kernelVersion_);
        DARABONBA_PTR_FROM_JSON(ReleaseDate, releaseDate_);
      };
      AvailableKernelVersions() = default ;
      AvailableKernelVersions(const AvailableKernelVersions &) = default ;
      AvailableKernelVersions(AvailableKernelVersions &&) = default ;
      AvailableKernelVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AvailableKernelVersions() = default ;
      AvailableKernelVersions& operator=(const AvailableKernelVersions &) = default ;
      AvailableKernelVersions& operator=(AvailableKernelVersions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->expireDate_ == nullptr
        && this->kernelVersion_ == nullptr && this->releaseDate_ == nullptr; };
      // expireDate Field Functions 
      bool hasExpireDate() const { return this->expireDate_ != nullptr;};
      void deleteExpireDate() { this->expireDate_ = nullptr;};
      inline string getExpireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, "") };
      inline AvailableKernelVersions& setExpireDate(string expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


      // kernelVersion Field Functions 
      bool hasKernelVersion() const { return this->kernelVersion_ != nullptr;};
      void deleteKernelVersion() { this->kernelVersion_ = nullptr;};
      inline string getKernelVersion() const { DARABONBA_PTR_GET_DEFAULT(kernelVersion_, "") };
      inline AvailableKernelVersions& setKernelVersion(string kernelVersion) { DARABONBA_PTR_SET_VALUE(kernelVersion_, kernelVersion) };


      // releaseDate Field Functions 
      bool hasReleaseDate() const { return this->releaseDate_ != nullptr;};
      void deleteReleaseDate() { this->releaseDate_ = nullptr;};
      inline string getReleaseDate() const { DARABONBA_PTR_GET_DEFAULT(releaseDate_, "") };
      inline AvailableKernelVersions& setReleaseDate(string releaseDate) { DARABONBA_PTR_SET_VALUE(releaseDate_, releaseDate) };


    protected:
      // The maintenance expiration time of the version. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC. After the time arrives, the system no longer maintains the version. If any issues occur, update the minor version of the cluster to a later version.
      shared_ptr<string> expireDate_ {};
      // The minor version. Example: **3.1.9**.
      shared_ptr<string> kernelVersion_ {};
      // The time when the minor version was released. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> releaseDate_ {};
    };

    virtual bool empty() const override { return this->availableKernelVersions_ == nullptr
        && this->expireDate_ == nullptr && this->kernelVersion_ == nullptr && this->requestId_ == nullptr; };
    // availableKernelVersions Field Functions 
    bool hasAvailableKernelVersions() const { return this->availableKernelVersions_ != nullptr;};
    void deleteAvailableKernelVersions() { this->availableKernelVersions_ = nullptr;};
    inline const vector<DescribeKernelVersionResponseBody::AvailableKernelVersions> & getAvailableKernelVersions() const { DARABONBA_PTR_GET_CONST(availableKernelVersions_, vector<DescribeKernelVersionResponseBody::AvailableKernelVersions>) };
    inline vector<DescribeKernelVersionResponseBody::AvailableKernelVersions> getAvailableKernelVersions() { DARABONBA_PTR_GET(availableKernelVersions_, vector<DescribeKernelVersionResponseBody::AvailableKernelVersions>) };
    inline DescribeKernelVersionResponseBody& setAvailableKernelVersions(const vector<DescribeKernelVersionResponseBody::AvailableKernelVersions> & availableKernelVersions) { DARABONBA_PTR_SET_VALUE(availableKernelVersions_, availableKernelVersions) };
    inline DescribeKernelVersionResponseBody& setAvailableKernelVersions(vector<DescribeKernelVersionResponseBody::AvailableKernelVersions> && availableKernelVersions) { DARABONBA_PTR_SET_RVALUE(availableKernelVersions_, availableKernelVersions) };


    // expireDate Field Functions 
    bool hasExpireDate() const { return this->expireDate_ != nullptr;};
    void deleteExpireDate() { this->expireDate_ = nullptr;};
    inline string getExpireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, "") };
    inline DescribeKernelVersionResponseBody& setExpireDate(string expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


    // kernelVersion Field Functions 
    bool hasKernelVersion() const { return this->kernelVersion_ != nullptr;};
    void deleteKernelVersion() { this->kernelVersion_ = nullptr;};
    inline string getKernelVersion() const { DARABONBA_PTR_GET_DEFAULT(kernelVersion_, "") };
    inline DescribeKernelVersionResponseBody& setKernelVersion(string kernelVersion) { DARABONBA_PTR_SET_VALUE(kernelVersion_, kernelVersion) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeKernelVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The minor versions to which you can update the current minor version of the cluster.
    shared_ptr<vector<DescribeKernelVersionResponseBody::AvailableKernelVersions>> availableKernelVersions_ {};
    // The maintenance expiration time of the version. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC. After the time arrives, the system no longer maintains the version. If any issues occur, update the minor version of the cluster to a later version.
    shared_ptr<string> expireDate_ {};
    // The minor version of the cluster. Example: **3.1.8**.
    shared_ptr<string> kernelVersion_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
