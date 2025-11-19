// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDYNAMICIMAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDYNAMICIMAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDynamicImageResponseBodyDynamicImageList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListDynamicImageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDynamicImageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DynamicImageList, dynamicImageList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDynamicImageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DynamicImageList, dynamicImageList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDynamicImageResponseBody() = default ;
    ListDynamicImageResponseBody(const ListDynamicImageResponseBody &) = default ;
    ListDynamicImageResponseBody(ListDynamicImageResponseBody &&) = default ;
    ListDynamicImageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDynamicImageResponseBody() = default ;
    ListDynamicImageResponseBody& operator=(const ListDynamicImageResponseBody &) = default ;
    ListDynamicImageResponseBody& operator=(ListDynamicImageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dynamicImageList_ == nullptr
        && return this->requestId_ == nullptr; };
    // dynamicImageList Field Functions 
    bool hasDynamicImageList() const { return this->dynamicImageList_ != nullptr;};
    void deleteDynamicImageList() { this->dynamicImageList_ = nullptr;};
    inline const vector<ListDynamicImageResponseBodyDynamicImageList> & dynamicImageList() const { DARABONBA_PTR_GET_CONST(dynamicImageList_, vector<ListDynamicImageResponseBodyDynamicImageList>) };
    inline vector<ListDynamicImageResponseBodyDynamicImageList> dynamicImageList() { DARABONBA_PTR_GET(dynamicImageList_, vector<ListDynamicImageResponseBodyDynamicImageList>) };
    inline ListDynamicImageResponseBody& setDynamicImageList(const vector<ListDynamicImageResponseBodyDynamicImageList> & dynamicImageList) { DARABONBA_PTR_SET_VALUE(dynamicImageList_, dynamicImageList) };
    inline ListDynamicImageResponseBody& setDynamicImageList(vector<ListDynamicImageResponseBodyDynamicImageList> && dynamicImageList) { DARABONBA_PTR_SET_RVALUE(dynamicImageList_, dynamicImageList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDynamicImageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of animated stickers.
    std::shared_ptr<vector<ListDynamicImageResponseBodyDynamicImageList>> dynamicImageList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
