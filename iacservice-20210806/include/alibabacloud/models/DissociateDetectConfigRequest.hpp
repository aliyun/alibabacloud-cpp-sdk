// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISSOCIATEDETECTCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISSOCIATEDETECTCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class DissociateDetectConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DissociateDetectConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(detectConfigId, detectConfigId_);
      DARABONBA_PTR_TO_JSON(targetId, targetId_);
      DARABONBA_PTR_TO_JSON(targetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, DissociateDetectConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(detectConfigId, detectConfigId_);
      DARABONBA_PTR_FROM_JSON(targetId, targetId_);
      DARABONBA_PTR_FROM_JSON(targetType, targetType_);
    };
    DissociateDetectConfigRequest() = default ;
    DissociateDetectConfigRequest(const DissociateDetectConfigRequest &) = default ;
    DissociateDetectConfigRequest(DissociateDetectConfigRequest &&) = default ;
    DissociateDetectConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DissociateDetectConfigRequest() = default ;
    DissociateDetectConfigRequest& operator=(const DissociateDetectConfigRequest &) = default ;
    DissociateDetectConfigRequest& operator=(DissociateDetectConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->detectConfigId_ == nullptr
        && this->targetId_ == nullptr && this->targetType_ == nullptr; };
    // detectConfigId Field Functions 
    bool hasDetectConfigId() const { return this->detectConfigId_ != nullptr;};
    void deleteDetectConfigId() { this->detectConfigId_ = nullptr;};
    inline string getDetectConfigId() const { DARABONBA_PTR_GET_DEFAULT(detectConfigId_, "") };
    inline DissociateDetectConfigRequest& setDetectConfigId(string detectConfigId) { DARABONBA_PTR_SET_VALUE(detectConfigId_, detectConfigId) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline DissociateDetectConfigRequest& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline DissociateDetectConfigRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    shared_ptr<string> detectConfigId_ {};
    // This parameter is required.
    shared_ptr<string> targetId_ {};
    // This parameter is required.
    shared_ptr<string> targetType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
