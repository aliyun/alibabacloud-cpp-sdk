// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPIDESTINATIONRESPONSEBODYDATAHTTPAPIPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_GETAPIDESTINATIONRESPONSEBODYDATAHTTPAPIPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class GetApiDestinationResponseBodyDataHttpApiParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApiDestinationResponseBodyDataHttpApiParameters& obj) { 
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(Method, method_);
    };
    friend void from_json(const Darabonba::Json& j, GetApiDestinationResponseBodyDataHttpApiParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(Method, method_);
    };
    GetApiDestinationResponseBodyDataHttpApiParameters() = default ;
    GetApiDestinationResponseBodyDataHttpApiParameters(const GetApiDestinationResponseBodyDataHttpApiParameters &) = default ;
    GetApiDestinationResponseBodyDataHttpApiParameters(GetApiDestinationResponseBodyDataHttpApiParameters &&) = default ;
    GetApiDestinationResponseBodyDataHttpApiParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApiDestinationResponseBodyDataHttpApiParameters() = default ;
    GetApiDestinationResponseBodyDataHttpApiParameters& operator=(const GetApiDestinationResponseBodyDataHttpApiParameters &) = default ;
    GetApiDestinationResponseBodyDataHttpApiParameters& operator=(GetApiDestinationResponseBodyDataHttpApiParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endpoint_ != nullptr
        && this->method_ != nullptr; };
    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline GetApiDestinationResponseBodyDataHttpApiParameters& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string method() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline GetApiDestinationResponseBodyDataHttpApiParameters& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


  protected:
    // The endpoint of the API destination.
    std::shared_ptr<string> endpoint_ = nullptr;
    // The HTTP request method. Valid values:
    // 
    // *   POST
    // *   GET
    // *   DELETE
    // *   PUT
    // *   HEAD
    // *   TRACE
    // *   PATCH
    std::shared_ptr<string> method_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
