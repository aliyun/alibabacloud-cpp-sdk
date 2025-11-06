// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DASHBOARDLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DASHBOARDLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class DashboardListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DashboardListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConsoleSessionId, consoleSessionId_);
      DARABONBA_PTR_TO_JSON(DashboardName, dashboardName_);
    };
    friend void from_json(const Darabonba::Json& j, DashboardListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsoleSessionId, consoleSessionId_);
      DARABONBA_PTR_FROM_JSON(DashboardName, dashboardName_);
    };
    DashboardListRequest() = default ;
    DashboardListRequest(const DashboardListRequest &) = default ;
    DashboardListRequest(DashboardListRequest &&) = default ;
    DashboardListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DashboardListRequest() = default ;
    DashboardListRequest& operator=(const DashboardListRequest &) = default ;
    DashboardListRequest& operator=(DashboardListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consoleSessionId_ == nullptr
        && return this->dashboardName_ == nullptr; };
    // consoleSessionId Field Functions 
    bool hasConsoleSessionId() const { return this->consoleSessionId_ != nullptr;};
    void deleteConsoleSessionId() { this->consoleSessionId_ = nullptr;};
    inline string consoleSessionId() const { DARABONBA_PTR_GET_DEFAULT(consoleSessionId_, "") };
    inline DashboardListRequest& setConsoleSessionId(string consoleSessionId) { DARABONBA_PTR_SET_VALUE(consoleSessionId_, consoleSessionId) };


    // dashboardName Field Functions 
    bool hasDashboardName() const { return this->dashboardName_ != nullptr;};
    void deleteDashboardName() { this->dashboardName_ = nullptr;};
    inline string dashboardName() const { DARABONBA_PTR_GET_DEFAULT(dashboardName_, "") };
    inline DashboardListRequest& setDashboardName(string dashboardName) { DARABONBA_PTR_SET_VALUE(dashboardName_, dashboardName) };


  protected:
    std::shared_ptr<string> consoleSessionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> dashboardName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
