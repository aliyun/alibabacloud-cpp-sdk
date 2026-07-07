// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEDGEMOBILEAGENTPACKAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEDGEMOBILEAGENTPACKAGESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeEdgeMobileAgentPackagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEdgeMobileAgentPackagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Packages, packages_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEdgeMobileAgentPackagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Packages, packages_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeEdgeMobileAgentPackagesResponseBody() = default ;
    DescribeEdgeMobileAgentPackagesResponseBody(const DescribeEdgeMobileAgentPackagesResponseBody &) = default ;
    DescribeEdgeMobileAgentPackagesResponseBody(DescribeEdgeMobileAgentPackagesResponseBody &&) = default ;
    DescribeEdgeMobileAgentPackagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEdgeMobileAgentPackagesResponseBody() = default ;
    DescribeEdgeMobileAgentPackagesResponseBody& operator=(const DescribeEdgeMobileAgentPackagesResponseBody &) = default ;
    DescribeEdgeMobileAgentPackagesResponseBody& operator=(DescribeEdgeMobileAgentPackagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Packages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Packages& obj) { 
        DARABONBA_PTR_TO_JSON(DeviceClass, deviceClass_);
        DARABONBA_PTR_TO_JSON(ExpireDate, expireDate_);
        DARABONBA_PTR_TO_JSON(LicenseKeys, licenseKeys_);
        DARABONBA_PTR_TO_JSON(PackageId, packageId_);
        DARABONBA_PTR_TO_JSON(PackageSpec, packageSpec_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Packages& obj) { 
        DARABONBA_PTR_FROM_JSON(DeviceClass, deviceClass_);
        DARABONBA_PTR_FROM_JSON(ExpireDate, expireDate_);
        DARABONBA_PTR_FROM_JSON(LicenseKeys, licenseKeys_);
        DARABONBA_PTR_FROM_JSON(PackageId, packageId_);
        DARABONBA_PTR_FROM_JSON(PackageSpec, packageSpec_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Packages() = default ;
      Packages(const Packages &) = default ;
      Packages(Packages &&) = default ;
      Packages(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Packages() = default ;
      Packages& operator=(const Packages &) = default ;
      Packages& operator=(Packages &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->deviceClass_ == nullptr
        && this->expireDate_ == nullptr && this->licenseKeys_ == nullptr && this->packageId_ == nullptr && this->packageSpec_ == nullptr && this->status_ == nullptr; };
      // deviceClass Field Functions 
      bool hasDeviceClass() const { return this->deviceClass_ != nullptr;};
      void deleteDeviceClass() { this->deviceClass_ = nullptr;};
      inline string getDeviceClass() const { DARABONBA_PTR_GET_DEFAULT(deviceClass_, "") };
      inline Packages& setDeviceClass(string deviceClass) { DARABONBA_PTR_SET_VALUE(deviceClass_, deviceClass) };


      // expireDate Field Functions 
      bool hasExpireDate() const { return this->expireDate_ != nullptr;};
      void deleteExpireDate() { this->expireDate_ = nullptr;};
      inline string getExpireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, "") };
      inline Packages& setExpireDate(string expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


      // licenseKeys Field Functions 
      bool hasLicenseKeys() const { return this->licenseKeys_ != nullptr;};
      void deleteLicenseKeys() { this->licenseKeys_ = nullptr;};
      inline const vector<string> & getLicenseKeys() const { DARABONBA_PTR_GET_CONST(licenseKeys_, vector<string>) };
      inline vector<string> getLicenseKeys() { DARABONBA_PTR_GET(licenseKeys_, vector<string>) };
      inline Packages& setLicenseKeys(const vector<string> & licenseKeys) { DARABONBA_PTR_SET_VALUE(licenseKeys_, licenseKeys) };
      inline Packages& setLicenseKeys(vector<string> && licenseKeys) { DARABONBA_PTR_SET_RVALUE(licenseKeys_, licenseKeys) };


      // packageId Field Functions 
      bool hasPackageId() const { return this->packageId_ != nullptr;};
      void deletePackageId() { this->packageId_ = nullptr;};
      inline string getPackageId() const { DARABONBA_PTR_GET_DEFAULT(packageId_, "") };
      inline Packages& setPackageId(string packageId) { DARABONBA_PTR_SET_VALUE(packageId_, packageId) };


      // packageSpec Field Functions 
      bool hasPackageSpec() const { return this->packageSpec_ != nullptr;};
      void deletePackageSpec() { this->packageSpec_ = nullptr;};
      inline string getPackageSpec() const { DARABONBA_PTR_GET_DEFAULT(packageSpec_, "") };
      inline Packages& setPackageSpec(string packageSpec) { DARABONBA_PTR_SET_VALUE(packageSpec_, packageSpec) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Packages& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The device type.
      shared_ptr<string> deviceClass_ {};
      // The expiration time.
      shared_ptr<string> expireDate_ {};
      // The list of license keys.
      shared_ptr<vector<string>> licenseKeys_ {};
      // The package ID.
      shared_ptr<string> packageId_ {};
      // The package specification. Currently, only hardware is supported.
      shared_ptr<string> packageSpec_ {};
      // The package status.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->packages_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeEdgeMobileAgentPackagesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeEdgeMobileAgentPackagesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // packages Field Functions 
    bool hasPackages() const { return this->packages_ != nullptr;};
    void deletePackages() { this->packages_ = nullptr;};
    inline const vector<DescribeEdgeMobileAgentPackagesResponseBody::Packages> & getPackages() const { DARABONBA_PTR_GET_CONST(packages_, vector<DescribeEdgeMobileAgentPackagesResponseBody::Packages>) };
    inline vector<DescribeEdgeMobileAgentPackagesResponseBody::Packages> getPackages() { DARABONBA_PTR_GET(packages_, vector<DescribeEdgeMobileAgentPackagesResponseBody::Packages>) };
    inline DescribeEdgeMobileAgentPackagesResponseBody& setPackages(const vector<DescribeEdgeMobileAgentPackagesResponseBody::Packages> & packages) { DARABONBA_PTR_SET_VALUE(packages_, packages) };
    inline DescribeEdgeMobileAgentPackagesResponseBody& setPackages(vector<DescribeEdgeMobileAgentPackagesResponseBody::Packages> && packages) { DARABONBA_PTR_SET_RVALUE(packages_, packages) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEdgeMobileAgentPackagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeEdgeMobileAgentPackagesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The actual number of entries returned on the current page.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token for the next page. An empty value indicates that no more data exists.
    shared_ptr<string> nextToken_ {};
    // The list of packages.
    shared_ptr<vector<DescribeEdgeMobileAgentPackagesResponseBody::Packages>> packages_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of records.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
