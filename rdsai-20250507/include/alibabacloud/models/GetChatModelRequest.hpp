// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHATMODELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCHATMODELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class GetChatModelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetChatModelRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetChatModelRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetChatModelRequest() = default ;
    GetChatModelRequest(const GetChatModelRequest &) = default ;
    GetChatModelRequest(GetChatModelRequest &&) = default ;
    GetChatModelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetChatModelRequest() = default ;
    GetChatModelRequest& operator=(const GetChatModelRequest &) = default ;
    GetChatModelRequest& operator=(GetChatModelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
