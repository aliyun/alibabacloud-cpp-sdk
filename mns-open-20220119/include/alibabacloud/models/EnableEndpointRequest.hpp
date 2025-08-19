// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLEENDPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLEENDPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MnsOpen20220119
{
namespace Models
{
  class EnableEndpointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableEndpointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndpointType, endpointType_);
    };
    friend void from_json(const Darabonba::Json& j, EnableEndpointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndpointType, endpointType_);
    };
    EnableEndpointRequest() = default ;
    EnableEndpointRequest(const EnableEndpointRequest &) = default ;
    EnableEndpointRequest(EnableEndpointRequest &&) = default ;
    EnableEndpointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableEndpointRequest() = default ;
    EnableEndpointRequest& operator=(const EnableEndpointRequest &) = default ;
    EnableEndpointRequest& operator=(EnableEndpointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endpointType_ != nullptr; };
    // endpointType Field Functions 
    bool hasEndpointType() const { return this->endpointType_ != nullptr;};
    void deleteEndpointType() { this->endpointType_ = nullptr;};
    inline string endpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
    inline EnableEndpointRequest& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


  protected:
    // The type of the endpoint. Valid value:
    // 
    // *   **public**: indicates public endpoint. (Only the public is supported.)
    // 
    // This parameter is required.
    std::shared_ptr<string> endpointType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
