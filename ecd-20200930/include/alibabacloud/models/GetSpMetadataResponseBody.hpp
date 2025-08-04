// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSPMETADATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSPMETADATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class GetSpMetadataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSpMetadataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SpMetadata, spMetadata_);
    };
    friend void from_json(const Darabonba::Json& j, GetSpMetadataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SpMetadata, spMetadata_);
    };
    GetSpMetadataResponseBody() = default ;
    GetSpMetadataResponseBody(const GetSpMetadataResponseBody &) = default ;
    GetSpMetadataResponseBody(GetSpMetadataResponseBody &&) = default ;
    GetSpMetadataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSpMetadataResponseBody() = default ;
    GetSpMetadataResponseBody& operator=(const GetSpMetadataResponseBody &) = default ;
    GetSpMetadataResponseBody& operator=(GetSpMetadataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->spMetadata_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSpMetadataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // spMetadata Field Functions 
    bool hasSpMetadata() const { return this->spMetadata_ != nullptr;};
    void deleteSpMetadata() { this->spMetadata_ = nullptr;};
    inline string spMetadata() const { DARABONBA_PTR_GET_DEFAULT(spMetadata_, "") };
    inline GetSpMetadataResponseBody& setSpMetadata(string spMetadata) { DARABONBA_PTR_SET_VALUE(spMetadata_, spMetadata) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The metadata of the SP.
    std::shared_ptr<string> spMetadata_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
