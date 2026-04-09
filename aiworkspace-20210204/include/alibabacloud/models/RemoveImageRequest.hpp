// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class RemoveImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveImageRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, RemoveImageRequest& obj) { 
      (void)j; (void)obj; 
    };
    RemoveImageRequest() = default ;
    RemoveImageRequest(const RemoveImageRequest &) = default ;
    RemoveImageRequest(RemoveImageRequest &&) = default ;
    RemoveImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveImageRequest() = default ;
    RemoveImageRequest& operator=(const RemoveImageRequest &) = default ;
    RemoveImageRequest& operator=(RemoveImageRequest &&) = default ;
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
