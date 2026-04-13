// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREGISTRYMODULEVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETREGISTRYMODULEVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class GetRegistryModuleVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRegistryModuleVersionRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetRegistryModuleVersionRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetRegistryModuleVersionRequest() = default ;
    GetRegistryModuleVersionRequest(const GetRegistryModuleVersionRequest &) = default ;
    GetRegistryModuleVersionRequest(GetRegistryModuleVersionRequest &&) = default ;
    GetRegistryModuleVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRegistryModuleVersionRequest() = default ;
    GetRegistryModuleVersionRequest& operator=(const GetRegistryModuleVersionRequest &) = default ;
    GetRegistryModuleVersionRequest& operator=(GetRegistryModuleVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
