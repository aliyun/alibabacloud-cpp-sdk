// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGMETAASSETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGMETAASSETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListTagMetaAssetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagMetaAssetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagMetaAssetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListTagMetaAssetResponseBody() = default ;
    ListTagMetaAssetResponseBody(const ListTagMetaAssetResponseBody &) = default ;
    ListTagMetaAssetResponseBody(ListTagMetaAssetResponseBody &&) = default ;
    ListTagMetaAssetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTagMetaAssetResponseBody() = default ;
    ListTagMetaAssetResponseBody& operator=(const ListTagMetaAssetResponseBody &) = default ;
    ListTagMetaAssetResponseBody& operator=(ListTagMetaAssetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_ANY_TO_JSON(MetaEntityAttrs, metaEntityAttrs_);
        DARABONBA_PTR_TO_JSON(MetaType, metaType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_ANY_FROM_JSON(MetaEntityAttrs, metaEntityAttrs_);
        DARABONBA_PTR_FROM_JSON(MetaType, metaType_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->metaEntityAttrs_ == nullptr
        && this->metaType_ == nullptr; };
      // metaEntityAttrs Field Functions 
      bool hasMetaEntityAttrs() const { return this->metaEntityAttrs_ != nullptr;};
      void deleteMetaEntityAttrs() { this->metaEntityAttrs_ = nullptr;};
      inline       const Darabonba::Json & getMetaEntityAttrs() const { DARABONBA_GET(metaEntityAttrs_) };
      Darabonba::Json & getMetaEntityAttrs() { DARABONBA_GET(metaEntityAttrs_) };
      inline Data& setMetaEntityAttrs(const Darabonba::Json & metaEntityAttrs) { DARABONBA_SET_VALUE(metaEntityAttrs_, metaEntityAttrs) };
      inline Data& setMetaEntityAttrs(Darabonba::Json && metaEntityAttrs) { DARABONBA_SET_RVALUE(metaEntityAttrs_, metaEntityAttrs) };


      // metaType Field Functions 
      bool hasMetaType() const { return this->metaType_ != nullptr;};
      void deleteMetaType() { this->metaType_ = nullptr;};
      inline string getMetaType() const { DARABONBA_PTR_GET_DEFAULT(metaType_, "") };
      inline Data& setMetaType(string metaType) { DARABONBA_PTR_SET_VALUE(metaType_, metaType) };


    protected:
      Darabonba::Json metaEntityAttrs_ {};
      shared_ptr<string> metaType_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListTagMetaAssetResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListTagMetaAssetResponseBody::Data>) };
    inline vector<ListTagMetaAssetResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListTagMetaAssetResponseBody::Data>) };
    inline ListTagMetaAssetResponseBody& setData(const vector<ListTagMetaAssetResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListTagMetaAssetResponseBody& setData(vector<ListTagMetaAssetResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListTagMetaAssetResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListTagMetaAssetResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTagMetaAssetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListTagMetaAssetResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListTagMetaAssetResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListTagMetaAssetResponseBody::Data>> data_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMessage_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
