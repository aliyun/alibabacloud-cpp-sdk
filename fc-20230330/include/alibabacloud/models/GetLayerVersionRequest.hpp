// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLAYERVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETLAYERVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class GetLayerVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLayerVersionRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetLayerVersionRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetLayerVersionRequest() = default ;
    GetLayerVersionRequest(const GetLayerVersionRequest &) = default ;
    GetLayerVersionRequest(GetLayerVersionRequest &&) = default ;
    GetLayerVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLayerVersionRequest() = default ;
    GetLayerVersionRequest& operator=(const GetLayerVersionRequest &) = default ;
    GetLayerVersionRequest& operator=(GetLayerVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
