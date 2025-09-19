// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCKERHUBIMAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCKERHUBIMAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDockerhubImageResponseBodyImageList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListDockerhubImageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDockerhubImageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ImageList, imageList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDockerhubImageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageList, imageList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDockerhubImageResponseBody() = default ;
    ListDockerhubImageResponseBody(const ListDockerhubImageResponseBody &) = default ;
    ListDockerhubImageResponseBody(ListDockerhubImageResponseBody &&) = default ;
    ListDockerhubImageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDockerhubImageResponseBody() = default ;
    ListDockerhubImageResponseBody& operator=(const ListDockerhubImageResponseBody &) = default ;
    ListDockerhubImageResponseBody& operator=(ListDockerhubImageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageList_ != nullptr
        && this->requestId_ != nullptr; };
    // imageList Field Functions 
    bool hasImageList() const { return this->imageList_ != nullptr;};
    void deleteImageList() { this->imageList_ = nullptr;};
    inline const vector<ListDockerhubImageResponseBodyImageList> & imageList() const { DARABONBA_PTR_GET_CONST(imageList_, vector<ListDockerhubImageResponseBodyImageList>) };
    inline vector<ListDockerhubImageResponseBodyImageList> imageList() { DARABONBA_PTR_GET(imageList_, vector<ListDockerhubImageResponseBodyImageList>) };
    inline ListDockerhubImageResponseBody& setImageList(const vector<ListDockerhubImageResponseBodyImageList> & imageList) { DARABONBA_PTR_SET_VALUE(imageList_, imageList) };
    inline ListDockerhubImageResponseBody& setImageList(vector<ListDockerhubImageResponseBodyImageList> && imageList) { DARABONBA_PTR_SET_RVALUE(imageList_, imageList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDockerhubImageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the images.
    std::shared_ptr<vector<ListDockerhubImageResponseBodyImageList>> imageList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
