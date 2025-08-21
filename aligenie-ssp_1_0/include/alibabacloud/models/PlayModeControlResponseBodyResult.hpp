// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PLAYMODECONTROLRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_PLAYMODECONTROLRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class PlayModeControlResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PlayModeControlResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(OpenPlayMode, openPlayMode_);
    };
    friend void from_json(const Darabonba::Json& j, PlayModeControlResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(OpenPlayMode, openPlayMode_);
    };
    PlayModeControlResponseBodyResult() = default ;
    PlayModeControlResponseBodyResult(const PlayModeControlResponseBodyResult &) = default ;
    PlayModeControlResponseBodyResult(PlayModeControlResponseBodyResult &&) = default ;
    PlayModeControlResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PlayModeControlResponseBodyResult() = default ;
    PlayModeControlResponseBodyResult& operator=(const PlayModeControlResponseBodyResult &) = default ;
    PlayModeControlResponseBodyResult& operator=(PlayModeControlResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->openPlayMode_ != nullptr; };
    // openPlayMode Field Functions 
    bool hasOpenPlayMode() const { return this->openPlayMode_ != nullptr;};
    void deleteOpenPlayMode() { this->openPlayMode_ = nullptr;};
    inline string openPlayMode() const { DARABONBA_PTR_GET_DEFAULT(openPlayMode_, "") };
    inline PlayModeControlResponseBodyResult& setOpenPlayMode(string openPlayMode) { DARABONBA_PTR_SET_VALUE(openPlayMode_, openPlayMode) };


  protected:
    std::shared_ptr<string> openPlayMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
