// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECONFIGAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECONFIGAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class ReConfigApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReConfigApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, ReConfigApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Variables, variables_);
    };
    ReConfigApplicationRequest() = default ;
    ReConfigApplicationRequest(const ReConfigApplicationRequest &) = default ;
    ReConfigApplicationRequest(ReConfigApplicationRequest &&) = default ;
    ReConfigApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReConfigApplicationRequest() = default ;
    ReConfigApplicationRequest& operator=(const ReConfigApplicationRequest &) = default ;
    ReConfigApplicationRequest& operator=(ReConfigApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->variables_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ReConfigApplicationRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline string variables() const { DARABONBA_PTR_GET_DEFAULT(variables_, "") };
    inline ReConfigApplicationRequest& setVariables(string variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> variables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif
