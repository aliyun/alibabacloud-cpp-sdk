// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTALLATION_HPP_
#define ALIBABACLOUD_MODELS_INSTALLATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class Installation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Installation& obj) { 
      DARABONBA_PTR_TO_JSON(actionUri, actionUri_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(stage, stage_);
    };
    friend void from_json(const Darabonba::Json& j, Installation& obj) { 
      DARABONBA_PTR_FROM_JSON(actionUri, actionUri_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(stage, stage_);
    };
    Installation() = default ;
    Installation(const Installation &) = default ;
    Installation(Installation &&) = default ;
    Installation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Installation() = default ;
    Installation& operator=(const Installation &) = default ;
    Installation& operator=(Installation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actionUri_ != nullptr
        && this->message_ != nullptr && this->stage_ != nullptr; };
    // actionUri Field Functions 
    bool hasActionUri() const { return this->actionUri_ != nullptr;};
    void deleteActionUri() { this->actionUri_ = nullptr;};
    inline string actionUri() const { DARABONBA_PTR_GET_DEFAULT(actionUri_, "") };
    inline Installation& setActionUri(string actionUri) { DARABONBA_PTR_SET_VALUE(actionUri_, actionUri) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline Installation& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // stage Field Functions 
    bool hasStage() const { return this->stage_ != nullptr;};
    void deleteStage() { this->stage_ = nullptr;};
    inline string stage() const { DARABONBA_PTR_GET_DEFAULT(stage_, "") };
    inline Installation& setStage(string stage) { DARABONBA_PTR_SET_VALUE(stage_, stage) };


  protected:
    std::shared_ptr<string> actionUri_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> stage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
