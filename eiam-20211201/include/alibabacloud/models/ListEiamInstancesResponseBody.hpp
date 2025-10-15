// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEIAMINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEIAMINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEiamInstancesResponseBodyInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListEiamInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEiamInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListEiamInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListEiamInstancesResponseBody() = default ;
    ListEiamInstancesResponseBody(const ListEiamInstancesResponseBody &) = default ;
    ListEiamInstancesResponseBody(ListEiamInstancesResponseBody &&) = default ;
    ListEiamInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEiamInstancesResponseBody() = default ;
    ListEiamInstancesResponseBody& operator=(const ListEiamInstancesResponseBody &) = default ;
    ListEiamInstancesResponseBody& operator=(ListEiamInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instances_ == nullptr
        && return this->requestId_ == nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<ListEiamInstancesResponseBodyInstances> & instances() const { DARABONBA_PTR_GET_CONST(instances_, vector<ListEiamInstancesResponseBodyInstances>) };
    inline vector<ListEiamInstancesResponseBodyInstances> instances() { DARABONBA_PTR_GET(instances_, vector<ListEiamInstancesResponseBodyInstances>) };
    inline ListEiamInstancesResponseBody& setInstances(const vector<ListEiamInstancesResponseBodyInstances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline ListEiamInstancesResponseBody& setInstances(vector<ListEiamInstancesResponseBodyInstances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEiamInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The instance list.
    std::shared_ptr<vector<ListEiamInstancesResponseBodyInstances>> instances_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
