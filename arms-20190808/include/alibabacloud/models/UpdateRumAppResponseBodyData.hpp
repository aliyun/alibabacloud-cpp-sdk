// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERUMAPPRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_UPDATERUMAPPRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class UpdateRumAppResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRumAppResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(Limited, limited_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRumAppResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(Limited, limited_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    UpdateRumAppResponseBodyData() = default ;
    UpdateRumAppResponseBodyData(const UpdateRumAppResponseBodyData &) = default ;
    UpdateRumAppResponseBodyData(UpdateRumAppResponseBodyData &&) = default ;
    UpdateRumAppResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRumAppResponseBodyData() = default ;
    UpdateRumAppResponseBodyData& operator=(const UpdateRumAppResponseBodyData &) = default ;
    UpdateRumAppResponseBodyData& operator=(UpdateRumAppResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->config_ != nullptr
        && this->limit_ != nullptr && this->limited_ != nullptr && this->usage_ != nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline UpdateRumAppResponseBodyData& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline UpdateRumAppResponseBodyData& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // limited Field Functions 
    bool hasLimited() const { return this->limited_ != nullptr;};
    void deleteLimited() { this->limited_ = nullptr;};
    inline bool limited() const { DARABONBA_PTR_GET_DEFAULT(limited_, false) };
    inline UpdateRumAppResponseBodyData& setLimited(bool limited) { DARABONBA_PTR_SET_VALUE(limited_, limited) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline int32_t usage() const { DARABONBA_PTR_GET_DEFAULT(usage_, 0) };
    inline UpdateRumAppResponseBodyData& setUsage(int32_t usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


  protected:
    // The user configurations. This is a reserved parameter.
    std::shared_ptr<string> config_ = nullptr;
    // The QPS limit. Unit: bytes.
    std::shared_ptr<int32_t> limit_ = nullptr;
    // Indicates whether the request is throttled due to the QPS limit. Valid values: true and false.
    std::shared_ptr<bool> limited_ = nullptr;
    // The usage. Unit: bytes.
    std::shared_ptr<int32_t> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
