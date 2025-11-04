// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDADINSERTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDADINSERTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddAdInsertionResponseBodyConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class AddAdInsertionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddAdInsertionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddAdInsertionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddAdInsertionResponseBody() = default ;
    AddAdInsertionResponseBody(const AddAdInsertionResponseBody &) = default ;
    AddAdInsertionResponseBody(AddAdInsertionResponseBody &&) = default ;
    AddAdInsertionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddAdInsertionResponseBody() = default ;
    AddAdInsertionResponseBody& operator=(const AddAdInsertionResponseBody &) = default ;
    AddAdInsertionResponseBody& operator=(AddAdInsertionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && return this->requestId_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const AddAdInsertionResponseBodyConfig & config() const { DARABONBA_PTR_GET_CONST(config_, AddAdInsertionResponseBodyConfig) };
    inline AddAdInsertionResponseBodyConfig config() { DARABONBA_PTR_GET(config_, AddAdInsertionResponseBodyConfig) };
    inline AddAdInsertionResponseBody& setConfig(const AddAdInsertionResponseBodyConfig & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline AddAdInsertionResponseBody& setConfig(AddAdInsertionResponseBodyConfig && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddAdInsertionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ad insertion configuration.
    std::shared_ptr<AddAdInsertionResponseBodyConfig> config_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
