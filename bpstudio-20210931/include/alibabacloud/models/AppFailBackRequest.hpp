// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPFAILBACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPFAILBACKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class AppFailBackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AppFailBackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
    };
    friend void from_json(const Darabonba::Json& j, AppFailBackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
    };
    AppFailBackRequest() = default ;
    AppFailBackRequest(const AppFailBackRequest &) = default ;
    AppFailBackRequest(AppFailBackRequest &&) = default ;
    AppFailBackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AppFailBackRequest() = default ;
    AppFailBackRequest& operator=(const AppFailBackRequest &) = default ;
    AppFailBackRequest& operator=(AppFailBackRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline AppFailBackRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


  protected:
    // The application ID.
    std::shared_ptr<string> applicationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif
