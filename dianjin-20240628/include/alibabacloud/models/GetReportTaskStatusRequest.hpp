// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREPORTTASKSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETREPORTTASKSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetReportTaskStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetReportTaskStatusRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetReportTaskStatusRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetReportTaskStatusRequest() = default ;
    GetReportTaskStatusRequest(const GetReportTaskStatusRequest &) = default ;
    GetReportTaskStatusRequest(GetReportTaskStatusRequest &&) = default ;
    GetReportTaskStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetReportTaskStatusRequest() = default ;
    GetReportTaskStatusRequest& operator=(const GetReportTaskStatusRequest &) = default ;
    GetReportTaskStatusRequest& operator=(GetReportTaskStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
