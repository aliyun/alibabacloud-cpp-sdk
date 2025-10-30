// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMPRIVACYPOLICYREQUESTCUSTOMPRIVACYPOLICYCONTENTSCUSTOMPRIVACYPOLICYITEMS_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMPRIVACYPOLICYREQUESTCUSTOMPRIVACYPOLICYCONTENTSCUSTOMPRIVACYPOLICYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateCustomPrivacyPolicyRequestCustomPrivacyPolicyContentsCustomPrivacyPolicyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomPrivacyPolicyRequestCustomPrivacyPolicyContentsCustomPrivacyPolicyItems& obj) { 
      DARABONBA_PTR_TO_JSON(CustomPrivacyPolicyItemName, customPrivacyPolicyItemName_);
      DARABONBA_PTR_TO_JSON(CustomPrivacyPolicyItemUrl, customPrivacyPolicyItemUrl_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomPrivacyPolicyRequestCustomPrivacyPolicyContentsCustomPrivacyPolicyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomPrivacyPolicyItemName, customPrivacyPolicyItemName_);
      DARABONBA_PTR_FROM_JSON(CustomPrivacyPolicyItemUrl, customPrivacyPolicyItemUrl_);
    };
    CreateCustomPrivacyPolicyRequestCustomPrivacyPolicyContentsCustomPrivacyPolicyItems() = default ;
    CreateCustomPrivacyPolicyRequestCustomPrivacyPolicyContentsCustomPrivacyPolicyItems(const CreateCustomPrivacyPolicyRequestCustomPrivacyPolicyContentsCustomPrivacyPolicyItems &) = default ;
    CreateCustomPrivacyPolicyRequestCustomPrivacyPolicyContentsCustomPrivacyPolicyItems(CreateCustomPrivacyPolicyRequestCustomPrivacyPolicyContentsCustomPrivacyPolicyItems &&) = default ;
    CreateCustomPrivacyPolicyRequestCustomPrivacyPolicyContentsCustomPrivacyPolicyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomPrivacyPolicyRequestCustomPrivacyPolicyContentsCustomPrivacyPolicyItems() = default ;
    CreateCustomPrivacyPolicyRequestCustomPrivacyPolicyContentsCustomPrivacyPolicyItems& operator=(const CreateCustomPrivacyPolicyRequestCustomPrivacyPolicyContentsCustomPrivacyPolicyItems &) = default ;
    CreateCustomPrivacyPolicyRequestCustomPrivacyPolicyContentsCustomPrivacyPolicyItems& operator=(CreateCustomPrivacyPolicyRequestCustomPrivacyPolicyContentsCustomPrivacyPolicyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customPrivacyPolicyItemName_ == nullptr
        && return this->customPrivacyPolicyItemUrl_ == nullptr; };
    // customPrivacyPolicyItemName Field Functions 
    bool hasCustomPrivacyPolicyItemName() const { return this->customPrivacyPolicyItemName_ != nullptr;};
    void deleteCustomPrivacyPolicyItemName() { this->customPrivacyPolicyItemName_ = nullptr;};
    inline string customPrivacyPolicyItemName() const { DARABONBA_PTR_GET_DEFAULT(customPrivacyPolicyItemName_, "") };
    inline CreateCustomPrivacyPolicyRequestCustomPrivacyPolicyContentsCustomPrivacyPolicyItems& setCustomPrivacyPolicyItemName(string customPrivacyPolicyItemName) { DARABONBA_PTR_SET_VALUE(customPrivacyPolicyItemName_, customPrivacyPolicyItemName) };


    // customPrivacyPolicyItemUrl Field Functions 
    bool hasCustomPrivacyPolicyItemUrl() const { return this->customPrivacyPolicyItemUrl_ != nullptr;};
    void deleteCustomPrivacyPolicyItemUrl() { this->customPrivacyPolicyItemUrl_ = nullptr;};
    inline string customPrivacyPolicyItemUrl() const { DARABONBA_PTR_GET_DEFAULT(customPrivacyPolicyItemUrl_, "") };
    inline CreateCustomPrivacyPolicyRequestCustomPrivacyPolicyContentsCustomPrivacyPolicyItems& setCustomPrivacyPolicyItemUrl(string customPrivacyPolicyItemUrl) { DARABONBA_PTR_SET_VALUE(customPrivacyPolicyItemUrl_, customPrivacyPolicyItemUrl) };


  protected:
    // 自定义条款名称
    std::shared_ptr<string> customPrivacyPolicyItemName_ = nullptr;
    // 自定义条款访问地址
    std::shared_ptr<string> customPrivacyPolicyItemUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
