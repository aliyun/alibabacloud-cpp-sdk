// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKITEMWORKFLOWINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETWORKITEMWORKFLOWINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetWorkItemWorkFlowInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkItemWorkFlowInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(configurationId, configurationId_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkItemWorkFlowInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(configurationId, configurationId_);
    };
    GetWorkItemWorkFlowInfoRequest() = default ;
    GetWorkItemWorkFlowInfoRequest(const GetWorkItemWorkFlowInfoRequest &) = default ;
    GetWorkItemWorkFlowInfoRequest(GetWorkItemWorkFlowInfoRequest &&) = default ;
    GetWorkItemWorkFlowInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkItemWorkFlowInfoRequest() = default ;
    GetWorkItemWorkFlowInfoRequest& operator=(const GetWorkItemWorkFlowInfoRequest &) = default ;
    GetWorkItemWorkFlowInfoRequest& operator=(GetWorkItemWorkFlowInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configurationId_ == nullptr; };
    // configurationId Field Functions 
    bool hasConfigurationId() const { return this->configurationId_ != nullptr;};
    void deleteConfigurationId() { this->configurationId_ = nullptr;};
    inline string configurationId() const { DARABONBA_PTR_GET_DEFAULT(configurationId_, "") };
    inline GetWorkItemWorkFlowInfoRequest& setConfigurationId(string configurationId) { DARABONBA_PTR_SET_VALUE(configurationId_, configurationId) };


  protected:
    std::shared_ptr<string> configurationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
