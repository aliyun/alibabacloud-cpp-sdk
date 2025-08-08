// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FINALIZECONFIG_HPP_
#define ALIBABACLOUD_MODELS_FINALIZECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class FinalizeConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FinalizeConfig& obj) { 
      DARABONBA_PTR_TO_JSON(steps, steps_);
    };
    friend void from_json(const Darabonba::Json& j, FinalizeConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(steps, steps_);
    };
    FinalizeConfig() = default ;
    FinalizeConfig(const FinalizeConfig &) = default ;
    FinalizeConfig(FinalizeConfig &&) = default ;
    FinalizeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FinalizeConfig() = default ;
    FinalizeConfig& operator=(const FinalizeConfig &) = default ;
    FinalizeConfig& operator=(FinalizeConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->steps_ != nullptr; };
    // steps Field Functions 
    bool hasSteps() const { return this->steps_ != nullptr;};
    void deleteSteps() { this->steps_ = nullptr;};
    inline const vector<Darabonba::Json> & steps() const { DARABONBA_PTR_GET_CONST(steps_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> steps() { DARABONBA_PTR_GET(steps_, vector<Darabonba::Json>) };
    inline FinalizeConfig& setSteps(const vector<Darabonba::Json> & steps) { DARABONBA_PTR_SET_VALUE(steps_, steps) };
    inline FinalizeConfig& setSteps(vector<Darabonba::Json> && steps) { DARABONBA_PTR_SET_RVALUE(steps_, steps) };


  protected:
    std::shared_ptr<vector<Darabonba::Json>> steps_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
