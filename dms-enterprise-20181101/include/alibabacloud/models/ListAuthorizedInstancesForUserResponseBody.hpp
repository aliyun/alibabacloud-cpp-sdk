// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHORIZEDINSTANCESFORUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHORIZEDINSTANCESFORUSERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAuthorizedInstancesForUserResponseBodyInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListAuthorizedInstancesForUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthorizedInstancesForUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthorizedInstancesForUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAuthorizedInstancesForUserResponseBody() = default ;
    ListAuthorizedInstancesForUserResponseBody(const ListAuthorizedInstancesForUserResponseBody &) = default ;
    ListAuthorizedInstancesForUserResponseBody(ListAuthorizedInstancesForUserResponseBody &&) = default ;
    ListAuthorizedInstancesForUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthorizedInstancesForUserResponseBody() = default ;
    ListAuthorizedInstancesForUserResponseBody& operator=(const ListAuthorizedInstancesForUserResponseBody &) = default ;
    ListAuthorizedInstancesForUserResponseBody& operator=(ListAuthorizedInstancesForUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instances_ != nullptr
        && this->requestId_ != nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<ListAuthorizedInstancesForUserResponseBodyInstances> & instances() const { DARABONBA_PTR_GET_CONST(instances_, vector<ListAuthorizedInstancesForUserResponseBodyInstances>) };
    inline vector<ListAuthorizedInstancesForUserResponseBodyInstances> instances() { DARABONBA_PTR_GET(instances_, vector<ListAuthorizedInstancesForUserResponseBodyInstances>) };
    inline ListAuthorizedInstancesForUserResponseBody& setInstances(const vector<ListAuthorizedInstancesForUserResponseBodyInstances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline ListAuthorizedInstancesForUserResponseBody& setInstances(vector<ListAuthorizedInstancesForUserResponseBodyInstances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAuthorizedInstancesForUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<ListAuthorizedInstancesForUserResponseBodyInstances>> instances_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
