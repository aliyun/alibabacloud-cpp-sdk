// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACLSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class DescribeAclsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAclsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(KafkaAclList, kafkaAclList_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAclsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(KafkaAclList, kafkaAclList_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeAclsResponseBody() = default ;
    DescribeAclsResponseBody(const DescribeAclsResponseBody &) = default ;
    DescribeAclsResponseBody(DescribeAclsResponseBody &&) = default ;
    DescribeAclsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAclsResponseBody() = default ;
    DescribeAclsResponseBody& operator=(const DescribeAclsResponseBody &) = default ;
    DescribeAclsResponseBody& operator=(DescribeAclsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class KafkaAclList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const KafkaAclList& obj) { 
        DARABONBA_PTR_TO_JSON(KafkaAclVO, kafkaAclVO_);
      };
      friend void from_json(const Darabonba::Json& j, KafkaAclList& obj) { 
        DARABONBA_PTR_FROM_JSON(KafkaAclVO, kafkaAclVO_);
      };
      KafkaAclList() = default ;
      KafkaAclList(const KafkaAclList &) = default ;
      KafkaAclList(KafkaAclList &&) = default ;
      KafkaAclList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~KafkaAclList() = default ;
      KafkaAclList& operator=(const KafkaAclList &) = default ;
      KafkaAclList& operator=(KafkaAclList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class KafkaAclVO : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const KafkaAclVO& obj) { 
          DARABONBA_PTR_TO_JSON(AclOperationType, aclOperationType_);
          DARABONBA_PTR_TO_JSON(AclPermissionType, aclPermissionType_);
          DARABONBA_PTR_TO_JSON(AclResourceName, aclResourceName_);
          DARABONBA_PTR_TO_JSON(AclResourcePatternType, aclResourcePatternType_);
          DARABONBA_PTR_TO_JSON(AclResourceType, aclResourceType_);
          DARABONBA_PTR_TO_JSON(Host, host_);
          DARABONBA_PTR_TO_JSON(Username, username_);
        };
        friend void from_json(const Darabonba::Json& j, KafkaAclVO& obj) { 
          DARABONBA_PTR_FROM_JSON(AclOperationType, aclOperationType_);
          DARABONBA_PTR_FROM_JSON(AclPermissionType, aclPermissionType_);
          DARABONBA_PTR_FROM_JSON(AclResourceName, aclResourceName_);
          DARABONBA_PTR_FROM_JSON(AclResourcePatternType, aclResourcePatternType_);
          DARABONBA_PTR_FROM_JSON(AclResourceType, aclResourceType_);
          DARABONBA_PTR_FROM_JSON(Host, host_);
          DARABONBA_PTR_FROM_JSON(Username, username_);
        };
        KafkaAclVO() = default ;
        KafkaAclVO(const KafkaAclVO &) = default ;
        KafkaAclVO(KafkaAclVO &&) = default ;
        KafkaAclVO(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~KafkaAclVO() = default ;
        KafkaAclVO& operator=(const KafkaAclVO &) = default ;
        KafkaAclVO& operator=(KafkaAclVO &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->aclOperationType_ == nullptr
        && this->aclPermissionType_ == nullptr && this->aclResourceName_ == nullptr && this->aclResourcePatternType_ == nullptr && this->aclResourceType_ == nullptr && this->host_ == nullptr
        && this->username_ == nullptr; };
        // aclOperationType Field Functions 
        bool hasAclOperationType() const { return this->aclOperationType_ != nullptr;};
        void deleteAclOperationType() { this->aclOperationType_ = nullptr;};
        inline string getAclOperationType() const { DARABONBA_PTR_GET_DEFAULT(aclOperationType_, "") };
        inline KafkaAclVO& setAclOperationType(string aclOperationType) { DARABONBA_PTR_SET_VALUE(aclOperationType_, aclOperationType) };


        // aclPermissionType Field Functions 
        bool hasAclPermissionType() const { return this->aclPermissionType_ != nullptr;};
        void deleteAclPermissionType() { this->aclPermissionType_ = nullptr;};
        inline string getAclPermissionType() const { DARABONBA_PTR_GET_DEFAULT(aclPermissionType_, "") };
        inline KafkaAclVO& setAclPermissionType(string aclPermissionType) { DARABONBA_PTR_SET_VALUE(aclPermissionType_, aclPermissionType) };


        // aclResourceName Field Functions 
        bool hasAclResourceName() const { return this->aclResourceName_ != nullptr;};
        void deleteAclResourceName() { this->aclResourceName_ = nullptr;};
        inline string getAclResourceName() const { DARABONBA_PTR_GET_DEFAULT(aclResourceName_, "") };
        inline KafkaAclVO& setAclResourceName(string aclResourceName) { DARABONBA_PTR_SET_VALUE(aclResourceName_, aclResourceName) };


        // aclResourcePatternType Field Functions 
        bool hasAclResourcePatternType() const { return this->aclResourcePatternType_ != nullptr;};
        void deleteAclResourcePatternType() { this->aclResourcePatternType_ = nullptr;};
        inline string getAclResourcePatternType() const { DARABONBA_PTR_GET_DEFAULT(aclResourcePatternType_, "") };
        inline KafkaAclVO& setAclResourcePatternType(string aclResourcePatternType) { DARABONBA_PTR_SET_VALUE(aclResourcePatternType_, aclResourcePatternType) };


        // aclResourceType Field Functions 
        bool hasAclResourceType() const { return this->aclResourceType_ != nullptr;};
        void deleteAclResourceType() { this->aclResourceType_ = nullptr;};
        inline string getAclResourceType() const { DARABONBA_PTR_GET_DEFAULT(aclResourceType_, "") };
        inline KafkaAclVO& setAclResourceType(string aclResourceType) { DARABONBA_PTR_SET_VALUE(aclResourceType_, aclResourceType) };


        // host Field Functions 
        bool hasHost() const { return this->host_ != nullptr;};
        void deleteHost() { this->host_ = nullptr;};
        inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
        inline KafkaAclVO& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


        // username Field Functions 
        bool hasUsername() const { return this->username_ != nullptr;};
        void deleteUsername() { this->username_ = nullptr;};
        inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
        inline KafkaAclVO& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


      protected:
        shared_ptr<string> aclOperationType_ {};
        shared_ptr<string> aclPermissionType_ {};
        shared_ptr<string> aclResourceName_ {};
        shared_ptr<string> aclResourcePatternType_ {};
        shared_ptr<string> aclResourceType_ {};
        shared_ptr<string> host_ {};
        shared_ptr<string> username_ {};
      };

      virtual bool empty() const override { return this->kafkaAclVO_ == nullptr; };
      // kafkaAclVO Field Functions 
      bool hasKafkaAclVO() const { return this->kafkaAclVO_ != nullptr;};
      void deleteKafkaAclVO() { this->kafkaAclVO_ = nullptr;};
      inline const vector<KafkaAclList::KafkaAclVO> & getKafkaAclVO() const { DARABONBA_PTR_GET_CONST(kafkaAclVO_, vector<KafkaAclList::KafkaAclVO>) };
      inline vector<KafkaAclList::KafkaAclVO> getKafkaAclVO() { DARABONBA_PTR_GET(kafkaAclVO_, vector<KafkaAclList::KafkaAclVO>) };
      inline KafkaAclList& setKafkaAclVO(const vector<KafkaAclList::KafkaAclVO> & kafkaAclVO) { DARABONBA_PTR_SET_VALUE(kafkaAclVO_, kafkaAclVO) };
      inline KafkaAclList& setKafkaAclVO(vector<KafkaAclList::KafkaAclVO> && kafkaAclVO) { DARABONBA_PTR_SET_RVALUE(kafkaAclVO_, kafkaAclVO) };


    protected:
      shared_ptr<vector<KafkaAclList::KafkaAclVO>> kafkaAclVO_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->kafkaAclList_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeAclsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // kafkaAclList Field Functions 
    bool hasKafkaAclList() const { return this->kafkaAclList_ != nullptr;};
    void deleteKafkaAclList() { this->kafkaAclList_ = nullptr;};
    inline const DescribeAclsResponseBody::KafkaAclList & getKafkaAclList() const { DARABONBA_PTR_GET_CONST(kafkaAclList_, DescribeAclsResponseBody::KafkaAclList) };
    inline DescribeAclsResponseBody::KafkaAclList getKafkaAclList() { DARABONBA_PTR_GET(kafkaAclList_, DescribeAclsResponseBody::KafkaAclList) };
    inline DescribeAclsResponseBody& setKafkaAclList(const DescribeAclsResponseBody::KafkaAclList & kafkaAclList) { DARABONBA_PTR_SET_VALUE(kafkaAclList_, kafkaAclList) };
    inline DescribeAclsResponseBody& setKafkaAclList(DescribeAclsResponseBody::KafkaAclList && kafkaAclList) { DARABONBA_PTR_SET_RVALUE(kafkaAclList_, kafkaAclList) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeAclsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAclsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeAclsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned. The HTTP status code 200 indicates that the request is successful.
    shared_ptr<int32_t> code_ {};
    shared_ptr<DescribeAclsResponseBody::KafkaAclList> kafkaAclList_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
