// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SWITCHAPIREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SWITCHAPIREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class SwitchApiRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SwitchApiRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(HistoryVersion, historyVersion_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(StageName, stageName_);
    };
    friend void from_json(const Darabonba::Json& j, SwitchApiRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(HistoryVersion, historyVersion_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(StageName, stageName_);
    };
    SwitchApiRequest() = default ;
    SwitchApiRequest(const SwitchApiRequest &) = default ;
    SwitchApiRequest(SwitchApiRequest &&) = default ;
    SwitchApiRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SwitchApiRequest() = default ;
    SwitchApiRequest& operator=(const SwitchApiRequest &) = default ;
    SwitchApiRequest& operator=(SwitchApiRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiId_ == nullptr
        && return this->description_ == nullptr && return this->groupId_ == nullptr && return this->historyVersion_ == nullptr && return this->securityToken_ == nullptr && return this->stageName_ == nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline SwitchApiRequest& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SwitchApiRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline SwitchApiRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // historyVersion Field Functions 
    bool hasHistoryVersion() const { return this->historyVersion_ != nullptr;};
    void deleteHistoryVersion() { this->historyVersion_ = nullptr;};
    inline string historyVersion() const { DARABONBA_PTR_GET_DEFAULT(historyVersion_, "") };
    inline SwitchApiRequest& setHistoryVersion(string historyVersion) { DARABONBA_PTR_SET_VALUE(historyVersion_, historyVersion) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline SwitchApiRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // stageName Field Functions 
    bool hasStageName() const { return this->stageName_ != nullptr;};
    void deleteStageName() { this->stageName_ = nullptr;};
    inline string stageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
    inline SwitchApiRequest& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


  protected:
    // The API ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> apiId_ = nullptr;
    // The description. The description can be up to 200 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> description_ = nullptr;
    // The API group ID.
    std::shared_ptr<string> groupId_ = nullptr;
    // The historical version number of the API.
    // 
    // This parameter is required.
    std::shared_ptr<string> historyVersion_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // The environment. Valid values:
    // 
    // *   **RELEASE**: the production environment
    // *   **PRE**: the staging environment
    // *   **TEST**: the test environment
    // 
    // This parameter is required.
    std::shared_ptr<string> stageName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
