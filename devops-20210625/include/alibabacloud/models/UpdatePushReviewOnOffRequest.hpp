// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPUSHREVIEWONOFFREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPUSHREVIEWONOFFREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class UpdatePushReviewOnOffRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePushReviewOnOffRequest& obj) { 
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
      DARABONBA_PTR_TO_JSON(trunkMode, trunkMode_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePushReviewOnOffRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
      DARABONBA_PTR_FROM_JSON(trunkMode, trunkMode_);
    };
    UpdatePushReviewOnOffRequest() = default ;
    UpdatePushReviewOnOffRequest(const UpdatePushReviewOnOffRequest &) = default ;
    UpdatePushReviewOnOffRequest(UpdatePushReviewOnOffRequest &&) = default ;
    UpdatePushReviewOnOffRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePushReviewOnOffRequest() = default ;
    UpdatePushReviewOnOffRequest& operator=(const UpdatePushReviewOnOffRequest &) = default ;
    UpdatePushReviewOnOffRequest& operator=(UpdatePushReviewOnOffRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->organizationId_ == nullptr
        && return this->trunkMode_ == nullptr; };
    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline UpdatePushReviewOnOffRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    // trunkMode Field Functions 
    bool hasTrunkMode() const { return this->trunkMode_ != nullptr;};
    void deleteTrunkMode() { this->trunkMode_ = nullptr;};
    inline bool trunkMode() const { DARABONBA_PTR_GET_DEFAULT(trunkMode_, false) };
    inline UpdatePushReviewOnOffRequest& setTrunkMode(bool trunkMode) { DARABONBA_PTR_SET_VALUE(trunkMode_, trunkMode) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> organizationId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> trunkMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
