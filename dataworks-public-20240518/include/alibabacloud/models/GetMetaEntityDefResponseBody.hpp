// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETAENTITYDEFRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMETAENTITYDEFRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MetaEntityDef.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetMetaEntityDefResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaEntityDefResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MetaEntityDef, metaEntityDef_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaEntityDefResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MetaEntityDef, metaEntityDef_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetMetaEntityDefResponseBody() = default ;
    GetMetaEntityDefResponseBody(const GetMetaEntityDefResponseBody &) = default ;
    GetMetaEntityDefResponseBody(GetMetaEntityDefResponseBody &&) = default ;
    GetMetaEntityDefResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaEntityDefResponseBody() = default ;
    GetMetaEntityDefResponseBody& operator=(const GetMetaEntityDefResponseBody &) = default ;
    GetMetaEntityDefResponseBody& operator=(GetMetaEntityDefResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->metaEntityDef_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // metaEntityDef Field Functions 
    bool hasMetaEntityDef() const { return this->metaEntityDef_ != nullptr;};
    void deleteMetaEntityDef() { this->metaEntityDef_ = nullptr;};
    inline const MetaEntityDef & getMetaEntityDef() const { DARABONBA_PTR_GET_CONST(metaEntityDef_, MetaEntityDef) };
    inline MetaEntityDef getMetaEntityDef() { DARABONBA_PTR_GET(metaEntityDef_, MetaEntityDef) };
    inline GetMetaEntityDefResponseBody& setMetaEntityDef(const MetaEntityDef & metaEntityDef) { DARABONBA_PTR_SET_VALUE(metaEntityDef_, metaEntityDef) };
    inline GetMetaEntityDefResponseBody& setMetaEntityDef(MetaEntityDef && metaEntityDef) { DARABONBA_PTR_SET_RVALUE(metaEntityDef_, metaEntityDef) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMetaEntityDefResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetMetaEntityDefResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The custom entity definition.
    shared_ptr<MetaEntityDef> metaEntityDef_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request succeeded.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
