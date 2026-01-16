// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WAFCONFIG_HPP_
#define ALIBABACLOUD_MODELS_WAFCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class WAFConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WAFConfig& obj) { 
      DARABONBA_PTR_TO_JSON(enableWAF, enableWAF_);
    };
    friend void from_json(const Darabonba::Json& j, WAFConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(enableWAF, enableWAF_);
    };
    WAFConfig() = default ;
    WAFConfig(const WAFConfig &) = default ;
    WAFConfig(WAFConfig &&) = default ;
    WAFConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WAFConfig() = default ;
    WAFConfig& operator=(const WAFConfig &) = default ;
    WAFConfig& operator=(WAFConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableWAF_ == nullptr; };
    // enableWAF Field Functions 
    bool hasEnableWAF() const { return this->enableWAF_ != nullptr;};
    void deleteEnableWAF() { this->enableWAF_ = nullptr;};
    inline bool getEnableWAF() const { DARABONBA_PTR_GET_DEFAULT(enableWAF_, false) };
    inline WAFConfig& setEnableWAF(bool enableWAF) { DARABONBA_PTR_SET_VALUE(enableWAF_, enableWAF) };


  protected:
    shared_ptr<bool> enableWAF_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
