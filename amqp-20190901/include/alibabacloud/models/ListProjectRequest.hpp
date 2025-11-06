// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class ListProjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConsoleSessionId, consoleSessionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsoleSessionId, consoleSessionId_);
    };
    ListProjectRequest() = default ;
    ListProjectRequest(const ListProjectRequest &) = default ;
    ListProjectRequest(ListProjectRequest &&) = default ;
    ListProjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectRequest() = default ;
    ListProjectRequest& operator=(const ListProjectRequest &) = default ;
    ListProjectRequest& operator=(ListProjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consoleSessionId_ == nullptr; };
    // consoleSessionId Field Functions 
    bool hasConsoleSessionId() const { return this->consoleSessionId_ != nullptr;};
    void deleteConsoleSessionId() { this->consoleSessionId_ = nullptr;};
    inline string consoleSessionId() const { DARABONBA_PTR_GET_DEFAULT(consoleSessionId_, "") };
    inline ListProjectRequest& setConsoleSessionId(string consoleSessionId) { DARABONBA_PTR_SET_VALUE(consoleSessionId_, consoleSessionId) };


  protected:
    std::shared_ptr<string> consoleSessionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
