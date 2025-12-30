// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCREATEVODPACKAGINGASSETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHCREATEVODPACKAGINGASSETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/VodPackagingAsset.hpp>
#include <vector>
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
    class ResultList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultList& obj) { 
        DARABONBA_PTR_TO_JSON(Asset, asset_);
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Message, message_);
      };
      friend void from_json(const Darabonba::Json& j, ResultList& obj) { 
        DARABONBA_PTR_FROM_JSON(Asset, asset_);
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
      };
      ResultList() = default ;
      ResultList(const ResultList &) = default ;
      ResultList(ResultList &&) = default ;
      ResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultList() = default ;
      ResultList& operator=(const ResultList &) = default ;
      ResultList& operator=(ResultList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->asset_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr; };
      // asset Field Functions 
      bool hasAsset() const { return this->asset_ != nullptr;};
      void deleteAsset() { this->asset_ = nullptr;};
      inline const VodPackagingAsset & getAsset() const { DARABONBA_PTR_GET_CONST(asset_, VodPackagingAsset) };
      inline VodPackagingAsset getAsset() { DARABONBA_PTR_GET(asset_, VodPackagingAsset) };
      inline ResultList& setAsset(const VodPackagingAsset & asset) { DARABONBA_PTR_SET_VALUE(asset_, asset) };
      inline ResultList& setAsset(VodPackagingAsset && asset) { DARABONBA_PTR_SET_RVALUE(asset_, asset) };


      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline ResultList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline ResultList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    protected:
      // The information about the ingested asset.
      shared_ptr<VodPackagingAsset> asset_ {};
      // The error code for failed ingestion.
      shared_ptr<string> code_ {};
      // The error message for failed ingestion.
      shared_ptr<string> message_ {};
    };

    virtual bool empty() const override { return this->groupName_ == nullptr
        && this->requestId_ == nullptr && this->resultList_ == nullptr; };
    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline BatchCreateVodPackagingAssetResponseBody& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchCreateVodPackagingAssetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultList Field Functions 
    bool hasResultList() const { return this->resultList_ != nullptr;};
    void deleteResultList() { this->resultList_ = nullptr;};
    inline const vector<BatchCreateVodPackagingAssetResponseBody::ResultList> & getResultList() const { DARABONBA_PTR_GET_CONST(resultList_, vector<BatchCreateVodPackagingAssetResponseBody::ResultList>) };
    inline vector<BatchCreateVodPackagingAssetResponseBody::ResultList> getResultList() { DARABONBA_PTR_GET(resultList_, vector<BatchCreateVodPackagingAssetResponseBody::ResultList>) };
    inline BatchCreateVodPackagingAssetResponseBody& setResultList(const vector<BatchCreateVodPackagingAssetResponseBody::ResultList> & resultList) { DARABONBA_PTR_SET_VALUE(resultList_, resultList) };
    inline BatchCreateVodPackagingAssetResponseBody& setResultList(vector<BatchCreateVodPackagingAssetResponseBody::ResultList> && resultList) { DARABONBA_PTR_SET_RVALUE(resultList_, resultList) };


  protected:
    // The name of the packaging group.
    shared_ptr<string> groupName_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The results of asset ingestion.
    shared_ptr<vector<BatchCreateVodPackagingAssetResponseBody::ResultList>> resultList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
