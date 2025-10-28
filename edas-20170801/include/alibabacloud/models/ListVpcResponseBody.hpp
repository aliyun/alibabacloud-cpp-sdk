// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPCRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVPCRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListVpcResponseBodyVpcList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListVpcResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpcResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VpcList, vpcList_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpcResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VpcList, vpcList_);
    };
    ListVpcResponseBody() = default ;
    ListVpcResponseBody(const ListVpcResponseBody &) = default ;
    ListVpcResponseBody(ListVpcResponseBody &&) = default ;
    ListVpcResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpcResponseBody() = default ;
    ListVpcResponseBody& operator=(const ListVpcResponseBody &) = default ;
    ListVpcResponseBody& operator=(ListVpcResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->vpcList_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListVpcResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListVpcResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVpcResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vpcList Field Functions 
    bool hasVpcList() const { return this->vpcList_ != nullptr;};
    void deleteVpcList() { this->vpcList_ = nullptr;};
    inline const ListVpcResponseBodyVpcList & vpcList() const { DARABONBA_PTR_GET_CONST(vpcList_, ListVpcResponseBodyVpcList) };
    inline ListVpcResponseBodyVpcList vpcList() { DARABONBA_PTR_GET(vpcList_, ListVpcResponseBodyVpcList) };
    inline ListVpcResponseBody& setVpcList(const ListVpcResponseBodyVpcList & vpcList) { DARABONBA_PTR_SET_VALUE(vpcList_, vpcList) };
    inline ListVpcResponseBody& setVpcList(ListVpcResponseBodyVpcList && vpcList) { DARABONBA_PTR_SET_RVALUE(vpcList_, vpcList) };


  protected:
    // The ID of the request.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The information about VPCs.
    std::shared_ptr<string> message_ = nullptr;
    // The name of the VPC.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the VPC is available. Valid values:
    // - true: The VPC is available.
    // - false: The VPC is unavailable.
    std::shared_ptr<ListVpcResponseBodyVpcList> vpcList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
