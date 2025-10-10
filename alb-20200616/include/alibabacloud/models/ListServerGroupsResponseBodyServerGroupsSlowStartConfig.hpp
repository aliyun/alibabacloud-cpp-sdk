// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVERGROUPSRESPONSEBODYSERVERGROUPSSLOWSTARTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVERGROUPSRESPONSEBODYSERVERGROUPSSLOWSTARTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ListServerGroupsResponseBodyServerGroupsSlowStartConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServerGroupsResponseBodyServerGroupsSlowStartConfig& obj) { 
      DARABONBA_PTR_TO_JSON(SlowStartDuration, slowStartDuration_);
      DARABONBA_PTR_TO_JSON(SlowStartEnabled, slowStartEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, ListServerGroupsResponseBodyServerGroupsSlowStartConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(SlowStartDuration, slowStartDuration_);
      DARABONBA_PTR_FROM_JSON(SlowStartEnabled, slowStartEnabled_);
    };
    ListServerGroupsResponseBodyServerGroupsSlowStartConfig() = default ;
    ListServerGroupsResponseBodyServerGroupsSlowStartConfig(const ListServerGroupsResponseBodyServerGroupsSlowStartConfig &) = default ;
    ListServerGroupsResponseBodyServerGroupsSlowStartConfig(ListServerGroupsResponseBodyServerGroupsSlowStartConfig &&) = default ;
    ListServerGroupsResponseBodyServerGroupsSlowStartConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServerGroupsResponseBodyServerGroupsSlowStartConfig() = default ;
    ListServerGroupsResponseBodyServerGroupsSlowStartConfig& operator=(const ListServerGroupsResponseBodyServerGroupsSlowStartConfig &) = default ;
    ListServerGroupsResponseBodyServerGroupsSlowStartConfig& operator=(ListServerGroupsResponseBodyServerGroupsSlowStartConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->slowStartDuration_ != nullptr
        && this->slowStartEnabled_ != nullptr; };
    // slowStartDuration Field Functions 
    bool hasSlowStartDuration() const { return this->slowStartDuration_ != nullptr;};
    void deleteSlowStartDuration() { this->slowStartDuration_ = nullptr;};
    inline int32_t slowStartDuration() const { DARABONBA_PTR_GET_DEFAULT(slowStartDuration_, 0) };
    inline ListServerGroupsResponseBodyServerGroupsSlowStartConfig& setSlowStartDuration(int32_t slowStartDuration) { DARABONBA_PTR_SET_VALUE(slowStartDuration_, slowStartDuration) };


    // slowStartEnabled Field Functions 
    bool hasSlowStartEnabled() const { return this->slowStartEnabled_ != nullptr;};
    void deleteSlowStartEnabled() { this->slowStartEnabled_ = nullptr;};
    inline bool slowStartEnabled() const { DARABONBA_PTR_GET_DEFAULT(slowStartEnabled_, false) };
    inline ListServerGroupsResponseBodyServerGroupsSlowStartConfig& setSlowStartEnabled(bool slowStartEnabled) { DARABONBA_PTR_SET_VALUE(slowStartEnabled_, slowStartEnabled) };


  protected:
    // The duration of a slow start.
    std::shared_ptr<int32_t> slowStartDuration_ = nullptr;
    // Indicates whether slow starts are enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> slowStartEnabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
