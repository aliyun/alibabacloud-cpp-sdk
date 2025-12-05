// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCUSTOMAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCUSTOMAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class GetCustomAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCustomAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomAgentId, customAgentId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCustomAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomAgentId, customAgentId_);
    };
    GetCustomAgentRequest() = default ;
    GetCustomAgentRequest(const GetCustomAgentRequest &) = default ;
    GetCustomAgentRequest(GetCustomAgentRequest &&) = default ;
    GetCustomAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCustomAgentRequest() = default ;
    GetCustomAgentRequest& operator=(const GetCustomAgentRequest &) = default ;
    GetCustomAgentRequest& operator=(GetCustomAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customAgentId_ == nullptr; };
    // customAgentId Field Functions 
    bool hasCustomAgentId() const { return this->customAgentId_ != nullptr;};
    void deleteCustomAgentId() { this->customAgentId_ = nullptr;};
    inline string customAgentId() const { DARABONBA_PTR_GET_DEFAULT(customAgentId_, "") };
    inline GetCustomAgentRequest& setCustomAgentId(string customAgentId) { DARABONBA_PTR_SET_VALUE(customAgentId_, customAgentId) };


  protected:
    std::shared_ptr<string> customAgentId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
