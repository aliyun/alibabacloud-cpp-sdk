// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FEATURES_HPP_
#define ALIBABACLOUD_MODELS_FEATURES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FeaturesQuota.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class Features : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Features& obj) { 
      DARABONBA_PTR_TO_JSON(Quota, quota_);
    };
    friend void from_json(const Darabonba::Json& j, Features& obj) { 
      DARABONBA_PTR_FROM_JSON(Quota, quota_);
    };
    Features() = default ;
    Features(const Features &) = default ;
    Features(Features &&) = default ;
    Features(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Features() = default ;
    Features& operator=(const Features &) = default ;
    Features& operator=(Features &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->quota_ != nullptr; };
    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline const FeaturesQuota & quota() const { DARABONBA_PTR_GET_CONST(quota_, FeaturesQuota) };
    inline FeaturesQuota quota() { DARABONBA_PTR_GET(quota_, FeaturesQuota) };
    inline Features& setQuota(const FeaturesQuota & quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };
    inline Features& setQuota(FeaturesQuota && quota) { DARABONBA_PTR_SET_RVALUE(quota_, quota) };


  protected:
    std::shared_ptr<FeaturesQuota> quota_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
