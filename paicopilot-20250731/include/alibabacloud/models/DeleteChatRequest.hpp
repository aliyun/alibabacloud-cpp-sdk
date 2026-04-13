// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECHATREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECHATREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAICopilot20250731
{
namespace Models
{
  class DeleteChatRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteChatRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DeleteChatRequest& obj) { 
      (void)j; (void)obj; 
    };
    DeleteChatRequest() = default ;
    DeleteChatRequest(const DeleteChatRequest &) = default ;
    DeleteChatRequest(DeleteChatRequest &&) = default ;
    DeleteChatRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteChatRequest() = default ;
    DeleteChatRequest& operator=(const DeleteChatRequest &) = default ;
    DeleteChatRequest& operator=(DeleteChatRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAICopilot20250731
#endif
