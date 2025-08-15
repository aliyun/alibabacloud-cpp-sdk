// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSESSIONCLUSTERRESPONSEBODYSESSIONCLUSTERAUTOSTARTCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_GETSESSIONCLUSTERRESPONSEBODYSESSIONCLUSTERAUTOSTARTCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class GetSessionClusterResponseBodySessionClusterAutoStartConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSessionClusterResponseBodySessionClusterAutoStartConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(enable, enable_);
    };
    friend void from_json(const Darabonba::Json& j, GetSessionClusterResponseBodySessionClusterAutoStartConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(enable, enable_);
    };
    GetSessionClusterResponseBodySessionClusterAutoStartConfiguration() = default ;
    GetSessionClusterResponseBodySessionClusterAutoStartConfiguration(const GetSessionClusterResponseBodySessionClusterAutoStartConfiguration &) = default ;
    GetSessionClusterResponseBodySessionClusterAutoStartConfiguration(GetSessionClusterResponseBodySessionClusterAutoStartConfiguration &&) = default ;
    GetSessionClusterResponseBodySessionClusterAutoStartConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSessionClusterResponseBodySessionClusterAutoStartConfiguration() = default ;
    GetSessionClusterResponseBodySessionClusterAutoStartConfiguration& operator=(const GetSessionClusterResponseBodySessionClusterAutoStartConfiguration &) = default ;
    GetSessionClusterResponseBodySessionClusterAutoStartConfiguration& operator=(GetSessionClusterResponseBodySessionClusterAutoStartConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enable_ != nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline GetSessionClusterResponseBodySessionClusterAutoStartConfiguration& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


  protected:
    // Indicates whether automatic startup is enabled.
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> enable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
