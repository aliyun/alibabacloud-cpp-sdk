// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFACEUSERBATCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYFACEUSERBATCHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class QueryFaceUserBatchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFaceUserBatchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFaceUserBatchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryFaceUserBatchResponseBody() = default ;
    QueryFaceUserBatchResponseBody(const QueryFaceUserBatchResponseBody &) = default ;
    QueryFaceUserBatchResponseBody(QueryFaceUserBatchResponseBody &&) = default ;
    QueryFaceUserBatchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFaceUserBatchResponseBody() = default ;
    QueryFaceUserBatchResponseBody& operator=(const QueryFaceUserBatchResponseBody &) = default ;
    QueryFaceUserBatchResponseBody& operator=(QueryFaceUserBatchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CustomUserId, customUserId_);
        DARABONBA_PTR_TO_JSON(FacePicList, facePicList_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Params, params_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CustomUserId, customUserId_);
        DARABONBA_PTR_FROM_JSON(FacePicList, facePicList_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Params, params_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
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
      class FacePicList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FacePicList& obj) { 
          DARABONBA_PTR_TO_JSON(FaceMd5, faceMd5_);
          DARABONBA_PTR_TO_JSON(FaceUrl, faceUrl_);
          DARABONBA_PTR_TO_JSON(FeatureDTOList, featureDTOList_);
        };
        friend void from_json(const Darabonba::Json& j, FacePicList& obj) { 
          DARABONBA_PTR_FROM_JSON(FaceMd5, faceMd5_);
          DARABONBA_PTR_FROM_JSON(FaceUrl, faceUrl_);
          DARABONBA_PTR_FROM_JSON(FeatureDTOList, featureDTOList_);
        };
        FacePicList() = default ;
        FacePicList(const FacePicList &) = default ;
        FacePicList(FacePicList &&) = default ;
        FacePicList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FacePicList() = default ;
        FacePicList& operator=(const FacePicList &) = default ;
        FacePicList& operator=(FacePicList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class FeatureDTOList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FeatureDTOList& obj) { 
            DARABONBA_PTR_TO_JSON(AlgorithmName, algorithmName_);
            DARABONBA_PTR_TO_JSON(AlgorithmProvider, algorithmProvider_);
            DARABONBA_PTR_TO_JSON(AlgorithmVersion, algorithmVersion_);
            DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
            DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_TO_JSON(FaceMd5, faceMd5_);
          };
          friend void from_json(const Darabonba::Json& j, FeatureDTOList& obj) { 
            DARABONBA_PTR_FROM_JSON(AlgorithmName, algorithmName_);
            DARABONBA_PTR_FROM_JSON(AlgorithmProvider, algorithmProvider_);
            DARABONBA_PTR_FROM_JSON(AlgorithmVersion, algorithmVersion_);
            DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
            DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_FROM_JSON(FaceMd5, faceMd5_);
          };
          FeatureDTOList() = default ;
          FeatureDTOList(const FeatureDTOList &) = default ;
          FeatureDTOList(FeatureDTOList &&) = default ;
          FeatureDTOList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FeatureDTOList() = default ;
          FeatureDTOList& operator=(const FeatureDTOList &) = default ;
          FeatureDTOList& operator=(FeatureDTOList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->algorithmName_ == nullptr
        && this->algorithmProvider_ == nullptr && this->algorithmVersion_ == nullptr && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->faceMd5_ == nullptr; };
          // algorithmName Field Functions 
          bool hasAlgorithmName() const { return this->algorithmName_ != nullptr;};
          void deleteAlgorithmName() { this->algorithmName_ = nullptr;};
          inline string getAlgorithmName() const { DARABONBA_PTR_GET_DEFAULT(algorithmName_, "") };
          inline FeatureDTOList& setAlgorithmName(string algorithmName) { DARABONBA_PTR_SET_VALUE(algorithmName_, algorithmName) };


          // algorithmProvider Field Functions 
          bool hasAlgorithmProvider() const { return this->algorithmProvider_ != nullptr;};
          void deleteAlgorithmProvider() { this->algorithmProvider_ = nullptr;};
          inline string getAlgorithmProvider() const { DARABONBA_PTR_GET_DEFAULT(algorithmProvider_, "") };
          inline FeatureDTOList& setAlgorithmProvider(string algorithmProvider) { DARABONBA_PTR_SET_VALUE(algorithmProvider_, algorithmProvider) };


          // algorithmVersion Field Functions 
          bool hasAlgorithmVersion() const { return this->algorithmVersion_ != nullptr;};
          void deleteAlgorithmVersion() { this->algorithmVersion_ = nullptr;};
          inline string getAlgorithmVersion() const { DARABONBA_PTR_GET_DEFAULT(algorithmVersion_, "") };
          inline FeatureDTOList& setAlgorithmVersion(string algorithmVersion) { DARABONBA_PTR_SET_VALUE(algorithmVersion_, algorithmVersion) };


          // errorCode Field Functions 
          bool hasErrorCode() const { return this->errorCode_ != nullptr;};
          void deleteErrorCode() { this->errorCode_ = nullptr;};
          inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
          inline FeatureDTOList& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


          // errorMessage Field Functions 
          bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
          void deleteErrorMessage() { this->errorMessage_ = nullptr;};
          inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
          inline FeatureDTOList& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


          // faceMd5 Field Functions 
          bool hasFaceMd5() const { return this->faceMd5_ != nullptr;};
          void deleteFaceMd5() { this->faceMd5_ = nullptr;};
          inline string getFaceMd5() const { DARABONBA_PTR_GET_DEFAULT(faceMd5_, "") };
          inline FeatureDTOList& setFaceMd5(string faceMd5) { DARABONBA_PTR_SET_VALUE(faceMd5_, faceMd5) };


        protected:
          // The algorithm name.
          shared_ptr<string> algorithmName_ {};
          // The algorithm provider.
          shared_ptr<string> algorithmProvider_ {};
          // The algorithm version.
          shared_ptr<string> algorithmVersion_ {};
          // The algorithm return code:
          // 
          // - **200**: Successful.
          // - Other values: Error codes. For more information, see [Error codes](https://help.aliyun.com/document_detail/288314.html).
          shared_ptr<string> errorCode_ {};
          // The error message returned when an error occurs during algorithm execution.
          shared_ptr<string> errorMessage_ {};
          // The MD5 hash value of the face feature.
          shared_ptr<string> faceMd5_ {};
        };

        virtual bool empty() const override { return this->faceMd5_ == nullptr
        && this->faceUrl_ == nullptr && this->featureDTOList_ == nullptr; };
        // faceMd5 Field Functions 
        bool hasFaceMd5() const { return this->faceMd5_ != nullptr;};
        void deleteFaceMd5() { this->faceMd5_ = nullptr;};
        inline string getFaceMd5() const { DARABONBA_PTR_GET_DEFAULT(faceMd5_, "") };
        inline FacePicList& setFaceMd5(string faceMd5) { DARABONBA_PTR_SET_VALUE(faceMd5_, faceMd5) };


        // faceUrl Field Functions 
        bool hasFaceUrl() const { return this->faceUrl_ != nullptr;};
        void deleteFaceUrl() { this->faceUrl_ = nullptr;};
        inline string getFaceUrl() const { DARABONBA_PTR_GET_DEFAULT(faceUrl_, "") };
        inline FacePicList& setFaceUrl(string faceUrl) { DARABONBA_PTR_SET_VALUE(faceUrl_, faceUrl) };


        // featureDTOList Field Functions 
        bool hasFeatureDTOList() const { return this->featureDTOList_ != nullptr;};
        void deleteFeatureDTOList() { this->featureDTOList_ = nullptr;};
        inline const vector<FacePicList::FeatureDTOList> & getFeatureDTOList() const { DARABONBA_PTR_GET_CONST(featureDTOList_, vector<FacePicList::FeatureDTOList>) };
        inline vector<FacePicList::FeatureDTOList> getFeatureDTOList() { DARABONBA_PTR_GET(featureDTOList_, vector<FacePicList::FeatureDTOList>) };
        inline FacePicList& setFeatureDTOList(const vector<FacePicList::FeatureDTOList> & featureDTOList) { DARABONBA_PTR_SET_VALUE(featureDTOList_, featureDTOList) };
        inline FacePicList& setFeatureDTOList(vector<FacePicList::FeatureDTOList> && featureDTOList) { DARABONBA_PTR_SET_RVALUE(featureDTOList_, featureDTOList) };


      protected:
        // The MD5 hash value of the user\\"s face picture.
        shared_ptr<string> faceMd5_ {};
        // The URL of the user\\"s face picture.
        shared_ptr<string> faceUrl_ {};
        // The list of face feature values.
        shared_ptr<vector<FacePicList::FeatureDTOList>> featureDTOList_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->customUserId_ == nullptr && this->facePicList_ == nullptr && this->modifyTime_ == nullptr && this->name_ == nullptr && this->params_ == nullptr
        && this->userId_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Data& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // customUserId Field Functions 
      bool hasCustomUserId() const { return this->customUserId_ != nullptr;};
      void deleteCustomUserId() { this->customUserId_ = nullptr;};
      inline string getCustomUserId() const { DARABONBA_PTR_GET_DEFAULT(customUserId_, "") };
      inline Data& setCustomUserId(string customUserId) { DARABONBA_PTR_SET_VALUE(customUserId_, customUserId) };


      // facePicList Field Functions 
      bool hasFacePicList() const { return this->facePicList_ != nullptr;};
      void deleteFacePicList() { this->facePicList_ = nullptr;};
      inline const vector<Data::FacePicList> & getFacePicList() const { DARABONBA_PTR_GET_CONST(facePicList_, vector<Data::FacePicList>) };
      inline vector<Data::FacePicList> getFacePicList() { DARABONBA_PTR_GET(facePicList_, vector<Data::FacePicList>) };
      inline Data& setFacePicList(const vector<Data::FacePicList> & facePicList) { DARABONBA_PTR_SET_VALUE(facePicList_, facePicList) };
      inline Data& setFacePicList(vector<Data::FacePicList> && facePicList) { DARABONBA_PTR_SET_RVALUE(facePicList_, facePicList) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
      inline Data& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // params Field Functions 
      bool hasParams() const { return this->params_ != nullptr;};
      void deleteParams() { this->params_ = nullptr;};
      inline string getParams() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
      inline Data& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Data& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The 13-digit timestamp when the user\\"s face data was created, in milliseconds.
      shared_ptr<int64_t> createTime_ {};
      // The user identification ID.
      shared_ptr<string> customUserId_ {};
      // The list of face picture information for the user.
      shared_ptr<vector<Data::FacePicList>> facePicList_ {};
      // The 13-digit timestamp when the user\\"s face data was last modified, in milliseconds.
      shared_ptr<int64_t> modifyTime_ {};
      // The username.
      shared_ptr<string> name_ {};
      // The custom user parameters.
      shared_ptr<string> params_ {};
      // The user ID.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryFaceUserBatchResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<QueryFaceUserBatchResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<QueryFaceUserBatchResponseBody::Data>) };
    inline vector<QueryFaceUserBatchResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<QueryFaceUserBatchResponseBody::Data>) };
    inline QueryFaceUserBatchResponseBody& setData(const vector<QueryFaceUserBatchResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryFaceUserBatchResponseBody& setData(vector<QueryFaceUserBatchResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline QueryFaceUserBatchResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryFaceUserBatchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryFaceUserBatchResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The API return code:
    // 
    // - **200**: Successful.
    // - Other values: Error codes. For more information, see [Error codes](https://help.aliyun.com/document_detail/145071.html).
    shared_ptr<string> code_ {};
    // The data returned when the call is successful.
    shared_ptr<vector<QueryFaceUserBatchResponseBody::Data>> data_ {};
    // The error message returned when the call fails.
    shared_ptr<string> errorMessage_ {};
    // The unique identifier generated by Alibaba Cloud for the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful:
    // - **true**: The call was successful.
    // - **false**: The call failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
