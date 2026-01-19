// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESIGNATURESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESIGNATURESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeSignaturesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSignaturesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SignatureInfos, signatureInfos_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSignaturesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SignatureInfos, signatureInfos_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSignaturesResponseBody() = default ;
    DescribeSignaturesResponseBody(const DescribeSignaturesResponseBody &) = default ;
    DescribeSignaturesResponseBody(DescribeSignaturesResponseBody &&) = default ;
    DescribeSignaturesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSignaturesResponseBody() = default ;
    DescribeSignaturesResponseBody& operator=(const DescribeSignaturesResponseBody &) = default ;
    DescribeSignaturesResponseBody& operator=(DescribeSignaturesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SignatureInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SignatureInfos& obj) { 
        DARABONBA_PTR_TO_JSON(SignatureInfo, signatureInfo_);
      };
      friend void from_json(const Darabonba::Json& j, SignatureInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(SignatureInfo, signatureInfo_);
      };
      SignatureInfos() = default ;
      SignatureInfos(const SignatureInfos &) = default ;
      SignatureInfos(SignatureInfos &&) = default ;
      SignatureInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SignatureInfos() = default ;
      SignatureInfos& operator=(const SignatureInfos &) = default ;
      SignatureInfos& operator=(SignatureInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SignatureInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SignatureInfo& obj) { 
          DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(SignatureId, signatureId_);
          DARABONBA_PTR_TO_JSON(SignatureKey, signatureKey_);
          DARABONBA_PTR_TO_JSON(SignatureName, signatureName_);
          DARABONBA_PTR_TO_JSON(SignatureSecret, signatureSecret_);
        };
        friend void from_json(const Darabonba::Json& j, SignatureInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(SignatureId, signatureId_);
          DARABONBA_PTR_FROM_JSON(SignatureKey, signatureKey_);
          DARABONBA_PTR_FROM_JSON(SignatureName, signatureName_);
          DARABONBA_PTR_FROM_JSON(SignatureSecret, signatureSecret_);
        };
        SignatureInfo() = default ;
        SignatureInfo(const SignatureInfo &) = default ;
        SignatureInfo(SignatureInfo &&) = default ;
        SignatureInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SignatureInfo() = default ;
        SignatureInfo& operator=(const SignatureInfo &) = default ;
        SignatureInfo& operator=(SignatureInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createdTime_ == nullptr
        && this->modifiedTime_ == nullptr && this->regionId_ == nullptr && this->signatureId_ == nullptr && this->signatureKey_ == nullptr && this->signatureName_ == nullptr
        && this->signatureSecret_ == nullptr; };
        // createdTime Field Functions 
        bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
        void deleteCreatedTime() { this->createdTime_ = nullptr;};
        inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
        inline SignatureInfo& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


        // modifiedTime Field Functions 
        bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
        void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
        inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
        inline SignatureInfo& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline SignatureInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // signatureId Field Functions 
        bool hasSignatureId() const { return this->signatureId_ != nullptr;};
        void deleteSignatureId() { this->signatureId_ = nullptr;};
        inline string getSignatureId() const { DARABONBA_PTR_GET_DEFAULT(signatureId_, "") };
        inline SignatureInfo& setSignatureId(string signatureId) { DARABONBA_PTR_SET_VALUE(signatureId_, signatureId) };


        // signatureKey Field Functions 
        bool hasSignatureKey() const { return this->signatureKey_ != nullptr;};
        void deleteSignatureKey() { this->signatureKey_ = nullptr;};
        inline string getSignatureKey() const { DARABONBA_PTR_GET_DEFAULT(signatureKey_, "") };
        inline SignatureInfo& setSignatureKey(string signatureKey) { DARABONBA_PTR_SET_VALUE(signatureKey_, signatureKey) };


        // signatureName Field Functions 
        bool hasSignatureName() const { return this->signatureName_ != nullptr;};
        void deleteSignatureName() { this->signatureName_ = nullptr;};
        inline string getSignatureName() const { DARABONBA_PTR_GET_DEFAULT(signatureName_, "") };
        inline SignatureInfo& setSignatureName(string signatureName) { DARABONBA_PTR_SET_VALUE(signatureName_, signatureName) };


        // signatureSecret Field Functions 
        bool hasSignatureSecret() const { return this->signatureSecret_ != nullptr;};
        void deleteSignatureSecret() { this->signatureSecret_ = nullptr;};
        inline string getSignatureSecret() const { DARABONBA_PTR_GET_DEFAULT(signatureSecret_, "") };
        inline SignatureInfo& setSignatureSecret(string signatureSecret) { DARABONBA_PTR_SET_VALUE(signatureSecret_, signatureSecret) };


      protected:
        // The creation time of the key.
        shared_ptr<string> createdTime_ {};
        // The last modification time of the key.
        shared_ptr<string> modifiedTime_ {};
        // The region where the key is located.
        shared_ptr<string> regionId_ {};
        // The ID of the backend signature key.
        shared_ptr<string> signatureId_ {};
        // The Key value of the backend signature key.
        shared_ptr<string> signatureKey_ {};
        // The name of the backend signature key.
        shared_ptr<string> signatureName_ {};
        // The Secret value of the backend signature key.
        shared_ptr<string> signatureSecret_ {};
      };

      virtual bool empty() const override { return this->signatureInfo_ == nullptr; };
      // signatureInfo Field Functions 
      bool hasSignatureInfo() const { return this->signatureInfo_ != nullptr;};
      void deleteSignatureInfo() { this->signatureInfo_ = nullptr;};
      inline const vector<SignatureInfos::SignatureInfo> & getSignatureInfo() const { DARABONBA_PTR_GET_CONST(signatureInfo_, vector<SignatureInfos::SignatureInfo>) };
      inline vector<SignatureInfos::SignatureInfo> getSignatureInfo() { DARABONBA_PTR_GET(signatureInfo_, vector<SignatureInfos::SignatureInfo>) };
      inline SignatureInfos& setSignatureInfo(const vector<SignatureInfos::SignatureInfo> & signatureInfo) { DARABONBA_PTR_SET_VALUE(signatureInfo_, signatureInfo) };
      inline SignatureInfos& setSignatureInfo(vector<SignatureInfos::SignatureInfo> && signatureInfo) { DARABONBA_PTR_SET_RVALUE(signatureInfo_, signatureInfo) };


    protected:
      shared_ptr<vector<SignatureInfos::SignatureInfo>> signatureInfo_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->signatureInfos_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSignaturesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSignaturesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSignaturesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // signatureInfos Field Functions 
    bool hasSignatureInfos() const { return this->signatureInfos_ != nullptr;};
    void deleteSignatureInfos() { this->signatureInfos_ = nullptr;};
    inline const DescribeSignaturesResponseBody::SignatureInfos & getSignatureInfos() const { DARABONBA_PTR_GET_CONST(signatureInfos_, DescribeSignaturesResponseBody::SignatureInfos) };
    inline DescribeSignaturesResponseBody::SignatureInfos getSignatureInfos() { DARABONBA_PTR_GET(signatureInfos_, DescribeSignaturesResponseBody::SignatureInfos) };
    inline DescribeSignaturesResponseBody& setSignatureInfos(const DescribeSignaturesResponseBody::SignatureInfos & signatureInfos) { DARABONBA_PTR_SET_VALUE(signatureInfos_, signatureInfos) };
    inline DescribeSignaturesResponseBody& setSignatureInfos(DescribeSignaturesResponseBody::SignatureInfos && signatureInfos) { DARABONBA_PTR_SET_RVALUE(signatureInfos_, signatureInfos) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSignaturesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The returned signature information. It is an array consisting of SignatureInfo data.
    shared_ptr<DescribeSignaturesResponseBody::SignatureInfos> signatureInfos_ {};
    // The total number of returned entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
