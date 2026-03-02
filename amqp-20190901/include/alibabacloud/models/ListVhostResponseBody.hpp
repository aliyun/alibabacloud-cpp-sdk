// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVHOSTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVHOSTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class ListVhostResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVhostResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListVhostResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListVhostResponseBody() = default ;
    ListVhostResponseBody(const ListVhostResponseBody &) = default ;
    ListVhostResponseBody(ListVhostResponseBody &&) = default ;
    ListVhostResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVhostResponseBody() = default ;
    ListVhostResponseBody& operator=(const ListVhostResponseBody &) = default ;
    ListVhostResponseBody& operator=(ListVhostResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Vhosts, vhosts_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Vhosts, vhosts_);
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
      class Vhosts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Vhosts& obj) { 
          DARABONBA_PTR_TO_JSON(ChannelNum, channelNum_);
          DARABONBA_PTR_TO_JSON(ConnectionNum, connectionNum_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Vhosts& obj) { 
          DARABONBA_PTR_FROM_JSON(ChannelNum, channelNum_);
          DARABONBA_PTR_FROM_JSON(ConnectionNum, connectionNum_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        Vhosts() = default ;
        Vhosts(const Vhosts &) = default ;
        Vhosts(Vhosts &&) = default ;
        Vhosts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Vhosts() = default ;
        Vhosts& operator=(const Vhosts &) = default ;
        Vhosts& operator=(Vhosts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->channelNum_ == nullptr
        && this->connectionNum_ == nullptr && this->name_ == nullptr; };
        // channelNum Field Functions 
        bool hasChannelNum() const { return this->channelNum_ != nullptr;};
        void deleteChannelNum() { this->channelNum_ = nullptr;};
        inline int32_t getChannelNum() const { DARABONBA_PTR_GET_DEFAULT(channelNum_, 0) };
        inline Vhosts& setChannelNum(int32_t channelNum) { DARABONBA_PTR_SET_VALUE(channelNum_, channelNum) };


        // connectionNum Field Functions 
        bool hasConnectionNum() const { return this->connectionNum_ != nullptr;};
        void deleteConnectionNum() { this->connectionNum_ = nullptr;};
        inline int32_t getConnectionNum() const { DARABONBA_PTR_GET_DEFAULT(connectionNum_, 0) };
        inline Vhosts& setConnectionNum(int32_t connectionNum) { DARABONBA_PTR_SET_VALUE(connectionNum_, connectionNum) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Vhosts& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<int32_t> channelNum_ {};
        shared_ptr<int32_t> connectionNum_ {};
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->vhosts_ == nullptr; };
      // vhosts Field Functions 
      bool hasVhosts() const { return this->vhosts_ != nullptr;};
      void deleteVhosts() { this->vhosts_ = nullptr;};
      inline const vector<Data::Vhosts> & getVhosts() const { DARABONBA_PTR_GET_CONST(vhosts_, vector<Data::Vhosts>) };
      inline vector<Data::Vhosts> getVhosts() { DARABONBA_PTR_GET(vhosts_, vector<Data::Vhosts>) };
      inline Data& setVhosts(const vector<Data::Vhosts> & vhosts) { DARABONBA_PTR_SET_VALUE(vhosts_, vhosts) };
      inline Data& setVhosts(vector<Data::Vhosts> && vhosts) { DARABONBA_PTR_SET_RVALUE(vhosts_, vhosts) };


    protected:
      shared_ptr<vector<Data::Vhosts>> vhosts_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListVhostResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListVhostResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListVhostResponseBody::Data) };
    inline ListVhostResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListVhostResponseBody::Data) };
    inline ListVhostResponseBody& setData(const ListVhostResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListVhostResponseBody& setData(ListVhostResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListVhostResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVhostResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListVhostResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<ListVhostResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
