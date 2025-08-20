// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETSPARKAPPLOGROOTPATHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETSPARKAPPLOGROOTPATHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class SetSparkAppLogRootPathRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetSparkAppLogRootPathRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(OssLogPath, ossLogPath_);
      DARABONBA_PTR_TO_JSON(UseDefaultOss, useDefaultOss_);
    };
    friend void from_json(const Darabonba::Json& j, SetSparkAppLogRootPathRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(OssLogPath, ossLogPath_);
      DARABONBA_PTR_FROM_JSON(UseDefaultOss, useDefaultOss_);
    };
    SetSparkAppLogRootPathRequest() = default ;
    SetSparkAppLogRootPathRequest(const SetSparkAppLogRootPathRequest &) = default ;
    SetSparkAppLogRootPathRequest(SetSparkAppLogRootPathRequest &&) = default ;
    SetSparkAppLogRootPathRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetSparkAppLogRootPathRequest() = default ;
    SetSparkAppLogRootPathRequest& operator=(const SetSparkAppLogRootPathRequest &) = default ;
    SetSparkAppLogRootPathRequest& operator=(SetSparkAppLogRootPathRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterId_ != nullptr
        && this->ossLogPath_ != nullptr && this->useDefaultOss_ != nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline SetSparkAppLogRootPathRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // ossLogPath Field Functions 
    bool hasOssLogPath() const { return this->ossLogPath_ != nullptr;};
    void deleteOssLogPath() { this->ossLogPath_ = nullptr;};
    inline string ossLogPath() const { DARABONBA_PTR_GET_DEFAULT(ossLogPath_, "") };
    inline SetSparkAppLogRootPathRequest& setOssLogPath(string ossLogPath) { DARABONBA_PTR_SET_VALUE(ossLogPath_, ossLogPath) };


    // useDefaultOss Field Functions 
    bool hasUseDefaultOss() const { return this->useDefaultOss_ != nullptr;};
    void deleteUseDefaultOss() { this->useDefaultOss_ = nullptr;};
    inline bool useDefaultOss() const { DARABONBA_PTR_GET_DEFAULT(useDefaultOss_, false) };
    inline SetSparkAppLogRootPathRequest& setUseDefaultOss(bool useDefaultOss) { DARABONBA_PTR_SET_VALUE(useDefaultOss_, useDefaultOss) };


  protected:
    // The ID of the AnalyticDB for MySQL cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The path of Object Storage Service (OSS) logs.
    std::shared_ptr<string> ossLogPath_ = nullptr;
    // Specifies whether to use the default OSS log path.
    std::shared_ptr<bool> useDefaultOss_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
