// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVMMETARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVMMETARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetVmMetaResponseBodyVmMetaInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class GetVmMetaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVmMetaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VmMetaInfo, vmMetaInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetVmMetaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VmMetaInfo, vmMetaInfo_);
    };
    GetVmMetaResponseBody() = default ;
    GetVmMetaResponseBody(const GetVmMetaResponseBody &) = default ;
    GetVmMetaResponseBody(GetVmMetaResponseBody &&) = default ;
    GetVmMetaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVmMetaResponseBody() = default ;
    GetVmMetaResponseBody& operator=(const GetVmMetaResponseBody &) = default ;
    GetVmMetaResponseBody& operator=(GetVmMetaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->vmMetaInfo_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVmMetaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vmMetaInfo Field Functions 
    bool hasVmMetaInfo() const { return this->vmMetaInfo_ != nullptr;};
    void deleteVmMetaInfo() { this->vmMetaInfo_ = nullptr;};
    inline const GetVmMetaResponseBodyVmMetaInfo & vmMetaInfo() const { DARABONBA_PTR_GET_CONST(vmMetaInfo_, GetVmMetaResponseBodyVmMetaInfo) };
    inline GetVmMetaResponseBodyVmMetaInfo vmMetaInfo() { DARABONBA_PTR_GET(vmMetaInfo_, GetVmMetaResponseBodyVmMetaInfo) };
    inline GetVmMetaResponseBody& setVmMetaInfo(const GetVmMetaResponseBodyVmMetaInfo & vmMetaInfo) { DARABONBA_PTR_SET_VALUE(vmMetaInfo_, vmMetaInfo) };
    inline GetVmMetaResponseBody& setVmMetaInfo(GetVmMetaResponseBodyVmMetaInfo && vmMetaInfo) { DARABONBA_PTR_SET_RVALUE(vmMetaInfo_, vmMetaInfo) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The metadata that is required to add a non-containerized application to the ASM instance.
    std::shared_ptr<GetVmMetaResponseBodyVmMetaInfo> vmMetaInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
