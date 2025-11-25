// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDASSETSCHEMASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDASSETSCHEMASRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCloudAssetSchemasResponseBodyCloudAssetSchemas.hpp>
#include <alibabacloud/models/ListCloudAssetSchemasResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCloudAssetSchemasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudAssetSchemasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CloudAssetSchemas, cloudAssetSchemas_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudAssetSchemasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudAssetSchemas, cloudAssetSchemas_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListCloudAssetSchemasResponseBody() = default ;
    ListCloudAssetSchemasResponseBody(const ListCloudAssetSchemasResponseBody &) = default ;
    ListCloudAssetSchemasResponseBody(ListCloudAssetSchemasResponseBody &&) = default ;
    ListCloudAssetSchemasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudAssetSchemasResponseBody() = default ;
    ListCloudAssetSchemasResponseBody& operator=(const ListCloudAssetSchemasResponseBody &) = default ;
    ListCloudAssetSchemasResponseBody& operator=(ListCloudAssetSchemasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cloudAssetSchemas_ == nullptr
        && return this->pageInfo_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // cloudAssetSchemas Field Functions 
    bool hasCloudAssetSchemas() const { return this->cloudAssetSchemas_ != nullptr;};
    void deleteCloudAssetSchemas() { this->cloudAssetSchemas_ = nullptr;};
    inline const vector<ListCloudAssetSchemasResponseBodyCloudAssetSchemas> & cloudAssetSchemas() const { DARABONBA_PTR_GET_CONST(cloudAssetSchemas_, vector<ListCloudAssetSchemasResponseBodyCloudAssetSchemas>) };
    inline vector<ListCloudAssetSchemasResponseBodyCloudAssetSchemas> cloudAssetSchemas() { DARABONBA_PTR_GET(cloudAssetSchemas_, vector<ListCloudAssetSchemasResponseBodyCloudAssetSchemas>) };
    inline ListCloudAssetSchemasResponseBody& setCloudAssetSchemas(const vector<ListCloudAssetSchemasResponseBodyCloudAssetSchemas> & cloudAssetSchemas) { DARABONBA_PTR_SET_VALUE(cloudAssetSchemas_, cloudAssetSchemas) };
    inline ListCloudAssetSchemasResponseBody& setCloudAssetSchemas(vector<ListCloudAssetSchemasResponseBodyCloudAssetSchemas> && cloudAssetSchemas) { DARABONBA_PTR_SET_RVALUE(cloudAssetSchemas_, cloudAssetSchemas) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListCloudAssetSchemasResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListCloudAssetSchemasResponseBodyPageInfo) };
    inline ListCloudAssetSchemasResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, ListCloudAssetSchemasResponseBodyPageInfo) };
    inline ListCloudAssetSchemasResponseBody& setPageInfo(const ListCloudAssetSchemasResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListCloudAssetSchemasResponseBody& setPageInfo(ListCloudAssetSchemasResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCloudAssetSchemasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListCloudAssetSchemasResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // List of asset structure definitions
    std::shared_ptr<vector<ListCloudAssetSchemasResponseBodyCloudAssetSchemas>> cloudAssetSchemas_ = nullptr;
    // The pagination information.
    std::shared_ptr<ListCloudAssetSchemasResponseBodyPageInfo> pageInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the call was successful. Values: 
    // - **true**: The call was successful. 
    // - **false**: The call failed.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
