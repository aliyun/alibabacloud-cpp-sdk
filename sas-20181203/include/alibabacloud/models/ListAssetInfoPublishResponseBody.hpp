// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTASSETINFOPUBLISHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTASSETINFOPUBLISHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAssetInfoPublishResponseBodyAssetList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListAssetInfoPublishResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAssetInfoPublishResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AssetList, assetList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAssetInfoPublishResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetList, assetList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAssetInfoPublishResponseBody() = default ;
    ListAssetInfoPublishResponseBody(const ListAssetInfoPublishResponseBody &) = default ;
    ListAssetInfoPublishResponseBody(ListAssetInfoPublishResponseBody &&) = default ;
    ListAssetInfoPublishResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAssetInfoPublishResponseBody() = default ;
    ListAssetInfoPublishResponseBody& operator=(const ListAssetInfoPublishResponseBody &) = default ;
    ListAssetInfoPublishResponseBody& operator=(ListAssetInfoPublishResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetList_ == nullptr
        && return this->requestId_ == nullptr; };
    // assetList Field Functions 
    bool hasAssetList() const { return this->assetList_ != nullptr;};
    void deleteAssetList() { this->assetList_ = nullptr;};
    inline const vector<ListAssetInfoPublishResponseBodyAssetList> & assetList() const { DARABONBA_PTR_GET_CONST(assetList_, vector<ListAssetInfoPublishResponseBodyAssetList>) };
    inline vector<ListAssetInfoPublishResponseBodyAssetList> assetList() { DARABONBA_PTR_GET(assetList_, vector<ListAssetInfoPublishResponseBodyAssetList>) };
    inline ListAssetInfoPublishResponseBody& setAssetList(const vector<ListAssetInfoPublishResponseBodyAssetList> & assetList) { DARABONBA_PTR_SET_VALUE(assetList_, assetList) };
    inline ListAssetInfoPublishResponseBody& setAssetList(vector<ListAssetInfoPublishResponseBodyAssetList> && assetList) { DARABONBA_PTR_SET_RVALUE(assetList_, assetList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAssetInfoPublishResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The servers.
    std::shared_ptr<vector<ListAssetInfoPublishResponseBodyAssetList>> assetList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
