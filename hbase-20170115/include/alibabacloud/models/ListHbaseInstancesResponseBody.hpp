// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHBASEINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTHBASEINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListHbaseInstancesResponseBodyInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
namespace Models
{
  class ListHbaseInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHbaseInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListHbaseInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListHbaseInstancesResponseBody() = default ;
    ListHbaseInstancesResponseBody(const ListHbaseInstancesResponseBody &) = default ;
    ListHbaseInstancesResponseBody(ListHbaseInstancesResponseBody &&) = default ;
    ListHbaseInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHbaseInstancesResponseBody() = default ;
    ListHbaseInstancesResponseBody& operator=(const ListHbaseInstancesResponseBody &) = default ;
    ListHbaseInstancesResponseBody& operator=(ListHbaseInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instances_ == nullptr
        && return this->requestId_ == nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const ListHbaseInstancesResponseBodyInstances & instances() const { DARABONBA_PTR_GET_CONST(instances_, ListHbaseInstancesResponseBodyInstances) };
    inline ListHbaseInstancesResponseBodyInstances instances() { DARABONBA_PTR_GET(instances_, ListHbaseInstancesResponseBodyInstances) };
    inline ListHbaseInstancesResponseBody& setInstances(const ListHbaseInstancesResponseBodyInstances & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline ListHbaseInstancesResponseBody& setInstances(ListHbaseInstancesResponseBodyInstances && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListHbaseInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<ListHbaseInstancesResponseBodyInstances> instances_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif
