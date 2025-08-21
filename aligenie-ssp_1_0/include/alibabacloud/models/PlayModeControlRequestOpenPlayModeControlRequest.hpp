// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PLAYMODECONTROLREQUESTOPENPLAYMODECONTROLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PLAYMODECONTROLREQUESTOPENPLAYMODECONTROLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class PlayModeControlRequestOpenPlayModeControlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PlayModeControlRequestOpenPlayModeControlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpenPlayMode, openPlayMode_);
    };
    friend void from_json(const Darabonba::Json& j, PlayModeControlRequestOpenPlayModeControlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpenPlayMode, openPlayMode_);
    };
    PlayModeControlRequestOpenPlayModeControlRequest() = default ;
    PlayModeControlRequestOpenPlayModeControlRequest(const PlayModeControlRequestOpenPlayModeControlRequest &) = default ;
    PlayModeControlRequestOpenPlayModeControlRequest(PlayModeControlRequestOpenPlayModeControlRequest &&) = default ;
    PlayModeControlRequestOpenPlayModeControlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PlayModeControlRequestOpenPlayModeControlRequest() = default ;
    PlayModeControlRequestOpenPlayModeControlRequest& operator=(const PlayModeControlRequestOpenPlayModeControlRequest &) = default ;
    PlayModeControlRequestOpenPlayModeControlRequest& operator=(PlayModeControlRequestOpenPlayModeControlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->openPlayMode_ != nullptr; };
    // openPlayMode Field Functions 
    bool hasOpenPlayMode() const { return this->openPlayMode_ != nullptr;};
    void deleteOpenPlayMode() { this->openPlayMode_ = nullptr;};
    inline string openPlayMode() const { DARABONBA_PTR_GET_DEFAULT(openPlayMode_, "") };
    inline PlayModeControlRequestOpenPlayModeControlRequest& setOpenPlayMode(string openPlayMode) { DARABONBA_PTR_SET_VALUE(openPlayMode_, openPlayMode) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> openPlayMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
