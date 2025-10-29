// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIVEMPUTASKREQUESTTRANSCODEPARAMSLAYOUT_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIVEMPUTASKREQUESTTRANSCODEPARAMSLAYOUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateLiveMPUTaskRequestTranscodeParamsLayoutUserPanes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class UpdateLiveMPUTaskRequestTranscodeParamsLayout : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLiveMPUTaskRequestTranscodeParamsLayout& obj) { 
      DARABONBA_PTR_TO_JSON(UserPanes, userPanes_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLiveMPUTaskRequestTranscodeParamsLayout& obj) { 
      DARABONBA_PTR_FROM_JSON(UserPanes, userPanes_);
    };
    UpdateLiveMPUTaskRequestTranscodeParamsLayout() = default ;
    UpdateLiveMPUTaskRequestTranscodeParamsLayout(const UpdateLiveMPUTaskRequestTranscodeParamsLayout &) = default ;
    UpdateLiveMPUTaskRequestTranscodeParamsLayout(UpdateLiveMPUTaskRequestTranscodeParamsLayout &&) = default ;
    UpdateLiveMPUTaskRequestTranscodeParamsLayout(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLiveMPUTaskRequestTranscodeParamsLayout() = default ;
    UpdateLiveMPUTaskRequestTranscodeParamsLayout& operator=(const UpdateLiveMPUTaskRequestTranscodeParamsLayout &) = default ;
    UpdateLiveMPUTaskRequestTranscodeParamsLayout& operator=(UpdateLiveMPUTaskRequestTranscodeParamsLayout &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userPanes_ == nullptr; };
    // userPanes Field Functions 
    bool hasUserPanes() const { return this->userPanes_ != nullptr;};
    void deleteUserPanes() { this->userPanes_ = nullptr;};
    inline const vector<Models::UpdateLiveMPUTaskRequestTranscodeParamsLayoutUserPanes> & userPanes() const { DARABONBA_PTR_GET_CONST(userPanes_, vector<Models::UpdateLiveMPUTaskRequestTranscodeParamsLayoutUserPanes>) };
    inline vector<Models::UpdateLiveMPUTaskRequestTranscodeParamsLayoutUserPanes> userPanes() { DARABONBA_PTR_GET(userPanes_, vector<Models::UpdateLiveMPUTaskRequestTranscodeParamsLayoutUserPanes>) };
    inline UpdateLiveMPUTaskRequestTranscodeParamsLayout& setUserPanes(const vector<Models::UpdateLiveMPUTaskRequestTranscodeParamsLayoutUserPanes> & userPanes) { DARABONBA_PTR_SET_VALUE(userPanes_, userPanes) };
    inline UpdateLiveMPUTaskRequestTranscodeParamsLayout& setUserPanes(vector<Models::UpdateLiveMPUTaskRequestTranscodeParamsLayoutUserPanes> && userPanes) { DARABONBA_PTR_SET_RVALUE(userPanes_, userPanes) };


  protected:
    // The information about the panes.
    std::shared_ptr<vector<Models::UpdateLiveMPUTaskRequestTranscodeParamsLayoutUserPanes>> userPanes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
