// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCALINGGROUPCONFIGPRIVATEPOOLOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_SCALINGGROUPCONFIGPRIVATEPOOLOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ScalingGroupConfigPrivatePoolOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScalingGroupConfigPrivatePoolOptions& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MatchCriteria, matchCriteria_);
    };
    friend void from_json(const Darabonba::Json& j, ScalingGroupConfigPrivatePoolOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MatchCriteria, matchCriteria_);
    };
    ScalingGroupConfigPrivatePoolOptions() = default ;
    ScalingGroupConfigPrivatePoolOptions(const ScalingGroupConfigPrivatePoolOptions &) = default ;
    ScalingGroupConfigPrivatePoolOptions(ScalingGroupConfigPrivatePoolOptions &&) = default ;
    ScalingGroupConfigPrivatePoolOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScalingGroupConfigPrivatePoolOptions() = default ;
    ScalingGroupConfigPrivatePoolOptions& operator=(const ScalingGroupConfigPrivatePoolOptions &) = default ;
    ScalingGroupConfigPrivatePoolOptions& operator=(ScalingGroupConfigPrivatePoolOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->matchCriteria_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ScalingGroupConfigPrivatePoolOptions& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // matchCriteria Field Functions 
    bool hasMatchCriteria() const { return this->matchCriteria_ != nullptr;};
    void deleteMatchCriteria() { this->matchCriteria_ = nullptr;};
    inline string matchCriteria() const { DARABONBA_PTR_GET_DEFAULT(matchCriteria_, "") };
    inline ScalingGroupConfigPrivatePoolOptions& setMatchCriteria(string matchCriteria) { DARABONBA_PTR_SET_VALUE(matchCriteria_, matchCriteria) };


  protected:
    // 私有池id。
    std::shared_ptr<string> id_ = nullptr;
    // 实例启动的私有池容量选项。。
    std::shared_ptr<string> matchCriteria_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
