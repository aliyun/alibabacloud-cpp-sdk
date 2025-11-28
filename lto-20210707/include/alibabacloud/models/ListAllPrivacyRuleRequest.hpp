// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALLPRIVACYRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTALLPRIVACYRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class ListAllPrivacyRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAllPrivacyRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAllPrivacyRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListAllPrivacyRuleRequest() = default ;
    ListAllPrivacyRuleRequest(const ListAllPrivacyRuleRequest &) = default ;
    ListAllPrivacyRuleRequest(ListAllPrivacyRuleRequest &&) = default ;
    ListAllPrivacyRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAllPrivacyRuleRequest() = default ;
    ListAllPrivacyRuleRequest& operator=(const ListAllPrivacyRuleRequest &) = default ;
    ListAllPrivacyRuleRequest& operator=(ListAllPrivacyRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListAllPrivacyRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
