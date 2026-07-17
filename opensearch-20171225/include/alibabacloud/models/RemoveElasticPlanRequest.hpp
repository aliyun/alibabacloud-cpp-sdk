// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEELASTICPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEELASTICPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class RemoveElasticPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveElasticPlanRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, RemoveElasticPlanRequest& obj) { 
      (void)j; (void)obj; 
    };
    RemoveElasticPlanRequest() = default ;
    RemoveElasticPlanRequest(const RemoveElasticPlanRequest &) = default ;
    RemoveElasticPlanRequest(RemoveElasticPlanRequest &&) = default ;
    RemoveElasticPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveElasticPlanRequest() = default ;
    RemoveElasticPlanRequest& operator=(const RemoveElasticPlanRequest &) = default ;
    RemoveElasticPlanRequest& operator=(RemoveElasticPlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
