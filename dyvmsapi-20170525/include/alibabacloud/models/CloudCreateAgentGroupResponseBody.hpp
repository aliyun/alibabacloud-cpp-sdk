// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDCREATEAGENTGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLOUDCREATEAGENTGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudCreateAgentGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudCreateAgentGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CloudCreateAgentGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CloudCreateAgentGroupResponseBody() = default ;
    CloudCreateAgentGroupResponseBody(const CloudCreateAgentGroupResponseBody &) = default ;
    CloudCreateAgentGroupResponseBody(CloudCreateAgentGroupResponseBody &&) = default ;
    CloudCreateAgentGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudCreateAgentGroupResponseBody() = default ;
    CloudCreateAgentGroupResponseBody& operator=(const CloudCreateAgentGroupResponseBody &) = default ;
    CloudCreateAgentGroupResponseBody& operator=(CloudCreateAgentGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
        DARABONBA_PTR_TO_JSON(Gno, gno_);
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
        DARABONBA_PTR_FROM_JSON(Gno, gno_);
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
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
      virtual bool empty() const override { return this->comment_ == nullptr
        && this->createTime_ == nullptr && this->enterpriseId_ == nullptr && this->gno_ == nullptr && this->groupName_ == nullptr && this->type_ == nullptr; };
      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline Data& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // enterpriseId Field Functions 
      bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
      void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
      inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
      inline Data& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


      // gno Field Functions 
      bool hasGno() const { return this->gno_ != nullptr;};
      void deleteGno() { this->gno_ = nullptr;};
      inline string getGno() const { DARABONBA_PTR_GET_DEFAULT(gno_, "") };
      inline Data& setGno(string gno) { DARABONBA_PTR_SET_VALUE(gno_, gno) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline Data& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline int64_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0L) };
      inline Data& setType(int64_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // 描述信息
      shared_ptr<string> comment_ {};
      // 创建时间，格式: yyyy-MM-dd HH:mm:ss
      shared_ptr<string> createTime_ {};
      // 企业编号
      shared_ptr<int64_t> enterpriseId_ {};
      // 外呼组编号
      shared_ptr<string> gno_ {};
      // 外呼组名称
      shared_ptr<string> groupName_ {};
      // 外呼组类型 1：外呼总组 2：外呼组
      shared_ptr<int64_t> type_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline CloudCreateAgentGroupResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CloudCreateAgentGroupResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CloudCreateAgentGroupResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CloudCreateAgentGroupResponseBody::Data) };
    inline CloudCreateAgentGroupResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CloudCreateAgentGroupResponseBody::Data) };
    inline CloudCreateAgentGroupResponseBody& setData(const CloudCreateAgentGroupResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CloudCreateAgentGroupResponseBody& setData(CloudCreateAgentGroupResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CloudCreateAgentGroupResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CloudCreateAgentGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<CloudCreateAgentGroupResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
