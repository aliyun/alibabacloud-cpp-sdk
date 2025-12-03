// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETVPCACCESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SETVPCACCESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class SetVpcAccessResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetVpcAccessResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VpcAccessId, vpcAccessId_);
    };
    friend void from_json(const Darabonba::Json& j, SetVpcAccessResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VpcAccessId, vpcAccessId_);
    };
    SetVpcAccessResponseBody() = default ;
    SetVpcAccessResponseBody(const SetVpcAccessResponseBody &) = default ;
    SetVpcAccessResponseBody(SetVpcAccessResponseBody &&) = default ;
    SetVpcAccessResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetVpcAccessResponseBody() = default ;
    SetVpcAccessResponseBody& operator=(const SetVpcAccessResponseBody &) = default ;
    SetVpcAccessResponseBody& operator=(SetVpcAccessResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->vpcAccessId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SetVpcAccessResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vpcAccessId Field Functions 
    bool hasVpcAccessId() const { return this->vpcAccessId_ != nullptr;};
    void deleteVpcAccessId() { this->vpcAccessId_ = nullptr;};
    inline string vpcAccessId() const { DARABONBA_PTR_GET_DEFAULT(vpcAccessId_, "") };
    inline SetVpcAccessResponseBody& setVpcAccessId(string vpcAccessId) { DARABONBA_PTR_SET_VALUE(vpcAccessId_, vpcAccessId) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the VPC access authorization.
    std::shared_ptr<string> vpcAccessId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
