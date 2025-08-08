// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONVARIABLESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONVARIABLESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class GetApplicationVariablesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationVariablesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationVariablesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
    };
    GetApplicationVariablesRequest() = default ;
    GetApplicationVariablesRequest(const GetApplicationVariablesRequest &) = default ;
    GetApplicationVariablesRequest(GetApplicationVariablesRequest &&) = default ;
    GetApplicationVariablesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationVariablesRequest() = default ;
    GetApplicationVariablesRequest& operator=(const GetApplicationVariablesRequest &) = default ;
    GetApplicationVariablesRequest& operator=(GetApplicationVariablesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetApplicationVariablesRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif
