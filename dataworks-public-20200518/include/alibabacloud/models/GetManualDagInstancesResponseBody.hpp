// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMANUALDAGINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMANUALDAGINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetManualDagInstancesResponseBodyInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetManualDagInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetManualDagInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetManualDagInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetManualDagInstancesResponseBody() = default ;
    GetManualDagInstancesResponseBody(const GetManualDagInstancesResponseBody &) = default ;
    GetManualDagInstancesResponseBody(GetManualDagInstancesResponseBody &&) = default ;
    GetManualDagInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetManualDagInstancesResponseBody() = default ;
    GetManualDagInstancesResponseBody& operator=(const GetManualDagInstancesResponseBody &) = default ;
    GetManualDagInstancesResponseBody& operator=(GetManualDagInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instances_ != nullptr
        && this->requestId_ != nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<GetManualDagInstancesResponseBodyInstances> & instances() const { DARABONBA_PTR_GET_CONST(instances_, vector<GetManualDagInstancesResponseBodyInstances>) };
    inline vector<GetManualDagInstancesResponseBodyInstances> instances() { DARABONBA_PTR_GET(instances_, vector<GetManualDagInstancesResponseBodyInstances>) };
    inline GetManualDagInstancesResponseBody& setInstances(const vector<GetManualDagInstancesResponseBodyInstances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline GetManualDagInstancesResponseBody& setInstances(vector<GetManualDagInstancesResponseBodyInstances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetManualDagInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The instances in the manually triggered workflow.
    std::shared_ptr<vector<GetManualDagInstancesResponseBodyInstances>> instances_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
