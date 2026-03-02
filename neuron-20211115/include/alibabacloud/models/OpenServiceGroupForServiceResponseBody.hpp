// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPENSERVICEGROUPFORSERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_OPENSERVICEGROUPFORSERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class OpenServiceGroupForServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OpenServiceGroupForServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(serviceIds, serviceIds_);
    };
    friend void from_json(const Darabonba::Json& j, OpenServiceGroupForServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(serviceIds, serviceIds_);
    };
    OpenServiceGroupForServiceResponseBody() = default ;
    OpenServiceGroupForServiceResponseBody(const OpenServiceGroupForServiceResponseBody &) = default ;
    OpenServiceGroupForServiceResponseBody(OpenServiceGroupForServiceResponseBody &&) = default ;
    OpenServiceGroupForServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OpenServiceGroupForServiceResponseBody() = default ;
    OpenServiceGroupForServiceResponseBody& operator=(const OpenServiceGroupForServiceResponseBody &) = default ;
    OpenServiceGroupForServiceResponseBody& operator=(OpenServiceGroupForServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->serviceIds_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline OpenServiceGroupForServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceIds Field Functions 
    bool hasServiceIds() const { return this->serviceIds_ != nullptr;};
    void deleteServiceIds() { this->serviceIds_ = nullptr;};
    inline const vector<int64_t> & getServiceIds() const { DARABONBA_PTR_GET_CONST(serviceIds_, vector<int64_t>) };
    inline vector<int64_t> getServiceIds() { DARABONBA_PTR_GET(serviceIds_, vector<int64_t>) };
    inline OpenServiceGroupForServiceResponseBody& setServiceIds(const vector<int64_t> & serviceIds) { DARABONBA_PTR_SET_VALUE(serviceIds_, serviceIds) };
    inline OpenServiceGroupForServiceResponseBody& setServiceIds(vector<int64_t> && serviceIds) { DARABONBA_PTR_SET_RVALUE(serviceIds_, serviceIds) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<int64_t>> serviceIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
