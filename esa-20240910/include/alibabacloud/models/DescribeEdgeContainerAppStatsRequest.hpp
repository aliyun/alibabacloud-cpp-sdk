// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEDGECONTAINERAPPSTATSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEDGECONTAINERAPPSTATSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeEdgeContainerAppStatsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEdgeContainerAppStatsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(App, app_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Fields, fields_);
      DARABONBA_PTR_TO_JSON(Isp, isp_);
      DARABONBA_PTR_TO_JSON(Locate, locate_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Tenant, tenant_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEdgeContainerAppStatsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(App, app_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Fields, fields_);
      DARABONBA_PTR_FROM_JSON(Isp, isp_);
      DARABONBA_PTR_FROM_JSON(Locate, locate_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Tenant, tenant_);
    };
    DescribeEdgeContainerAppStatsRequest() = default ;
    DescribeEdgeContainerAppStatsRequest(const DescribeEdgeContainerAppStatsRequest &) = default ;
    DescribeEdgeContainerAppStatsRequest(DescribeEdgeContainerAppStatsRequest &&) = default ;
    DescribeEdgeContainerAppStatsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEdgeContainerAppStatsRequest() = default ;
    DescribeEdgeContainerAppStatsRequest& operator=(const DescribeEdgeContainerAppStatsRequest &) = default ;
    DescribeEdgeContainerAppStatsRequest& operator=(DescribeEdgeContainerAppStatsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->app_ == nullptr
        && this->endTime_ == nullptr && this->fields_ == nullptr && this->isp_ == nullptr && this->locate_ == nullptr && this->startTime_ == nullptr
        && this->tenant_ == nullptr; };
    // app Field Functions 
    bool hasApp() const { return this->app_ != nullptr;};
    void deleteApp() { this->app_ = nullptr;};
    inline string getApp() const { DARABONBA_PTR_GET_DEFAULT(app_, "") };
    inline DescribeEdgeContainerAppStatsRequest& setApp(string app) { DARABONBA_PTR_SET_VALUE(app_, app) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeEdgeContainerAppStatsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline string getFields() const { DARABONBA_PTR_GET_DEFAULT(fields_, "") };
    inline DescribeEdgeContainerAppStatsRequest& setFields(string fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };


    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline string getIsp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
    inline DescribeEdgeContainerAppStatsRequest& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


    // locate Field Functions 
    bool hasLocate() const { return this->locate_ != nullptr;};
    void deleteLocate() { this->locate_ = nullptr;};
    inline string getLocate() const { DARABONBA_PTR_GET_DEFAULT(locate_, "") };
    inline DescribeEdgeContainerAppStatsRequest& setLocate(string locate) { DARABONBA_PTR_SET_VALUE(locate_, locate) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeEdgeContainerAppStatsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tenant Field Functions 
    bool hasTenant() const { return this->tenant_ != nullptr;};
    void deleteTenant() { this->tenant_ = nullptr;};
    inline string getTenant() const { DARABONBA_PTR_GET_DEFAULT(tenant_, "") };
    inline DescribeEdgeContainerAppStatsRequest& setTenant(string tenant) { DARABONBA_PTR_SET_VALUE(tenant_, tenant) };


  protected:
    // This parameter is required.
    shared_ptr<string> app_ {};
    shared_ptr<string> endTime_ {};
    // This parameter is required.
    shared_ptr<string> fields_ {};
    shared_ptr<string> isp_ {};
    shared_ptr<string> locate_ {};
    shared_ptr<string> startTime_ {};
    // The tenant ID.
    shared_ptr<string> tenant_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
