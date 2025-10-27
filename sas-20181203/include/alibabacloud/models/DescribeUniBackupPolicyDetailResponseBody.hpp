// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUNIBACKUPPOLICYDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUNIBACKUPPOLICYDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeUniBackupPolicyDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUniBackupPolicyDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UniBackupPolicyDTO, uniBackupPolicyDTO_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUniBackupPolicyDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UniBackupPolicyDTO, uniBackupPolicyDTO_);
    };
    DescribeUniBackupPolicyDetailResponseBody() = default ;
    DescribeUniBackupPolicyDetailResponseBody(const DescribeUniBackupPolicyDetailResponseBody &) = default ;
    DescribeUniBackupPolicyDetailResponseBody(DescribeUniBackupPolicyDetailResponseBody &&) = default ;
    DescribeUniBackupPolicyDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUniBackupPolicyDetailResponseBody() = default ;
    DescribeUniBackupPolicyDetailResponseBody& operator=(const DescribeUniBackupPolicyDetailResponseBody &) = default ;
    DescribeUniBackupPolicyDetailResponseBody& operator=(DescribeUniBackupPolicyDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->uniBackupPolicyDTO_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUniBackupPolicyDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // uniBackupPolicyDTO Field Functions 
    bool hasUniBackupPolicyDTO() const { return this->uniBackupPolicyDTO_ != nullptr;};
    void deleteUniBackupPolicyDTO() { this->uniBackupPolicyDTO_ = nullptr;};
    inline const DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTO & uniBackupPolicyDTO() const { DARABONBA_PTR_GET_CONST(uniBackupPolicyDTO_, DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTO) };
    inline DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTO uniBackupPolicyDTO() { DARABONBA_PTR_GET(uniBackupPolicyDTO_, DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTO) };
    inline DescribeUniBackupPolicyDetailResponseBody& setUniBackupPolicyDTO(const DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTO & uniBackupPolicyDTO) { DARABONBA_PTR_SET_VALUE(uniBackupPolicyDTO_, uniBackupPolicyDTO) };
    inline DescribeUniBackupPolicyDetailResponseBody& setUniBackupPolicyDTO(DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTO && uniBackupPolicyDTO) { DARABONBA_PTR_SET_RVALUE(uniBackupPolicyDTO_, uniBackupPolicyDTO) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The details of the anti-ransomware policy.
    std::shared_ptr<DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTO> uniBackupPolicyDTO_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
