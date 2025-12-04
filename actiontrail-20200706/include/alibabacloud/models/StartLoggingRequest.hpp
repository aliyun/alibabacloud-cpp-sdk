// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTLOGGINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTLOGGINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class StartLoggingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartLoggingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, StartLoggingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    StartLoggingRequest() = default ;
    StartLoggingRequest(const StartLoggingRequest &) = default ;
    StartLoggingRequest(StartLoggingRequest &&) = default ;
    StartLoggingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartLoggingRequest() = default ;
    StartLoggingRequest& operator=(const StartLoggingRequest &) = default ;
    StartLoggingRequest& operator=(StartLoggingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline StartLoggingRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The name of the trail that you want to enable.
    // 
    // The name must be 6 to 36 characters in length, and can contain lowercase letters, digits, hyphens (-), and underscores (_). It must start with a lowercase letter.
    // 
    // > The name must be unique within your Alibaba Cloud account.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
