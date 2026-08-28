// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESKILLDRAFTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESKILLDRAFTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class DeleteSkillDraftRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSkillDraftRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DeleteSkillDraftRequest& obj) { 
      (void)j; (void)obj; 
    };
    DeleteSkillDraftRequest() = default ;
    DeleteSkillDraftRequest(const DeleteSkillDraftRequest &) = default ;
    DeleteSkillDraftRequest(DeleteSkillDraftRequest &&) = default ;
    DeleteSkillDraftRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSkillDraftRequest() = default ;
    DeleteSkillDraftRequest& operator=(const DeleteSkillDraftRequest &) = default ;
    DeleteSkillDraftRequest& operator=(DeleteSkillDraftRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
