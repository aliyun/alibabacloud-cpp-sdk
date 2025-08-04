// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNBINDUSERDESKTOPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNBINDUSERDESKTOPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class UnbindUserDesktopRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnbindUserDesktopRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopAgentIds, desktopAgentIds_);
      DARABONBA_PTR_TO_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_TO_JSON(DesktopIds, desktopIds_);
      DARABONBA_PTR_TO_JSON(Force, force_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(UserDesktopIds, userDesktopIds_);
    };
    friend void from_json(const Darabonba::Json& j, UnbindUserDesktopRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopAgentIds, desktopAgentIds_);
      DARABONBA_PTR_FROM_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_FROM_JSON(DesktopIds, desktopIds_);
      DARABONBA_PTR_FROM_JSON(Force, force_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(UserDesktopIds, userDesktopIds_);
    };
    UnbindUserDesktopRequest() = default ;
    UnbindUserDesktopRequest(const UnbindUserDesktopRequest &) = default ;
    UnbindUserDesktopRequest(UnbindUserDesktopRequest &&) = default ;
    UnbindUserDesktopRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnbindUserDesktopRequest() = default ;
    UnbindUserDesktopRequest& operator=(const UnbindUserDesktopRequest &) = default ;
    UnbindUserDesktopRequest& operator=(UnbindUserDesktopRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->desktopAgentIds_ != nullptr
        && this->desktopGroupId_ != nullptr && this->desktopIds_ != nullptr && this->force_ != nullptr && this->reason_ != nullptr && this->userDesktopIds_ != nullptr; };
    // desktopAgentIds Field Functions 
    bool hasDesktopAgentIds() const { return this->desktopAgentIds_ != nullptr;};
    void deleteDesktopAgentIds() { this->desktopAgentIds_ = nullptr;};
    inline const vector<string> & desktopAgentIds() const { DARABONBA_PTR_GET_CONST(desktopAgentIds_, vector<string>) };
    inline vector<string> desktopAgentIds() { DARABONBA_PTR_GET(desktopAgentIds_, vector<string>) };
    inline UnbindUserDesktopRequest& setDesktopAgentIds(const vector<string> & desktopAgentIds) { DARABONBA_PTR_SET_VALUE(desktopAgentIds_, desktopAgentIds) };
    inline UnbindUserDesktopRequest& setDesktopAgentIds(vector<string> && desktopAgentIds) { DARABONBA_PTR_SET_RVALUE(desktopAgentIds_, desktopAgentIds) };


    // desktopGroupId Field Functions 
    bool hasDesktopGroupId() const { return this->desktopGroupId_ != nullptr;};
    void deleteDesktopGroupId() { this->desktopGroupId_ = nullptr;};
    inline string desktopGroupId() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupId_, "") };
    inline UnbindUserDesktopRequest& setDesktopGroupId(string desktopGroupId) { DARABONBA_PTR_SET_VALUE(desktopGroupId_, desktopGroupId) };


    // desktopIds Field Functions 
    bool hasDesktopIds() const { return this->desktopIds_ != nullptr;};
    void deleteDesktopIds() { this->desktopIds_ = nullptr;};
    inline const vector<string> & desktopIds() const { DARABONBA_PTR_GET_CONST(desktopIds_, vector<string>) };
    inline vector<string> desktopIds() { DARABONBA_PTR_GET(desktopIds_, vector<string>) };
    inline UnbindUserDesktopRequest& setDesktopIds(const vector<string> & desktopIds) { DARABONBA_PTR_SET_VALUE(desktopIds_, desktopIds) };
    inline UnbindUserDesktopRequest& setDesktopIds(vector<string> && desktopIds) { DARABONBA_PTR_SET_RVALUE(desktopIds_, desktopIds) };


    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool force() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline UnbindUserDesktopRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline UnbindUserDesktopRequest& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // userDesktopIds Field Functions 
    bool hasUserDesktopIds() const { return this->userDesktopIds_ != nullptr;};
    void deleteUserDesktopIds() { this->userDesktopIds_ = nullptr;};
    inline const vector<string> & userDesktopIds() const { DARABONBA_PTR_GET_CONST(userDesktopIds_, vector<string>) };
    inline vector<string> userDesktopIds() { DARABONBA_PTR_GET(userDesktopIds_, vector<string>) };
    inline UnbindUserDesktopRequest& setUserDesktopIds(const vector<string> & userDesktopIds) { DARABONBA_PTR_SET_VALUE(userDesktopIds_, userDesktopIds) };
    inline UnbindUserDesktopRequest& setUserDesktopIds(vector<string> && userDesktopIds) { DARABONBA_PTR_SET_RVALUE(userDesktopIds_, userDesktopIds) };


  protected:
    std::shared_ptr<vector<string>> desktopAgentIds_ = nullptr;
    std::shared_ptr<string> desktopGroupId_ = nullptr;
    std::shared_ptr<vector<string>> desktopIds_ = nullptr;
    std::shared_ptr<bool> force_ = nullptr;
    std::shared_ptr<string> reason_ = nullptr;
    std::shared_ptr<vector<string>> userDesktopIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
