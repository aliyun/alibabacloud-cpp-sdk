// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLISHIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUBLISHIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class PublishImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublishImageRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, PublishImageRequest& obj) { 
      (void)j; (void)obj; 
    };
    PublishImageRequest() = default ;
    PublishImageRequest(const PublishImageRequest &) = default ;
    PublishImageRequest(PublishImageRequest &&) = default ;
    PublishImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublishImageRequest() = default ;
    PublishImageRequest& operator=(const PublishImageRequest &) = default ;
    PublishImageRequest& operator=(PublishImageRequest &&) = default ;
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
