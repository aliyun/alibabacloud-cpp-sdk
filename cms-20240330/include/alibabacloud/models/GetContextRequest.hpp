// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONTEXTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCONTEXTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetContextRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetContextRequest& obj) { 
      DARABONBA_PTR_TO_JSON(formatted, formatted_);
    };
    friend void from_json(const Darabonba::Json& j, GetContextRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(formatted, formatted_);
    };
    GetContextRequest() = default ;
    GetContextRequest(const GetContextRequest &) = default ;
    GetContextRequest(GetContextRequest &&) = default ;
    GetContextRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetContextRequest() = default ;
    GetContextRequest& operator=(const GetContextRequest &) = default ;
    GetContextRequest& operator=(GetContextRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->formatted_ == nullptr; };
    // formatted Field Functions 
    bool hasFormatted() const { return this->formatted_ != nullptr;};
    void deleteFormatted() { this->formatted_ = nullptr;};
    inline bool getFormatted() const { DARABONBA_PTR_GET_DEFAULT(formatted_, false) };
    inline GetContextRequest& setFormatted(bool formatted) { DARABONBA_PTR_SET_VALUE(formatted_, formatted) };


  protected:
    // Whether to return the context in a formatted structure. Valid values: `true` and `false`. Default value: `false`.
    shared_ptr<bool> formatted_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
