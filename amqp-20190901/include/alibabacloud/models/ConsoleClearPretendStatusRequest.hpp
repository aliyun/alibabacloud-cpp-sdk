// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONSOLECLEARPRETENDSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONSOLECLEARPRETENDSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class ConsoleClearPretendStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConsoleClearPretendStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConsoleSessionId, consoleSessionId_);
    };
    friend void from_json(const Darabonba::Json& j, ConsoleClearPretendStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsoleSessionId, consoleSessionId_);
    };
    ConsoleClearPretendStatusRequest() = default ;
    ConsoleClearPretendStatusRequest(const ConsoleClearPretendStatusRequest &) = default ;
    ConsoleClearPretendStatusRequest(ConsoleClearPretendStatusRequest &&) = default ;
    ConsoleClearPretendStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConsoleClearPretendStatusRequest() = default ;
    ConsoleClearPretendStatusRequest& operator=(const ConsoleClearPretendStatusRequest &) = default ;
    ConsoleClearPretendStatusRequest& operator=(ConsoleClearPretendStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consoleSessionId_ == nullptr; };
    // consoleSessionId Field Functions 
    bool hasConsoleSessionId() const { return this->consoleSessionId_ != nullptr;};
    void deleteConsoleSessionId() { this->consoleSessionId_ = nullptr;};
    inline string consoleSessionId() const { DARABONBA_PTR_GET_DEFAULT(consoleSessionId_, "") };
    inline ConsoleClearPretendStatusRequest& setConsoleSessionId(string consoleSessionId) { DARABONBA_PTR_SET_VALUE(consoleSessionId_, consoleSessionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> consoleSessionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
