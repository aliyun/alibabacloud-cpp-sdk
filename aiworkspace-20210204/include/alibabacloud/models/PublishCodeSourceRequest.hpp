// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLISHCODESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUBLISHCODESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class PublishCodeSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublishCodeSourceRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, PublishCodeSourceRequest& obj) { 
      (void)j; (void)obj; 
    };
    PublishCodeSourceRequest() = default ;
    PublishCodeSourceRequest(const PublishCodeSourceRequest &) = default ;
    PublishCodeSourceRequest(PublishCodeSourceRequest &&) = default ;
    PublishCodeSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublishCodeSourceRequest() = default ;
    PublishCodeSourceRequest& operator=(const PublishCodeSourceRequest &) = default ;
    PublishCodeSourceRequest& operator=(PublishCodeSourceRequest &&) = default ;
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
