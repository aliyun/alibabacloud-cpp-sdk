// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAUTHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYAUTHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliyunAuth20181222
{
namespace Models
{
  class QueryAuthResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAuthResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAuthResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryAuthResponseBody() = default ;
    QueryAuthResponseBody(const QueryAuthResponseBody &) = default ;
    QueryAuthResponseBody(QueryAuthResponseBody &&) = default ;
    QueryAuthResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAuthResponseBody() = default ;
    QueryAuthResponseBody& operator=(const QueryAuthResponseBody &) = default ;
    QueryAuthResponseBody& operator=(QueryAuthResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(InfoDTOList, infoDTOList_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(InfoDTOList, infoDTOList_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
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
      class InfoDTOList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InfoDTOList& obj) { 
          DARABONBA_PTR_TO_JSON(InfoDTOList, infoDTOList_);
        };
        friend void from_json(const Darabonba::Json& j, InfoDTOList& obj) { 
          DARABONBA_PTR_FROM_JSON(InfoDTOList, infoDTOList_);
        };
        InfoDTOList() = default ;
        InfoDTOList(const InfoDTOList &) = default ;
        InfoDTOList(InfoDTOList &&) = default ;
        InfoDTOList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InfoDTOList() = default ;
        InfoDTOList& operator=(const InfoDTOList &) = default ;
        InfoDTOList& operator=(InfoDTOList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class InfoDTOListItem : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InfoDTOListItem& obj) { 
            DARABONBA_PTR_TO_JSON(AuthOrderVid, authOrderVid_);
            DARABONBA_PTR_TO_JSON(ItemName, itemName_);
            DARABONBA_PTR_TO_JSON(ItemRecordVid, itemRecordVid_);
            DARABONBA_PTR_TO_JSON(OperateCode, operateCode_);
          };
          friend void from_json(const Darabonba::Json& j, InfoDTOListItem& obj) { 
            DARABONBA_PTR_FROM_JSON(AuthOrderVid, authOrderVid_);
            DARABONBA_PTR_FROM_JSON(ItemName, itemName_);
            DARABONBA_PTR_FROM_JSON(ItemRecordVid, itemRecordVid_);
            DARABONBA_PTR_FROM_JSON(OperateCode, operateCode_);
          };
          InfoDTOListItem() = default ;
          InfoDTOListItem(const InfoDTOListItem &) = default ;
          InfoDTOListItem(InfoDTOListItem &&) = default ;
          InfoDTOListItem(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InfoDTOListItem() = default ;
          InfoDTOListItem& operator=(const InfoDTOListItem &) = default ;
          InfoDTOListItem& operator=(InfoDTOListItem &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->authOrderVid_ == nullptr
        && this->itemName_ == nullptr && this->itemRecordVid_ == nullptr && this->operateCode_ == nullptr; };
          // authOrderVid Field Functions 
          bool hasAuthOrderVid() const { return this->authOrderVid_ != nullptr;};
          void deleteAuthOrderVid() { this->authOrderVid_ = nullptr;};
          inline string getAuthOrderVid() const { DARABONBA_PTR_GET_DEFAULT(authOrderVid_, "") };
          inline InfoDTOListItem& setAuthOrderVid(string authOrderVid) { DARABONBA_PTR_SET_VALUE(authOrderVid_, authOrderVid) };


          // itemName Field Functions 
          bool hasItemName() const { return this->itemName_ != nullptr;};
          void deleteItemName() { this->itemName_ = nullptr;};
          inline string getItemName() const { DARABONBA_PTR_GET_DEFAULT(itemName_, "") };
          inline InfoDTOListItem& setItemName(string itemName) { DARABONBA_PTR_SET_VALUE(itemName_, itemName) };


          // itemRecordVid Field Functions 
          bool hasItemRecordVid() const { return this->itemRecordVid_ != nullptr;};
          void deleteItemRecordVid() { this->itemRecordVid_ = nullptr;};
          inline string getItemRecordVid() const { DARABONBA_PTR_GET_DEFAULT(itemRecordVid_, "") };
          inline InfoDTOListItem& setItemRecordVid(string itemRecordVid) { DARABONBA_PTR_SET_VALUE(itemRecordVid_, itemRecordVid) };


          // operateCode Field Functions 
          bool hasOperateCode() const { return this->operateCode_ != nullptr;};
          void deleteOperateCode() { this->operateCode_ = nullptr;};
          inline string getOperateCode() const { DARABONBA_PTR_GET_DEFAULT(operateCode_, "") };
          inline InfoDTOListItem& setOperateCode(string operateCode) { DARABONBA_PTR_SET_VALUE(operateCode_, operateCode) };


        protected:
          shared_ptr<string> authOrderVid_ {};
          shared_ptr<string> itemName_ {};
          shared_ptr<string> itemRecordVid_ {};
          shared_ptr<string> operateCode_ {};
        };

        virtual bool empty() const override { return this->infoDTOList_ == nullptr; };
        // infoDTOList Field Functions 
        bool hasInfoDTOList() const { return this->infoDTOList_ != nullptr;};
        void deleteInfoDTOList() { this->infoDTOList_ = nullptr;};
        inline const vector<InfoDTOList::InfoDTOListItem> & getInfoDTOList() const { DARABONBA_PTR_GET_CONST(infoDTOList_, vector<InfoDTOList::InfoDTOListItem>) };
        inline vector<InfoDTOList::InfoDTOListItem> getInfoDTOList() { DARABONBA_PTR_GET(infoDTOList_, vector<InfoDTOList::InfoDTOListItem>) };
        inline InfoDTOList& setInfoDTOList(const vector<InfoDTOList::InfoDTOListItem> & infoDTOList) { DARABONBA_PTR_SET_VALUE(infoDTOList_, infoDTOList) };
        inline InfoDTOList& setInfoDTOList(vector<InfoDTOList::InfoDTOListItem> && infoDTOList) { DARABONBA_PTR_SET_RVALUE(infoDTOList_, infoDTOList) };


      protected:
        shared_ptr<vector<InfoDTOList::InfoDTOListItem>> infoDTOList_ {};
      };

      virtual bool empty() const override { return this->infoDTOList_ == nullptr
        && this->instanceId_ == nullptr && this->productCode_ == nullptr; };
      // infoDTOList Field Functions 
      bool hasInfoDTOList() const { return this->infoDTOList_ != nullptr;};
      void deleteInfoDTOList() { this->infoDTOList_ = nullptr;};
      inline const Data::InfoDTOList & getInfoDTOList() const { DARABONBA_PTR_GET_CONST(infoDTOList_, Data::InfoDTOList) };
      inline Data::InfoDTOList getInfoDTOList() { DARABONBA_PTR_GET(infoDTOList_, Data::InfoDTOList) };
      inline Data& setInfoDTOList(const Data::InfoDTOList & infoDTOList) { DARABONBA_PTR_SET_VALUE(infoDTOList_, infoDTOList) };
      inline Data& setInfoDTOList(Data::InfoDTOList && infoDTOList) { DARABONBA_PTR_SET_RVALUE(infoDTOList_, infoDTOList) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // productCode Field Functions 
      bool hasProductCode() const { return this->productCode_ != nullptr;};
      void deleteProductCode() { this->productCode_ = nullptr;};
      inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
      inline Data& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    protected:
      shared_ptr<Data::InfoDTOList> infoDTOList_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> productCode_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline QueryAuthResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryAuthResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryAuthResponseBody::Data) };
    inline QueryAuthResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryAuthResponseBody::Data) };
    inline QueryAuthResponseBody& setData(const QueryAuthResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryAuthResponseBody& setData(QueryAuthResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryAuthResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryAuthResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryAuthResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<QueryAuthResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliyunAuth20181222
#endif
