// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEENVSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEENVSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class SaveEnvShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveEnvShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Env, envShrink_);
    };
    friend void from_json(const Darabonba::Json& j, SaveEnvShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Env, envShrink_);
    };
    SaveEnvShrinkRequest() = default ;
    SaveEnvShrinkRequest(const SaveEnvShrinkRequest &) = default ;
    SaveEnvShrinkRequest(SaveEnvShrinkRequest &&) = default ;
    SaveEnvShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveEnvShrinkRequest() = default ;
    SaveEnvShrinkRequest& operator=(const SaveEnvShrinkRequest &) = default ;
    SaveEnvShrinkRequest& operator=(SaveEnvShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->envShrink_ == nullptr; };
    // envShrink Field Functions 
    bool hasEnvShrink() const { return this->envShrink_ != nullptr;};
    void deleteEnvShrink() { this->envShrink_ = nullptr;};
    inline string envShrink() const { DARABONBA_PTR_GET_DEFAULT(envShrink_, "") };
    inline SaveEnvShrinkRequest& setEnvShrink(string envShrink) { DARABONBA_PTR_SET_VALUE(envShrink_, envShrink) };


  protected:
    // The JMeter environment.
    // 
    // This parameter is required.
    std::shared_ptr<string> envShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
