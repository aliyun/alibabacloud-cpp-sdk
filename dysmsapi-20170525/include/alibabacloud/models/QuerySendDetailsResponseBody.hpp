// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSENDDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSENDDETAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class QuerySendDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySendDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SmsSendDetailDTOs, smsSendDetailDTOs_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySendDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SmsSendDetailDTOs, smsSendDetailDTOs_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    QuerySendDetailsResponseBody() = default ;
    QuerySendDetailsResponseBody(const QuerySendDetailsResponseBody &) = default ;
    QuerySendDetailsResponseBody(QuerySendDetailsResponseBody &&) = default ;
    QuerySendDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySendDetailsResponseBody() = default ;
    QuerySendDetailsResponseBody& operator=(const QuerySendDetailsResponseBody &) = default ;
    QuerySendDetailsResponseBody& operator=(QuerySendDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SmsSendDetailDTOs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SmsSendDetailDTOs& obj) { 
        DARABONBA_PTR_TO_JSON(SmsSendDetailDTO, smsSendDetailDTO_);
      };
      friend void from_json(const Darabonba::Json& j, SmsSendDetailDTOs& obj) { 
        DARABONBA_PTR_FROM_JSON(SmsSendDetailDTO, smsSendDetailDTO_);
      };
      SmsSendDetailDTOs() = default ;
      SmsSendDetailDTOs(const SmsSendDetailDTOs &) = default ;
      SmsSendDetailDTOs(SmsSendDetailDTOs &&) = default ;
      SmsSendDetailDTOs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SmsSendDetailDTOs() = default ;
      SmsSendDetailDTOs& operator=(const SmsSendDetailDTOs &) = default ;
      SmsSendDetailDTOs& operator=(SmsSendDetailDTOs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SmsSendDetailDTO : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SmsSendDetailDTO& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
          DARABONBA_PTR_TO_JSON(OutId, outId_);
          DARABONBA_PTR_TO_JSON(PhoneNum, phoneNum_);
          DARABONBA_PTR_TO_JSON(ReceiveDate, receiveDate_);
          DARABONBA_PTR_TO_JSON(SendDate, sendDate_);
          DARABONBA_PTR_TO_JSON(SendStatus, sendStatus_);
          DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
        };
        friend void from_json(const Darabonba::Json& j, SmsSendDetailDTO& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
          DARABONBA_PTR_FROM_JSON(OutId, outId_);
          DARABONBA_PTR_FROM_JSON(PhoneNum, phoneNum_);
          DARABONBA_PTR_FROM_JSON(ReceiveDate, receiveDate_);
          DARABONBA_PTR_FROM_JSON(SendDate, sendDate_);
          DARABONBA_PTR_FROM_JSON(SendStatus, sendStatus_);
          DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
        };
        SmsSendDetailDTO() = default ;
        SmsSendDetailDTO(const SmsSendDetailDTO &) = default ;
        SmsSendDetailDTO(SmsSendDetailDTO &&) = default ;
        SmsSendDetailDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SmsSendDetailDTO() = default ;
        SmsSendDetailDTO& operator=(const SmsSendDetailDTO &) = default ;
        SmsSendDetailDTO& operator=(SmsSendDetailDTO &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->content_ == nullptr
        && this->errCode_ == nullptr && this->outId_ == nullptr && this->phoneNum_ == nullptr && this->receiveDate_ == nullptr && this->sendDate_ == nullptr
        && this->sendStatus_ == nullptr && this->templateCode_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline SmsSendDetailDTO& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // errCode Field Functions 
        bool hasErrCode() const { return this->errCode_ != nullptr;};
        void deleteErrCode() { this->errCode_ = nullptr;};
        inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
        inline SmsSendDetailDTO& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


        // outId Field Functions 
        bool hasOutId() const { return this->outId_ != nullptr;};
        void deleteOutId() { this->outId_ = nullptr;};
        inline string getOutId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
        inline SmsSendDetailDTO& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


        // phoneNum Field Functions 
        bool hasPhoneNum() const { return this->phoneNum_ != nullptr;};
        void deletePhoneNum() { this->phoneNum_ = nullptr;};
        inline string getPhoneNum() const { DARABONBA_PTR_GET_DEFAULT(phoneNum_, "") };
        inline SmsSendDetailDTO& setPhoneNum(string phoneNum) { DARABONBA_PTR_SET_VALUE(phoneNum_, phoneNum) };


        // receiveDate Field Functions 
        bool hasReceiveDate() const { return this->receiveDate_ != nullptr;};
        void deleteReceiveDate() { this->receiveDate_ = nullptr;};
        inline string getReceiveDate() const { DARABONBA_PTR_GET_DEFAULT(receiveDate_, "") };
        inline SmsSendDetailDTO& setReceiveDate(string receiveDate) { DARABONBA_PTR_SET_VALUE(receiveDate_, receiveDate) };


        // sendDate Field Functions 
        bool hasSendDate() const { return this->sendDate_ != nullptr;};
        void deleteSendDate() { this->sendDate_ = nullptr;};
        inline string getSendDate() const { DARABONBA_PTR_GET_DEFAULT(sendDate_, "") };
        inline SmsSendDetailDTO& setSendDate(string sendDate) { DARABONBA_PTR_SET_VALUE(sendDate_, sendDate) };


        // sendStatus Field Functions 
        bool hasSendStatus() const { return this->sendStatus_ != nullptr;};
        void deleteSendStatus() { this->sendStatus_ = nullptr;};
        inline int64_t getSendStatus() const { DARABONBA_PTR_GET_DEFAULT(sendStatus_, 0L) };
        inline SmsSendDetailDTO& setSendStatus(int64_t sendStatus) { DARABONBA_PTR_SET_VALUE(sendStatus_, sendStatus) };


        // templateCode Field Functions 
        bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
        void deleteTemplateCode() { this->templateCode_ = nullptr;};
        inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
        inline SmsSendDetailDTO& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


      protected:
        shared_ptr<string> content_ {};
        shared_ptr<string> errCode_ {};
        shared_ptr<string> outId_ {};
        shared_ptr<string> phoneNum_ {};
        shared_ptr<string> receiveDate_ {};
        shared_ptr<string> sendDate_ {};
        shared_ptr<int64_t> sendStatus_ {};
        shared_ptr<string> templateCode_ {};
      };

      virtual bool empty() const override { return this->smsSendDetailDTO_ == nullptr; };
      // smsSendDetailDTO Field Functions 
      bool hasSmsSendDetailDTO() const { return this->smsSendDetailDTO_ != nullptr;};
      void deleteSmsSendDetailDTO() { this->smsSendDetailDTO_ = nullptr;};
      inline const vector<SmsSendDetailDTOs::SmsSendDetailDTO> & getSmsSendDetailDTO() const { DARABONBA_PTR_GET_CONST(smsSendDetailDTO_, vector<SmsSendDetailDTOs::SmsSendDetailDTO>) };
      inline vector<SmsSendDetailDTOs::SmsSendDetailDTO> getSmsSendDetailDTO() { DARABONBA_PTR_GET(smsSendDetailDTO_, vector<SmsSendDetailDTOs::SmsSendDetailDTO>) };
      inline SmsSendDetailDTOs& setSmsSendDetailDTO(const vector<SmsSendDetailDTOs::SmsSendDetailDTO> & smsSendDetailDTO) { DARABONBA_PTR_SET_VALUE(smsSendDetailDTO_, smsSendDetailDTO) };
      inline SmsSendDetailDTOs& setSmsSendDetailDTO(vector<SmsSendDetailDTOs::SmsSendDetailDTO> && smsSendDetailDTO) { DARABONBA_PTR_SET_RVALUE(smsSendDetailDTO_, smsSendDetailDTO) };


    protected:
      shared_ptr<vector<SmsSendDetailDTOs::SmsSendDetailDTO>> smsSendDetailDTO_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->smsSendDetailDTOs_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QuerySendDetailsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QuerySendDetailsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySendDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // smsSendDetailDTOs Field Functions 
    bool hasSmsSendDetailDTOs() const { return this->smsSendDetailDTOs_ != nullptr;};
    void deleteSmsSendDetailDTOs() { this->smsSendDetailDTOs_ = nullptr;};
    inline const QuerySendDetailsResponseBody::SmsSendDetailDTOs & getSmsSendDetailDTOs() const { DARABONBA_PTR_GET_CONST(smsSendDetailDTOs_, QuerySendDetailsResponseBody::SmsSendDetailDTOs) };
    inline QuerySendDetailsResponseBody::SmsSendDetailDTOs getSmsSendDetailDTOs() { DARABONBA_PTR_GET(smsSendDetailDTOs_, QuerySendDetailsResponseBody::SmsSendDetailDTOs) };
    inline QuerySendDetailsResponseBody& setSmsSendDetailDTOs(const QuerySendDetailsResponseBody::SmsSendDetailDTOs & smsSendDetailDTOs) { DARABONBA_PTR_SET_VALUE(smsSendDetailDTOs_, smsSendDetailDTOs) };
    inline QuerySendDetailsResponseBody& setSmsSendDetailDTOs(QuerySendDetailsResponseBody::SmsSendDetailDTOs && smsSendDetailDTOs) { DARABONBA_PTR_SET_RVALUE(smsSendDetailDTOs_, smsSendDetailDTOs) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline QuerySendDetailsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The response code.
    // 
    // *   The value OK indicates that the request was successful.
    // *   Other values indicate that the request failed. For more information, see [Error codes](https://help.aliyun.com/document_detail/101346.html).
    shared_ptr<string> code_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    shared_ptr<QuerySendDetailsResponseBody::SmsSendDetailDTOs> smsSendDetailDTOs_ {};
    // The number of sent messages.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
