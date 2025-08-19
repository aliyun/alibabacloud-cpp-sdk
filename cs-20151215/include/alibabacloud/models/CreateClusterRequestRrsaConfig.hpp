// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTRRSACONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTRRSACONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class CreateClusterRequestRrsaConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterRequestRrsaConfig& obj) { 
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterRequestRrsaConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
    };
    CreateClusterRequestRrsaConfig() = default ;
    CreateClusterRequestRrsaConfig(const CreateClusterRequestRrsaConfig &) = default ;
    CreateClusterRequestRrsaConfig(CreateClusterRequestRrsaConfig &&) = default ;
    CreateClusterRequestRrsaConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterRequestRrsaConfig() = default ;
    CreateClusterRequestRrsaConfig& operator=(const CreateClusterRequestRrsaConfig &) = default ;
    CreateClusterRequestRrsaConfig& operator=(CreateClusterRequestRrsaConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enabled_ != nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline CreateClusterRequestRrsaConfig& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


  protected:
    std::shared_ptr<bool> enabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
