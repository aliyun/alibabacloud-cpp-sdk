// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECODESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECODESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class DeleteCodeSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCodeSourceRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DeleteCodeSourceRequest& obj) { 
      (void)j; (void)obj; 
    };
    DeleteCodeSourceRequest() = default ;
    DeleteCodeSourceRequest(const DeleteCodeSourceRequest &) = default ;
    DeleteCodeSourceRequest(DeleteCodeSourceRequest &&) = default ;
    DeleteCodeSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCodeSourceRequest() = default ;
    DeleteCodeSourceRequest& operator=(const DeleteCodeSourceRequest &) = default ;
    DeleteCodeSourceRequest& operator=(DeleteCodeSourceRequest &&) = default ;
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
