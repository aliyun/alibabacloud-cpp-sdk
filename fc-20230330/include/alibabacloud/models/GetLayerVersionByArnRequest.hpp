// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLAYERVERSIONBYARNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETLAYERVERSIONBYARNREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class GetLayerVersionByArnRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLayerVersionByArnRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetLayerVersionByArnRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetLayerVersionByArnRequest() = default ;
    GetLayerVersionByArnRequest(const GetLayerVersionByArnRequest &) = default ;
    GetLayerVersionByArnRequest(GetLayerVersionByArnRequest &&) = default ;
    GetLayerVersionByArnRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLayerVersionByArnRequest() = default ;
    GetLayerVersionByArnRequest& operator=(const GetLayerVersionByArnRequest &) = default ;
    GetLayerVersionByArnRequest& operator=(GetLayerVersionByArnRequest &&) = default ;
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
