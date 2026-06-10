// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ROLLBACKAPPINSTANCEPUBLISHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ROLLBACKAPPINSTANCEPUBLISHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class RollbackAppInstancePublishRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RollbackAppInstancePublishRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(DeployChannel, deployChannel_);
      DARABONBA_PTR_TO_JSON(PublishNumber, publishNumber_);
      DARABONBA_PTR_TO_JSON(QuickRollback, quickRollback_);
    };
    friend void from_json(const Darabonba::Json& j, RollbackAppInstancePublishRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(DeployChannel, deployChannel_);
      DARABONBA_PTR_FROM_JSON(PublishNumber, publishNumber_);
      DARABONBA_PTR_FROM_JSON(QuickRollback, quickRollback_);
    };
    RollbackAppInstancePublishRequest() = default ;
    RollbackAppInstancePublishRequest(const RollbackAppInstancePublishRequest &) = default ;
    RollbackAppInstancePublishRequest(RollbackAppInstancePublishRequest &&) = default ;
    RollbackAppInstancePublishRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RollbackAppInstancePublishRequest() = default ;
    RollbackAppInstancePublishRequest& operator=(const RollbackAppInstancePublishRequest &) = default ;
    RollbackAppInstancePublishRequest& operator=(RollbackAppInstancePublishRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->deployChannel_ == nullptr && this->publishNumber_ == nullptr && this->quickRollback_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline RollbackAppInstancePublishRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // deployChannel Field Functions 
    bool hasDeployChannel() const { return this->deployChannel_ != nullptr;};
    void deleteDeployChannel() { this->deployChannel_ = nullptr;};
    inline string getDeployChannel() const { DARABONBA_PTR_GET_DEFAULT(deployChannel_, "") };
    inline RollbackAppInstancePublishRequest& setDeployChannel(string deployChannel) { DARABONBA_PTR_SET_VALUE(deployChannel_, deployChannel) };


    // publishNumber Field Functions 
    bool hasPublishNumber() const { return this->publishNumber_ != nullptr;};
    void deletePublishNumber() { this->publishNumber_ = nullptr;};
    inline string getPublishNumber() const { DARABONBA_PTR_GET_DEFAULT(publishNumber_, "") };
    inline RollbackAppInstancePublishRequest& setPublishNumber(string publishNumber) { DARABONBA_PTR_SET_VALUE(publishNumber_, publishNumber) };


    // quickRollback Field Functions 
    bool hasQuickRollback() const { return this->quickRollback_ != nullptr;};
    void deleteQuickRollback() { this->quickRollback_ = nullptr;};
    inline string getQuickRollback() const { DARABONBA_PTR_GET_DEFAULT(quickRollback_, "") };
    inline RollbackAppInstancePublishRequest& setQuickRollback(string quickRollback) { DARABONBA_PTR_SET_VALUE(quickRollback_, quickRollback) };


  protected:
    // Business ID
    shared_ptr<string> bizId_ {};
    // Deployment channel
    shared_ptr<string> deployChannel_ {};
    // Publish number
    shared_ptr<string> publishNumber_ {};
    // Quick rollback.
    shared_ptr<string> quickRollback_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
