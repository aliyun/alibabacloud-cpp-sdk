// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONFIGSEQUENCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONFIGSEQUENCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateConfigSequenceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateConfigSequenceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(Sequence, sequence_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateConfigSequenceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    UpdateConfigSequenceRequest() = default ;
    UpdateConfigSequenceRequest(const UpdateConfigSequenceRequest &) = default ;
    UpdateConfigSequenceRequest(UpdateConfigSequenceRequest &&) = default ;
    UpdateConfigSequenceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateConfigSequenceRequest() = default ;
    UpdateConfigSequenceRequest& operator=(const UpdateConfigSequenceRequest &) = default ;
    UpdateConfigSequenceRequest& operator=(UpdateConfigSequenceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configId_ == nullptr
        && this->sequence_ == nullptr && this->siteId_ == nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
    inline UpdateConfigSequenceRequest& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int32_t getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
    inline UpdateConfigSequenceRequest& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline UpdateConfigSequenceRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The configuration ID. You can call the [ListSiteFunctions](~~ListSiteFunctions~~) operation to obtain the configuration ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> configId_ {};
    // The target priority of the configuration. The value must be greater than 0. If the value is greater than the highest priority among all rule configurations under this feature, the priority of the configuration to be modified is set to the current highest priority. For example, if the CacheRules feature has three rule configurations with priorities 1, 2, and 3, and you change the priority of the rule with priority 1 to 5, the priority of that rule is set to 3, and the rules that originally had priorities 2 and 3 are changed to 1 and 2.
    // 
    // This parameter is required.
    shared_ptr<int32_t> sequence_ {};
    // The site ID. You can call the [ListSites](~~ListSites~~) operation to obtain the site ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
