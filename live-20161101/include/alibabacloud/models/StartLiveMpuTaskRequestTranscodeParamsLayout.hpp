// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTLIVEMPUTASKREQUESTTRANSCODEPARAMSLAYOUT_HPP_
#define ALIBABACLOUD_MODELS_STARTLIVEMPUTASKREQUESTTRANSCODEPARAMSLAYOUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class StartLiveMPUTaskRequestTranscodeParamsLayout : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartLiveMPUTaskRequestTranscodeParamsLayout& obj) { 
      DARABONBA_PTR_TO_JSON(UserPanes, userPanes_);
    };
    friend void from_json(const Darabonba::Json& j, StartLiveMPUTaskRequestTranscodeParamsLayout& obj) { 
      DARABONBA_PTR_FROM_JSON(UserPanes, userPanes_);
    };
    StartLiveMPUTaskRequestTranscodeParamsLayout() = default ;
    StartLiveMPUTaskRequestTranscodeParamsLayout(const StartLiveMPUTaskRequestTranscodeParamsLayout &) = default ;
    StartLiveMPUTaskRequestTranscodeParamsLayout(StartLiveMPUTaskRequestTranscodeParamsLayout &&) = default ;
    StartLiveMPUTaskRequestTranscodeParamsLayout(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartLiveMPUTaskRequestTranscodeParamsLayout() = default ;
    StartLiveMPUTaskRequestTranscodeParamsLayout& operator=(const StartLiveMPUTaskRequestTranscodeParamsLayout &) = default ;
    StartLiveMPUTaskRequestTranscodeParamsLayout& operator=(StartLiveMPUTaskRequestTranscodeParamsLayout &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userPanes_ == nullptr; };
    // userPanes Field Functions 
    bool hasUserPanes() const { return this->userPanes_ != nullptr;};
    void deleteUserPanes() { this->userPanes_ = nullptr;};
    inline const vector<Models::StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanes> & userPanes() const { DARABONBA_PTR_GET_CONST(userPanes_, vector<Models::StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanes>) };
    inline vector<Models::StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanes> userPanes() { DARABONBA_PTR_GET(userPanes_, vector<Models::StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanes>) };
    inline StartLiveMPUTaskRequestTranscodeParamsLayout& setUserPanes(const vector<Models::StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanes> & userPanes) { DARABONBA_PTR_SET_VALUE(userPanes_, userPanes) };
    inline StartLiveMPUTaskRequestTranscodeParamsLayout& setUserPanes(vector<Models::StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanes> && userPanes) { DARABONBA_PTR_SET_RVALUE(userPanes_, userPanes) };


  protected:
    // The information about the panes.
    std::shared_ptr<vector<Models::StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanes>> userPanes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
