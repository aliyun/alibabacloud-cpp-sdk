// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MERGEMERGEREQUESTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MERGEMERGEREQUESTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class MergeMergeRequestRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MergeMergeRequestRequest& obj) { 
      DARABONBA_PTR_TO_JSON(accessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(mergeMessage, mergeMessage_);
      DARABONBA_PTR_TO_JSON(mergeType, mergeType_);
      DARABONBA_PTR_TO_JSON(removeSourceBranch, removeSourceBranch_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
    };
    friend void from_json(const Darabonba::Json& j, MergeMergeRequestRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(accessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(mergeMessage, mergeMessage_);
      DARABONBA_PTR_FROM_JSON(mergeType, mergeType_);
      DARABONBA_PTR_FROM_JSON(removeSourceBranch, removeSourceBranch_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
    };
    MergeMergeRequestRequest() = default ;
    MergeMergeRequestRequest(const MergeMergeRequestRequest &) = default ;
    MergeMergeRequestRequest(MergeMergeRequestRequest &&) = default ;
    MergeMergeRequestRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MergeMergeRequestRequest() = default ;
    MergeMergeRequestRequest& operator=(const MergeMergeRequestRequest &) = default ;
    MergeMergeRequestRequest& operator=(MergeMergeRequestRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessToken_ == nullptr
        && return this->mergeMessage_ == nullptr && return this->mergeType_ == nullptr && return this->removeSourceBranch_ == nullptr && return this->organizationId_ == nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline MergeMergeRequestRequest& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // mergeMessage Field Functions 
    bool hasMergeMessage() const { return this->mergeMessage_ != nullptr;};
    void deleteMergeMessage() { this->mergeMessage_ = nullptr;};
    inline string mergeMessage() const { DARABONBA_PTR_GET_DEFAULT(mergeMessage_, "") };
    inline MergeMergeRequestRequest& setMergeMessage(string mergeMessage) { DARABONBA_PTR_SET_VALUE(mergeMessage_, mergeMessage) };


    // mergeType Field Functions 
    bool hasMergeType() const { return this->mergeType_ != nullptr;};
    void deleteMergeType() { this->mergeType_ = nullptr;};
    inline string mergeType() const { DARABONBA_PTR_GET_DEFAULT(mergeType_, "") };
    inline MergeMergeRequestRequest& setMergeType(string mergeType) { DARABONBA_PTR_SET_VALUE(mergeType_, mergeType) };


    // removeSourceBranch Field Functions 
    bool hasRemoveSourceBranch() const { return this->removeSourceBranch_ != nullptr;};
    void deleteRemoveSourceBranch() { this->removeSourceBranch_ = nullptr;};
    inline bool removeSourceBranch() const { DARABONBA_PTR_GET_DEFAULT(removeSourceBranch_, false) };
    inline MergeMergeRequestRequest& setRemoveSourceBranch(bool removeSourceBranch) { DARABONBA_PTR_SET_VALUE(removeSourceBranch_, removeSourceBranch) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline MergeMergeRequestRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


  protected:
    std::shared_ptr<string> accessToken_ = nullptr;
    std::shared_ptr<string> mergeMessage_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> mergeType_ = nullptr;
    std::shared_ptr<bool> removeSourceBranch_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> organizationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
