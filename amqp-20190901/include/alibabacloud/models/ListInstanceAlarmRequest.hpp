// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEALARMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEALARMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class ListInstanceAlarmRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceAlarmRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConsoleSessionId, consoleSessionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceAlarmRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsoleSessionId, consoleSessionId_);
    };
    ListInstanceAlarmRequest() = default ;
    ListInstanceAlarmRequest(const ListInstanceAlarmRequest &) = default ;
    ListInstanceAlarmRequest(ListInstanceAlarmRequest &&) = default ;
    ListInstanceAlarmRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceAlarmRequest() = default ;
    ListInstanceAlarmRequest& operator=(const ListInstanceAlarmRequest &) = default ;
    ListInstanceAlarmRequest& operator=(ListInstanceAlarmRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consoleSessionId_ == nullptr; };
    // consoleSessionId Field Functions 
    bool hasConsoleSessionId() const { return this->consoleSessionId_ != nullptr;};
    void deleteConsoleSessionId() { this->consoleSessionId_ = nullptr;};
    inline string consoleSessionId() const { DARABONBA_PTR_GET_DEFAULT(consoleSessionId_, "") };
    inline ListInstanceAlarmRequest& setConsoleSessionId(string consoleSessionId) { DARABONBA_PTR_SET_VALUE(consoleSessionId_, consoleSessionId) };


  protected:
    std::shared_ptr<string> consoleSessionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
