// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTANCEPREIVEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSTANCEPREIVEWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class InstancePreivewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstancePreivewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConsoleSessionId, consoleSessionId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, InstancePreivewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsoleSessionId, consoleSessionId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    InstancePreivewRequest() = default ;
    InstancePreivewRequest(const InstancePreivewRequest &) = default ;
    InstancePreivewRequest(InstancePreivewRequest &&) = default ;
    InstancePreivewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstancePreivewRequest() = default ;
    InstancePreivewRequest& operator=(const InstancePreivewRequest &) = default ;
    InstancePreivewRequest& operator=(InstancePreivewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consoleSessionId_ == nullptr
        && return this->tags_ == nullptr; };
    // consoleSessionId Field Functions 
    bool hasConsoleSessionId() const { return this->consoleSessionId_ != nullptr;};
    void deleteConsoleSessionId() { this->consoleSessionId_ = nullptr;};
    inline string consoleSessionId() const { DARABONBA_PTR_GET_DEFAULT(consoleSessionId_, "") };
    inline InstancePreivewRequest& setConsoleSessionId(string consoleSessionId) { DARABONBA_PTR_SET_VALUE(consoleSessionId_, consoleSessionId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline InstancePreivewRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


  protected:
    std::shared_ptr<string> consoleSessionId_ = nullptr;
    std::shared_ptr<string> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
