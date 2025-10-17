// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEBROADCASTNEWSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEBROADCASTNEWSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class GenerateBroadcastNewsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateBroadcastNewsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(prompt, prompt_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateBroadcastNewsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(prompt, prompt_);
    };
    GenerateBroadcastNewsRequest() = default ;
    GenerateBroadcastNewsRequest(const GenerateBroadcastNewsRequest &) = default ;
    GenerateBroadcastNewsRequest(GenerateBroadcastNewsRequest &&) = default ;
    GenerateBroadcastNewsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateBroadcastNewsRequest() = default ;
    GenerateBroadcastNewsRequest& operator=(const GenerateBroadcastNewsRequest &) = default ;
    GenerateBroadcastNewsRequest& operator=(GenerateBroadcastNewsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->prompt_ == nullptr; };
    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string prompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline GenerateBroadcastNewsRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> prompt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
