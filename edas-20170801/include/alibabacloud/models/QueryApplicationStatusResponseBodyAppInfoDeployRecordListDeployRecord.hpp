// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAPPLICATIONSTATUSRESPONSEBODYAPPINFODEPLOYRECORDLISTDEPLOYRECORD_HPP_
#define ALIBABACLOUD_MODELS_QUERYAPPLICATIONSTATUSRESPONSEBODYAPPINFODEPLOYRECORDLISTDEPLOYRECORD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class QueryApplicationStatusResponseBodyAppInfoDeployRecordListDeployRecord : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryApplicationStatusResponseBodyAppInfoDeployRecordListDeployRecord& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DeployRecordId, deployRecordId_);
      DARABONBA_PTR_TO_JSON(EccId, eccId_);
      DARABONBA_PTR_TO_JSON(EcuId, ecuId_);
      DARABONBA_PTR_TO_JSON(PackageMd5, packageMd5_);
      DARABONBA_PTR_TO_JSON(PackageVersionId, packageVersionId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryApplicationStatusResponseBodyAppInfoDeployRecordListDeployRecord& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DeployRecordId, deployRecordId_);
      DARABONBA_PTR_FROM_JSON(EccId, eccId_);
      DARABONBA_PTR_FROM_JSON(EcuId, ecuId_);
      DARABONBA_PTR_FROM_JSON(PackageMd5, packageMd5_);
      DARABONBA_PTR_FROM_JSON(PackageVersionId, packageVersionId_);
    };
    QueryApplicationStatusResponseBodyAppInfoDeployRecordListDeployRecord() = default ;
    QueryApplicationStatusResponseBodyAppInfoDeployRecordListDeployRecord(const QueryApplicationStatusResponseBodyAppInfoDeployRecordListDeployRecord &) = default ;
    QueryApplicationStatusResponseBodyAppInfoDeployRecordListDeployRecord(QueryApplicationStatusResponseBodyAppInfoDeployRecordListDeployRecord &&) = default ;
    QueryApplicationStatusResponseBodyAppInfoDeployRecordListDeployRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryApplicationStatusResponseBodyAppInfoDeployRecordListDeployRecord() = default ;
    QueryApplicationStatusResponseBodyAppInfoDeployRecordListDeployRecord& operator=(const QueryApplicationStatusResponseBodyAppInfoDeployRecordListDeployRecord &) = default ;
    QueryApplicationStatusResponseBodyAppInfoDeployRecordListDeployRecord& operator=(QueryApplicationStatusResponseBodyAppInfoDeployRecordListDeployRecord &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->deployRecordId_ == nullptr && return this->eccId_ == nullptr && return this->ecuId_ == nullptr && return this->packageMd5_ == nullptr && return this->packageVersionId_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline QueryApplicationStatusResponseBodyAppInfoDeployRecordListDeployRecord& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // deployRecordId Field Functions 
    bool hasDeployRecordId() const { return this->deployRecordId_ != nullptr;};
    void deleteDeployRecordId() { this->deployRecordId_ = nullptr;};
    inline string deployRecordId() const { DARABONBA_PTR_GET_DEFAULT(deployRecordId_, "") };
    inline QueryApplicationStatusResponseBodyAppInfoDeployRecordListDeployRecord& setDeployRecordId(string deployRecordId) { DARABONBA_PTR_SET_VALUE(deployRecordId_, deployRecordId) };


    // eccId Field Functions 
    bool hasEccId() const { return this->eccId_ != nullptr;};
    void deleteEccId() { this->eccId_ = nullptr;};
    inline string eccId() const { DARABONBA_PTR_GET_DEFAULT(eccId_, "") };
    inline QueryApplicationStatusResponseBodyAppInfoDeployRecordListDeployRecord& setEccId(string eccId) { DARABONBA_PTR_SET_VALUE(eccId_, eccId) };


    // ecuId Field Functions 
    bool hasEcuId() const { return this->ecuId_ != nullptr;};
    void deleteEcuId() { this->ecuId_ = nullptr;};
    inline string ecuId() const { DARABONBA_PTR_GET_DEFAULT(ecuId_, "") };
    inline QueryApplicationStatusResponseBodyAppInfoDeployRecordListDeployRecord& setEcuId(string ecuId) { DARABONBA_PTR_SET_VALUE(ecuId_, ecuId) };


    // packageMd5 Field Functions 
    bool hasPackageMd5() const { return this->packageMd5_ != nullptr;};
    void deletePackageMd5() { this->packageMd5_ = nullptr;};
    inline string packageMd5() const { DARABONBA_PTR_GET_DEFAULT(packageMd5_, "") };
    inline QueryApplicationStatusResponseBodyAppInfoDeployRecordListDeployRecord& setPackageMd5(string packageMd5) { DARABONBA_PTR_SET_VALUE(packageMd5_, packageMd5) };


    // packageVersionId Field Functions 
    bool hasPackageVersionId() const { return this->packageVersionId_ != nullptr;};
    void deletePackageVersionId() { this->packageVersionId_ = nullptr;};
    inline string packageVersionId() const { DARABONBA_PTR_GET_DEFAULT(packageVersionId_, "") };
    inline QueryApplicationStatusResponseBodyAppInfoDeployRecordListDeployRecord& setPackageVersionId(string packageVersionId) { DARABONBA_PTR_SET_VALUE(packageVersionId_, packageVersionId) };


  protected:
    // The time when the deployment record was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The ID of the deployment record.
    std::shared_ptr<string> deployRecordId_ = nullptr;
    // The unique ID of the ECC.
    std::shared_ptr<string> eccId_ = nullptr;
    // The unique ID of the ECU.
    std::shared_ptr<string> ecuId_ = nullptr;
    // The MD5 hash value of the deployment package.
    std::shared_ptr<string> packageMd5_ = nullptr;
    // The version of the deployment package that was used to deploy an application in the instance group.
    std::shared_ptr<string> packageVersionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
