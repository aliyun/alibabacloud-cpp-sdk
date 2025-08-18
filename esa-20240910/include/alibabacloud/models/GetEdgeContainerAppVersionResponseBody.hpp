// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEDGECONTAINERAPPVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEDGECONTAINERAPPVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetEdgeContainerAppVersionResponseBodyVersion.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetEdgeContainerAppVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEdgeContainerAppVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetEdgeContainerAppVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    GetEdgeContainerAppVersionResponseBody() = default ;
    GetEdgeContainerAppVersionResponseBody(const GetEdgeContainerAppVersionResponseBody &) = default ;
    GetEdgeContainerAppVersionResponseBody(GetEdgeContainerAppVersionResponseBody &&) = default ;
    GetEdgeContainerAppVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEdgeContainerAppVersionResponseBody() = default ;
    GetEdgeContainerAppVersionResponseBody& operator=(const GetEdgeContainerAppVersionResponseBody &) = default ;
    GetEdgeContainerAppVersionResponseBody& operator=(GetEdgeContainerAppVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->version_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEdgeContainerAppVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline const GetEdgeContainerAppVersionResponseBodyVersion & version() const { DARABONBA_PTR_GET_CONST(version_, GetEdgeContainerAppVersionResponseBodyVersion) };
    inline GetEdgeContainerAppVersionResponseBodyVersion version() { DARABONBA_PTR_GET(version_, GetEdgeContainerAppVersionResponseBodyVersion) };
    inline GetEdgeContainerAppVersionResponseBody& setVersion(const GetEdgeContainerAppVersionResponseBodyVersion & version) { DARABONBA_PTR_SET_VALUE(version_, version) };
    inline GetEdgeContainerAppVersionResponseBody& setVersion(GetEdgeContainerAppVersionResponseBodyVersion && version) { DARABONBA_PTR_SET_RVALUE(version_, version) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the version.
    std::shared_ptr<GetEdgeContainerAppVersionResponseBodyVersion> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
