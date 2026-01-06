// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTICKETOPERATERECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTICKETOPERATERECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListTicketOperateRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTicketOperateRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(records, records_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, ListTicketOperateRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(records, records_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    ListTicketOperateRecordResponseBody() = default ;
    ListTicketOperateRecordResponseBody(const ListTicketOperateRecordResponseBody &) = default ;
    ListTicketOperateRecordResponseBody(ListTicketOperateRecordResponseBody &&) = default ;
    ListTicketOperateRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTicketOperateRecordResponseBody() = default ;
    ListTicketOperateRecordResponseBody& operator=(const ListTicketOperateRecordResponseBody &) = default ;
    ListTicketOperateRecordResponseBody& operator=(ListTicketOperateRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Records : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Records& obj) { 
        DARABONBA_PTR_TO_JSON(OpenTicketId, openTicketId_);
        DARABONBA_PTR_TO_JSON(OperateData, operateData_);
        DARABONBA_PTR_TO_JSON(OperateTime, operateTime_);
        DARABONBA_PTR_TO_JSON(Operation, operation_);
        DARABONBA_PTR_TO_JSON(OperationDisplayName, operationDisplayName_);
        DARABONBA_PTR_TO_JSON(Operator, operator_);
        DARABONBA_PTR_TO_JSON(TicketMemo, ticketMemo_);
      };
      friend void from_json(const Darabonba::Json& j, Records& obj) { 
        DARABONBA_PTR_FROM_JSON(OpenTicketId, openTicketId_);
        DARABONBA_PTR_FROM_JSON(OperateData, operateData_);
        DARABONBA_PTR_FROM_JSON(OperateTime, operateTime_);
        DARABONBA_PTR_FROM_JSON(Operation, operation_);
        DARABONBA_PTR_FROM_JSON(OperationDisplayName, operationDisplayName_);
        DARABONBA_PTR_FROM_JSON(Operator, operator_);
        DARABONBA_PTR_FROM_JSON(TicketMemo, ticketMemo_);
      };
      Records() = default ;
      Records(const Records &) = default ;
      Records(Records &&) = default ;
      Records(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Records() = default ;
      Records& operator=(const Records &) = default ;
      Records& operator=(Records &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TicketMemo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TicketMemo& obj) { 
          DARABONBA_PTR_TO_JSON(Attachments, attachments_);
          DARABONBA_PTR_TO_JSON(Memo, memo_);
        };
        friend void from_json(const Darabonba::Json& j, TicketMemo& obj) { 
          DARABONBA_PTR_FROM_JSON(Attachments, attachments_);
          DARABONBA_PTR_FROM_JSON(Memo, memo_);
        };
        TicketMemo() = default ;
        TicketMemo(const TicketMemo &) = default ;
        TicketMemo(TicketMemo &&) = default ;
        TicketMemo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TicketMemo() = default ;
        TicketMemo& operator=(const TicketMemo &) = default ;
        TicketMemo& operator=(TicketMemo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Attachments : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Attachments& obj) { 
            DARABONBA_PTR_TO_JSON(FileName, fileName_);
            DARABONBA_PTR_TO_JSON(Key, key_);
          };
          friend void from_json(const Darabonba::Json& j, Attachments& obj) { 
            DARABONBA_PTR_FROM_JSON(FileName, fileName_);
            DARABONBA_PTR_FROM_JSON(Key, key_);
          };
          Attachments() = default ;
          Attachments(const Attachments &) = default ;
          Attachments(Attachments &&) = default ;
          Attachments(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Attachments() = default ;
          Attachments& operator=(const Attachments &) = default ;
          Attachments& operator=(Attachments &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->fileName_ == nullptr
        && this->key_ == nullptr; };
          // fileName Field Functions 
          bool hasFileName() const { return this->fileName_ != nullptr;};
          void deleteFileName() { this->fileName_ = nullptr;};
          inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
          inline Attachments& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline Attachments& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        protected:
          shared_ptr<string> fileName_ {};
          shared_ptr<string> key_ {};
        };

        virtual bool empty() const override { return this->attachments_ == nullptr
        && this->memo_ == nullptr; };
        // attachments Field Functions 
        bool hasAttachments() const { return this->attachments_ != nullptr;};
        void deleteAttachments() { this->attachments_ = nullptr;};
        inline const vector<TicketMemo::Attachments> & getAttachments() const { DARABONBA_PTR_GET_CONST(attachments_, vector<TicketMemo::Attachments>) };
        inline vector<TicketMemo::Attachments> getAttachments() { DARABONBA_PTR_GET(attachments_, vector<TicketMemo::Attachments>) };
        inline TicketMemo& setAttachments(const vector<TicketMemo::Attachments> & attachments) { DARABONBA_PTR_SET_VALUE(attachments_, attachments) };
        inline TicketMemo& setAttachments(vector<TicketMemo::Attachments> && attachments) { DARABONBA_PTR_SET_RVALUE(attachments_, attachments) };


        // memo Field Functions 
        bool hasMemo() const { return this->memo_ != nullptr;};
        void deleteMemo() { this->memo_ = nullptr;};
        inline string getMemo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
        inline TicketMemo& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


      protected:
        shared_ptr<vector<TicketMemo::Attachments>> attachments_ {};
        shared_ptr<string> memo_ {};
      };

      class Operator : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Operator& obj) { 
          DARABONBA_PTR_TO_JSON(NickName, nickName_);
          DARABONBA_PTR_TO_JSON(UnionId, unionId_);
        };
        friend void from_json(const Darabonba::Json& j, Operator& obj) { 
          DARABONBA_PTR_FROM_JSON(NickName, nickName_);
          DARABONBA_PTR_FROM_JSON(UnionId, unionId_);
        };
        Operator() = default ;
        Operator(const Operator &) = default ;
        Operator(Operator &&) = default ;
        Operator(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Operator() = default ;
        Operator& operator=(const Operator &) = default ;
        Operator& operator=(Operator &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->nickName_ == nullptr
        && this->unionId_ == nullptr; };
        // nickName Field Functions 
        bool hasNickName() const { return this->nickName_ != nullptr;};
        void deleteNickName() { this->nickName_ = nullptr;};
        inline string getNickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
        inline Operator& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


        // unionId Field Functions 
        bool hasUnionId() const { return this->unionId_ != nullptr;};
        void deleteUnionId() { this->unionId_ = nullptr;};
        inline string getUnionId() const { DARABONBA_PTR_GET_DEFAULT(unionId_, "") };
        inline Operator& setUnionId(string unionId) { DARABONBA_PTR_SET_VALUE(unionId_, unionId) };


      protected:
        shared_ptr<string> nickName_ {};
        shared_ptr<string> unionId_ {};
      };

      virtual bool empty() const override { return this->openTicketId_ == nullptr
        && this->operateData_ == nullptr && this->operateTime_ == nullptr && this->operation_ == nullptr && this->operationDisplayName_ == nullptr && this->operator_ == nullptr
        && this->ticketMemo_ == nullptr; };
      // openTicketId Field Functions 
      bool hasOpenTicketId() const { return this->openTicketId_ != nullptr;};
      void deleteOpenTicketId() { this->openTicketId_ = nullptr;};
      inline string getOpenTicketId() const { DARABONBA_PTR_GET_DEFAULT(openTicketId_, "") };
      inline Records& setOpenTicketId(string openTicketId) { DARABONBA_PTR_SET_VALUE(openTicketId_, openTicketId) };


      // operateData Field Functions 
      bool hasOperateData() const { return this->operateData_ != nullptr;};
      void deleteOperateData() { this->operateData_ = nullptr;};
      inline string getOperateData() const { DARABONBA_PTR_GET_DEFAULT(operateData_, "") };
      inline Records& setOperateData(string operateData) { DARABONBA_PTR_SET_VALUE(operateData_, operateData) };


      // operateTime Field Functions 
      bool hasOperateTime() const { return this->operateTime_ != nullptr;};
      void deleteOperateTime() { this->operateTime_ = nullptr;};
      inline string getOperateTime() const { DARABONBA_PTR_GET_DEFAULT(operateTime_, "") };
      inline Records& setOperateTime(string operateTime) { DARABONBA_PTR_SET_VALUE(operateTime_, operateTime) };


      // operation Field Functions 
      bool hasOperation() const { return this->operation_ != nullptr;};
      void deleteOperation() { this->operation_ = nullptr;};
      inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
      inline Records& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


      // operationDisplayName Field Functions 
      bool hasOperationDisplayName() const { return this->operationDisplayName_ != nullptr;};
      void deleteOperationDisplayName() { this->operationDisplayName_ = nullptr;};
      inline string getOperationDisplayName() const { DARABONBA_PTR_GET_DEFAULT(operationDisplayName_, "") };
      inline Records& setOperationDisplayName(string operationDisplayName) { DARABONBA_PTR_SET_VALUE(operationDisplayName_, operationDisplayName) };


      // operator Field Functions 
      bool hasOperator() const { return this->operator_ != nullptr;};
      void deleteOperator() { this->operator_ = nullptr;};
      inline const Records::Operator & getOperator() const { DARABONBA_PTR_GET_CONST(operator_, Records::Operator) };
      inline Records::Operator getOperator() { DARABONBA_PTR_GET(operator_, Records::Operator) };
      inline Records& setOperator(const Records::Operator & _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };
      inline Records& setOperator(Records::Operator && _operator) { DARABONBA_PTR_SET_RVALUE(operator_, _operator) };


      // ticketMemo Field Functions 
      bool hasTicketMemo() const { return this->ticketMemo_ != nullptr;};
      void deleteTicketMemo() { this->ticketMemo_ = nullptr;};
      inline const Records::TicketMemo & getTicketMemo() const { DARABONBA_PTR_GET_CONST(ticketMemo_, Records::TicketMemo) };
      inline Records::TicketMemo getTicketMemo() { DARABONBA_PTR_GET(ticketMemo_, Records::TicketMemo) };
      inline Records& setTicketMemo(const Records::TicketMemo & ticketMemo) { DARABONBA_PTR_SET_VALUE(ticketMemo_, ticketMemo) };
      inline Records& setTicketMemo(Records::TicketMemo && ticketMemo) { DARABONBA_PTR_SET_RVALUE(ticketMemo_, ticketMemo) };


    protected:
      shared_ptr<string> openTicketId_ {};
      shared_ptr<string> operateData_ {};
      shared_ptr<string> operateTime_ {};
      shared_ptr<string> operation_ {};
      shared_ptr<string> operationDisplayName_ {};
      shared_ptr<Records::Operator> operator_ {};
      shared_ptr<Records::TicketMemo> ticketMemo_ {};
    };

    virtual bool empty() const override { return this->records_ == nullptr
        && this->requestId_ == nullptr && this->vendorRequestId_ == nullptr && this->vendorType_ == nullptr; };
    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<ListTicketOperateRecordResponseBody::Records> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<ListTicketOperateRecordResponseBody::Records>) };
    inline vector<ListTicketOperateRecordResponseBody::Records> getRecords() { DARABONBA_PTR_GET(records_, vector<ListTicketOperateRecordResponseBody::Records>) };
    inline ListTicketOperateRecordResponseBody& setRecords(const vector<ListTicketOperateRecordResponseBody::Records> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline ListTicketOperateRecordResponseBody& setRecords(vector<ListTicketOperateRecordResponseBody::Records> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTicketOperateRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline ListTicketOperateRecordResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline ListTicketOperateRecordResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    shared_ptr<vector<ListTicketOperateRecordResponseBody::Records>> records_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> vendorRequestId_ {};
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
