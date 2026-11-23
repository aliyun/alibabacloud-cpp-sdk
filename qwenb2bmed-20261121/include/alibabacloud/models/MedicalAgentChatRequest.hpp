// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEDICALAGENTCHATREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MEDICALAGENTCHATREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QwenB2BMed20261121
{
namespace Models
{
  class MedicalAgentChatRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MedicalAgentChatRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, MedicalAgentChatRequest& obj) { 
      (void)j; (void)obj; 
    };
    MedicalAgentChatRequest() = default ;
    MedicalAgentChatRequest(const MedicalAgentChatRequest &) = default ;
    MedicalAgentChatRequest(MedicalAgentChatRequest &&) = default ;
    MedicalAgentChatRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MedicalAgentChatRequest() = default ;
    MedicalAgentChatRequest& operator=(const MedicalAgentChatRequest &) = default ;
    MedicalAgentChatRequest& operator=(MedicalAgentChatRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QwenB2BMed20261121
#endif
