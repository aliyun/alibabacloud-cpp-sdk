// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKERNELVERSIONRESPONSEBODYAVAILABLEKERNELVERSIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKERNELVERSIONRESPONSEBODYAVAILABLEKERNELVERSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeKernelVersionResponseBodyAvailableKernelVersions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKernelVersionResponseBodyAvailableKernelVersions& obj) { 
      DARABONBA_PTR_TO_JSON(ExpireDate, expireDate_);
      DARABONBA_PTR_TO_JSON(KernelVersion, kernelVersion_);
      DARABONBA_PTR_TO_JSON(ReleaseDate, releaseDate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKernelVersionResponseBodyAvailableKernelVersions& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpireDate, expireDate_);
      DARABONBA_PTR_FROM_JSON(KernelVersion, kernelVersion_);
      DARABONBA_PTR_FROM_JSON(ReleaseDate, releaseDate_);
    };
    DescribeKernelVersionResponseBodyAvailableKernelVersions() = default ;
    DescribeKernelVersionResponseBodyAvailableKernelVersions(const DescribeKernelVersionResponseBodyAvailableKernelVersions &) = default ;
    DescribeKernelVersionResponseBodyAvailableKernelVersions(DescribeKernelVersionResponseBodyAvailableKernelVersions &&) = default ;
    DescribeKernelVersionResponseBodyAvailableKernelVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKernelVersionResponseBodyAvailableKernelVersions() = default ;
    DescribeKernelVersionResponseBodyAvailableKernelVersions& operator=(const DescribeKernelVersionResponseBodyAvailableKernelVersions &) = default ;
    DescribeKernelVersionResponseBodyAvailableKernelVersions& operator=(DescribeKernelVersionResponseBodyAvailableKernelVersions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->expireDate_ != nullptr
        && this->kernelVersion_ != nullptr && this->releaseDate_ != nullptr; };
    // expireDate Field Functions 
    bool hasExpireDate() const { return this->expireDate_ != nullptr;};
    void deleteExpireDate() { this->expireDate_ = nullptr;};
    inline string expireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, "") };
    inline DescribeKernelVersionResponseBodyAvailableKernelVersions& setExpireDate(string expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


    // kernelVersion Field Functions 
    bool hasKernelVersion() const { return this->kernelVersion_ != nullptr;};
    void deleteKernelVersion() { this->kernelVersion_ = nullptr;};
    inline string kernelVersion() const { DARABONBA_PTR_GET_DEFAULT(kernelVersion_, "") };
    inline DescribeKernelVersionResponseBodyAvailableKernelVersions& setKernelVersion(string kernelVersion) { DARABONBA_PTR_SET_VALUE(kernelVersion_, kernelVersion) };


    // releaseDate Field Functions 
    bool hasReleaseDate() const { return this->releaseDate_ != nullptr;};
    void deleteReleaseDate() { this->releaseDate_ = nullptr;};
    inline string releaseDate() const { DARABONBA_PTR_GET_DEFAULT(releaseDate_, "") };
    inline DescribeKernelVersionResponseBodyAvailableKernelVersions& setReleaseDate(string releaseDate) { DARABONBA_PTR_SET_VALUE(releaseDate_, releaseDate) };


  protected:
    // The maintenance expiration time of the version. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC. After the time arrives, the system no longer maintains the version. If any issues occur, update the minor version of the cluster to a later version.
    std::shared_ptr<string> expireDate_ = nullptr;
    // The minor version. Example: **3.1.9**.
    std::shared_ptr<string> kernelVersion_ = nullptr;
    // The time when the minor version was released. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> releaseDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
