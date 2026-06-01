// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRAYHISTORYSERVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRAYHISTORYSERVERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class GetRayHistoryServerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRayHistoryServerRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetRayHistoryServerRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetRayHistoryServerRequest() = default ;
    GetRayHistoryServerRequest(const GetRayHistoryServerRequest &) = default ;
    GetRayHistoryServerRequest(GetRayHistoryServerRequest &&) = default ;
    GetRayHistoryServerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRayHistoryServerRequest() = default ;
    GetRayHistoryServerRequest& operator=(const GetRayHistoryServerRequest &) = default ;
    GetRayHistoryServerRequest& operator=(GetRayHistoryServerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
