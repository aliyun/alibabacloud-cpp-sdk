// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLISHAPPINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUBLISHAPPINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class PublishAppInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublishAppInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(DeployChannel, deployChannel_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(LogicalNumber, logicalNumber_);
      DARABONBA_PTR_TO_JSON(PublishNumber, publishNumber_);
      DARABONBA_PTR_TO_JSON(WeappAction, weappAction_);
    };
    friend void from_json(const Darabonba::Json& j, PublishAppInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(DeployChannel, deployChannel_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(LogicalNumber, logicalNumber_);
      DARABONBA_PTR_FROM_JSON(PublishNumber, publishNumber_);
      DARABONBA_PTR_FROM_JSON(WeappAction, weappAction_);
    };
    PublishAppInstanceRequest() = default ;
    PublishAppInstanceRequest(const PublishAppInstanceRequest &) = default ;
    PublishAppInstanceRequest(PublishAppInstanceRequest &&) = default ;
    PublishAppInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublishAppInstanceRequest() = default ;
    PublishAppInstanceRequest& operator=(const PublishAppInstanceRequest &) = default ;
    PublishAppInstanceRequest& operator=(PublishAppInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->deployChannel_ == nullptr && this->description_ == nullptr && this->logicalNumber_ == nullptr && this->publishNumber_ == nullptr && this->weappAction_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline PublishAppInstanceRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // deployChannel Field Functions 
    bool hasDeployChannel() const { return this->deployChannel_ != nullptr;};
    void deleteDeployChannel() { this->deployChannel_ = nullptr;};
    inline string getDeployChannel() const { DARABONBA_PTR_GET_DEFAULT(deployChannel_, "") };
    inline PublishAppInstanceRequest& setDeployChannel(string deployChannel) { DARABONBA_PTR_SET_VALUE(deployChannel_, deployChannel) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline PublishAppInstanceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // logicalNumber Field Functions 
    bool hasLogicalNumber() const { return this->logicalNumber_ != nullptr;};
    void deleteLogicalNumber() { this->logicalNumber_ = nullptr;};
    inline int32_t getLogicalNumber() const { DARABONBA_PTR_GET_DEFAULT(logicalNumber_, 0) };
    inline PublishAppInstanceRequest& setLogicalNumber(int32_t logicalNumber) { DARABONBA_PTR_SET_VALUE(logicalNumber_, logicalNumber) };


    // publishNumber Field Functions 
    bool hasPublishNumber() const { return this->publishNumber_ != nullptr;};
    void deletePublishNumber() { this->publishNumber_ = nullptr;};
    inline string getPublishNumber() const { DARABONBA_PTR_GET_DEFAULT(publishNumber_, "") };
    inline PublishAppInstanceRequest& setPublishNumber(string publishNumber) { DARABONBA_PTR_SET_VALUE(publishNumber_, publishNumber) };


    // weappAction Field Functions 
    bool hasWeappAction() const { return this->weappAction_ != nullptr;};
    void deleteWeappAction() { this->weappAction_ = nullptr;};
    inline string getWeappAction() const { DARABONBA_PTR_GET_DEFAULT(weappAction_, "") };
    inline PublishAppInstanceRequest& setWeappAction(string weappAction) { DARABONBA_PTR_SET_VALUE(weappAction_, weappAction) };


  protected:
    // Business ID
    shared_ptr<string> bizId_ {};
    // Deployment channel
    shared_ptr<string> deployChannel_ {};
    // Publish description
    shared_ptr<string> description_ {};
    // Logical version number
    shared_ptr<int32_t> logicalNumber_ {};
    // Publish number
    shared_ptr<string> publishNumber_ {};
    // action
    shared_ptr<string> weappAction_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
