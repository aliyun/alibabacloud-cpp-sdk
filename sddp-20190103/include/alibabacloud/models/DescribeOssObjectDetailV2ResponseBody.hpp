// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOSSOBJECTDETAILV2RESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOSSOBJECTDETAILV2RESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeOssObjectDetailV2ResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOssObjectDetailV2ResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OssObjectDetail, ossObjectDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOssObjectDetailV2ResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OssObjectDetail, ossObjectDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeOssObjectDetailV2ResponseBody() = default ;
    DescribeOssObjectDetailV2ResponseBody(const DescribeOssObjectDetailV2ResponseBody &) = default ;
    DescribeOssObjectDetailV2ResponseBody(DescribeOssObjectDetailV2ResponseBody &&) = default ;
    DescribeOssObjectDetailV2ResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOssObjectDetailV2ResponseBody() = default ;
    DescribeOssObjectDetailV2ResponseBody& operator=(const DescribeOssObjectDetailV2ResponseBody &) = default ;
    DescribeOssObjectDetailV2ResponseBody& operator=(DescribeOssObjectDetailV2ResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OssObjectDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OssObjectDetail& obj) { 
        DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
        DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
        DARABONBA_PTR_TO_JSON(FileCategoryName, fileCategoryName_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(ModelTagIds, modelTagIds_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ObjectAcl, objectAcl_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RiskLevelId, riskLevelId_);
        DARABONBA_PTR_TO_JSON(RiskLevelName, riskLevelName_);
        DARABONBA_PTR_TO_JSON(RuleList, ruleList_);
        DARABONBA_PTR_TO_JSON(Size, size_);
      };
      friend void from_json(const Darabonba::Json& j, OssObjectDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
        DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
        DARABONBA_PTR_FROM_JSON(FileCategoryName, fileCategoryName_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(ModelTagIds, modelTagIds_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ObjectAcl, objectAcl_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RiskLevelId, riskLevelId_);
        DARABONBA_PTR_FROM_JSON(RiskLevelName, riskLevelName_);
        DARABONBA_PTR_FROM_JSON(RuleList, ruleList_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
      };
      OssObjectDetail() = default ;
      OssObjectDetail(const OssObjectDetail &) = default ;
      OssObjectDetail(OssObjectDetail &&) = default ;
      OssObjectDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OssObjectDetail() = default ;
      OssObjectDetail& operator=(const OssObjectDetail &) = default ;
      OssObjectDetail& operator=(OssObjectDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RuleList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RuleList& obj) { 
          DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(ModelTags, modelTags_);
          DARABONBA_PTR_TO_JSON(RiskLevelId, riskLevelId_);
          DARABONBA_PTR_TO_JSON(RiskLevelName, riskLevelName_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        };
        friend void from_json(const Darabonba::Json& j, RuleList& obj) { 
          DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(ModelTags, modelTags_);
          DARABONBA_PTR_FROM_JSON(RiskLevelId, riskLevelId_);
          DARABONBA_PTR_FROM_JSON(RiskLevelName, riskLevelName_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        };
        RuleList() = default ;
        RuleList(const RuleList &) = default ;
        RuleList(RuleList &&) = default ;
        RuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RuleList() = default ;
        RuleList& operator=(const RuleList &) = default ;
        RuleList& operator=(RuleList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ModelTags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ModelTags& obj) { 
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, ModelTags& obj) { 
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          ModelTags() = default ;
          ModelTags(const ModelTags &) = default ;
          ModelTags(ModelTags &&) = default ;
          ModelTags(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ModelTags() = default ;
          ModelTags& operator=(const ModelTags &) = default ;
          ModelTags& operator=(ModelTags &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline ModelTags& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline ModelTags& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // The ID of the data tag for the detection model.
          // 
          // - **101**: Personal sensitive information.
          // 
          // - **102**: Personal information.
          // 
          // - **103**: Important data.
          shared_ptr<int64_t> id_ {};
          // The name of the data tag for the detection model.
          // 
          // - Personal sensitive information.
          // 
          // - Personal information.
          // 
          // - Important data.
          shared_ptr<string> name_ {};
        };

        virtual bool empty() const override { return this->categoryName_ == nullptr
        && this->count_ == nullptr && this->modelTags_ == nullptr && this->riskLevelId_ == nullptr && this->riskLevelName_ == nullptr && this->ruleName_ == nullptr; };
        // categoryName Field Functions 
        bool hasCategoryName() const { return this->categoryName_ != nullptr;};
        void deleteCategoryName() { this->categoryName_ = nullptr;};
        inline string getCategoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
        inline RuleList& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
        inline RuleList& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // modelTags Field Functions 
        bool hasModelTags() const { return this->modelTags_ != nullptr;};
        void deleteModelTags() { this->modelTags_ = nullptr;};
        inline const vector<RuleList::ModelTags> & getModelTags() const { DARABONBA_PTR_GET_CONST(modelTags_, vector<RuleList::ModelTags>) };
        inline vector<RuleList::ModelTags> getModelTags() { DARABONBA_PTR_GET(modelTags_, vector<RuleList::ModelTags>) };
        inline RuleList& setModelTags(const vector<RuleList::ModelTags> & modelTags) { DARABONBA_PTR_SET_VALUE(modelTags_, modelTags) };
        inline RuleList& setModelTags(vector<RuleList::ModelTags> && modelTags) { DARABONBA_PTR_SET_RVALUE(modelTags_, modelTags) };


        // riskLevelId Field Functions 
        bool hasRiskLevelId() const { return this->riskLevelId_ != nullptr;};
        void deleteRiskLevelId() { this->riskLevelId_ = nullptr;};
        inline int64_t getRiskLevelId() const { DARABONBA_PTR_GET_DEFAULT(riskLevelId_, 0L) };
        inline RuleList& setRiskLevelId(int64_t riskLevelId) { DARABONBA_PTR_SET_VALUE(riskLevelId_, riskLevelId) };


        // riskLevelName Field Functions 
        bool hasRiskLevelName() const { return this->riskLevelName_ != nullptr;};
        void deleteRiskLevelName() { this->riskLevelName_ = nullptr;};
        inline string getRiskLevelName() const { DARABONBA_PTR_GET_DEFAULT(riskLevelName_, "") };
        inline RuleList& setRiskLevelName(string riskLevelName) { DARABONBA_PTR_SET_VALUE(riskLevelName_, riskLevelName) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline RuleList& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      protected:
        // The parent category of the model.
        shared_ptr<string> categoryName_ {};
        // The number of times the sensitive data detection rule was matched.
        shared_ptr<int64_t> count_ {};
        // A list of tags for the detection model.
        shared_ptr<vector<RuleList::ModelTags>> modelTags_ {};
        // The ID of the risk level that is specified in the rule.
        // 
        // - **1**: N/A
        // 
        // - **2**: S1
        // 
        // - **3**: S2
        // 
        // - **4**: S3
        // 
        // - **5**: S4
        shared_ptr<int64_t> riskLevelId_ {};
        // The name of the risk level that is specified in the rule.
        shared_ptr<string> riskLevelName_ {};
        // The name of the matched sensitive data detection rule.
        shared_ptr<string> ruleName_ {};
      };

      virtual bool empty() const override { return this->bucketName_ == nullptr
        && this->categoryName_ == nullptr && this->fileCategoryName_ == nullptr && this->id_ == nullptr && this->modelTagIds_ == nullptr && this->name_ == nullptr
        && this->objectAcl_ == nullptr && this->regionId_ == nullptr && this->riskLevelId_ == nullptr && this->riskLevelName_ == nullptr && this->ruleList_ == nullptr
        && this->size_ == nullptr; };
      // bucketName Field Functions 
      bool hasBucketName() const { return this->bucketName_ != nullptr;};
      void deleteBucketName() { this->bucketName_ = nullptr;};
      inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
      inline OssObjectDetail& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


      // categoryName Field Functions 
      bool hasCategoryName() const { return this->categoryName_ != nullptr;};
      void deleteCategoryName() { this->categoryName_ = nullptr;};
      inline string getCategoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
      inline OssObjectDetail& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


      // fileCategoryName Field Functions 
      bool hasFileCategoryName() const { return this->fileCategoryName_ != nullptr;};
      void deleteFileCategoryName() { this->fileCategoryName_ = nullptr;};
      inline string getFileCategoryName() const { DARABONBA_PTR_GET_DEFAULT(fileCategoryName_, "") };
      inline OssObjectDetail& setFileCategoryName(string fileCategoryName) { DARABONBA_PTR_SET_VALUE(fileCategoryName_, fileCategoryName) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline OssObjectDetail& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // modelTagIds Field Functions 
      bool hasModelTagIds() const { return this->modelTagIds_ != nullptr;};
      void deleteModelTagIds() { this->modelTagIds_ = nullptr;};
      inline string getModelTagIds() const { DARABONBA_PTR_GET_DEFAULT(modelTagIds_, "") };
      inline OssObjectDetail& setModelTagIds(string modelTagIds) { DARABONBA_PTR_SET_VALUE(modelTagIds_, modelTagIds) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline OssObjectDetail& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // objectAcl Field Functions 
      bool hasObjectAcl() const { return this->objectAcl_ != nullptr;};
      void deleteObjectAcl() { this->objectAcl_ = nullptr;};
      inline string getObjectAcl() const { DARABONBA_PTR_GET_DEFAULT(objectAcl_, "") };
      inline OssObjectDetail& setObjectAcl(string objectAcl) { DARABONBA_PTR_SET_VALUE(objectAcl_, objectAcl) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline OssObjectDetail& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // riskLevelId Field Functions 
      bool hasRiskLevelId() const { return this->riskLevelId_ != nullptr;};
      void deleteRiskLevelId() { this->riskLevelId_ = nullptr;};
      inline int32_t getRiskLevelId() const { DARABONBA_PTR_GET_DEFAULT(riskLevelId_, 0) };
      inline OssObjectDetail& setRiskLevelId(int32_t riskLevelId) { DARABONBA_PTR_SET_VALUE(riskLevelId_, riskLevelId) };


      // riskLevelName Field Functions 
      bool hasRiskLevelName() const { return this->riskLevelName_ != nullptr;};
      void deleteRiskLevelName() { this->riskLevelName_ = nullptr;};
      inline string getRiskLevelName() const { DARABONBA_PTR_GET_DEFAULT(riskLevelName_, "") };
      inline OssObjectDetail& setRiskLevelName(string riskLevelName) { DARABONBA_PTR_SET_VALUE(riskLevelName_, riskLevelName) };


      // ruleList Field Functions 
      bool hasRuleList() const { return this->ruleList_ != nullptr;};
      void deleteRuleList() { this->ruleList_ = nullptr;};
      inline const vector<OssObjectDetail::RuleList> & getRuleList() const { DARABONBA_PTR_GET_CONST(ruleList_, vector<OssObjectDetail::RuleList>) };
      inline vector<OssObjectDetail::RuleList> getRuleList() { DARABONBA_PTR_GET(ruleList_, vector<OssObjectDetail::RuleList>) };
      inline OssObjectDetail& setRuleList(const vector<OssObjectDetail::RuleList> & ruleList) { DARABONBA_PTR_SET_VALUE(ruleList_, ruleList) };
      inline OssObjectDetail& setRuleList(vector<OssObjectDetail::RuleList> && ruleList) { DARABONBA_PTR_SET_RVALUE(ruleList_, ruleList) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline OssObjectDetail& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    protected:
      // The name of the bucket that stores the OSS object.
      shared_ptr<string> bucketName_ {};
      // The parent category of the model.
      shared_ptr<string> categoryName_ {};
      // The file type.
      shared_ptr<string> fileCategoryName_ {};
      // The unique ID of the object.
      shared_ptr<string> id_ {};
      // The data tags, separated by commas. Example: 101,102. Valid values:
      // 
      // - **101**: Personal sensitive information.
      // 
      // - **102**: Personal information.
      // 
      // - **107**: General information.
      shared_ptr<string> modelTagIds_ {};
      // The name of the OSS object.
      shared_ptr<string> name_ {};
      // The access control list (ACL) of the object.
      shared_ptr<string> objectAcl_ {};
      // The ID of the region where the OSS object is stored.
      shared_ptr<string> regionId_ {};
      // The ID of the risk level of the data asset. Valid values:
      // 
      // - **1**: N/A.
      // 
      // - **2**: S1.
      // 
      // - **3**: S2.
      // 
      // - **4**: S3.
      // 
      // - **5**: S4.
      // 
      // > A return value of 1 or less indicates N/A.
      shared_ptr<int32_t> riskLevelId_ {};
      // The name of the risk level of the OSS object.
      shared_ptr<string> riskLevelName_ {};
      // The list of sensitive data detection rules that the OSS object matches.
      shared_ptr<vector<OssObjectDetail::RuleList>> ruleList_ {};
      // The size of the file in bytes.
      shared_ptr<int64_t> size_ {};
    };

    virtual bool empty() const override { return this->ossObjectDetail_ == nullptr
        && this->requestId_ == nullptr; };
    // ossObjectDetail Field Functions 
    bool hasOssObjectDetail() const { return this->ossObjectDetail_ != nullptr;};
    void deleteOssObjectDetail() { this->ossObjectDetail_ = nullptr;};
    inline const DescribeOssObjectDetailV2ResponseBody::OssObjectDetail & getOssObjectDetail() const { DARABONBA_PTR_GET_CONST(ossObjectDetail_, DescribeOssObjectDetailV2ResponseBody::OssObjectDetail) };
    inline DescribeOssObjectDetailV2ResponseBody::OssObjectDetail getOssObjectDetail() { DARABONBA_PTR_GET(ossObjectDetail_, DescribeOssObjectDetailV2ResponseBody::OssObjectDetail) };
    inline DescribeOssObjectDetailV2ResponseBody& setOssObjectDetail(const DescribeOssObjectDetailV2ResponseBody::OssObjectDetail & ossObjectDetail) { DARABONBA_PTR_SET_VALUE(ossObjectDetail_, ossObjectDetail) };
    inline DescribeOssObjectDetailV2ResponseBody& setOssObjectDetail(DescribeOssObjectDetailV2ResponseBody::OssObjectDetail && ossObjectDetail) { DARABONBA_PTR_SET_RVALUE(ossObjectDetail_, ossObjectDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOssObjectDetailV2ResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the OSS object.
    shared_ptr<DescribeOssObjectDetailV2ResponseBody::OssObjectDetail> ossObjectDetail_ {};
    // The ID of the request. Use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
