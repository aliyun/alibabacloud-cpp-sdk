// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCREATEVODPACKAGINGASSETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHCREATEVODPACKAGINGASSETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchCreateVodPackagingAssetResponseBodyResultList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class BatchCreateVodPackagingAssetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCreateVodPackagingAssetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultList, resultList_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCreateVodPackagingAssetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultList, resultList_);
    };
    BatchCreateVodPackagingAssetResponseBody() = default ;
    BatchCreateVodPackagingAssetResponseBody(const BatchCreateVodPackagingAssetResponseBody &) = default ;
    BatchCreateVodPackagingAssetResponseBody(BatchCreateVodPackagingAssetResponseBody &&) = default ;
    BatchCreateVodPackagingAssetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCreateVodPackagingAssetResponseBody() = default ;
    BatchCreateVodPackagingAssetResponseBody& operator=(const BatchCreateVodPackagingAssetResponseBody &) = default ;
    BatchCreateVodPackagingAssetResponseBody& operator=(BatchCreateVodPackagingAssetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupName_ == nullptr
        && return this->requestId_ == nullptr && return this->resultList_ == nullptr; };
    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline BatchCreateVodPackagingAssetResponseBody& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchCreateVodPackagingAssetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultList Field Functions 
    bool hasResultList() const { return this->resultList_ != nullptr;};
    void deleteResultList() { this->resultList_ = nullptr;};
    inline const vector<BatchCreateVodPackagingAssetResponseBodyResultList> & resultList() const { DARABONBA_PTR_GET_CONST(resultList_, vector<BatchCreateVodPackagingAssetResponseBodyResultList>) };
    inline vector<BatchCreateVodPackagingAssetResponseBodyResultList> resultList() { DARABONBA_PTR_GET(resultList_, vector<BatchCreateVodPackagingAssetResponseBodyResultList>) };
    inline BatchCreateVodPackagingAssetResponseBody& setResultList(const vector<BatchCreateVodPackagingAssetResponseBodyResultList> & resultList) { DARABONBA_PTR_SET_VALUE(resultList_, resultList) };
    inline BatchCreateVodPackagingAssetResponseBody& setResultList(vector<BatchCreateVodPackagingAssetResponseBodyResultList> && resultList) { DARABONBA_PTR_SET_RVALUE(resultList_, resultList) };


  protected:
    // The name of the packaging group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The results of asset ingestion.
    std::shared_ptr<vector<BatchCreateVodPackagingAssetResponseBodyResultList>> resultList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
