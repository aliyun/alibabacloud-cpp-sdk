// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WEBAPPLICATIONWITHSTATUS_HPP_
#define ALIBABACLOUD_MODELS_WEBAPPLICATIONWITHSTATUS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/WebApplicationStatus.hpp>
#include <alibabacloud/models/WebApplication.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class WebApplicationWithStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WebApplicationWithStatus& obj) { 
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(WebApplication, webApplication_);
    };
    friend void from_json(const Darabonba::Json& j, WebApplicationWithStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(WebApplication, webApplication_);
    };
    WebApplicationWithStatus() = default ;
    WebApplicationWithStatus(const WebApplicationWithStatus &) = default ;
    WebApplicationWithStatus(WebApplicationWithStatus &&) = default ;
    WebApplicationWithStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WebApplicationWithStatus() = default ;
    WebApplicationWithStatus& operator=(const WebApplicationWithStatus &) = default ;
    WebApplicationWithStatus& operator=(WebApplicationWithStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->status_ == nullptr
        && return this->webApplication_ == nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline const WebApplicationStatus & status() const { DARABONBA_PTR_GET_CONST(status_, WebApplicationStatus) };
    inline WebApplicationStatus status() { DARABONBA_PTR_GET(status_, WebApplicationStatus) };
    inline WebApplicationWithStatus& setStatus(const WebApplicationStatus & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
    inline WebApplicationWithStatus& setStatus(WebApplicationStatus && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


    // webApplication Field Functions 
    bool hasWebApplication() const { return this->webApplication_ != nullptr;};
    void deleteWebApplication() { this->webApplication_ = nullptr;};
    inline const WebApplication & webApplication() const { DARABONBA_PTR_GET_CONST(webApplication_, WebApplication) };
    inline WebApplication webApplication() { DARABONBA_PTR_GET(webApplication_, WebApplication) };
    inline WebApplicationWithStatus& setWebApplication(const WebApplication & webApplication) { DARABONBA_PTR_SET_VALUE(webApplication_, webApplication) };
    inline WebApplicationWithStatus& setWebApplication(WebApplication && webApplication) { DARABONBA_PTR_SET_RVALUE(webApplication_, webApplication) };


  protected:
    std::shared_ptr<WebApplicationStatus> status_ = nullptr;
    std::shared_ptr<WebApplication> webApplication_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
