// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTHREADREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTHREADREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetThreadRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetThreadRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetThreadRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetThreadRequest() = default ;
    GetThreadRequest(const GetThreadRequest &) = default ;
    GetThreadRequest(GetThreadRequest &&) = default ;
    GetThreadRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetThreadRequest() = default ;
    GetThreadRequest& operator=(const GetThreadRequest &) = default ;
    GetThreadRequest& operator=(GetThreadRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
