// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTAPPCONFIGANDSAVEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTAPPCONFIGANDSAVEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudwifiPop20191118
{
namespace Models
{
  class PutAppConfigAndSaveRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutAppConfigAndSaveRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApMac, apMac_);
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ConfigureType, configureType_);
      DARABONBA_PTR_TO_JSON(CurrentTime, currentTime_);
      DARABONBA_PTR_TO_JSON(Data, data_);
    };
    friend void from_json(const Darabonba::Json& j, PutAppConfigAndSaveRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApMac, apMac_);
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ConfigureType, configureType_);
      DARABONBA_PTR_FROM_JSON(CurrentTime, currentTime_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
    };
    PutAppConfigAndSaveRequest() = default ;
    PutAppConfigAndSaveRequest(const PutAppConfigAndSaveRequest &) = default ;
    PutAppConfigAndSaveRequest(PutAppConfigAndSaveRequest &&) = default ;
    PutAppConfigAndSaveRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutAppConfigAndSaveRequest() = default ;
    PutAppConfigAndSaveRequest& operator=(const PutAppConfigAndSaveRequest &) = default ;
    PutAppConfigAndSaveRequest& operator=(PutAppConfigAndSaveRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apMac_ == nullptr
        && this->appCode_ == nullptr && this->appName_ == nullptr && this->configureType_ == nullptr && this->currentTime_ == nullptr && this->data_ == nullptr; };
    // apMac Field Functions 
    bool hasApMac() const { return this->apMac_ != nullptr;};
    void deleteApMac() { this->apMac_ = nullptr;};
    inline string getApMac() const { DARABONBA_PTR_GET_DEFAULT(apMac_, "") };
    inline PutAppConfigAndSaveRequest& setApMac(string apMac) { DARABONBA_PTR_SET_VALUE(apMac_, apMac) };


    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline PutAppConfigAndSaveRequest& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline PutAppConfigAndSaveRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // configureType Field Functions 
    bool hasConfigureType() const { return this->configureType_ != nullptr;};
    void deleteConfigureType() { this->configureType_ = nullptr;};
    inline string getConfigureType() const { DARABONBA_PTR_GET_DEFAULT(configureType_, "") };
    inline PutAppConfigAndSaveRequest& setConfigureType(string configureType) { DARABONBA_PTR_SET_VALUE(configureType_, configureType) };


    // currentTime Field Functions 
    bool hasCurrentTime() const { return this->currentTime_ != nullptr;};
    void deleteCurrentTime() { this->currentTime_ = nullptr;};
    inline int64_t getCurrentTime() const { DARABONBA_PTR_GET_DEFAULT(currentTime_, 0L) };
    inline PutAppConfigAndSaveRequest& setCurrentTime(int64_t currentTime) { DARABONBA_PTR_SET_VALUE(currentTime_, currentTime) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline PutAppConfigAndSaveRequest& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


  protected:
    // This parameter is required.
    shared_ptr<string> apMac_ {};
    // This parameter is required.
    shared_ptr<string> appCode_ {};
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // This parameter is required.
    shared_ptr<string> configureType_ {};
    // This parameter is required.
    shared_ptr<int64_t> currentTime_ {};
    // This parameter is required.
    shared_ptr<string> data_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudwifiPop20191118
#endif
