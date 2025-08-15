// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPLOGGINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STOPLOGGINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class StopLoggingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopLoggingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, StopLoggingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    StopLoggingRequest() = default ;
    StopLoggingRequest(const StopLoggingRequest &) = default ;
    StopLoggingRequest(StopLoggingRequest &&) = default ;
    StopLoggingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopLoggingRequest() = default ;
    StopLoggingRequest& operator=(const StopLoggingRequest &) = default ;
    StopLoggingRequest& operator=(StopLoggingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline StopLoggingRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The name of the trail that you want to disable.
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
