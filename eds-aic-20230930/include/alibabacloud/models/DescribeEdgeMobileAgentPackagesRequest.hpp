// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEDGEMOBILEAGENTPACKAGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEDGEMOBILEAGENTPACKAGESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeEdgeMobileAgentPackagesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEdgeMobileAgentPackagesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceClass, deviceClass_);
      DARABONBA_PTR_TO_JSON(LicenseKeys, licenseKeys_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PackageIds, packageIds_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEdgeMobileAgentPackagesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceClass, deviceClass_);
      DARABONBA_PTR_FROM_JSON(LicenseKeys, licenseKeys_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PackageIds, packageIds_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeEdgeMobileAgentPackagesRequest() = default ;
    DescribeEdgeMobileAgentPackagesRequest(const DescribeEdgeMobileAgentPackagesRequest &) = default ;
    DescribeEdgeMobileAgentPackagesRequest(DescribeEdgeMobileAgentPackagesRequest &&) = default ;
    DescribeEdgeMobileAgentPackagesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEdgeMobileAgentPackagesRequest() = default ;
    DescribeEdgeMobileAgentPackagesRequest& operator=(const DescribeEdgeMobileAgentPackagesRequest &) = default ;
    DescribeEdgeMobileAgentPackagesRequest& operator=(DescribeEdgeMobileAgentPackagesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceClass_ == nullptr
        && this->licenseKeys_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->packageIds_ == nullptr && this->status_ == nullptr; };
    // deviceClass Field Functions 
    bool hasDeviceClass() const { return this->deviceClass_ != nullptr;};
    void deleteDeviceClass() { this->deviceClass_ = nullptr;};
    inline string getDeviceClass() const { DARABONBA_PTR_GET_DEFAULT(deviceClass_, "") };
    inline DescribeEdgeMobileAgentPackagesRequest& setDeviceClass(string deviceClass) { DARABONBA_PTR_SET_VALUE(deviceClass_, deviceClass) };


    // licenseKeys Field Functions 
    bool hasLicenseKeys() const { return this->licenseKeys_ != nullptr;};
    void deleteLicenseKeys() { this->licenseKeys_ = nullptr;};
    inline string getLicenseKeys() const { DARABONBA_PTR_GET_DEFAULT(licenseKeys_, "") };
    inline DescribeEdgeMobileAgentPackagesRequest& setLicenseKeys(string licenseKeys) { DARABONBA_PTR_SET_VALUE(licenseKeys_, licenseKeys) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeEdgeMobileAgentPackagesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeEdgeMobileAgentPackagesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // packageIds Field Functions 
    bool hasPackageIds() const { return this->packageIds_ != nullptr;};
    void deletePackageIds() { this->packageIds_ = nullptr;};
    inline string getPackageIds() const { DARABONBA_PTR_GET_DEFAULT(packageIds_, "") };
    inline DescribeEdgeMobileAgentPackagesRequest& setPackageIds(string packageIds) { DARABONBA_PTR_SET_VALUE(packageIds_, packageIds) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeEdgeMobileAgentPackagesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The device type filter. Valid values: BOX, PHONE, PAD, and OTHER.
    shared_ptr<string> deviceClass_ {};
    // The list of license keys. Separate multiple keys with commas.
    shared_ptr<string> licenseKeys_ {};
    // The maximum number of entries per page. Valid values: 1 to 100. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token. Leave this parameter empty for the first query. For subsequent queries, use the value returned in the previous response.
    shared_ptr<string> nextToken_ {};
    // The list of package IDs. Separate multiple IDs with commas.
    shared_ptr<string> packageIds_ {};
    // The package status filter.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
