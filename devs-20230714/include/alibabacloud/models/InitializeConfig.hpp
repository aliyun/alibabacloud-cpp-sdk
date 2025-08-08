// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INITIALIZECONFIG_HPP_
#define ALIBABACLOUD_MODELS_INITIALIZECONFIG_HPP_
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
  class InitializeConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InitializeConfig& obj) { 
      DARABONBA_PTR_TO_JSON(steps, steps_);
    };
    friend void from_json(const Darabonba::Json& j, InitializeConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(steps, steps_);
    };
    InitializeConfig() = default ;
    InitializeConfig(const InitializeConfig &) = default ;
    InitializeConfig(InitializeConfig &&) = default ;
    InitializeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InitializeConfig() = default ;
    InitializeConfig& operator=(const InitializeConfig &) = default ;
    InitializeConfig& operator=(InitializeConfig &&) = default ;
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
    inline InitializeConfig& setSteps(const vector<Darabonba::Json> & steps) { DARABONBA_PTR_SET_VALUE(steps_, steps) };
    inline InitializeConfig& setSteps(vector<Darabonba::Json> && steps) { DARABONBA_PTR_SET_RVALUE(steps_, steps) };


  protected:
    std::shared_ptr<vector<Darabonba::Json>> steps_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
