// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEPTSSCENESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEPTSSCENESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class SavePtsSceneShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SavePtsSceneShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Scene, sceneShrink_);
    };
    friend void from_json(const Darabonba::Json& j, SavePtsSceneShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Scene, sceneShrink_);
    };
    SavePtsSceneShrinkRequest() = default ;
    SavePtsSceneShrinkRequest(const SavePtsSceneShrinkRequest &) = default ;
    SavePtsSceneShrinkRequest(SavePtsSceneShrinkRequest &&) = default ;
    SavePtsSceneShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SavePtsSceneShrinkRequest() = default ;
    SavePtsSceneShrinkRequest& operator=(const SavePtsSceneShrinkRequest &) = default ;
    SavePtsSceneShrinkRequest& operator=(SavePtsSceneShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sceneShrink_ == nullptr; };
    // sceneShrink Field Functions 
    bool hasSceneShrink() const { return this->sceneShrink_ != nullptr;};
    void deleteSceneShrink() { this->sceneShrink_ = nullptr;};
    inline string sceneShrink() const { DARABONBA_PTR_GET_DEFAULT(sceneShrink_, "") };
    inline SavePtsSceneShrinkRequest& setSceneShrink(string sceneShrink) { DARABONBA_PTR_SET_VALUE(sceneShrink_, sceneShrink) };


  protected:
    // The information about the scenario.
    // 
    // This parameter is required.
    std::shared_ptr<string> sceneShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
