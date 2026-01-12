// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATADOWNLOADURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATADOWNLOADURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeDataDownloadURLRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataDownloadURLRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(DataName, dataName_);
      DARABONBA_PTR_TO_JSON(DataVersion, dataVersion_);
      DARABONBA_PTR_TO_JSON(ExpireTimeout, expireTimeout_);
      DARABONBA_PTR_TO_JSON(ServerFilterStrategy, serverFilterStrategy_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataDownloadURLRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(DataName, dataName_);
      DARABONBA_PTR_FROM_JSON(DataVersion, dataVersion_);
      DARABONBA_PTR_FROM_JSON(ExpireTimeout, expireTimeout_);
      DARABONBA_PTR_FROM_JSON(ServerFilterStrategy, serverFilterStrategy_);
    };
    DescribeDataDownloadURLRequest() = default ;
    DescribeDataDownloadURLRequest(const DescribeDataDownloadURLRequest &) = default ;
    DescribeDataDownloadURLRequest(DescribeDataDownloadURLRequest &&) = default ;
    DescribeDataDownloadURLRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataDownloadURLRequest() = default ;
    DescribeDataDownloadURLRequest& operator=(const DescribeDataDownloadURLRequest &) = default ;
    DescribeDataDownloadURLRequest& operator=(DescribeDataDownloadURLRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->dataName_ == nullptr && this->dataVersion_ == nullptr && this->expireTimeout_ == nullptr && this->serverFilterStrategy_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeDataDownloadURLRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // dataName Field Functions 
    bool hasDataName() const { return this->dataName_ != nullptr;};
    void deleteDataName() { this->dataName_ = nullptr;};
    inline string getDataName() const { DARABONBA_PTR_GET_DEFAULT(dataName_, "") };
    inline DescribeDataDownloadURLRequest& setDataName(string dataName) { DARABONBA_PTR_SET_VALUE(dataName_, dataName) };


    // dataVersion Field Functions 
    bool hasDataVersion() const { return this->dataVersion_ != nullptr;};
    void deleteDataVersion() { this->dataVersion_ = nullptr;};
    inline string getDataVersion() const { DARABONBA_PTR_GET_DEFAULT(dataVersion_, "") };
    inline DescribeDataDownloadURLRequest& setDataVersion(string dataVersion) { DARABONBA_PTR_SET_VALUE(dataVersion_, dataVersion) };


    // expireTimeout Field Functions 
    bool hasExpireTimeout() const { return this->expireTimeout_ != nullptr;};
    void deleteExpireTimeout() { this->expireTimeout_ = nullptr;};
    inline int64_t getExpireTimeout() const { DARABONBA_PTR_GET_DEFAULT(expireTimeout_, 0L) };
    inline DescribeDataDownloadURLRequest& setExpireTimeout(int64_t expireTimeout) { DARABONBA_PTR_SET_VALUE(expireTimeout_, expireTimeout) };


    // serverFilterStrategy Field Functions 
    bool hasServerFilterStrategy() const { return this->serverFilterStrategy_ != nullptr;};
    void deleteServerFilterStrategy() { this->serverFilterStrategy_ = nullptr;};
    inline string getServerFilterStrategy() const { DARABONBA_PTR_GET_DEFAULT(serverFilterStrategy_, "") };
    inline DescribeDataDownloadURLRequest& setServerFilterStrategy(string serverFilterStrategy) { DARABONBA_PTR_SET_VALUE(serverFilterStrategy_, serverFilterStrategy) };


  protected:
    // The ID of the application.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The name of the data file.
    // 
    // This parameter is required.
    shared_ptr<string> dataName_ {};
    // The version number of the data file.
    // 
    // This parameter is required.
    shared_ptr<string> dataVersion_ {};
    // This parameter is reserved.
    shared_ptr<int64_t> expireTimeout_ {};
    // The condition that you want to use to filter file servers. You can specify multiple canary release policies. By default, all resources are queried.
    shared_ptr<string> serverFilterStrategy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
