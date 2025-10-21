// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGISTERCUSTOMCONNECTORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REGISTERCUSTOMCONNECTORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class RegisterCustomConnectorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegisterCustomConnectorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(jarUrl, jarUrl_);
    };
    friend void from_json(const Darabonba::Json& j, RegisterCustomConnectorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(jarUrl, jarUrl_);
    };
    RegisterCustomConnectorRequest() = default ;
    RegisterCustomConnectorRequest(const RegisterCustomConnectorRequest &) = default ;
    RegisterCustomConnectorRequest(RegisterCustomConnectorRequest &&) = default ;
    RegisterCustomConnectorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegisterCustomConnectorRequest() = default ;
    RegisterCustomConnectorRequest& operator=(const RegisterCustomConnectorRequest &) = default ;
    RegisterCustomConnectorRequest& operator=(RegisterCustomConnectorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jarUrl_ == nullptr; };
    // jarUrl Field Functions 
    bool hasJarUrl() const { return this->jarUrl_ != nullptr;};
    void deleteJarUrl() { this->jarUrl_ = nullptr;};
    inline string jarUrl() const { DARABONBA_PTR_GET_DEFAULT(jarUrl_, "") };
    inline RegisterCustomConnectorRequest& setJarUrl(string jarUrl) { DARABONBA_PTR_SET_VALUE(jarUrl_, jarUrl) };


  protected:
    // The URL in which the JAR package of the custom connector is stored. The platform must be able to access this address.
    // 
    // This parameter is required.
    std::shared_ptr<string> jarUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
