// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPRIVACYRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPRIVACYRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class UpdatePrivacyRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePrivacyRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlgImpl, algImpl_);
      DARABONBA_PTR_TO_JSON(AlgType, algType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PrivacyRuleId, privacyRuleId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePrivacyRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlgImpl, algImpl_);
      DARABONBA_PTR_FROM_JSON(AlgType, algType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PrivacyRuleId, privacyRuleId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
    };
    UpdatePrivacyRuleRequest() = default ;
    UpdatePrivacyRuleRequest(const UpdatePrivacyRuleRequest &) = default ;
    UpdatePrivacyRuleRequest(UpdatePrivacyRuleRequest &&) = default ;
    UpdatePrivacyRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePrivacyRuleRequest() = default ;
    UpdatePrivacyRuleRequest& operator=(const UpdatePrivacyRuleRequest &) = default ;
    UpdatePrivacyRuleRequest& operator=(UpdatePrivacyRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->algImpl_ == nullptr
        && return this->algType_ == nullptr && return this->name_ == nullptr && return this->privacyRuleId_ == nullptr && return this->regionId_ == nullptr && return this->remark_ == nullptr; };
    // algImpl Field Functions 
    bool hasAlgImpl() const { return this->algImpl_ != nullptr;};
    void deleteAlgImpl() { this->algImpl_ = nullptr;};
    inline string algImpl() const { DARABONBA_PTR_GET_DEFAULT(algImpl_, "") };
    inline UpdatePrivacyRuleRequest& setAlgImpl(string algImpl) { DARABONBA_PTR_SET_VALUE(algImpl_, algImpl) };


    // algType Field Functions 
    bool hasAlgType() const { return this->algType_ != nullptr;};
    void deleteAlgType() { this->algType_ = nullptr;};
    inline string algType() const { DARABONBA_PTR_GET_DEFAULT(algType_, "") };
    inline UpdatePrivacyRuleRequest& setAlgType(string algType) { DARABONBA_PTR_SET_VALUE(algType_, algType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdatePrivacyRuleRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // privacyRuleId Field Functions 
    bool hasPrivacyRuleId() const { return this->privacyRuleId_ != nullptr;};
    void deletePrivacyRuleId() { this->privacyRuleId_ = nullptr;};
    inline string privacyRuleId() const { DARABONBA_PTR_GET_DEFAULT(privacyRuleId_, "") };
    inline UpdatePrivacyRuleRequest& setPrivacyRuleId(string privacyRuleId) { DARABONBA_PTR_SET_VALUE(privacyRuleId_, privacyRuleId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdatePrivacyRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline UpdatePrivacyRuleRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


  protected:
    std::shared_ptr<string> algImpl_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> algType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> privacyRuleId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
