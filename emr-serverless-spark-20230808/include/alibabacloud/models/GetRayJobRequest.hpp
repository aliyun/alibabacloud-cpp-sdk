// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRAYJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRAYJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class GetRayJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRayJobRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetRayJobRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetRayJobRequest() = default ;
    GetRayJobRequest(const GetRayJobRequest &) = default ;
    GetRayJobRequest(GetRayJobRequest &&) = default ;
    GetRayJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRayJobRequest() = default ;
    GetRayJobRequest& operator=(const GetRayJobRequest &) = default ;
    GetRayJobRequest& operator=(GetRayJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
