// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESUMETRAFFICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESUMETRAFFICREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ResumeTrafficRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResumeTrafficRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
    };
    friend void from_json(const Darabonba::Json& j, ResumeTrafficRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
    };
    ResumeTrafficRequest() = default ;
    ResumeTrafficRequest(const ResumeTrafficRequest &) = default ;
    ResumeTrafficRequest(ResumeTrafficRequest &&) = default ;
    ResumeTrafficRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResumeTrafficRequest() = default ;
    ResumeTrafficRequest& operator=(const ResumeTrafficRequest &) = default ;
    ResumeTrafficRequest& operator=(ResumeTrafficRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->instanceIds_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ResumeTrafficRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline string getInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(instanceIds_, "") };
    inline ResumeTrafficRequest& setInstanceIds(string instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };


  protected:
    shared_ptr<string> appId_ {};
    shared_ptr<string> instanceIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
