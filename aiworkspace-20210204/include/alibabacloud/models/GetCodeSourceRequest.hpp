// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCODESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCODESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class GetCodeSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCodeSourceRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetCodeSourceRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetCodeSourceRequest() = default ;
    GetCodeSourceRequest(const GetCodeSourceRequest &) = default ;
    GetCodeSourceRequest(GetCodeSourceRequest &&) = default ;
    GetCodeSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCodeSourceRequest() = default ;
    GetCodeSourceRequest& operator=(const GetCodeSourceRequest &) = default ;
    GetCodeSourceRequest& operator=(GetCodeSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
