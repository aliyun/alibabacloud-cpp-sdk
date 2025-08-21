// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PLAYANDPAUSECONTROLREQUESTOPENPLAYANDPAUSECONTROLPARAM_HPP_
#define ALIBABACLOUD_MODELS_PLAYANDPAUSECONTROLREQUESTOPENPLAYANDPAUSECONTROLPARAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class PlayAndPauseControlRequestOpenPlayAndPauseControlParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PlayAndPauseControlRequestOpenPlayAndPauseControlParam& obj) { 
      DARABONBA_PTR_TO_JSON(OpenPlayAndPauseCommand, openPlayAndPauseCommand_);
    };
    friend void from_json(const Darabonba::Json& j, PlayAndPauseControlRequestOpenPlayAndPauseControlParam& obj) { 
      DARABONBA_PTR_FROM_JSON(OpenPlayAndPauseCommand, openPlayAndPauseCommand_);
    };
    PlayAndPauseControlRequestOpenPlayAndPauseControlParam() = default ;
    PlayAndPauseControlRequestOpenPlayAndPauseControlParam(const PlayAndPauseControlRequestOpenPlayAndPauseControlParam &) = default ;
    PlayAndPauseControlRequestOpenPlayAndPauseControlParam(PlayAndPauseControlRequestOpenPlayAndPauseControlParam &&) = default ;
    PlayAndPauseControlRequestOpenPlayAndPauseControlParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PlayAndPauseControlRequestOpenPlayAndPauseControlParam() = default ;
    PlayAndPauseControlRequestOpenPlayAndPauseControlParam& operator=(const PlayAndPauseControlRequestOpenPlayAndPauseControlParam &) = default ;
    PlayAndPauseControlRequestOpenPlayAndPauseControlParam& operator=(PlayAndPauseControlRequestOpenPlayAndPauseControlParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->openPlayAndPauseCommand_ != nullptr; };
    // openPlayAndPauseCommand Field Functions 
    bool hasOpenPlayAndPauseCommand() const { return this->openPlayAndPauseCommand_ != nullptr;};
    void deleteOpenPlayAndPauseCommand() { this->openPlayAndPauseCommand_ = nullptr;};
    inline string openPlayAndPauseCommand() const { DARABONBA_PTR_GET_DEFAULT(openPlayAndPauseCommand_, "") };
    inline PlayAndPauseControlRequestOpenPlayAndPauseControlParam& setOpenPlayAndPauseCommand(string openPlayAndPauseCommand) { DARABONBA_PTR_SET_VALUE(openPlayAndPauseCommand_, openPlayAndPauseCommand) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> openPlayAndPauseCommand_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
