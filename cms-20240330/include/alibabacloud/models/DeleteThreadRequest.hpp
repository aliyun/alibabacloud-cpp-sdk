// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETETHREADREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETETHREADREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class DeleteThreadRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteThreadRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DeleteThreadRequest& obj) { 
      (void)j; (void)obj; 
    };
    DeleteThreadRequest() = default ;
    DeleteThreadRequest(const DeleteThreadRequest &) = default ;
    DeleteThreadRequest(DeleteThreadRequest &&) = default ;
    DeleteThreadRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteThreadRequest() = default ;
    DeleteThreadRequest& operator=(const DeleteThreadRequest &) = default ;
    DeleteThreadRequest& operator=(DeleteThreadRequest &&) = default ;
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
