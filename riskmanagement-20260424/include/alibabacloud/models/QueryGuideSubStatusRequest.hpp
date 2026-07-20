// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYGUIDESUBSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYGUIDESUBSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RiskManagement20260424
{
namespace Models
{
  class QueryGuideSubStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryGuideSubStatusRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, QueryGuideSubStatusRequest& obj) { 
      (void)j; (void)obj; 
    };
    QueryGuideSubStatusRequest() = default ;
    QueryGuideSubStatusRequest(const QueryGuideSubStatusRequest &) = default ;
    QueryGuideSubStatusRequest(QueryGuideSubStatusRequest &&) = default ;
    QueryGuideSubStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryGuideSubStatusRequest() = default ;
    QueryGuideSubStatusRequest& operator=(const QueryGuideSubStatusRequest &) = default ;
    QueryGuideSubStatusRequest& operator=(QueryGuideSubStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif
