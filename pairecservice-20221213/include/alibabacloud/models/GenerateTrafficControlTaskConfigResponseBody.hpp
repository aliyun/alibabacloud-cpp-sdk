// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATETRAFFICCONTROLTASKCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATETRAFFICCONTROLTASKCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class GenerateTrafficControlTaskConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateTrafficControlTaskConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateTrafficControlTaskConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GenerateTrafficControlTaskConfigResponseBody() = default ;
    GenerateTrafficControlTaskConfigResponseBody(const GenerateTrafficControlTaskConfigResponseBody &) = default ;
    GenerateTrafficControlTaskConfigResponseBody(GenerateTrafficControlTaskConfigResponseBody &&) = default ;
    GenerateTrafficControlTaskConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateTrafficControlTaskConfigResponseBody() = default ;
    GenerateTrafficControlTaskConfigResponseBody& operator=(const GenerateTrafficControlTaskConfigResponseBody &) = default ;
    GenerateTrafficControlTaskConfigResponseBody& operator=(GenerateTrafficControlTaskConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && this->requestId_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline GenerateTrafficControlTaskConfigResponseBody& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateTrafficControlTaskConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> config_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
