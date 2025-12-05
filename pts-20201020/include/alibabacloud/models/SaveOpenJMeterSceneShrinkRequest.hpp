// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEOPENJMETERSCENESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEOPENJMETERSCENESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class SaveOpenJMeterSceneShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveOpenJMeterSceneShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpenJMeterScene, openJMeterSceneShrink_);
    };
    friend void from_json(const Darabonba::Json& j, SaveOpenJMeterSceneShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpenJMeterScene, openJMeterSceneShrink_);
    };
    SaveOpenJMeterSceneShrinkRequest() = default ;
    SaveOpenJMeterSceneShrinkRequest(const SaveOpenJMeterSceneShrinkRequest &) = default ;
    SaveOpenJMeterSceneShrinkRequest(SaveOpenJMeterSceneShrinkRequest &&) = default ;
    SaveOpenJMeterSceneShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveOpenJMeterSceneShrinkRequest() = default ;
    SaveOpenJMeterSceneShrinkRequest& operator=(const SaveOpenJMeterSceneShrinkRequest &) = default ;
    SaveOpenJMeterSceneShrinkRequest& operator=(SaveOpenJMeterSceneShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->openJMeterSceneShrink_ == nullptr; };
    // openJMeterSceneShrink Field Functions 
    bool hasOpenJMeterSceneShrink() const { return this->openJMeterSceneShrink_ != nullptr;};
    void deleteOpenJMeterSceneShrink() { this->openJMeterSceneShrink_ = nullptr;};
    inline string openJMeterSceneShrink() const { DARABONBA_PTR_GET_DEFAULT(openJMeterSceneShrink_, "") };
    inline SaveOpenJMeterSceneShrinkRequest& setOpenJMeterSceneShrink(string openJMeterSceneShrink) { DARABONBA_PTR_SET_VALUE(openJMeterSceneShrink_, openJMeterSceneShrink) };


  protected:
    // The details of the scenario.
    // 
    // This parameter is required.
    std::shared_ptr<string> openJMeterSceneShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
