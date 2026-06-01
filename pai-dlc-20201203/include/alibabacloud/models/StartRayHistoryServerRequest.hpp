// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTRAYHISTORYSERVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTRAYHISTORYSERVERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class StartRayHistoryServerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartRayHistoryServerRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, StartRayHistoryServerRequest& obj) { 
      (void)j; (void)obj; 
    };
    StartRayHistoryServerRequest() = default ;
    StartRayHistoryServerRequest(const StartRayHistoryServerRequest &) = default ;
    StartRayHistoryServerRequest(StartRayHistoryServerRequest &&) = default ;
    StartRayHistoryServerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartRayHistoryServerRequest() = default ;
    StartRayHistoryServerRequest& operator=(const StartRayHistoryServerRequest &) = default ;
    StartRayHistoryServerRequest& operator=(StartRayHistoryServerRequest &&) = default ;
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
