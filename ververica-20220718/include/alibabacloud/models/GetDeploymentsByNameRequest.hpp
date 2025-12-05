// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEPLOYMENTSBYNAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDEPLOYMENTSBYNAMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class GetDeploymentsByNameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeploymentsByNameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ignoreJobSummary, ignoreJobSummary_);
      DARABONBA_PTR_TO_JSON(ignoreResourceSetting, ignoreResourceSetting_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeploymentsByNameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ignoreJobSummary, ignoreJobSummary_);
      DARABONBA_PTR_FROM_JSON(ignoreResourceSetting, ignoreResourceSetting_);
    };
    GetDeploymentsByNameRequest() = default ;
    GetDeploymentsByNameRequest(const GetDeploymentsByNameRequest &) = default ;
    GetDeploymentsByNameRequest(GetDeploymentsByNameRequest &&) = default ;
    GetDeploymentsByNameRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeploymentsByNameRequest() = default ;
    GetDeploymentsByNameRequest& operator=(const GetDeploymentsByNameRequest &) = default ;
    GetDeploymentsByNameRequest& operator=(GetDeploymentsByNameRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ignoreJobSummary_ == nullptr
        && return this->ignoreResourceSetting_ == nullptr; };
    // ignoreJobSummary Field Functions 
    bool hasIgnoreJobSummary() const { return this->ignoreJobSummary_ != nullptr;};
    void deleteIgnoreJobSummary() { this->ignoreJobSummary_ = nullptr;};
    inline bool ignoreJobSummary() const { DARABONBA_PTR_GET_DEFAULT(ignoreJobSummary_, false) };
    inline GetDeploymentsByNameRequest& setIgnoreJobSummary(bool ignoreJobSummary) { DARABONBA_PTR_SET_VALUE(ignoreJobSummary_, ignoreJobSummary) };


    // ignoreResourceSetting Field Functions 
    bool hasIgnoreResourceSetting() const { return this->ignoreResourceSetting_ != nullptr;};
    void deleteIgnoreResourceSetting() { this->ignoreResourceSetting_ = nullptr;};
    inline bool ignoreResourceSetting() const { DARABONBA_PTR_GET_DEFAULT(ignoreResourceSetting_, false) };
    inline GetDeploymentsByNameRequest& setIgnoreResourceSetting(bool ignoreResourceSetting) { DARABONBA_PTR_SET_VALUE(ignoreResourceSetting_, ignoreResourceSetting) };


  protected:
    std::shared_ptr<bool> ignoreJobSummary_ = nullptr;
    std::shared_ptr<bool> ignoreResourceSetting_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
