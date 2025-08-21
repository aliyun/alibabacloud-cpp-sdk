// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERBASICINFOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERBASICINFOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListUserBasicInfosResponseBodyUserBasicInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListUserBasicInfosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserBasicInfosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_TO_JSON(Marker, marker_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserBasicInfos, userBasicInfos_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserBasicInfosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_FROM_JSON(Marker, marker_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserBasicInfos, userBasicInfos_);
    };
    ListUserBasicInfosResponseBody() = default ;
    ListUserBasicInfosResponseBody(const ListUserBasicInfosResponseBody &) = default ;
    ListUserBasicInfosResponseBody(ListUserBasicInfosResponseBody &&) = default ;
    ListUserBasicInfosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserBasicInfosResponseBody() = default ;
    ListUserBasicInfosResponseBody& operator=(const ListUserBasicInfosResponseBody &) = default ;
    ListUserBasicInfosResponseBody& operator=(ListUserBasicInfosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isTruncated_ != nullptr
        && this->marker_ != nullptr && this->requestId_ != nullptr && this->userBasicInfos_ != nullptr; };
    // isTruncated Field Functions 
    bool hasIsTruncated() const { return this->isTruncated_ != nullptr;};
    void deleteIsTruncated() { this->isTruncated_ = nullptr;};
    inline bool isTruncated() const { DARABONBA_PTR_GET_DEFAULT(isTruncated_, false) };
    inline ListUserBasicInfosResponseBody& setIsTruncated(bool isTruncated) { DARABONBA_PTR_SET_VALUE(isTruncated_, isTruncated) };


    // marker Field Functions 
    bool hasMarker() const { return this->marker_ != nullptr;};
    void deleteMarker() { this->marker_ = nullptr;};
    inline string marker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
    inline ListUserBasicInfosResponseBody& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserBasicInfosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userBasicInfos Field Functions 
    bool hasUserBasicInfos() const { return this->userBasicInfos_ != nullptr;};
    void deleteUserBasicInfos() { this->userBasicInfos_ = nullptr;};
    inline const ListUserBasicInfosResponseBodyUserBasicInfos & userBasicInfos() const { DARABONBA_PTR_GET_CONST(userBasicInfos_, ListUserBasicInfosResponseBodyUserBasicInfos) };
    inline ListUserBasicInfosResponseBodyUserBasicInfos userBasicInfos() { DARABONBA_PTR_GET(userBasicInfos_, ListUserBasicInfosResponseBodyUserBasicInfos) };
    inline ListUserBasicInfosResponseBody& setUserBasicInfos(const ListUserBasicInfosResponseBodyUserBasicInfos & userBasicInfos) { DARABONBA_PTR_SET_VALUE(userBasicInfos_, userBasicInfos) };
    inline ListUserBasicInfosResponseBody& setUserBasicInfos(ListUserBasicInfosResponseBodyUserBasicInfos && userBasicInfos) { DARABONBA_PTR_SET_RVALUE(userBasicInfos_, userBasicInfos) };


  protected:
    // Indicates whether the response is truncated. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> isTruncated_ = nullptr;
    // The `marker`. This parameter is returned only if the value of `IsTruncated` is `true`. If the parameter is returned, you can call this operation again and set this parameter to obtain the truncated part.``
    std::shared_ptr<string> marker_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The basic information about the RAM users.
    std::shared_ptr<ListUserBasicInfosResponseBodyUserBasicInfos> userBasicInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
