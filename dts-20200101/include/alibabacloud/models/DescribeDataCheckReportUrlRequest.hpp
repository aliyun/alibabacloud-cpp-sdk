// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATACHECKREPORTURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATACHECKREPORTURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeDataCheckReportUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataCheckReportUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckType, checkType_);
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(TbName, tbName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataCheckReportUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckType, checkType_);
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(TbName, tbName_);
    };
    DescribeDataCheckReportUrlRequest() = default ;
    DescribeDataCheckReportUrlRequest(const DescribeDataCheckReportUrlRequest &) = default ;
    DescribeDataCheckReportUrlRequest(DescribeDataCheckReportUrlRequest &&) = default ;
    DescribeDataCheckReportUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataCheckReportUrlRequest() = default ;
    DescribeDataCheckReportUrlRequest& operator=(const DescribeDataCheckReportUrlRequest &) = default ;
    DescribeDataCheckReportUrlRequest& operator=(DescribeDataCheckReportUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkType_ == nullptr
        && this->dbName_ == nullptr && this->dtsJobId_ == nullptr && this->resourceGroupId_ == nullptr && this->tbName_ == nullptr; };
    // checkType Field Functions 
    bool hasCheckType() const { return this->checkType_ != nullptr;};
    void deleteCheckType() { this->checkType_ = nullptr;};
    inline int32_t getCheckType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, 0) };
    inline DescribeDataCheckReportUrlRequest& setCheckType(int32_t checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline DescribeDataCheckReportUrlRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // dtsJobId Field Functions 
    bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
    void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
    inline string getDtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
    inline DescribeDataCheckReportUrlRequest& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDataCheckReportUrlRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tbName Field Functions 
    bool hasTbName() const { return this->tbName_ != nullptr;};
    void deleteTbName() { this->tbName_ = nullptr;};
    inline string getTbName() const { DARABONBA_PTR_GET_DEFAULT(tbName_, "") };
    inline DescribeDataCheckReportUrlRequest& setTbName(string tbName) { DARABONBA_PTR_SET_VALUE(tbName_, tbName) };


  protected:
    // The data verification method. Currently, only the value **1** is supported, which indicates full verification.
    // 
    // This parameter is required.
    shared_ptr<int32_t> checkType_ {};
    // The name of the source database to be verified.
    // 
    // This parameter is required.
    shared_ptr<string> dbName_ {};
    // The ID of the DTS task. You can call [DescribeDtsJobs](https://help.aliyun.com/document_detail/209702.html) to obtain the ID.
    // 
    // This parameter is required.
    shared_ptr<string> dtsJobId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The name of the table in the source database to be verified.
    // 
    // This parameter is required.
    shared_ptr<string> tbName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
