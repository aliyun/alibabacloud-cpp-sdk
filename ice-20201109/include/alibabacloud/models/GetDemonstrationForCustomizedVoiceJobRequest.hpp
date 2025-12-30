// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEMONSTRATIONFORCUSTOMIZEDVOICEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDEMONSTRATIONFORCUSTOMIZEDVOICEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetDemonstrationForCustomizedVoiceJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDemonstrationForCustomizedVoiceJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Scenario, scenario_);
    };
    friend void from_json(const Darabonba::Json& j, GetDemonstrationForCustomizedVoiceJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Scenario, scenario_);
    };
    GetDemonstrationForCustomizedVoiceJobRequest() = default ;
    GetDemonstrationForCustomizedVoiceJobRequest(const GetDemonstrationForCustomizedVoiceJobRequest &) = default ;
    GetDemonstrationForCustomizedVoiceJobRequest(GetDemonstrationForCustomizedVoiceJobRequest &&) = default ;
    GetDemonstrationForCustomizedVoiceJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDemonstrationForCustomizedVoiceJobRequest() = default ;
    GetDemonstrationForCustomizedVoiceJobRequest& operator=(const GetDemonstrationForCustomizedVoiceJobRequest &) = default ;
    GetDemonstrationForCustomizedVoiceJobRequest& operator=(GetDemonstrationForCustomizedVoiceJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->scenario_ == nullptr; };
    // scenario Field Functions 
    bool hasScenario() const { return this->scenario_ != nullptr;};
    void deleteScenario() { this->scenario_ = nullptr;};
    inline string getScenario() const { DARABONBA_PTR_GET_DEFAULT(scenario_, "") };
    inline GetDemonstrationForCustomizedVoiceJobRequest& setScenario(string scenario) { DARABONBA_PTR_SET_VALUE(scenario_, scenario) };


  protected:
    // The demonstration scenario.
    // 
    // Valid values:
    // 
    // *   **story**
    // *   **interaction**
    // *   **navigation**
    // 
    // This parameter is required.
    shared_ptr<string> scenario_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
