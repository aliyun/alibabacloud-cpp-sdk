// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETAENTITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMETAENTITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MetaEntity.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetMetaEntityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaEntityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MetaEntity, metaEntity_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaEntityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MetaEntity, metaEntity_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetMetaEntityResponseBody() = default ;
    GetMetaEntityResponseBody(const GetMetaEntityResponseBody &) = default ;
    GetMetaEntityResponseBody(GetMetaEntityResponseBody &&) = default ;
    GetMetaEntityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaEntityResponseBody() = default ;
    GetMetaEntityResponseBody& operator=(const GetMetaEntityResponseBody &) = default ;
    GetMetaEntityResponseBody& operator=(GetMetaEntityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->metaEntity_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // metaEntity Field Functions 
    bool hasMetaEntity() const { return this->metaEntity_ != nullptr;};
    void deleteMetaEntity() { this->metaEntity_ = nullptr;};
    inline const MetaEntity & getMetaEntity() const { DARABONBA_PTR_GET_CONST(metaEntity_, MetaEntity) };
    inline MetaEntity getMetaEntity() { DARABONBA_PTR_GET(metaEntity_, MetaEntity) };
    inline GetMetaEntityResponseBody& setMetaEntity(const MetaEntity & metaEntity) { DARABONBA_PTR_SET_VALUE(metaEntity_, metaEntity) };
    inline GetMetaEntityResponseBody& setMetaEntity(MetaEntity && metaEntity) { DARABONBA_PTR_SET_RVALUE(metaEntity_, metaEntity) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMetaEntityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetMetaEntityResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<MetaEntity> metaEntity_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
