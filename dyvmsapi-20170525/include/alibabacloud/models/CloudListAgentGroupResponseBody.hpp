// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDLISTAGENTGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLOUDLISTAGENTGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudListAgentGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudListAgentGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CloudListAgentGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CloudListAgentGroupResponseBody() = default ;
    CloudListAgentGroupResponseBody(const CloudListAgentGroupResponseBody &) = default ;
    CloudListAgentGroupResponseBody(CloudListAgentGroupResponseBody &&) = default ;
    CloudListAgentGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudListAgentGroupResponseBody() = default ;
    CloudListAgentGroupResponseBody& operator=(const CloudListAgentGroupResponseBody &) = default ;
    CloudListAgentGroupResponseBody& operator=(CloudListAgentGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
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
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(ChildGnos, childGnos_);
          DARABONBA_PTR_TO_JSON(CtiLinkAgentGroup, ctiLinkAgentGroup_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(ChildGnos, childGnos_);
          DARABONBA_PTR_FROM_JSON(CtiLinkAgentGroup, ctiLinkAgentGroup_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class CtiLinkAgentGroup : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CtiLinkAgentGroup& obj) { 
            DARABONBA_PTR_TO_JSON(Comment, comment_);
            DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
            DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
            DARABONBA_PTR_TO_JSON(Gno, gno_);
            DARABONBA_PTR_TO_JSON(GroupName, groupName_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, CtiLinkAgentGroup& obj) { 
            DARABONBA_PTR_FROM_JSON(Comment, comment_);
            DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
            DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
            DARABONBA_PTR_FROM_JSON(Gno, gno_);
            DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          CtiLinkAgentGroup() = default ;
          CtiLinkAgentGroup(const CtiLinkAgentGroup &) = default ;
          CtiLinkAgentGroup(CtiLinkAgentGroup &&) = default ;
          CtiLinkAgentGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CtiLinkAgentGroup() = default ;
          CtiLinkAgentGroup& operator=(const CtiLinkAgentGroup &) = default ;
          CtiLinkAgentGroup& operator=(CtiLinkAgentGroup &&) = default ;
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
          inline CtiLinkAgentGroup& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


          // createTime Field Functions 
          bool hasCreateTime() const { return this->createTime_ != nullptr;};
          void deleteCreateTime() { this->createTime_ = nullptr;};
          inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
          inline CtiLinkAgentGroup& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


          // enterpriseId Field Functions 
          bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
          void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
          inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
          inline CtiLinkAgentGroup& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


          // gno Field Functions 
          bool hasGno() const { return this->gno_ != nullptr;};
          void deleteGno() { this->gno_ = nullptr;};
          inline string getGno() const { DARABONBA_PTR_GET_DEFAULT(gno_, "") };
          inline CtiLinkAgentGroup& setGno(string gno) { DARABONBA_PTR_SET_VALUE(gno_, gno) };


          // groupName Field Functions 
          bool hasGroupName() const { return this->groupName_ != nullptr;};
          void deleteGroupName() { this->groupName_ = nullptr;};
          inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
          inline CtiLinkAgentGroup& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline int64_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0L) };
          inline CtiLinkAgentGroup& setType(int64_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


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

        virtual bool empty() const override { return this->childGnos_ == nullptr
        && this->ctiLinkAgentGroup_ == nullptr; };
        // childGnos Field Functions 
        bool hasChildGnos() const { return this->childGnos_ != nullptr;};
        void deleteChildGnos() { this->childGnos_ = nullptr;};
        inline string getChildGnos() const { DARABONBA_PTR_GET_DEFAULT(childGnos_, "") };
        inline List& setChildGnos(string childGnos) { DARABONBA_PTR_SET_VALUE(childGnos_, childGnos) };


        // ctiLinkAgentGroup Field Functions 
        bool hasCtiLinkAgentGroup() const { return this->ctiLinkAgentGroup_ != nullptr;};
        void deleteCtiLinkAgentGroup() { this->ctiLinkAgentGroup_ = nullptr;};
        inline const List::CtiLinkAgentGroup & getCtiLinkAgentGroup() const { DARABONBA_PTR_GET_CONST(ctiLinkAgentGroup_, List::CtiLinkAgentGroup) };
        inline List::CtiLinkAgentGroup getCtiLinkAgentGroup() { DARABONBA_PTR_GET(ctiLinkAgentGroup_, List::CtiLinkAgentGroup) };
        inline List& setCtiLinkAgentGroup(const List::CtiLinkAgentGroup & ctiLinkAgentGroup) { DARABONBA_PTR_SET_VALUE(ctiLinkAgentGroup_, ctiLinkAgentGroup) };
        inline List& setCtiLinkAgentGroup(List::CtiLinkAgentGroup && ctiLinkAgentGroup) { DARABONBA_PTR_SET_RVALUE(ctiLinkAgentGroup_, ctiLinkAgentGroup) };


      protected:
        shared_ptr<string> childGnos_ {};
        shared_ptr<List::CtiLinkAgentGroup> ctiLinkAgentGroup_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    protected:
      shared_ptr<vector<Data::List>> list_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline CloudListAgentGroupResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CloudListAgentGroupResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CloudListAgentGroupResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CloudListAgentGroupResponseBody::Data) };
    inline CloudListAgentGroupResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CloudListAgentGroupResponseBody::Data) };
    inline CloudListAgentGroupResponseBody& setData(const CloudListAgentGroupResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CloudListAgentGroupResponseBody& setData(CloudListAgentGroupResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CloudListAgentGroupResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CloudListAgentGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<CloudListAgentGroupResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
