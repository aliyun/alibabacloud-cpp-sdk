// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRUNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRUNREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAgent20260801
{
namespace Models
{
  class GetRunRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRunRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetRunRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetRunRequest() = default ;
    GetRunRequest(const GetRunRequest &) = default ;
    GetRunRequest(GetRunRequest &&) = default ;
    GetRunRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRunRequest() = default ;
    GetRunRequest& operator=(const GetRunRequest &) = default ;
    GetRunRequest& operator=(GetRunRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAgent20260801
#endif
