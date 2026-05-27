// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMCPSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMCPSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace STAROps20260428
{
namespace Models
{
  class GetMcpServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMcpServiceRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetMcpServiceRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetMcpServiceRequest() = default ;
    GetMcpServiceRequest(const GetMcpServiceRequest &) = default ;
    GetMcpServiceRequest(GetMcpServiceRequest &&) = default ;
    GetMcpServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMcpServiceRequest() = default ;
    GetMcpServiceRequest& operator=(const GetMcpServiceRequest &) = default ;
    GetMcpServiceRequest& operator=(GetMcpServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace STAROps20260428
#endif
