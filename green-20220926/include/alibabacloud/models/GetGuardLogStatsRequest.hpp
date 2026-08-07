// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGUARDLOGSTATSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETGUARDLOGSTATSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetGuardLogStatsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGuardLogStatsRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetGuardLogStatsRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetGuardLogStatsRequest() = default ;
    GetGuardLogStatsRequest(const GetGuardLogStatsRequest &) = default ;
    GetGuardLogStatsRequest(GetGuardLogStatsRequest &&) = default ;
    GetGuardLogStatsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGuardLogStatsRequest() = default ;
    GetGuardLogStatsRequest& operator=(const GetGuardLogStatsRequest &) = default ;
    GetGuardLogStatsRequest& operator=(GetGuardLogStatsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
