// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASERVICEAPPLICATIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDATASERVICEAPPLICATIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetDataServiceApplicationResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataServiceApplicationResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationCode, applicationCode_);
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ApplicationKey, applicationKey_);
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(ApplicationSecret, applicationSecret_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataServiceApplicationResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationCode, applicationCode_);
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ApplicationKey, applicationKey_);
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(ApplicationSecret, applicationSecret_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    GetDataServiceApplicationResponseBodyData() = default ;
    GetDataServiceApplicationResponseBodyData(const GetDataServiceApplicationResponseBodyData &) = default ;
    GetDataServiceApplicationResponseBodyData(GetDataServiceApplicationResponseBodyData &&) = default ;
    GetDataServiceApplicationResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataServiceApplicationResponseBodyData() = default ;
    GetDataServiceApplicationResponseBodyData& operator=(const GetDataServiceApplicationResponseBodyData &) = default ;
    GetDataServiceApplicationResponseBodyData& operator=(GetDataServiceApplicationResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationCode_ != nullptr
        && this->applicationId_ != nullptr && this->applicationKey_ != nullptr && this->applicationName_ != nullptr && this->applicationSecret_ != nullptr && this->projectId_ != nullptr; };
    // applicationCode Field Functions 
    bool hasApplicationCode() const { return this->applicationCode_ != nullptr;};
    void deleteApplicationCode() { this->applicationCode_ = nullptr;};
    inline string applicationCode() const { DARABONBA_PTR_GET_DEFAULT(applicationCode_, "") };
    inline GetDataServiceApplicationResponseBodyData& setApplicationCode(string applicationCode) { DARABONBA_PTR_SET_VALUE(applicationCode_, applicationCode) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline int64_t applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, 0L) };
    inline GetDataServiceApplicationResponseBodyData& setApplicationId(int64_t applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // applicationKey Field Functions 
    bool hasApplicationKey() const { return this->applicationKey_ != nullptr;};
    void deleteApplicationKey() { this->applicationKey_ = nullptr;};
    inline string applicationKey() const { DARABONBA_PTR_GET_DEFAULT(applicationKey_, "") };
    inline GetDataServiceApplicationResponseBodyData& setApplicationKey(string applicationKey) { DARABONBA_PTR_SET_VALUE(applicationKey_, applicationKey) };


    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string applicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline GetDataServiceApplicationResponseBodyData& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // applicationSecret Field Functions 
    bool hasApplicationSecret() const { return this->applicationSecret_ != nullptr;};
    void deleteApplicationSecret() { this->applicationSecret_ = nullptr;};
    inline string applicationSecret() const { DARABONBA_PTR_GET_DEFAULT(applicationSecret_, "") };
    inline GetDataServiceApplicationResponseBodyData& setApplicationSecret(string applicationSecret) { DARABONBA_PTR_SET_VALUE(applicationSecret_, applicationSecret) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetDataServiceApplicationResponseBodyData& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // The AppCode for simple authentication. You can select simple authentication or signature authentication when you call an API operation.
    std::shared_ptr<string> applicationCode_ = nullptr;
    // The application ID.
    std::shared_ptr<int64_t> applicationId_ = nullptr;
    // The AppKey for signature authentication. You can select simple authentication or signature authentication when you call an API operation.
    std::shared_ptr<string> applicationKey_ = nullptr;
    // The name of the application.
    std::shared_ptr<string> applicationName_ = nullptr;
    // The AppSecret for signature authentication. You can select simple authentication or signature authentication when you call an API operation.
    std::shared_ptr<string> applicationSecret_ = nullptr;
    // The workspace ID.
    std::shared_ptr<int64_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
