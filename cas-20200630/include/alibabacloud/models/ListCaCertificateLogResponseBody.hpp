// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCACERTIFICATELOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCACERTIFICATELOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class ListCACertificateLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCACertificateLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LogList, logList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCACertificateLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LogList, logList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListCACertificateLogResponseBody() = default ;
    ListCACertificateLogResponseBody(const ListCACertificateLogResponseBody &) = default ;
    ListCACertificateLogResponseBody(ListCACertificateLogResponseBody &&) = default ;
    ListCACertificateLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCACertificateLogResponseBody() = default ;
    ListCACertificateLogResponseBody& operator=(const ListCACertificateLogResponseBody &) = default ;
    ListCACertificateLogResponseBody& operator=(ListCACertificateLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LogList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LogList& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Identifier, identifier_);
        DARABONBA_PTR_TO_JSON(OpType, opType_);
      };
      friend void from_json(const Darabonba::Json& j, LogList& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Identifier, identifier_);
        DARABONBA_PTR_FROM_JSON(OpType, opType_);
      };
      LogList() = default ;
      LogList(const LogList &) = default ;
      LogList(LogList &&) = default ;
      LogList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LogList() = default ;
      LogList& operator=(const LogList &) = default ;
      LogList& operator=(LogList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->createTime_ == nullptr && this->identifier_ == nullptr && this->opType_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline LogList& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline LogList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // identifier Field Functions 
      bool hasIdentifier() const { return this->identifier_ != nullptr;};
      void deleteIdentifier() { this->identifier_ = nullptr;};
      inline string getIdentifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
      inline LogList& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


      // opType Field Functions 
      bool hasOpType() const { return this->opType_ != nullptr;};
      void deleteOpType() { this->opType_ = nullptr;};
      inline string getOpType() const { DARABONBA_PTR_GET_DEFAULT(opType_, "") };
      inline LogList& setOpType(string opType) { DARABONBA_PTR_SET_VALUE(opType_, opType) };


    protected:
      shared_ptr<string> content_ {};
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<string> identifier_ {};
      shared_ptr<string> opType_ {};
    };

    virtual bool empty() const override { return this->logList_ == nullptr
        && this->requestId_ == nullptr; };
    // logList Field Functions 
    bool hasLogList() const { return this->logList_ != nullptr;};
    void deleteLogList() { this->logList_ = nullptr;};
    inline const vector<ListCACertificateLogResponseBody::LogList> & getLogList() const { DARABONBA_PTR_GET_CONST(logList_, vector<ListCACertificateLogResponseBody::LogList>) };
    inline vector<ListCACertificateLogResponseBody::LogList> getLogList() { DARABONBA_PTR_GET(logList_, vector<ListCACertificateLogResponseBody::LogList>) };
    inline ListCACertificateLogResponseBody& setLogList(const vector<ListCACertificateLogResponseBody::LogList> & logList) { DARABONBA_PTR_SET_VALUE(logList_, logList) };
    inline ListCACertificateLogResponseBody& setLogList(vector<ListCACertificateLogResponseBody::LogList> && logList) { DARABONBA_PTR_SET_RVALUE(logList_, logList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCACertificateLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListCACertificateLogResponseBody::LogList>> logList_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
