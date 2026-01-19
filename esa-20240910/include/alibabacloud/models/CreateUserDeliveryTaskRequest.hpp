// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERDELIVERYTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERDELIVERYTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
#include <alibabacloud/models/HttpDeliveryHeaderParamValue.hpp>
#include <alibabacloud/models/HttpDeliveryQueryParamValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateUserDeliveryTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUserDeliveryTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_TO_JSON(DeliveryType, deliveryType_);
      DARABONBA_PTR_TO_JSON(Details, details_);
      DARABONBA_PTR_TO_JSON(DiscardRate, discardRate_);
      DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
      DARABONBA_PTR_TO_JSON(FilterVer, filterVer_);
      DARABONBA_PTR_TO_JSON(HttpDelivery, httpDelivery_);
      DARABONBA_PTR_TO_JSON(KafkaDelivery, kafkaDelivery_);
      DARABONBA_PTR_TO_JSON(OssDelivery, ossDelivery_);
      DARABONBA_PTR_TO_JSON(S3Delivery, s3Delivery_);
      DARABONBA_PTR_TO_JSON(SlsDelivery, slsDelivery_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUserDeliveryTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_FROM_JSON(DeliveryType, deliveryType_);
      DARABONBA_PTR_FROM_JSON(Details, details_);
      DARABONBA_PTR_FROM_JSON(DiscardRate, discardRate_);
      DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
      DARABONBA_PTR_FROM_JSON(FilterVer, filterVer_);
      DARABONBA_PTR_FROM_JSON(HttpDelivery, httpDelivery_);
      DARABONBA_PTR_FROM_JSON(KafkaDelivery, kafkaDelivery_);
      DARABONBA_PTR_FROM_JSON(OssDelivery, ossDelivery_);
      DARABONBA_PTR_FROM_JSON(S3Delivery, s3Delivery_);
      DARABONBA_PTR_FROM_JSON(SlsDelivery, slsDelivery_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    CreateUserDeliveryTaskRequest() = default ;
    CreateUserDeliveryTaskRequest(const CreateUserDeliveryTaskRequest &) = default ;
    CreateUserDeliveryTaskRequest(CreateUserDeliveryTaskRequest &&) = default ;
    CreateUserDeliveryTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUserDeliveryTaskRequest() = default ;
    CreateUserDeliveryTaskRequest& operator=(const CreateUserDeliveryTaskRequest &) = default ;
    CreateUserDeliveryTaskRequest& operator=(CreateUserDeliveryTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SlsDelivery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SlsDelivery& obj) { 
        DARABONBA_PTR_TO_JSON(SLSLogStore, SLSLogStore_);
        DARABONBA_PTR_TO_JSON(SLSProject, SLSProject_);
        DARABONBA_PTR_TO_JSON(SLSRegion, SLSRegion_);
      };
      friend void from_json(const Darabonba::Json& j, SlsDelivery& obj) { 
        DARABONBA_PTR_FROM_JSON(SLSLogStore, SLSLogStore_);
        DARABONBA_PTR_FROM_JSON(SLSProject, SLSProject_);
        DARABONBA_PTR_FROM_JSON(SLSRegion, SLSRegion_);
      };
      SlsDelivery() = default ;
      SlsDelivery(const SlsDelivery &) = default ;
      SlsDelivery(SlsDelivery &&) = default ;
      SlsDelivery(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SlsDelivery() = default ;
      SlsDelivery& operator=(const SlsDelivery &) = default ;
      SlsDelivery& operator=(SlsDelivery &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->SLSLogStore_ == nullptr
        && this->SLSProject_ == nullptr && this->SLSRegion_ == nullptr; };
      // SLSLogStore Field Functions 
      bool hasSLSLogStore() const { return this->SLSLogStore_ != nullptr;};
      void deleteSLSLogStore() { this->SLSLogStore_ = nullptr;};
      inline string getSLSLogStore() const { DARABONBA_PTR_GET_DEFAULT(SLSLogStore_, "") };
      inline SlsDelivery& setSLSLogStore(string SLSLogStore) { DARABONBA_PTR_SET_VALUE(SLSLogStore_, SLSLogStore) };


      // SLSProject Field Functions 
      bool hasSLSProject() const { return this->SLSProject_ != nullptr;};
      void deleteSLSProject() { this->SLSProject_ = nullptr;};
      inline string getSLSProject() const { DARABONBA_PTR_GET_DEFAULT(SLSProject_, "") };
      inline SlsDelivery& setSLSProject(string SLSProject) { DARABONBA_PTR_SET_VALUE(SLSProject_, SLSProject) };


      // SLSRegion Field Functions 
      bool hasSLSRegion() const { return this->SLSRegion_ != nullptr;};
      void deleteSLSRegion() { this->SLSRegion_ = nullptr;};
      inline string getSLSRegion() const { DARABONBA_PTR_GET_DEFAULT(SLSRegion_, "") };
      inline SlsDelivery& setSLSRegion(string SLSRegion) { DARABONBA_PTR_SET_VALUE(SLSRegion_, SLSRegion) };


    protected:
      // The name of the SLS Logstore.
      shared_ptr<string> SLSLogStore_ {};
      // The name of the SLS project.
      shared_ptr<string> SLSProject_ {};
      // The region in which the SLS project resides.
      shared_ptr<string> SLSRegion_ {};
    };

    class S3Delivery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const S3Delivery& obj) { 
        DARABONBA_PTR_TO_JSON(AccessKey, accessKey_);
        DARABONBA_PTR_TO_JSON(BucketPath, bucketPath_);
        DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
        DARABONBA_PTR_TO_JSON(PrefixPath, prefixPath_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(S3Cmpt, s3Cmpt_);
        DARABONBA_PTR_TO_JSON(SecretKey, secretKey_);
        DARABONBA_PTR_TO_JSON(ServerSideEncryption, serverSideEncryption_);
        DARABONBA_PTR_TO_JSON(VertifyType, vertifyType_);
      };
      friend void from_json(const Darabonba::Json& j, S3Delivery& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessKey, accessKey_);
        DARABONBA_PTR_FROM_JSON(BucketPath, bucketPath_);
        DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
        DARABONBA_PTR_FROM_JSON(PrefixPath, prefixPath_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(S3Cmpt, s3Cmpt_);
        DARABONBA_PTR_FROM_JSON(SecretKey, secretKey_);
        DARABONBA_PTR_FROM_JSON(ServerSideEncryption, serverSideEncryption_);
        DARABONBA_PTR_FROM_JSON(VertifyType, vertifyType_);
      };
      S3Delivery() = default ;
      S3Delivery(const S3Delivery &) = default ;
      S3Delivery(S3Delivery &&) = default ;
      S3Delivery(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~S3Delivery() = default ;
      S3Delivery& operator=(const S3Delivery &) = default ;
      S3Delivery& operator=(S3Delivery &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessKey_ == nullptr
        && this->bucketPath_ == nullptr && this->endpoint_ == nullptr && this->prefixPath_ == nullptr && this->region_ == nullptr && this->s3Cmpt_ == nullptr
        && this->secretKey_ == nullptr && this->serverSideEncryption_ == nullptr && this->vertifyType_ == nullptr; };
      // accessKey Field Functions 
      bool hasAccessKey() const { return this->accessKey_ != nullptr;};
      void deleteAccessKey() { this->accessKey_ = nullptr;};
      inline string getAccessKey() const { DARABONBA_PTR_GET_DEFAULT(accessKey_, "") };
      inline S3Delivery& setAccessKey(string accessKey) { DARABONBA_PTR_SET_VALUE(accessKey_, accessKey) };


      // bucketPath Field Functions 
      bool hasBucketPath() const { return this->bucketPath_ != nullptr;};
      void deleteBucketPath() { this->bucketPath_ = nullptr;};
      inline string getBucketPath() const { DARABONBA_PTR_GET_DEFAULT(bucketPath_, "") };
      inline S3Delivery& setBucketPath(string bucketPath) { DARABONBA_PTR_SET_VALUE(bucketPath_, bucketPath) };


      // endpoint Field Functions 
      bool hasEndpoint() const { return this->endpoint_ != nullptr;};
      void deleteEndpoint() { this->endpoint_ = nullptr;};
      inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
      inline S3Delivery& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


      // prefixPath Field Functions 
      bool hasPrefixPath() const { return this->prefixPath_ != nullptr;};
      void deletePrefixPath() { this->prefixPath_ = nullptr;};
      inline string getPrefixPath() const { DARABONBA_PTR_GET_DEFAULT(prefixPath_, "") };
      inline S3Delivery& setPrefixPath(string prefixPath) { DARABONBA_PTR_SET_VALUE(prefixPath_, prefixPath) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline S3Delivery& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // s3Cmpt Field Functions 
      bool hasS3Cmpt() const { return this->s3Cmpt_ != nullptr;};
      void deleteS3Cmpt() { this->s3Cmpt_ = nullptr;};
      inline bool getS3Cmpt() const { DARABONBA_PTR_GET_DEFAULT(s3Cmpt_, false) };
      inline S3Delivery& setS3Cmpt(bool s3Cmpt) { DARABONBA_PTR_SET_VALUE(s3Cmpt_, s3Cmpt) };


      // secretKey Field Functions 
      bool hasSecretKey() const { return this->secretKey_ != nullptr;};
      void deleteSecretKey() { this->secretKey_ = nullptr;};
      inline string getSecretKey() const { DARABONBA_PTR_GET_DEFAULT(secretKey_, "") };
      inline S3Delivery& setSecretKey(string secretKey) { DARABONBA_PTR_SET_VALUE(secretKey_, secretKey) };


      // serverSideEncryption Field Functions 
      bool hasServerSideEncryption() const { return this->serverSideEncryption_ != nullptr;};
      void deleteServerSideEncryption() { this->serverSideEncryption_ = nullptr;};
      inline bool getServerSideEncryption() const { DARABONBA_PTR_GET_DEFAULT(serverSideEncryption_, false) };
      inline S3Delivery& setServerSideEncryption(bool serverSideEncryption) { DARABONBA_PTR_SET_VALUE(serverSideEncryption_, serverSideEncryption) };


      // vertifyType Field Functions 
      bool hasVertifyType() const { return this->vertifyType_ != nullptr;};
      void deleteVertifyType() { this->vertifyType_ = nullptr;};
      inline string getVertifyType() const { DARABONBA_PTR_GET_DEFAULT(vertifyType_, "") };
      inline S3Delivery& setVertifyType(string vertifyType) { DARABONBA_PTR_SET_VALUE(vertifyType_, vertifyType) };


    protected:
      // The access key ID of your Amazon S3 account.
      shared_ptr<string> accessKey_ {};
      // The directory in the bucket.
      shared_ptr<string> bucketPath_ {};
      // The endpoint.
      shared_ptr<string> endpoint_ {};
      // The prefix of the path in which you want to store logs.
      shared_ptr<string> prefixPath_ {};
      // The region ID of the service.
      shared_ptr<string> region_ {};
      // Specifies whether the service is compatible with Amazon S3.
      shared_ptr<bool> s3Cmpt_ {};
      // The secret access key of your Amazon S3 account.
      shared_ptr<string> secretKey_ {};
      shared_ptr<bool> serverSideEncryption_ {};
      shared_ptr<string> vertifyType_ {};
    };

    class OssDelivery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OssDelivery& obj) { 
        DARABONBA_PTR_TO_JSON(Aliuid, aliuid_);
        DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
        DARABONBA_PTR_TO_JSON(PrefixPath, prefixPath_);
        DARABONBA_PTR_TO_JSON(Region, region_);
      };
      friend void from_json(const Darabonba::Json& j, OssDelivery& obj) { 
        DARABONBA_PTR_FROM_JSON(Aliuid, aliuid_);
        DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
        DARABONBA_PTR_FROM_JSON(PrefixPath, prefixPath_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
      };
      OssDelivery() = default ;
      OssDelivery(const OssDelivery &) = default ;
      OssDelivery(OssDelivery &&) = default ;
      OssDelivery(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OssDelivery() = default ;
      OssDelivery& operator=(const OssDelivery &) = default ;
      OssDelivery& operator=(OssDelivery &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliuid_ == nullptr
        && this->bucketName_ == nullptr && this->prefixPath_ == nullptr && this->region_ == nullptr; };
      // aliuid Field Functions 
      bool hasAliuid() const { return this->aliuid_ != nullptr;};
      void deleteAliuid() { this->aliuid_ = nullptr;};
      inline string getAliuid() const { DARABONBA_PTR_GET_DEFAULT(aliuid_, "") };
      inline OssDelivery& setAliuid(string aliuid) { DARABONBA_PTR_SET_VALUE(aliuid_, aliuid) };


      // bucketName Field Functions 
      bool hasBucketName() const { return this->bucketName_ != nullptr;};
      void deleteBucketName() { this->bucketName_ = nullptr;};
      inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
      inline OssDelivery& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


      // prefixPath Field Functions 
      bool hasPrefixPath() const { return this->prefixPath_ != nullptr;};
      void deletePrefixPath() { this->prefixPath_ = nullptr;};
      inline string getPrefixPath() const { DARABONBA_PTR_GET_DEFAULT(prefixPath_, "") };
      inline OssDelivery& setPrefixPath(string prefixPath) { DARABONBA_PTR_SET_VALUE(prefixPath_, prefixPath) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline OssDelivery& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    protected:
      // The ID of your Alibaba Cloud account.
      shared_ptr<string> aliuid_ {};
      // The name of the OSS bucket.
      shared_ptr<string> bucketName_ {};
      // The prefix of the path in which you want to store logs.
      shared_ptr<string> prefixPath_ {};
      // The region in which the bucket is located.
      shared_ptr<string> region_ {};
    };

    class KafkaDelivery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const KafkaDelivery& obj) { 
        DARABONBA_PTR_TO_JSON(Balancer, balancer_);
        DARABONBA_PTR_TO_JSON(Brokers, brokers_);
        DARABONBA_PTR_TO_JSON(Compress, compress_);
        DARABONBA_PTR_TO_JSON(MachanismType, machanismType_);
        DARABONBA_PTR_TO_JSON(Password, password_);
        DARABONBA_PTR_TO_JSON(Topic, topic_);
        DARABONBA_PTR_TO_JSON(UserAuth, userAuth_);
        DARABONBA_PTR_TO_JSON(UserName, userName_);
      };
      friend void from_json(const Darabonba::Json& j, KafkaDelivery& obj) { 
        DARABONBA_PTR_FROM_JSON(Balancer, balancer_);
        DARABONBA_PTR_FROM_JSON(Brokers, brokers_);
        DARABONBA_PTR_FROM_JSON(Compress, compress_);
        DARABONBA_PTR_FROM_JSON(MachanismType, machanismType_);
        DARABONBA_PTR_FROM_JSON(Password, password_);
        DARABONBA_PTR_FROM_JSON(Topic, topic_);
        DARABONBA_PTR_FROM_JSON(UserAuth, userAuth_);
        DARABONBA_PTR_FROM_JSON(UserName, userName_);
      };
      KafkaDelivery() = default ;
      KafkaDelivery(const KafkaDelivery &) = default ;
      KafkaDelivery(KafkaDelivery &&) = default ;
      KafkaDelivery(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~KafkaDelivery() = default ;
      KafkaDelivery& operator=(const KafkaDelivery &) = default ;
      KafkaDelivery& operator=(KafkaDelivery &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->balancer_ == nullptr
        && this->brokers_ == nullptr && this->compress_ == nullptr && this->machanismType_ == nullptr && this->password_ == nullptr && this->topic_ == nullptr
        && this->userAuth_ == nullptr && this->userName_ == nullptr; };
      // balancer Field Functions 
      bool hasBalancer() const { return this->balancer_ != nullptr;};
      void deleteBalancer() { this->balancer_ = nullptr;};
      inline string getBalancer() const { DARABONBA_PTR_GET_DEFAULT(balancer_, "") };
      inline KafkaDelivery& setBalancer(string balancer) { DARABONBA_PTR_SET_VALUE(balancer_, balancer) };


      // brokers Field Functions 
      bool hasBrokers() const { return this->brokers_ != nullptr;};
      void deleteBrokers() { this->brokers_ = nullptr;};
      inline const vector<string> & getBrokers() const { DARABONBA_PTR_GET_CONST(brokers_, vector<string>) };
      inline vector<string> getBrokers() { DARABONBA_PTR_GET(brokers_, vector<string>) };
      inline KafkaDelivery& setBrokers(const vector<string> & brokers) { DARABONBA_PTR_SET_VALUE(brokers_, brokers) };
      inline KafkaDelivery& setBrokers(vector<string> && brokers) { DARABONBA_PTR_SET_RVALUE(brokers_, brokers) };


      // compress Field Functions 
      bool hasCompress() const { return this->compress_ != nullptr;};
      void deleteCompress() { this->compress_ = nullptr;};
      inline string getCompress() const { DARABONBA_PTR_GET_DEFAULT(compress_, "") };
      inline KafkaDelivery& setCompress(string compress) { DARABONBA_PTR_SET_VALUE(compress_, compress) };


      // machanismType Field Functions 
      bool hasMachanismType() const { return this->machanismType_ != nullptr;};
      void deleteMachanismType() { this->machanismType_ = nullptr;};
      inline string getMachanismType() const { DARABONBA_PTR_GET_DEFAULT(machanismType_, "") };
      inline KafkaDelivery& setMachanismType(string machanismType) { DARABONBA_PTR_SET_VALUE(machanismType_, machanismType) };


      // password Field Functions 
      bool hasPassword() const { return this->password_ != nullptr;};
      void deletePassword() { this->password_ = nullptr;};
      inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
      inline KafkaDelivery& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


      // topic Field Functions 
      bool hasTopic() const { return this->topic_ != nullptr;};
      void deleteTopic() { this->topic_ = nullptr;};
      inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
      inline KafkaDelivery& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


      // userAuth Field Functions 
      bool hasUserAuth() const { return this->userAuth_ != nullptr;};
      void deleteUserAuth() { this->userAuth_ = nullptr;};
      inline bool getUserAuth() const { DARABONBA_PTR_GET_DEFAULT(userAuth_, false) };
      inline KafkaDelivery& setUserAuth(bool userAuth) { DARABONBA_PTR_SET_VALUE(userAuth_, userAuth) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline KafkaDelivery& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    protected:
      // The load balancing method.
      shared_ptr<string> balancer_ {};
      // The brokers.
      shared_ptr<vector<string>> brokers_ {};
      // The compression method. By default, data is not compressed.
      shared_ptr<string> compress_ {};
      // The encryption method.
      shared_ptr<string> machanismType_ {};
      // The password.
      shared_ptr<string> password_ {};
      // The topic.
      shared_ptr<string> topic_ {};
      // Specifies whether to enable authentication.
      shared_ptr<bool> userAuth_ {};
      // The username.
      shared_ptr<string> userName_ {};
    };

    class HttpDelivery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HttpDelivery& obj) { 
        DARABONBA_PTR_TO_JSON(Compress, compress_);
        DARABONBA_PTR_TO_JSON(DestUrl, destUrl_);
        DARABONBA_PTR_TO_JSON(HeaderParam, headerParam_);
        DARABONBA_PTR_TO_JSON(LastLogSplit, lastLogSplit_);
        DARABONBA_PTR_TO_JSON(LogBodyPrefix, logBodyPrefix_);
        DARABONBA_PTR_TO_JSON(LogBodySuffix, logBodySuffix_);
        DARABONBA_PTR_TO_JSON(LogSplit, logSplit_);
        DARABONBA_PTR_TO_JSON(LogSplitWords, logSplitWords_);
        DARABONBA_PTR_TO_JSON(MaxBatchMB, maxBatchMB_);
        DARABONBA_PTR_TO_JSON(MaxBatchSize, maxBatchSize_);
        DARABONBA_PTR_TO_JSON(MaxRetry, maxRetry_);
        DARABONBA_PTR_TO_JSON(QueryParam, queryParam_);
        DARABONBA_PTR_TO_JSON(StandardAuthOn, standardAuthOn_);
        DARABONBA_PTR_TO_JSON(StandardAuthParam, standardAuthParam_);
        DARABONBA_PTR_TO_JSON(TransformTimeout, transformTimeout_);
      };
      friend void from_json(const Darabonba::Json& j, HttpDelivery& obj) { 
        DARABONBA_PTR_FROM_JSON(Compress, compress_);
        DARABONBA_PTR_FROM_JSON(DestUrl, destUrl_);
        DARABONBA_PTR_FROM_JSON(HeaderParam, headerParam_);
        DARABONBA_PTR_FROM_JSON(LastLogSplit, lastLogSplit_);
        DARABONBA_PTR_FROM_JSON(LogBodyPrefix, logBodyPrefix_);
        DARABONBA_PTR_FROM_JSON(LogBodySuffix, logBodySuffix_);
        DARABONBA_PTR_FROM_JSON(LogSplit, logSplit_);
        DARABONBA_PTR_FROM_JSON(LogSplitWords, logSplitWords_);
        DARABONBA_PTR_FROM_JSON(MaxBatchMB, maxBatchMB_);
        DARABONBA_PTR_FROM_JSON(MaxBatchSize, maxBatchSize_);
        DARABONBA_PTR_FROM_JSON(MaxRetry, maxRetry_);
        DARABONBA_PTR_FROM_JSON(QueryParam, queryParam_);
        DARABONBA_PTR_FROM_JSON(StandardAuthOn, standardAuthOn_);
        DARABONBA_PTR_FROM_JSON(StandardAuthParam, standardAuthParam_);
        DARABONBA_PTR_FROM_JSON(TransformTimeout, transformTimeout_);
      };
      HttpDelivery() = default ;
      HttpDelivery(const HttpDelivery &) = default ;
      HttpDelivery(HttpDelivery &&) = default ;
      HttpDelivery(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HttpDelivery() = default ;
      HttpDelivery& operator=(const HttpDelivery &) = default ;
      HttpDelivery& operator=(HttpDelivery &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class StandardAuthParam : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StandardAuthParam& obj) { 
          DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
          DARABONBA_PTR_TO_JSON(PrivateKey, privateKey_);
          DARABONBA_PTR_TO_JSON(UrlPath, urlPath_);
        };
        friend void from_json(const Darabonba::Json& j, StandardAuthParam& obj) { 
          DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
          DARABONBA_PTR_FROM_JSON(PrivateKey, privateKey_);
          DARABONBA_PTR_FROM_JSON(UrlPath, urlPath_);
        };
        StandardAuthParam() = default ;
        StandardAuthParam(const StandardAuthParam &) = default ;
        StandardAuthParam(StandardAuthParam &&) = default ;
        StandardAuthParam(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StandardAuthParam() = default ;
        StandardAuthParam& operator=(const StandardAuthParam &) = default ;
        StandardAuthParam& operator=(StandardAuthParam &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->expiredTime_ == nullptr
        && this->privateKey_ == nullptr && this->urlPath_ == nullptr; };
        // expiredTime Field Functions 
        bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
        void deleteExpiredTime() { this->expiredTime_ = nullptr;};
        inline int32_t getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, 0) };
        inline StandardAuthParam& setExpiredTime(int32_t expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


        // privateKey Field Functions 
        bool hasPrivateKey() const { return this->privateKey_ != nullptr;};
        void deletePrivateKey() { this->privateKey_ = nullptr;};
        inline string getPrivateKey() const { DARABONBA_PTR_GET_DEFAULT(privateKey_, "") };
        inline StandardAuthParam& setPrivateKey(string privateKey) { DARABONBA_PTR_SET_VALUE(privateKey_, privateKey) };


        // urlPath Field Functions 
        bool hasUrlPath() const { return this->urlPath_ != nullptr;};
        void deleteUrlPath() { this->urlPath_ = nullptr;};
        inline string getUrlPath() const { DARABONBA_PTR_GET_DEFAULT(urlPath_, "") };
        inline StandardAuthParam& setUrlPath(string urlPath) { DARABONBA_PTR_SET_VALUE(urlPath_, urlPath) };


      protected:
        // The validity period of the signature.
        shared_ptr<int32_t> expiredTime_ {};
        // The private key.
        shared_ptr<string> privateKey_ {};
        // The URL path.
        shared_ptr<string> urlPath_ {};
      };

      virtual bool empty() const override { return this->compress_ == nullptr
        && this->destUrl_ == nullptr && this->headerParam_ == nullptr && this->lastLogSplit_ == nullptr && this->logBodyPrefix_ == nullptr && this->logBodySuffix_ == nullptr
        && this->logSplit_ == nullptr && this->logSplitWords_ == nullptr && this->maxBatchMB_ == nullptr && this->maxBatchSize_ == nullptr && this->maxRetry_ == nullptr
        && this->queryParam_ == nullptr && this->standardAuthOn_ == nullptr && this->standardAuthParam_ == nullptr && this->transformTimeout_ == nullptr; };
      // compress Field Functions 
      bool hasCompress() const { return this->compress_ != nullptr;};
      void deleteCompress() { this->compress_ = nullptr;};
      inline string getCompress() const { DARABONBA_PTR_GET_DEFAULT(compress_, "") };
      inline HttpDelivery& setCompress(string compress) { DARABONBA_PTR_SET_VALUE(compress_, compress) };


      // destUrl Field Functions 
      bool hasDestUrl() const { return this->destUrl_ != nullptr;};
      void deleteDestUrl() { this->destUrl_ = nullptr;};
      inline string getDestUrl() const { DARABONBA_PTR_GET_DEFAULT(destUrl_, "") };
      inline HttpDelivery& setDestUrl(string destUrl) { DARABONBA_PTR_SET_VALUE(destUrl_, destUrl) };


      // headerParam Field Functions 
      bool hasHeaderParam() const { return this->headerParam_ != nullptr;};
      void deleteHeaderParam() { this->headerParam_ = nullptr;};
      inline const map<string, HttpDeliveryHeaderParamValue> & getHeaderParam() const { DARABONBA_PTR_GET_CONST(headerParam_, map<string, HttpDeliveryHeaderParamValue>) };
      inline map<string, HttpDeliveryHeaderParamValue> getHeaderParam() { DARABONBA_PTR_GET(headerParam_, map<string, HttpDeliveryHeaderParamValue>) };
      inline HttpDelivery& setHeaderParam(const map<string, HttpDeliveryHeaderParamValue> & headerParam) { DARABONBA_PTR_SET_VALUE(headerParam_, headerParam) };
      inline HttpDelivery& setHeaderParam(map<string, HttpDeliveryHeaderParamValue> && headerParam) { DARABONBA_PTR_SET_RVALUE(headerParam_, headerParam) };


      // lastLogSplit Field Functions 
      bool hasLastLogSplit() const { return this->lastLogSplit_ != nullptr;};
      void deleteLastLogSplit() { this->lastLogSplit_ = nullptr;};
      inline bool getLastLogSplit() const { DARABONBA_PTR_GET_DEFAULT(lastLogSplit_, false) };
      inline HttpDelivery& setLastLogSplit(bool lastLogSplit) { DARABONBA_PTR_SET_VALUE(lastLogSplit_, lastLogSplit) };


      // logBodyPrefix Field Functions 
      bool hasLogBodyPrefix() const { return this->logBodyPrefix_ != nullptr;};
      void deleteLogBodyPrefix() { this->logBodyPrefix_ = nullptr;};
      inline string getLogBodyPrefix() const { DARABONBA_PTR_GET_DEFAULT(logBodyPrefix_, "") };
      inline HttpDelivery& setLogBodyPrefix(string logBodyPrefix) { DARABONBA_PTR_SET_VALUE(logBodyPrefix_, logBodyPrefix) };


      // logBodySuffix Field Functions 
      bool hasLogBodySuffix() const { return this->logBodySuffix_ != nullptr;};
      void deleteLogBodySuffix() { this->logBodySuffix_ = nullptr;};
      inline string getLogBodySuffix() const { DARABONBA_PTR_GET_DEFAULT(logBodySuffix_, "") };
      inline HttpDelivery& setLogBodySuffix(string logBodySuffix) { DARABONBA_PTR_SET_VALUE(logBodySuffix_, logBodySuffix) };


      // logSplit Field Functions 
      bool hasLogSplit() const { return this->logSplit_ != nullptr;};
      void deleteLogSplit() { this->logSplit_ = nullptr;};
      inline bool getLogSplit() const { DARABONBA_PTR_GET_DEFAULT(logSplit_, false) };
      inline HttpDelivery& setLogSplit(bool logSplit) { DARABONBA_PTR_SET_VALUE(logSplit_, logSplit) };


      // logSplitWords Field Functions 
      bool hasLogSplitWords() const { return this->logSplitWords_ != nullptr;};
      void deleteLogSplitWords() { this->logSplitWords_ = nullptr;};
      inline string getLogSplitWords() const { DARABONBA_PTR_GET_DEFAULT(logSplitWords_, "") };
      inline HttpDelivery& setLogSplitWords(string logSplitWords) { DARABONBA_PTR_SET_VALUE(logSplitWords_, logSplitWords) };


      // maxBatchMB Field Functions 
      bool hasMaxBatchMB() const { return this->maxBatchMB_ != nullptr;};
      void deleteMaxBatchMB() { this->maxBatchMB_ = nullptr;};
      inline int64_t getMaxBatchMB() const { DARABONBA_PTR_GET_DEFAULT(maxBatchMB_, 0L) };
      inline HttpDelivery& setMaxBatchMB(int64_t maxBatchMB) { DARABONBA_PTR_SET_VALUE(maxBatchMB_, maxBatchMB) };


      // maxBatchSize Field Functions 
      bool hasMaxBatchSize() const { return this->maxBatchSize_ != nullptr;};
      void deleteMaxBatchSize() { this->maxBatchSize_ = nullptr;};
      inline int64_t getMaxBatchSize() const { DARABONBA_PTR_GET_DEFAULT(maxBatchSize_, 0L) };
      inline HttpDelivery& setMaxBatchSize(int64_t maxBatchSize) { DARABONBA_PTR_SET_VALUE(maxBatchSize_, maxBatchSize) };


      // maxRetry Field Functions 
      bool hasMaxRetry() const { return this->maxRetry_ != nullptr;};
      void deleteMaxRetry() { this->maxRetry_ = nullptr;};
      inline int64_t getMaxRetry() const { DARABONBA_PTR_GET_DEFAULT(maxRetry_, 0L) };
      inline HttpDelivery& setMaxRetry(int64_t maxRetry) { DARABONBA_PTR_SET_VALUE(maxRetry_, maxRetry) };


      // queryParam Field Functions 
      bool hasQueryParam() const { return this->queryParam_ != nullptr;};
      void deleteQueryParam() { this->queryParam_ = nullptr;};
      inline const map<string, HttpDeliveryQueryParamValue> & getQueryParam() const { DARABONBA_PTR_GET_CONST(queryParam_, map<string, HttpDeliveryQueryParamValue>) };
      inline map<string, HttpDeliveryQueryParamValue> getQueryParam() { DARABONBA_PTR_GET(queryParam_, map<string, HttpDeliveryQueryParamValue>) };
      inline HttpDelivery& setQueryParam(const map<string, HttpDeliveryQueryParamValue> & queryParam) { DARABONBA_PTR_SET_VALUE(queryParam_, queryParam) };
      inline HttpDelivery& setQueryParam(map<string, HttpDeliveryQueryParamValue> && queryParam) { DARABONBA_PTR_SET_RVALUE(queryParam_, queryParam) };


      // standardAuthOn Field Functions 
      bool hasStandardAuthOn() const { return this->standardAuthOn_ != nullptr;};
      void deleteStandardAuthOn() { this->standardAuthOn_ = nullptr;};
      inline bool getStandardAuthOn() const { DARABONBA_PTR_GET_DEFAULT(standardAuthOn_, false) };
      inline HttpDelivery& setStandardAuthOn(bool standardAuthOn) { DARABONBA_PTR_SET_VALUE(standardAuthOn_, standardAuthOn) };


      // standardAuthParam Field Functions 
      bool hasStandardAuthParam() const { return this->standardAuthParam_ != nullptr;};
      void deleteStandardAuthParam() { this->standardAuthParam_ = nullptr;};
      inline const HttpDelivery::StandardAuthParam & getStandardAuthParam() const { DARABONBA_PTR_GET_CONST(standardAuthParam_, HttpDelivery::StandardAuthParam) };
      inline HttpDelivery::StandardAuthParam getStandardAuthParam() { DARABONBA_PTR_GET(standardAuthParam_, HttpDelivery::StandardAuthParam) };
      inline HttpDelivery& setStandardAuthParam(const HttpDelivery::StandardAuthParam & standardAuthParam) { DARABONBA_PTR_SET_VALUE(standardAuthParam_, standardAuthParam) };
      inline HttpDelivery& setStandardAuthParam(HttpDelivery::StandardAuthParam && standardAuthParam) { DARABONBA_PTR_SET_RVALUE(standardAuthParam_, standardAuthParam) };


      // transformTimeout Field Functions 
      bool hasTransformTimeout() const { return this->transformTimeout_ != nullptr;};
      void deleteTransformTimeout() { this->transformTimeout_ = nullptr;};
      inline int64_t getTransformTimeout() const { DARABONBA_PTR_GET_DEFAULT(transformTimeout_, 0L) };
      inline HttpDelivery& setTransformTimeout(int64_t transformTimeout) { DARABONBA_PTR_SET_VALUE(transformTimeout_, transformTimeout) };


    protected:
      // The compression method.
      shared_ptr<string> compress_ {};
      // The address of the HTTP server.
      shared_ptr<string> destUrl_ {};
      // The custom headers.
      shared_ptr<map<string, HttpDeliveryHeaderParamValue>> headerParam_ {};
      // The ending separator.
      shared_ptr<bool> lastLogSplit_ {};
      // The prefix of the log delivery package.
      shared_ptr<string> logBodyPrefix_ {};
      // The suffix of the log delivery package.
      shared_ptr<string> logBodySuffix_ {};
      // Specifies whether to enable log splitting. Default value: true.
      shared_ptr<bool> logSplit_ {};
      // The log separator.
      shared_ptr<string> logSplitWords_ {};
      // The maximum size of data for each delivery. Unit: MB.
      shared_ptr<int64_t> maxBatchMB_ {};
      // The maximum number of entries for each delivery.
      shared_ptr<int64_t> maxBatchSize_ {};
      // The maximum number of retries.
      shared_ptr<int64_t> maxRetry_ {};
      // The custom query parameters.
      shared_ptr<map<string, HttpDeliveryQueryParamValue>> queryParam_ {};
      // Specifies whether to use server authentication.
      shared_ptr<bool> standardAuthOn_ {};
      // The authentication configurations.
      shared_ptr<HttpDelivery::StandardAuthParam> standardAuthParam_ {};
      // The timeout period. Unit: seconds.
      shared_ptr<int64_t> transformTimeout_ {};
    };

    virtual bool empty() const override { return this->businessType_ == nullptr
        && this->dataCenter_ == nullptr && this->deliveryType_ == nullptr && this->details_ == nullptr && this->discardRate_ == nullptr && this->fieldName_ == nullptr
        && this->filterVer_ == nullptr && this->httpDelivery_ == nullptr && this->kafkaDelivery_ == nullptr && this->ossDelivery_ == nullptr && this->s3Delivery_ == nullptr
        && this->slsDelivery_ == nullptr && this->taskName_ == nullptr; };
    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string getBusinessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline CreateUserDeliveryTaskRequest& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // dataCenter Field Functions 
    bool hasDataCenter() const { return this->dataCenter_ != nullptr;};
    void deleteDataCenter() { this->dataCenter_ = nullptr;};
    inline string getDataCenter() const { DARABONBA_PTR_GET_DEFAULT(dataCenter_, "") };
    inline CreateUserDeliveryTaskRequest& setDataCenter(string dataCenter) { DARABONBA_PTR_SET_VALUE(dataCenter_, dataCenter) };


    // deliveryType Field Functions 
    bool hasDeliveryType() const { return this->deliveryType_ != nullptr;};
    void deleteDeliveryType() { this->deliveryType_ = nullptr;};
    inline string getDeliveryType() const { DARABONBA_PTR_GET_DEFAULT(deliveryType_, "") };
    inline CreateUserDeliveryTaskRequest& setDeliveryType(string deliveryType) { DARABONBA_PTR_SET_VALUE(deliveryType_, deliveryType) };


    // details Field Functions 
    bool hasDetails() const { return this->details_ != nullptr;};
    void deleteDetails() { this->details_ = nullptr;};
    inline string getDetails() const { DARABONBA_PTR_GET_DEFAULT(details_, "") };
    inline CreateUserDeliveryTaskRequest& setDetails(string details) { DARABONBA_PTR_SET_VALUE(details_, details) };


    // discardRate Field Functions 
    bool hasDiscardRate() const { return this->discardRate_ != nullptr;};
    void deleteDiscardRate() { this->discardRate_ = nullptr;};
    inline float getDiscardRate() const { DARABONBA_PTR_GET_DEFAULT(discardRate_, 0.0) };
    inline CreateUserDeliveryTaskRequest& setDiscardRate(float discardRate) { DARABONBA_PTR_SET_VALUE(discardRate_, discardRate) };


    // fieldName Field Functions 
    bool hasFieldName() const { return this->fieldName_ != nullptr;};
    void deleteFieldName() { this->fieldName_ = nullptr;};
    inline string getFieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
    inline CreateUserDeliveryTaskRequest& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


    // filterVer Field Functions 
    bool hasFilterVer() const { return this->filterVer_ != nullptr;};
    void deleteFilterVer() { this->filterVer_ = nullptr;};
    inline string getFilterVer() const { DARABONBA_PTR_GET_DEFAULT(filterVer_, "") };
    inline CreateUserDeliveryTaskRequest& setFilterVer(string filterVer) { DARABONBA_PTR_SET_VALUE(filterVer_, filterVer) };


    // httpDelivery Field Functions 
    bool hasHttpDelivery() const { return this->httpDelivery_ != nullptr;};
    void deleteHttpDelivery() { this->httpDelivery_ = nullptr;};
    inline const CreateUserDeliveryTaskRequest::HttpDelivery & getHttpDelivery() const { DARABONBA_PTR_GET_CONST(httpDelivery_, CreateUserDeliveryTaskRequest::HttpDelivery) };
    inline CreateUserDeliveryTaskRequest::HttpDelivery getHttpDelivery() { DARABONBA_PTR_GET(httpDelivery_, CreateUserDeliveryTaskRequest::HttpDelivery) };
    inline CreateUserDeliveryTaskRequest& setHttpDelivery(const CreateUserDeliveryTaskRequest::HttpDelivery & httpDelivery) { DARABONBA_PTR_SET_VALUE(httpDelivery_, httpDelivery) };
    inline CreateUserDeliveryTaskRequest& setHttpDelivery(CreateUserDeliveryTaskRequest::HttpDelivery && httpDelivery) { DARABONBA_PTR_SET_RVALUE(httpDelivery_, httpDelivery) };


    // kafkaDelivery Field Functions 
    bool hasKafkaDelivery() const { return this->kafkaDelivery_ != nullptr;};
    void deleteKafkaDelivery() { this->kafkaDelivery_ = nullptr;};
    inline const CreateUserDeliveryTaskRequest::KafkaDelivery & getKafkaDelivery() const { DARABONBA_PTR_GET_CONST(kafkaDelivery_, CreateUserDeliveryTaskRequest::KafkaDelivery) };
    inline CreateUserDeliveryTaskRequest::KafkaDelivery getKafkaDelivery() { DARABONBA_PTR_GET(kafkaDelivery_, CreateUserDeliveryTaskRequest::KafkaDelivery) };
    inline CreateUserDeliveryTaskRequest& setKafkaDelivery(const CreateUserDeliveryTaskRequest::KafkaDelivery & kafkaDelivery) { DARABONBA_PTR_SET_VALUE(kafkaDelivery_, kafkaDelivery) };
    inline CreateUserDeliveryTaskRequest& setKafkaDelivery(CreateUserDeliveryTaskRequest::KafkaDelivery && kafkaDelivery) { DARABONBA_PTR_SET_RVALUE(kafkaDelivery_, kafkaDelivery) };


    // ossDelivery Field Functions 
    bool hasOssDelivery() const { return this->ossDelivery_ != nullptr;};
    void deleteOssDelivery() { this->ossDelivery_ = nullptr;};
    inline const CreateUserDeliveryTaskRequest::OssDelivery & getOssDelivery() const { DARABONBA_PTR_GET_CONST(ossDelivery_, CreateUserDeliveryTaskRequest::OssDelivery) };
    inline CreateUserDeliveryTaskRequest::OssDelivery getOssDelivery() { DARABONBA_PTR_GET(ossDelivery_, CreateUserDeliveryTaskRequest::OssDelivery) };
    inline CreateUserDeliveryTaskRequest& setOssDelivery(const CreateUserDeliveryTaskRequest::OssDelivery & ossDelivery) { DARABONBA_PTR_SET_VALUE(ossDelivery_, ossDelivery) };
    inline CreateUserDeliveryTaskRequest& setOssDelivery(CreateUserDeliveryTaskRequest::OssDelivery && ossDelivery) { DARABONBA_PTR_SET_RVALUE(ossDelivery_, ossDelivery) };


    // s3Delivery Field Functions 
    bool hasS3Delivery() const { return this->s3Delivery_ != nullptr;};
    void deleteS3Delivery() { this->s3Delivery_ = nullptr;};
    inline const CreateUserDeliveryTaskRequest::S3Delivery & getS3Delivery() const { DARABONBA_PTR_GET_CONST(s3Delivery_, CreateUserDeliveryTaskRequest::S3Delivery) };
    inline CreateUserDeliveryTaskRequest::S3Delivery getS3Delivery() { DARABONBA_PTR_GET(s3Delivery_, CreateUserDeliveryTaskRequest::S3Delivery) };
    inline CreateUserDeliveryTaskRequest& setS3Delivery(const CreateUserDeliveryTaskRequest::S3Delivery & s3Delivery) { DARABONBA_PTR_SET_VALUE(s3Delivery_, s3Delivery) };
    inline CreateUserDeliveryTaskRequest& setS3Delivery(CreateUserDeliveryTaskRequest::S3Delivery && s3Delivery) { DARABONBA_PTR_SET_RVALUE(s3Delivery_, s3Delivery) };


    // slsDelivery Field Functions 
    bool hasSlsDelivery() const { return this->slsDelivery_ != nullptr;};
    void deleteSlsDelivery() { this->slsDelivery_ = nullptr;};
    inline const CreateUserDeliveryTaskRequest::SlsDelivery & getSlsDelivery() const { DARABONBA_PTR_GET_CONST(slsDelivery_, CreateUserDeliveryTaskRequest::SlsDelivery) };
    inline CreateUserDeliveryTaskRequest::SlsDelivery getSlsDelivery() { DARABONBA_PTR_GET(slsDelivery_, CreateUserDeliveryTaskRequest::SlsDelivery) };
    inline CreateUserDeliveryTaskRequest& setSlsDelivery(const CreateUserDeliveryTaskRequest::SlsDelivery & slsDelivery) { DARABONBA_PTR_SET_VALUE(slsDelivery_, slsDelivery) };
    inline CreateUserDeliveryTaskRequest& setSlsDelivery(CreateUserDeliveryTaskRequest::SlsDelivery && slsDelivery) { DARABONBA_PTR_SET_RVALUE(slsDelivery_, slsDelivery) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreateUserDeliveryTaskRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // The log category. Valid values:
    // 
    // *   dcdn_log_access_l1 (default): access logs.
    // *   dcdn_log_er: Edge Routine logs.
    // *   dcdn_log_waf: firewall logs.
    // *   dcdn_log_ipa: TCP/UDP proxy logs.
    // 
    // This parameter is required.
    shared_ptr<string> businessType_ {};
    // The data center. Valid values:
    // 
    // *   cn: the Chinese mainland.
    // *   sg: outside the Chinese mainland.
    shared_ptr<string> dataCenter_ {};
    // The destination of the delivery. Valid values:
    // 
    // 1.  sls: Alibaba Cloud SLS.
    // 2.  http: HTTP server.
    // 3.  aws3: Amazon S3.
    // 4.  oss: Alibaba Cloud OSS.
    // 5.  kafka: Kafka.
    // 6.  aws3cmpt: S3-compatible storage service.
    // 
    // This parameter is required.
    shared_ptr<string> deliveryType_ {};
    shared_ptr<string> details_ {};
    // The discard rate. Default value: 0.
    shared_ptr<float> discardRate_ {};
    // The log field. If you specify multiple fields, separate them with commas (,).
    // 
    // This parameter is required.
    shared_ptr<string> fieldName_ {};
    shared_ptr<string> filterVer_ {};
    // The configurations for delivery to an HTTP server.
    shared_ptr<CreateUserDeliveryTaskRequest::HttpDelivery> httpDelivery_ {};
    // The configurations for delivery to Kafka.
    shared_ptr<CreateUserDeliveryTaskRequest::KafkaDelivery> kafkaDelivery_ {};
    // The configurations for delivery to OSS.
    shared_ptr<CreateUserDeliveryTaskRequest::OssDelivery> ossDelivery_ {};
    // The configurations for delivery to Amazon S3 or an S3-compatible service.
    shared_ptr<CreateUserDeliveryTaskRequest::S3Delivery> s3Delivery_ {};
    // The configurations for delivery to SLS.
    shared_ptr<CreateUserDeliveryTaskRequest::SlsDelivery> slsDelivery_ {};
    // The task name.
    // 
    // This parameter is required.
    shared_ptr<string> taskName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
