// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEINSTANCEFAULTINJECTIONINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEINSTANCEFAULTINJECTIONINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListServiceInstanceFaultInjectionInfoResponseBodyFaultInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class ListServiceInstanceFaultInjectionInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceInstanceFaultInjectionInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FaultInfoList, faultInfoList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceInstanceFaultInjectionInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FaultInfoList, faultInfoList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListServiceInstanceFaultInjectionInfoResponseBody() = default ;
    ListServiceInstanceFaultInjectionInfoResponseBody(const ListServiceInstanceFaultInjectionInfoResponseBody &) = default ;
    ListServiceInstanceFaultInjectionInfoResponseBody(ListServiceInstanceFaultInjectionInfoResponseBody &&) = default ;
    ListServiceInstanceFaultInjectionInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceInstanceFaultInjectionInfoResponseBody() = default ;
    ListServiceInstanceFaultInjectionInfoResponseBody& operator=(const ListServiceInstanceFaultInjectionInfoResponseBody &) = default ;
    ListServiceInstanceFaultInjectionInfoResponseBody& operator=(ListServiceInstanceFaultInjectionInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->faultInfoList_ == nullptr
        && return this->requestId_ == nullptr; };
    // faultInfoList Field Functions 
    bool hasFaultInfoList() const { return this->faultInfoList_ != nullptr;};
    void deleteFaultInfoList() { this->faultInfoList_ = nullptr;};
    inline const vector<ListServiceInstanceFaultInjectionInfoResponseBodyFaultInfoList> & faultInfoList() const { DARABONBA_PTR_GET_CONST(faultInfoList_, vector<ListServiceInstanceFaultInjectionInfoResponseBodyFaultInfoList>) };
    inline vector<ListServiceInstanceFaultInjectionInfoResponseBodyFaultInfoList> faultInfoList() { DARABONBA_PTR_GET(faultInfoList_, vector<ListServiceInstanceFaultInjectionInfoResponseBodyFaultInfoList>) };
    inline ListServiceInstanceFaultInjectionInfoResponseBody& setFaultInfoList(const vector<ListServiceInstanceFaultInjectionInfoResponseBodyFaultInfoList> & faultInfoList) { DARABONBA_PTR_SET_VALUE(faultInfoList_, faultInfoList) };
    inline ListServiceInstanceFaultInjectionInfoResponseBody& setFaultInfoList(vector<ListServiceInstanceFaultInjectionInfoResponseBodyFaultInfoList> && faultInfoList) { DARABONBA_PTR_SET_RVALUE(faultInfoList_, faultInfoList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListServiceInstanceFaultInjectionInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<ListServiceInstanceFaultInjectionInfoResponseBodyFaultInfoList>> faultInfoList_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
