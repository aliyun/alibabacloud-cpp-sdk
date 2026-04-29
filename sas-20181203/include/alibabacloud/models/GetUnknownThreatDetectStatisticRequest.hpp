// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUNKNOWNTHREATDETECTSTATISTICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUNKNOWNTHREATDETECTSTATISTICREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetUnknownThreatDetectStatisticRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUnknownThreatDetectStatisticRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetUnknownThreatDetectStatisticRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetUnknownThreatDetectStatisticRequest() = default ;
    GetUnknownThreatDetectStatisticRequest(const GetUnknownThreatDetectStatisticRequest &) = default ;
    GetUnknownThreatDetectStatisticRequest(GetUnknownThreatDetectStatisticRequest &&) = default ;
    GetUnknownThreatDetectStatisticRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUnknownThreatDetectStatisticRequest() = default ;
    GetUnknownThreatDetectStatisticRequest& operator=(const GetUnknownThreatDetectStatisticRequest &) = default ;
    GetUnknownThreatDetectStatisticRequest& operator=(GetUnknownThreatDetectStatisticRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
