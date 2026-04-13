// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDETECTCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDETECTCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class GetDetectConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDetectConfigRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetDetectConfigRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetDetectConfigRequest() = default ;
    GetDetectConfigRequest(const GetDetectConfigRequest &) = default ;
    GetDetectConfigRequest(GetDetectConfigRequest &&) = default ;
    GetDetectConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDetectConfigRequest() = default ;
    GetDetectConfigRequest& operator=(const GetDetectConfigRequest &) = default ;
    GetDetectConfigRequest& operator=(GetDetectConfigRequest &&) = default ;
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
