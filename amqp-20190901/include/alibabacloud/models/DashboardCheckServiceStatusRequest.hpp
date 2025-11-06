// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DASHBOARDCHECKSERVICESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DASHBOARDCHECKSERVICESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class DashboardCheckServiceStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DashboardCheckServiceStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConsoleSessionId, consoleSessionId_);
    };
    friend void from_json(const Darabonba::Json& j, DashboardCheckServiceStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsoleSessionId, consoleSessionId_);
    };
    DashboardCheckServiceStatusRequest() = default ;
    DashboardCheckServiceStatusRequest(const DashboardCheckServiceStatusRequest &) = default ;
    DashboardCheckServiceStatusRequest(DashboardCheckServiceStatusRequest &&) = default ;
    DashboardCheckServiceStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DashboardCheckServiceStatusRequest() = default ;
    DashboardCheckServiceStatusRequest& operator=(const DashboardCheckServiceStatusRequest &) = default ;
    DashboardCheckServiceStatusRequest& operator=(DashboardCheckServiceStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consoleSessionId_ == nullptr; };
    // consoleSessionId Field Functions 
    bool hasConsoleSessionId() const { return this->consoleSessionId_ != nullptr;};
    void deleteConsoleSessionId() { this->consoleSessionId_ = nullptr;};
    inline string consoleSessionId() const { DARABONBA_PTR_GET_DEFAULT(consoleSessionId_, "") };
    inline DashboardCheckServiceStatusRequest& setConsoleSessionId(string consoleSessionId) { DARABONBA_PTR_SET_VALUE(consoleSessionId_, consoleSessionId) };


  protected:
    std::shared_ptr<string> consoleSessionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
