// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEMODELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEMODELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class GetInstanceModelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceModelRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceModelRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetInstanceModelRequest() = default ;
    GetInstanceModelRequest(const GetInstanceModelRequest &) = default ;
    GetInstanceModelRequest(GetInstanceModelRequest &&) = default ;
    GetInstanceModelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceModelRequest() = default ;
    GetInstanceModelRequest& operator=(const GetInstanceModelRequest &) = default ;
    GetInstanceModelRequest& operator=(GetInstanceModelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
