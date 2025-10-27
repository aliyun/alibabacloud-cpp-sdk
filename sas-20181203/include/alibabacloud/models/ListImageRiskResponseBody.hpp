// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIMAGERISKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTIMAGERISKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListImageRiskResponseBodyImageRiskList.hpp>
#include <alibabacloud/models/ListImageRiskResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListImageRiskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListImageRiskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ImageRiskList, imageRiskList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListImageRiskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageRiskList, imageRiskList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListImageRiskResponseBody() = default ;
    ListImageRiskResponseBody(const ListImageRiskResponseBody &) = default ;
    ListImageRiskResponseBody(ListImageRiskResponseBody &&) = default ;
    ListImageRiskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListImageRiskResponseBody() = default ;
    ListImageRiskResponseBody& operator=(const ListImageRiskResponseBody &) = default ;
    ListImageRiskResponseBody& operator=(ListImageRiskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageRiskList_ == nullptr
        && return this->pageInfo_ == nullptr && return this->requestId_ == nullptr; };
    // imageRiskList Field Functions 
    bool hasImageRiskList() const { return this->imageRiskList_ != nullptr;};
    void deleteImageRiskList() { this->imageRiskList_ = nullptr;};
    inline const vector<ListImageRiskResponseBodyImageRiskList> & imageRiskList() const { DARABONBA_PTR_GET_CONST(imageRiskList_, vector<ListImageRiskResponseBodyImageRiskList>) };
    inline vector<ListImageRiskResponseBodyImageRiskList> imageRiskList() { DARABONBA_PTR_GET(imageRiskList_, vector<ListImageRiskResponseBodyImageRiskList>) };
    inline ListImageRiskResponseBody& setImageRiskList(const vector<ListImageRiskResponseBodyImageRiskList> & imageRiskList) { DARABONBA_PTR_SET_VALUE(imageRiskList_, imageRiskList) };
    inline ListImageRiskResponseBody& setImageRiskList(vector<ListImageRiskResponseBodyImageRiskList> && imageRiskList) { DARABONBA_PTR_SET_RVALUE(imageRiskList_, imageRiskList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListImageRiskResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListImageRiskResponseBodyPageInfo) };
    inline ListImageRiskResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, ListImageRiskResponseBodyPageInfo) };
    inline ListImageRiskResponseBody& setPageInfo(const ListImageRiskResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListImageRiskResponseBody& setPageInfo(ListImageRiskResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListImageRiskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of security information about the image.
    std::shared_ptr<vector<ListImageRiskResponseBodyImageRiskList>> imageRiskList_ = nullptr;
    // The pagination information.
    std::shared_ptr<ListImageRiskResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
