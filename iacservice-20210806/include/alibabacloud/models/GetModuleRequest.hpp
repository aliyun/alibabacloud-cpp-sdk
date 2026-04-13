// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMODULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class GetModuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModuleRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetModuleRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetModuleRequest() = default ;
    GetModuleRequest(const GetModuleRequest &) = default ;
    GetModuleRequest(GetModuleRequest &&) = default ;
    GetModuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModuleRequest() = default ;
    GetModuleRequest& operator=(const GetModuleRequest &) = default ;
    GetModuleRequest& operator=(GetModuleRequest &&) = default ;
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
