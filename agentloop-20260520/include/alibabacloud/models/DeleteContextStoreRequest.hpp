// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECONTEXTSTOREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECONTEXTSTOREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class DeleteContextStoreRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteContextStoreRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DeleteContextStoreRequest& obj) { 
      (void)j; (void)obj; 
    };
    DeleteContextStoreRequest() = default ;
    DeleteContextStoreRequest(const DeleteContextStoreRequest &) = default ;
    DeleteContextStoreRequest(DeleteContextStoreRequest &&) = default ;
    DeleteContextStoreRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteContextStoreRequest() = default ;
    DeleteContextStoreRequest& operator=(const DeleteContextStoreRequest &) = default ;
    DeleteContextStoreRequest& operator=(DeleteContextStoreRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
