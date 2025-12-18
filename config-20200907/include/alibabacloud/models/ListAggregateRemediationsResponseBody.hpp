// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGGREGATEREMEDIATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAGGREGATEREMEDIATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAggregateRemediationsResponseBodyRemediations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListAggregateRemediationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAggregateRemediationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Remediations, remediations_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAggregateRemediationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Remediations, remediations_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAggregateRemediationsResponseBody() = default ;
    ListAggregateRemediationsResponseBody(const ListAggregateRemediationsResponseBody &) = default ;
    ListAggregateRemediationsResponseBody(ListAggregateRemediationsResponseBody &&) = default ;
    ListAggregateRemediationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAggregateRemediationsResponseBody() = default ;
    ListAggregateRemediationsResponseBody& operator=(const ListAggregateRemediationsResponseBody &) = default ;
    ListAggregateRemediationsResponseBody& operator=(ListAggregateRemediationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->remediations_ == nullptr
        && return this->requestId_ == nullptr; };
    // remediations Field Functions 
    bool hasRemediations() const { return this->remediations_ != nullptr;};
    void deleteRemediations() { this->remediations_ = nullptr;};
    inline const vector<ListAggregateRemediationsResponseBodyRemediations> & remediations() const { DARABONBA_PTR_GET_CONST(remediations_, vector<ListAggregateRemediationsResponseBodyRemediations>) };
    inline vector<ListAggregateRemediationsResponseBodyRemediations> remediations() { DARABONBA_PTR_GET(remediations_, vector<ListAggregateRemediationsResponseBodyRemediations>) };
    inline ListAggregateRemediationsResponseBody& setRemediations(const vector<ListAggregateRemediationsResponseBodyRemediations> & remediations) { DARABONBA_PTR_SET_VALUE(remediations_, remediations) };
    inline ListAggregateRemediationsResponseBody& setRemediations(vector<ListAggregateRemediationsResponseBodyRemediations> && remediations) { DARABONBA_PTR_SET_RVALUE(remediations_, remediations) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAggregateRemediationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that contains remediation templates.
    std::shared_ptr<vector<ListAggregateRemediationsResponseBodyRemediations>> remediations_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
