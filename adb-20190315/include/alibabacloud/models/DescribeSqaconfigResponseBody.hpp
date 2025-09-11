// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQACONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQACONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeSQAConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSQAConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SQAStatus, SQAStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSQAConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SQAStatus, SQAStatus_);
    };
    DescribeSQAConfigResponseBody() = default ;
    DescribeSQAConfigResponseBody(const DescribeSQAConfigResponseBody &) = default ;
    DescribeSQAConfigResponseBody(DescribeSQAConfigResponseBody &&) = default ;
    DescribeSQAConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSQAConfigResponseBody() = default ;
    DescribeSQAConfigResponseBody& operator=(const DescribeSQAConfigResponseBody &) = default ;
    DescribeSQAConfigResponseBody& operator=(DescribeSQAConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterId_ != nullptr
        && this->groupName_ != nullptr && this->requestId_ != nullptr && this->SQAStatus_ != nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeSQAConfigResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeSQAConfigResponseBody& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSQAConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // SQAStatus Field Functions 
    bool hasSQAStatus() const { return this->SQAStatus_ != nullptr;};
    void deleteSQAStatus() { this->SQAStatus_ = nullptr;};
    inline string SQAStatus() const { DARABONBA_PTR_GET_DEFAULT(SQAStatus_, "") };
    inline DescribeSQAConfigResponseBody& setSQAStatus(string SQAStatus) { DARABONBA_PTR_SET_VALUE(SQAStatus_, SQAStatus) };


  protected:
    // The ID of the AnalyticDB for MySQL Data Warehouse Edition (V3.0) cluster.
    // 
    // >  You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/129857.html) operation to query the IDs of all AnalyticDB for MySQL Data Warehouse Edition (V3.0) clusters within a region.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The name of the resource group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether short query acceleration (SQA) is enabled.
    std::shared_ptr<string> SQAStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
