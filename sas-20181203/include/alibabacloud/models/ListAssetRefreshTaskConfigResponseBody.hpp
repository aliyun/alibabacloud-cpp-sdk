// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTASSETREFRESHTASKCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTASSETREFRESHTASKCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAssetRefreshTaskConfigResponseBodyAssetRefreshConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListAssetRefreshTaskConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAssetRefreshTaskConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AssetRefreshConfig, assetRefreshConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAssetRefreshTaskConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetRefreshConfig, assetRefreshConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAssetRefreshTaskConfigResponseBody() = default ;
    ListAssetRefreshTaskConfigResponseBody(const ListAssetRefreshTaskConfigResponseBody &) = default ;
    ListAssetRefreshTaskConfigResponseBody(ListAssetRefreshTaskConfigResponseBody &&) = default ;
    ListAssetRefreshTaskConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAssetRefreshTaskConfigResponseBody() = default ;
    ListAssetRefreshTaskConfigResponseBody& operator=(const ListAssetRefreshTaskConfigResponseBody &) = default ;
    ListAssetRefreshTaskConfigResponseBody& operator=(ListAssetRefreshTaskConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->assetRefreshConfig_ != nullptr
        && this->requestId_ != nullptr; };
    // assetRefreshConfig Field Functions 
    bool hasAssetRefreshConfig() const { return this->assetRefreshConfig_ != nullptr;};
    void deleteAssetRefreshConfig() { this->assetRefreshConfig_ = nullptr;};
    inline const vector<ListAssetRefreshTaskConfigResponseBodyAssetRefreshConfig> & assetRefreshConfig() const { DARABONBA_PTR_GET_CONST(assetRefreshConfig_, vector<ListAssetRefreshTaskConfigResponseBodyAssetRefreshConfig>) };
    inline vector<ListAssetRefreshTaskConfigResponseBodyAssetRefreshConfig> assetRefreshConfig() { DARABONBA_PTR_GET(assetRefreshConfig_, vector<ListAssetRefreshTaskConfigResponseBodyAssetRefreshConfig>) };
    inline ListAssetRefreshTaskConfigResponseBody& setAssetRefreshConfig(const vector<ListAssetRefreshTaskConfigResponseBodyAssetRefreshConfig> & assetRefreshConfig) { DARABONBA_PTR_SET_VALUE(assetRefreshConfig_, assetRefreshConfig) };
    inline ListAssetRefreshTaskConfigResponseBody& setAssetRefreshConfig(vector<ListAssetRefreshTaskConfigResponseBodyAssetRefreshConfig> && assetRefreshConfig) { DARABONBA_PTR_SET_RVALUE(assetRefreshConfig_, assetRefreshConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAssetRefreshTaskConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The asset synchronization configuration.
    std::shared_ptr<vector<ListAssetRefreshTaskConfigResponseBodyAssetRefreshConfig>> assetRefreshConfig_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
