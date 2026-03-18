// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRECHECKYIKEAIAPPJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PRECHECKYIKEAIAPPJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class PrecheckYikeAIAppJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PrecheckYikeAIAppJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppParams, appParams_);
    };
    friend void from_json(const Darabonba::Json& j, PrecheckYikeAIAppJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppParams, appParams_);
    };
    PrecheckYikeAIAppJobRequest() = default ;
    PrecheckYikeAIAppJobRequest(const PrecheckYikeAIAppJobRequest &) = default ;
    PrecheckYikeAIAppJobRequest(PrecheckYikeAIAppJobRequest &&) = default ;
    PrecheckYikeAIAppJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PrecheckYikeAIAppJobRequest() = default ;
    PrecheckYikeAIAppJobRequest& operator=(const PrecheckYikeAIAppJobRequest &) = default ;
    PrecheckYikeAIAppJobRequest& operator=(PrecheckYikeAIAppJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->appParams_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline PrecheckYikeAIAppJobRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appParams Field Functions 
    bool hasAppParams() const { return this->appParams_ != nullptr;};
    void deleteAppParams() { this->appParams_ = nullptr;};
    inline string getAppParams() const { DARABONBA_PTR_GET_DEFAULT(appParams_, "") };
    inline PrecheckYikeAIAppJobRequest& setAppParams(string appParams) { DARABONBA_PTR_SET_VALUE(appParams_, appParams) };


  protected:
    shared_ptr<string> appId_ {};
    shared_ptr<string> appParams_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
