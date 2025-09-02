// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCECOUNTTRENDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCECOUNTTRENDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetInstanceCountTrendResponseBodyInstanceCounts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetInstanceCountTrendResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceCountTrendResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceCounts, instanceCounts_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceCountTrendResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceCounts, instanceCounts_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetInstanceCountTrendResponseBody() = default ;
    GetInstanceCountTrendResponseBody(const GetInstanceCountTrendResponseBody &) = default ;
    GetInstanceCountTrendResponseBody(GetInstanceCountTrendResponseBody &&) = default ;
    GetInstanceCountTrendResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceCountTrendResponseBody() = default ;
    GetInstanceCountTrendResponseBody& operator=(const GetInstanceCountTrendResponseBody &) = default ;
    GetInstanceCountTrendResponseBody& operator=(GetInstanceCountTrendResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceCounts_ != nullptr
        && this->requestId_ != nullptr; };
    // instanceCounts Field Functions 
    bool hasInstanceCounts() const { return this->instanceCounts_ != nullptr;};
    void deleteInstanceCounts() { this->instanceCounts_ = nullptr;};
    inline const vector<GetInstanceCountTrendResponseBodyInstanceCounts> & instanceCounts() const { DARABONBA_PTR_GET_CONST(instanceCounts_, vector<GetInstanceCountTrendResponseBodyInstanceCounts>) };
    inline vector<GetInstanceCountTrendResponseBodyInstanceCounts> instanceCounts() { DARABONBA_PTR_GET(instanceCounts_, vector<GetInstanceCountTrendResponseBodyInstanceCounts>) };
    inline GetInstanceCountTrendResponseBody& setInstanceCounts(const vector<GetInstanceCountTrendResponseBodyInstanceCounts> & instanceCounts) { DARABONBA_PTR_SET_VALUE(instanceCounts_, instanceCounts) };
    inline GetInstanceCountTrendResponseBody& setInstanceCounts(vector<GetInstanceCountTrendResponseBodyInstanceCounts> && instanceCounts) { DARABONBA_PTR_SET_RVALUE(instanceCounts_, instanceCounts) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceCountTrendResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The quantity trend of instances.
    std::shared_ptr<vector<GetInstanceCountTrendResponseBodyInstanceCounts>> instanceCounts_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
