// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACTIVECONTACTCHANNELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ACTIVECONTACTCHANNELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ActiveContactChannelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ActiveContactChannelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(site, site_);
    };
    friend void from_json(const Darabonba::Json& j, ActiveContactChannelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(site, site_);
    };
    ActiveContactChannelRequest() = default ;
    ActiveContactChannelRequest(const ActiveContactChannelRequest &) = default ;
    ActiveContactChannelRequest(ActiveContactChannelRequest &&) = default ;
    ActiveContactChannelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ActiveContactChannelRequest() = default ;
    ActiveContactChannelRequest& operator=(const ActiveContactChannelRequest &) = default ;
    ActiveContactChannelRequest& operator=(ActiveContactChannelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->site_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ActiveContactChannelRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // site Field Functions 
    bool hasSite() const { return this->site_ != nullptr;};
    void deleteSite() { this->site_ = nullptr;};
    inline string getSite() const { DARABONBA_PTR_GET_DEFAULT(site_, "") };
    inline ActiveContactChannelRequest& setSite(string site) { DARABONBA_PTR_SET_VALUE(site_, site) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> site_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
