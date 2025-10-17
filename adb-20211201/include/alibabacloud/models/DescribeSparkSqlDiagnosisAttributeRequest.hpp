// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESPARKSQLDIAGNOSISATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESPARKSQLDIAGNOSISATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeSparkSQLDiagnosisAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSparkSQLDiagnosisAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(InnerQueryId, innerQueryId_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSparkSQLDiagnosisAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(InnerQueryId, innerQueryId_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeSparkSQLDiagnosisAttributeRequest() = default ;
    DescribeSparkSQLDiagnosisAttributeRequest(const DescribeSparkSQLDiagnosisAttributeRequest &) = default ;
    DescribeSparkSQLDiagnosisAttributeRequest(DescribeSparkSQLDiagnosisAttributeRequest &&) = default ;
    DescribeSparkSQLDiagnosisAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSparkSQLDiagnosisAttributeRequest() = default ;
    DescribeSparkSQLDiagnosisAttributeRequest& operator=(const DescribeSparkSQLDiagnosisAttributeRequest &) = default ;
    DescribeSparkSQLDiagnosisAttributeRequest& operator=(DescribeSparkSQLDiagnosisAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->DBClusterId_ == nullptr && return this->innerQueryId_ == nullptr && return this->language_ == nullptr && return this->regionId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeSparkSQLDiagnosisAttributeRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeSparkSQLDiagnosisAttributeRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // innerQueryId Field Functions 
    bool hasInnerQueryId() const { return this->innerQueryId_ != nullptr;};
    void deleteInnerQueryId() { this->innerQueryId_ = nullptr;};
    inline int64_t innerQueryId() const { DARABONBA_PTR_GET_DEFAULT(innerQueryId_, 0L) };
    inline DescribeSparkSQLDiagnosisAttributeRequest& setInnerQueryId(int64_t innerQueryId) { DARABONBA_PTR_SET_VALUE(innerQueryId_, innerQueryId) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline DescribeSparkSQLDiagnosisAttributeRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSparkSQLDiagnosisAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The application ID.
    // 
    // >  You can call the [ListSparkApps](https://help.aliyun.com/document_detail/612475.html) operation to query a list of Spark application IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The cluster ID.
    // 
    // > 
    // 
    // *   You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/98094.html) operation to query the information about all AnalyticDB for MySQL clusters within a region, including cluster IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The ID of the query executed within the Spark application.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> innerQueryId_ = nullptr;
    // The language in which to return the query results. Valid values:
    // 
    // *   en: English.
    // *   zh: Chinese.
    // 
    // This parameter is required.
    std::shared_ptr<string> language_ = nullptr;
    // The region ID.
    // 
    // >  You can call the [DescribeRegions](https://help.aliyun.com/document_detail/143074.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
