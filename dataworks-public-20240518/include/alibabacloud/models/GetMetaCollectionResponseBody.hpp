// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETACOLLECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMETACOLLECTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMetaCollectionResponseBodyMetaCollection.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetMetaCollectionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaCollectionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MetaCollection, metaCollection_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaCollectionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MetaCollection, metaCollection_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMetaCollectionResponseBody() = default ;
    GetMetaCollectionResponseBody(const GetMetaCollectionResponseBody &) = default ;
    GetMetaCollectionResponseBody(GetMetaCollectionResponseBody &&) = default ;
    GetMetaCollectionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaCollectionResponseBody() = default ;
    GetMetaCollectionResponseBody& operator=(const GetMetaCollectionResponseBody &) = default ;
    GetMetaCollectionResponseBody& operator=(GetMetaCollectionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->metaCollection_ == nullptr
        && return this->requestId_ == nullptr; };
    // metaCollection Field Functions 
    bool hasMetaCollection() const { return this->metaCollection_ != nullptr;};
    void deleteMetaCollection() { this->metaCollection_ = nullptr;};
    inline const GetMetaCollectionResponseBodyMetaCollection & metaCollection() const { DARABONBA_PTR_GET_CONST(metaCollection_, GetMetaCollectionResponseBodyMetaCollection) };
    inline GetMetaCollectionResponseBodyMetaCollection metaCollection() { DARABONBA_PTR_GET(metaCollection_, GetMetaCollectionResponseBodyMetaCollection) };
    inline GetMetaCollectionResponseBody& setMetaCollection(const GetMetaCollectionResponseBodyMetaCollection & metaCollection) { DARABONBA_PTR_SET_VALUE(metaCollection_, metaCollection) };
    inline GetMetaCollectionResponseBody& setMetaCollection(GetMetaCollectionResponseBodyMetaCollection && metaCollection) { DARABONBA_PTR_SET_RVALUE(metaCollection_, metaCollection) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMetaCollectionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The collection details.
    std::shared_ptr<GetMetaCollectionResponseBodyMetaCollection> metaCollection_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
