// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKYUUBITOKENRESPONSEBODYDATAAUTOEXPIRECONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_GETKYUUBITOKENRESPONSEBODYDATAAUTOEXPIRECONFIGURATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class GetKyuubiTokenResponseBodyDataAutoExpireConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKyuubiTokenResponseBodyDataAutoExpireConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(expireDays, expireDays_);
    };
    friend void from_json(const Darabonba::Json& j, GetKyuubiTokenResponseBodyDataAutoExpireConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(expireDays, expireDays_);
    };
    GetKyuubiTokenResponseBodyDataAutoExpireConfiguration() = default ;
    GetKyuubiTokenResponseBodyDataAutoExpireConfiguration(const GetKyuubiTokenResponseBodyDataAutoExpireConfiguration &) = default ;
    GetKyuubiTokenResponseBodyDataAutoExpireConfiguration(GetKyuubiTokenResponseBodyDataAutoExpireConfiguration &&) = default ;
    GetKyuubiTokenResponseBodyDataAutoExpireConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKyuubiTokenResponseBodyDataAutoExpireConfiguration() = default ;
    GetKyuubiTokenResponseBodyDataAutoExpireConfiguration& operator=(const GetKyuubiTokenResponseBodyDataAutoExpireConfiguration &) = default ;
    GetKyuubiTokenResponseBodyDataAutoExpireConfiguration& operator=(GetKyuubiTokenResponseBodyDataAutoExpireConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enable_ == nullptr
        && return this->expireDays_ == nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline GetKyuubiTokenResponseBodyDataAutoExpireConfiguration& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // expireDays Field Functions 
    bool hasExpireDays() const { return this->expireDays_ != nullptr;};
    void deleteExpireDays() { this->expireDays_ = nullptr;};
    inline int32_t expireDays() const { DARABONBA_PTR_GET_DEFAULT(expireDays_, 0) };
    inline GetKyuubiTokenResponseBodyDataAutoExpireConfiguration& setExpireDays(int32_t expireDays) { DARABONBA_PTR_SET_VALUE(expireDays_, expireDays) };


  protected:
    std::shared_ptr<bool> enable_ = nullptr;
    std::shared_ptr<int32_t> expireDays_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
