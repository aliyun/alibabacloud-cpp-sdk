// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODULEVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMODULEVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetModuleVersionResponseBodyVersion.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class GetModuleVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModuleVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetModuleVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    GetModuleVersionResponseBody() = default ;
    GetModuleVersionResponseBody(const GetModuleVersionResponseBody &) = default ;
    GetModuleVersionResponseBody(GetModuleVersionResponseBody &&) = default ;
    GetModuleVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModuleVersionResponseBody() = default ;
    GetModuleVersionResponseBody& operator=(const GetModuleVersionResponseBody &) = default ;
    GetModuleVersionResponseBody& operator=(GetModuleVersionResponseBody &&) = default ;
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
    inline GetModuleVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline const GetModuleVersionResponseBodyVersion & version() const { DARABONBA_PTR_GET_CONST(version_, GetModuleVersionResponseBodyVersion) };
    inline GetModuleVersionResponseBodyVersion version() { DARABONBA_PTR_GET(version_, GetModuleVersionResponseBodyVersion) };
    inline GetModuleVersionResponseBody& setVersion(const GetModuleVersionResponseBodyVersion & version) { DARABONBA_PTR_SET_VALUE(version_, version) };
    inline GetModuleVersionResponseBody& setVersion(GetModuleVersionResponseBodyVersion && version) { DARABONBA_PTR_SET_RVALUE(version_, version) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<GetModuleVersionResponseBodyVersion> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
