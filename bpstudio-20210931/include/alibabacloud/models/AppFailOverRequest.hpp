// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPFAILOVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPFAILOVERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class AppFailOverRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AppFailOverRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(FailZone, failZone_);
    };
    friend void from_json(const Darabonba::Json& j, AppFailOverRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(FailZone, failZone_);
    };
    AppFailOverRequest() = default ;
    AppFailOverRequest(const AppFailOverRequest &) = default ;
    AppFailOverRequest(AppFailOverRequest &&) = default ;
    AppFailOverRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AppFailOverRequest() = default ;
    AppFailOverRequest& operator=(const AppFailOverRequest &) = default ;
    AppFailOverRequest& operator=(AppFailOverRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationId_ != nullptr
        && this->failZone_ != nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline AppFailOverRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // failZone Field Functions 
    bool hasFailZone() const { return this->failZone_ != nullptr;};
    void deleteFailZone() { this->failZone_ = nullptr;};
    inline string failZone() const { DARABONBA_PTR_GET_DEFAULT(failZone_, "") };
    inline AppFailOverRequest& setFailZone(string failZone) { DARABONBA_PTR_SET_VALUE(failZone_, failZone) };


  protected:
    // The application ID.
    std::shared_ptr<string> applicationId_ = nullptr;
    // The destination zone to which you want to switch the disaster recovery application.
    std::shared_ptr<string> failZone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif
