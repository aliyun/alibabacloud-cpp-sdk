// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMANUALDAGINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMANUALDAGINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListManualDagInstancesResponseBodyInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListManualDagInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListManualDagInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListManualDagInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListManualDagInstancesResponseBody() = default ;
    ListManualDagInstancesResponseBody(const ListManualDagInstancesResponseBody &) = default ;
    ListManualDagInstancesResponseBody(ListManualDagInstancesResponseBody &&) = default ;
    ListManualDagInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListManualDagInstancesResponseBody() = default ;
    ListManualDagInstancesResponseBody& operator=(const ListManualDagInstancesResponseBody &) = default ;
    ListManualDagInstancesResponseBody& operator=(ListManualDagInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instances_ != nullptr
        && this->requestId_ != nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<ListManualDagInstancesResponseBodyInstances> & instances() const { DARABONBA_PTR_GET_CONST(instances_, vector<ListManualDagInstancesResponseBodyInstances>) };
    inline vector<ListManualDagInstancesResponseBodyInstances> instances() { DARABONBA_PTR_GET(instances_, vector<ListManualDagInstancesResponseBodyInstances>) };
    inline ListManualDagInstancesResponseBody& setInstances(const vector<ListManualDagInstancesResponseBodyInstances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline ListManualDagInstancesResponseBody& setInstances(vector<ListManualDagInstancesResponseBodyInstances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListManualDagInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The instances in the manually triggered workflow.
    std::shared_ptr<vector<ListManualDagInstancesResponseBodyInstances>> instances_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
