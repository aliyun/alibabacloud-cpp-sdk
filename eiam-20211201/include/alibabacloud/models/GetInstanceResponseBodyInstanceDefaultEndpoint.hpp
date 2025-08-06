// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYINSTANCEDEFAULTENDPOINT_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYINSTANCEDEFAULTENDPOINT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetInstanceResponseBodyInstanceDefaultEndpoint : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceResponseBodyInstanceDefaultEndpoint& obj) { 
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceResponseBodyInstanceDefaultEndpoint& obj) { 
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetInstanceResponseBodyInstanceDefaultEndpoint() = default ;
    GetInstanceResponseBodyInstanceDefaultEndpoint(const GetInstanceResponseBodyInstanceDefaultEndpoint &) = default ;
    GetInstanceResponseBodyInstanceDefaultEndpoint(GetInstanceResponseBodyInstanceDefaultEndpoint &&) = default ;
    GetInstanceResponseBodyInstanceDefaultEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceResponseBodyInstanceDefaultEndpoint() = default ;
    GetInstanceResponseBodyInstanceDefaultEndpoint& operator=(const GetInstanceResponseBodyInstanceDefaultEndpoint &) = default ;
    GetInstanceResponseBodyInstanceDefaultEndpoint& operator=(GetInstanceResponseBodyInstanceDefaultEndpoint &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endpoint_ != nullptr
        && this->status_ != nullptr; };
    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline GetInstanceResponseBodyInstanceDefaultEndpoint& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetInstanceResponseBodyInstanceDefaultEndpoint& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The endpoint of the instance.
    std::shared_ptr<string> endpoint_ = nullptr;
    // The status of the endpoint. Valid values:
    // 
    // *   resolved
    // *   unresolved
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
