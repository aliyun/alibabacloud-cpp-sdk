// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTINSTANCEREFRESHREQUESTCHECKPOINTS_HPP_
#define ALIBABACLOUD_MODELS_STARTINSTANCEREFRESHREQUESTCHECKPOINTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class StartInstanceRefreshRequestCheckpoints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartInstanceRefreshRequestCheckpoints& obj) { 
      DARABONBA_PTR_TO_JSON(Percentage, percentage_);
    };
    friend void from_json(const Darabonba::Json& j, StartInstanceRefreshRequestCheckpoints& obj) { 
      DARABONBA_PTR_FROM_JSON(Percentage, percentage_);
    };
    StartInstanceRefreshRequestCheckpoints() = default ;
    StartInstanceRefreshRequestCheckpoints(const StartInstanceRefreshRequestCheckpoints &) = default ;
    StartInstanceRefreshRequestCheckpoints(StartInstanceRefreshRequestCheckpoints &&) = default ;
    StartInstanceRefreshRequestCheckpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartInstanceRefreshRequestCheckpoints() = default ;
    StartInstanceRefreshRequestCheckpoints& operator=(const StartInstanceRefreshRequestCheckpoints &) = default ;
    StartInstanceRefreshRequestCheckpoints& operator=(StartInstanceRefreshRequestCheckpoints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->percentage_ != nullptr; };
    // percentage Field Functions 
    bool hasPercentage() const { return this->percentage_ != nullptr;};
    void deletePercentage() { this->percentage_ = nullptr;};
    inline int32_t percentage() const { DARABONBA_PTR_GET_DEFAULT(percentage_, 0) };
    inline StartInstanceRefreshRequestCheckpoints& setPercentage(int32_t percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };


  protected:
    std::shared_ptr<int32_t> percentage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
