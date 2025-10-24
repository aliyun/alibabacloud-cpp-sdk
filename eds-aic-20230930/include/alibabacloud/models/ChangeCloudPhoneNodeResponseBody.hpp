// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGECLOUDPHONENODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHANGECLOUDPHONENODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ChangeCloudPhoneNodeResponseBodyNodeInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class ChangeCloudPhoneNodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeCloudPhoneNodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NodeInfos, nodeInfos_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeCloudPhoneNodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeInfos, nodeInfos_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ChangeCloudPhoneNodeResponseBody() = default ;
    ChangeCloudPhoneNodeResponseBody(const ChangeCloudPhoneNodeResponseBody &) = default ;
    ChangeCloudPhoneNodeResponseBody(ChangeCloudPhoneNodeResponseBody &&) = default ;
    ChangeCloudPhoneNodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeCloudPhoneNodeResponseBody() = default ;
    ChangeCloudPhoneNodeResponseBody& operator=(const ChangeCloudPhoneNodeResponseBody &) = default ;
    ChangeCloudPhoneNodeResponseBody& operator=(ChangeCloudPhoneNodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeInfos_ == nullptr
        && return this->orderId_ == nullptr && return this->requestId_ == nullptr; };
    // nodeInfos Field Functions 
    bool hasNodeInfos() const { return this->nodeInfos_ != nullptr;};
    void deleteNodeInfos() { this->nodeInfos_ = nullptr;};
    inline const vector<ChangeCloudPhoneNodeResponseBodyNodeInfos> & nodeInfos() const { DARABONBA_PTR_GET_CONST(nodeInfos_, vector<ChangeCloudPhoneNodeResponseBodyNodeInfos>) };
    inline vector<ChangeCloudPhoneNodeResponseBodyNodeInfos> nodeInfos() { DARABONBA_PTR_GET(nodeInfos_, vector<ChangeCloudPhoneNodeResponseBodyNodeInfos>) };
    inline ChangeCloudPhoneNodeResponseBody& setNodeInfos(const vector<ChangeCloudPhoneNodeResponseBodyNodeInfos> & nodeInfos) { DARABONBA_PTR_SET_VALUE(nodeInfos_, nodeInfos) };
    inline ChangeCloudPhoneNodeResponseBody& setNodeInfos(vector<ChangeCloudPhoneNodeResponseBodyNodeInfos> && nodeInfos) { DARABONBA_PTR_SET_RVALUE(nodeInfos_, nodeInfos) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline ChangeCloudPhoneNodeResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ChangeCloudPhoneNodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<ChangeCloudPhoneNodeResponseBodyNodeInfos>> nodeInfos_ = nullptr;
    std::shared_ptr<string> orderId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
