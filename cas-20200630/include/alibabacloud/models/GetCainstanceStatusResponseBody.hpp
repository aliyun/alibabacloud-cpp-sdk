// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCAINSTANCESTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCAINSTANCESTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetCAInstanceStatusResponseBodyInstanceStatusList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class GetCAInstanceStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCAInstanceStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceStatusList, instanceStatusList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCAInstanceStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceStatusList, instanceStatusList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetCAInstanceStatusResponseBody() = default ;
    GetCAInstanceStatusResponseBody(const GetCAInstanceStatusResponseBody &) = default ;
    GetCAInstanceStatusResponseBody(GetCAInstanceStatusResponseBody &&) = default ;
    GetCAInstanceStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCAInstanceStatusResponseBody() = default ;
    GetCAInstanceStatusResponseBody& operator=(const GetCAInstanceStatusResponseBody &) = default ;
    GetCAInstanceStatusResponseBody& operator=(GetCAInstanceStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceStatusList_ != nullptr
        && this->requestId_ != nullptr; };
    // instanceStatusList Field Functions 
    bool hasInstanceStatusList() const { return this->instanceStatusList_ != nullptr;};
    void deleteInstanceStatusList() { this->instanceStatusList_ = nullptr;};
    inline const vector<GetCAInstanceStatusResponseBodyInstanceStatusList> & instanceStatusList() const { DARABONBA_PTR_GET_CONST(instanceStatusList_, vector<GetCAInstanceStatusResponseBodyInstanceStatusList>) };
    inline vector<GetCAInstanceStatusResponseBodyInstanceStatusList> instanceStatusList() { DARABONBA_PTR_GET(instanceStatusList_, vector<GetCAInstanceStatusResponseBodyInstanceStatusList>) };
    inline GetCAInstanceStatusResponseBody& setInstanceStatusList(const vector<GetCAInstanceStatusResponseBodyInstanceStatusList> & instanceStatusList) { DARABONBA_PTR_SET_VALUE(instanceStatusList_, instanceStatusList) };
    inline GetCAInstanceStatusResponseBody& setInstanceStatusList(vector<GetCAInstanceStatusResponseBodyInstanceStatusList> && instanceStatusList) { DARABONBA_PTR_SET_RVALUE(instanceStatusList_, instanceStatusList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCAInstanceStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status information of the private CA instance.
    std::shared_ptr<vector<GetCAInstanceStatusResponseBodyInstanceStatusList>> instanceStatusList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
