// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYINSTANCESDEFAULTENDPOINT_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYINSTANCESDEFAULTENDPOINT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListInstancesResponseBodyInstancesDefaultEndpoint : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesResponseBodyInstancesDefaultEndpoint& obj) { 
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesResponseBodyInstancesDefaultEndpoint& obj) { 
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListInstancesResponseBodyInstancesDefaultEndpoint() = default ;
    ListInstancesResponseBodyInstancesDefaultEndpoint(const ListInstancesResponseBodyInstancesDefaultEndpoint &) = default ;
    ListInstancesResponseBodyInstancesDefaultEndpoint(ListInstancesResponseBodyInstancesDefaultEndpoint &&) = default ;
    ListInstancesResponseBodyInstancesDefaultEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesResponseBodyInstancesDefaultEndpoint() = default ;
    ListInstancesResponseBodyInstancesDefaultEndpoint& operator=(const ListInstancesResponseBodyInstancesDefaultEndpoint &) = default ;
    ListInstancesResponseBodyInstancesDefaultEndpoint& operator=(ListInstancesResponseBodyInstancesDefaultEndpoint &&) = default ;
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
    inline ListInstancesResponseBodyInstancesDefaultEndpoint& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListInstancesResponseBodyInstancesDefaultEndpoint& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


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
