// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GATEWAYOPTIONLOGCONFIGDETAILS_HPP_
#define ALIBABACLOUD_MODELS_GATEWAYOPTIONLOGCONFIGDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GatewayOptionLogConfigDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GatewayOptionLogConfigDetails& obj) { 
      DARABONBA_PTR_TO_JSON(LogEnabled, logEnabled_);
      DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
    };
    friend void from_json(const Darabonba::Json& j, GatewayOptionLogConfigDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(LogEnabled, logEnabled_);
      DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
    };
    GatewayOptionLogConfigDetails() = default ;
    GatewayOptionLogConfigDetails(const GatewayOptionLogConfigDetails &) = default ;
    GatewayOptionLogConfigDetails(GatewayOptionLogConfigDetails &&) = default ;
    GatewayOptionLogConfigDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GatewayOptionLogConfigDetails() = default ;
    GatewayOptionLogConfigDetails& operator=(const GatewayOptionLogConfigDetails &) = default ;
    GatewayOptionLogConfigDetails& operator=(GatewayOptionLogConfigDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->logEnabled_ != nullptr
        && this->logStoreName_ != nullptr && this->projectName_ != nullptr; };
    // logEnabled Field Functions 
    bool hasLogEnabled() const { return this->logEnabled_ != nullptr;};
    void deleteLogEnabled() { this->logEnabled_ = nullptr;};
    inline bool logEnabled() const { DARABONBA_PTR_GET_DEFAULT(logEnabled_, false) };
    inline GatewayOptionLogConfigDetails& setLogEnabled(bool logEnabled) { DARABONBA_PTR_SET_VALUE(logEnabled_, logEnabled) };


    // logStoreName Field Functions 
    bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
    void deleteLogStoreName() { this->logStoreName_ = nullptr;};
    inline string logStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
    inline GatewayOptionLogConfigDetails& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline GatewayOptionLogConfigDetails& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


  protected:
    // This parameter is required.
    std::shared_ptr<bool> logEnabled_ = nullptr;
    std::shared_ptr<string> logStoreName_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
