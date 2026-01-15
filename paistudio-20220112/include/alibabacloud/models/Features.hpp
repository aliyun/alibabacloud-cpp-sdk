// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FEATURES_HPP_
#define ALIBABACLOUD_MODELS_FEATURES_HPP_
#include <darabonba/Core.hpp>
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
    class Quota : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Quota& obj) { 
        DARABONBA_PTR_TO_JSON(IsEnabled, isEnabled_);
      };
      friend void from_json(const Darabonba::Json& j, Quota& obj) { 
        DARABONBA_PTR_FROM_JSON(IsEnabled, isEnabled_);
      };
      Quota() = default ;
      Quota(const Quota &) = default ;
      Quota(Quota &&) = default ;
      Quota(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Quota() = default ;
      Quota& operator=(const Quota &) = default ;
      Quota& operator=(Quota &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->isEnabled_ == nullptr; };
      // isEnabled Field Functions 
      bool hasIsEnabled() const { return this->isEnabled_ != nullptr;};
      void deleteIsEnabled() { this->isEnabled_ = nullptr;};
      inline bool getIsEnabled() const { DARABONBA_PTR_GET_DEFAULT(isEnabled_, false) };
      inline Quota& setIsEnabled(bool isEnabled) { DARABONBA_PTR_SET_VALUE(isEnabled_, isEnabled) };


    protected:
      shared_ptr<bool> isEnabled_ {};
    };

    virtual bool empty() const override { return this->quota_ == nullptr; };
    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline const Features::Quota & getQuota() const { DARABONBA_PTR_GET_CONST(quota_, Features::Quota) };
    inline Features::Quota getQuota() { DARABONBA_PTR_GET(quota_, Features::Quota) };
    inline Features& setQuota(const Features::Quota & quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };
    inline Features& setQuota(Features::Quota && quota) { DARABONBA_PTR_SET_RVALUE(quota_, quota) };


  protected:
    shared_ptr<Features::Quota> quota_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
