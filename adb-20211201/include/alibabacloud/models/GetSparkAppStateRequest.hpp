// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSPARKAPPSTATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSPARKAPPSTATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class GetSparkAppStateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSparkAppStateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSparkAppStateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
    };
    GetSparkAppStateRequest() = default ;
    GetSparkAppStateRequest(const GetSparkAppStateRequest &) = default ;
    GetSparkAppStateRequest(GetSparkAppStateRequest &&) = default ;
    GetSparkAppStateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSparkAppStateRequest() = default ;
    GetSparkAppStateRequest& operator=(const GetSparkAppStateRequest &) = default ;
    GetSparkAppStateRequest& operator=(GetSparkAppStateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->DBClusterId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetSparkAppStateRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline GetSparkAppStateRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


  protected:
    // The Spark application ID.
    // 
    // >  You can call the [ListSparkApps](https://help.aliyun.com/document_detail/455888.html) operation to query Spark application IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The ID of the AnalyticDB for MySQL Data Lakehouse Edition cluster.
    // 
    // >  You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/612397.html) operation to query the IDs of all AnalyticDB for MySQL clusters within a region.
    std::shared_ptr<string> DBClusterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
