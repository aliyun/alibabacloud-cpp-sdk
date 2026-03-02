// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTATISTICSBYVHOSTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSTATISTICSBYVHOSTRESPONSEBODY_HPP_
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
  class GetStatisticsByVhostResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStatisticsByVhostResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetStatisticsByVhostResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetStatisticsByVhostResponseBody() = default ;
    GetStatisticsByVhostResponseBody(const GetStatisticsByVhostResponseBody &) = default ;
    GetStatisticsByVhostResponseBody(GetStatisticsByVhostResponseBody &&) = default ;
    GetStatisticsByVhostResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStatisticsByVhostResponseBody() = default ;
    GetStatisticsByVhostResponseBody& operator=(const GetStatisticsByVhostResponseBody &) = default ;
    GetStatisticsByVhostResponseBody& operator=(GetStatisticsByVhostResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ConnectionStatistics, connectionStatistics_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ConnectionStatistics, connectionStatistics_);
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
      class ConnectionStatistics : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConnectionStatistics& obj) { 
          DARABONBA_PTR_TO_JSON(AccessKey, accessKey_);
          DARABONBA_PTR_TO_JSON(ChannelNum, channelNum_);
          DARABONBA_PTR_TO_JSON(ChannelStatisticsList, channelStatisticsList_);
          DARABONBA_PTR_TO_JSON(ConnectionName, connectionName_);
          DARABONBA_PTR_TO_JSON(DeliverQps, deliverQps_);
          DARABONBA_PTR_TO_JSON(Protocol, protocol_);
          DARABONBA_PTR_TO_JSON(PublishQps, publishQps_);
          DARABONBA_PTR_TO_JSON(RemoteAddress, remoteAddress_);
          DARABONBA_PTR_TO_JSON(SecurityTransport, securityTransport_);
          DARABONBA_PTR_TO_JSON(State, state_);
        };
        friend void from_json(const Darabonba::Json& j, ConnectionStatistics& obj) { 
          DARABONBA_PTR_FROM_JSON(AccessKey, accessKey_);
          DARABONBA_PTR_FROM_JSON(ChannelNum, channelNum_);
          DARABONBA_PTR_FROM_JSON(ChannelStatisticsList, channelStatisticsList_);
          DARABONBA_PTR_FROM_JSON(ConnectionName, connectionName_);
          DARABONBA_PTR_FROM_JSON(DeliverQps, deliverQps_);
          DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
          DARABONBA_PTR_FROM_JSON(PublishQps, publishQps_);
          DARABONBA_PTR_FROM_JSON(RemoteAddress, remoteAddress_);
          DARABONBA_PTR_FROM_JSON(SecurityTransport, securityTransport_);
          DARABONBA_PTR_FROM_JSON(State, state_);
        };
        ConnectionStatistics() = default ;
        ConnectionStatistics(const ConnectionStatistics &) = default ;
        ConnectionStatistics(ConnectionStatistics &&) = default ;
        ConnectionStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConnectionStatistics() = default ;
        ConnectionStatistics& operator=(const ConnectionStatistics &) = default ;
        ConnectionStatistics& operator=(ConnectionStatistics &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ChannelStatisticsList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ChannelStatisticsList& obj) { 
            DARABONBA_PTR_TO_JSON(ChannelStatistics, channelStatistics_);
          };
          friend void from_json(const Darabonba::Json& j, ChannelStatisticsList& obj) { 
            DARABONBA_PTR_FROM_JSON(ChannelStatistics, channelStatistics_);
          };
          ChannelStatisticsList() = default ;
          ChannelStatisticsList(const ChannelStatisticsList &) = default ;
          ChannelStatisticsList(ChannelStatisticsList &&) = default ;
          ChannelStatisticsList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ChannelStatisticsList() = default ;
          ChannelStatisticsList& operator=(const ChannelStatisticsList &) = default ;
          ChannelStatisticsList& operator=(ChannelStatisticsList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ChannelStatistics : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ChannelStatistics& obj) { 
              DARABONBA_PTR_TO_JSON(AckQps, ackQps_);
              DARABONBA_PTR_TO_JSON(ConfirmQps, confirmQps_);
              DARABONBA_PTR_TO_JSON(DeliverQps, deliverQps_);
              DARABONBA_PTR_TO_JSON(GetQps, getQps_);
              DARABONBA_PTR_TO_JSON(Prefetch, prefetch_);
              DARABONBA_PTR_TO_JSON(PublishQps, publishQps_);
              DARABONBA_PTR_TO_JSON(State, state_);
              DARABONBA_PTR_TO_JSON(Unacked, unacked_);
              DARABONBA_PTR_TO_JSON(Unconfirmed, unconfirmed_);
            };
            friend void from_json(const Darabonba::Json& j, ChannelStatistics& obj) { 
              DARABONBA_PTR_FROM_JSON(AckQps, ackQps_);
              DARABONBA_PTR_FROM_JSON(ConfirmQps, confirmQps_);
              DARABONBA_PTR_FROM_JSON(DeliverQps, deliverQps_);
              DARABONBA_PTR_FROM_JSON(GetQps, getQps_);
              DARABONBA_PTR_FROM_JSON(Prefetch, prefetch_);
              DARABONBA_PTR_FROM_JSON(PublishQps, publishQps_);
              DARABONBA_PTR_FROM_JSON(State, state_);
              DARABONBA_PTR_FROM_JSON(Unacked, unacked_);
              DARABONBA_PTR_FROM_JSON(Unconfirmed, unconfirmed_);
            };
            ChannelStatistics() = default ;
            ChannelStatistics(const ChannelStatistics &) = default ;
            ChannelStatistics(ChannelStatistics &&) = default ;
            ChannelStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ChannelStatistics() = default ;
            ChannelStatistics& operator=(const ChannelStatistics &) = default ;
            ChannelStatistics& operator=(ChannelStatistics &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->ackQps_ == nullptr
        && this->confirmQps_ == nullptr && this->deliverQps_ == nullptr && this->getQps_ == nullptr && this->prefetch_ == nullptr && this->publishQps_ == nullptr
        && this->state_ == nullptr && this->unacked_ == nullptr && this->unconfirmed_ == nullptr; };
            // ackQps Field Functions 
            bool hasAckQps() const { return this->ackQps_ != nullptr;};
            void deleteAckQps() { this->ackQps_ = nullptr;};
            inline float getAckQps() const { DARABONBA_PTR_GET_DEFAULT(ackQps_, 0.0) };
            inline ChannelStatistics& setAckQps(float ackQps) { DARABONBA_PTR_SET_VALUE(ackQps_, ackQps) };


            // confirmQps Field Functions 
            bool hasConfirmQps() const { return this->confirmQps_ != nullptr;};
            void deleteConfirmQps() { this->confirmQps_ = nullptr;};
            inline float getConfirmQps() const { DARABONBA_PTR_GET_DEFAULT(confirmQps_, 0.0) };
            inline ChannelStatistics& setConfirmQps(float confirmQps) { DARABONBA_PTR_SET_VALUE(confirmQps_, confirmQps) };


            // deliverQps Field Functions 
            bool hasDeliverQps() const { return this->deliverQps_ != nullptr;};
            void deleteDeliverQps() { this->deliverQps_ = nullptr;};
            inline float getDeliverQps() const { DARABONBA_PTR_GET_DEFAULT(deliverQps_, 0.0) };
            inline ChannelStatistics& setDeliverQps(float deliverQps) { DARABONBA_PTR_SET_VALUE(deliverQps_, deliverQps) };


            // getQps Field Functions 
            bool hasGetQps() const { return this->getQps_ != nullptr;};
            void deleteGetQps() { this->getQps_ = nullptr;};
            inline float getGetQps() const { DARABONBA_PTR_GET_DEFAULT(getQps_, 0.0) };
            inline ChannelStatistics& setGetQps(float getQps) { DARABONBA_PTR_SET_VALUE(getQps_, getQps) };


            // prefetch Field Functions 
            bool hasPrefetch() const { return this->prefetch_ != nullptr;};
            void deletePrefetch() { this->prefetch_ = nullptr;};
            inline int32_t getPrefetch() const { DARABONBA_PTR_GET_DEFAULT(prefetch_, 0) };
            inline ChannelStatistics& setPrefetch(int32_t prefetch) { DARABONBA_PTR_SET_VALUE(prefetch_, prefetch) };


            // publishQps Field Functions 
            bool hasPublishQps() const { return this->publishQps_ != nullptr;};
            void deletePublishQps() { this->publishQps_ = nullptr;};
            inline float getPublishQps() const { DARABONBA_PTR_GET_DEFAULT(publishQps_, 0.0) };
            inline ChannelStatistics& setPublishQps(float publishQps) { DARABONBA_PTR_SET_VALUE(publishQps_, publishQps) };


            // state Field Functions 
            bool hasState() const { return this->state_ != nullptr;};
            void deleteState() { this->state_ = nullptr;};
            inline int32_t getState() const { DARABONBA_PTR_GET_DEFAULT(state_, 0) };
            inline ChannelStatistics& setState(int32_t state) { DARABONBA_PTR_SET_VALUE(state_, state) };


            // unacked Field Functions 
            bool hasUnacked() const { return this->unacked_ != nullptr;};
            void deleteUnacked() { this->unacked_ = nullptr;};
            inline int32_t getUnacked() const { DARABONBA_PTR_GET_DEFAULT(unacked_, 0) };
            inline ChannelStatistics& setUnacked(int32_t unacked) { DARABONBA_PTR_SET_VALUE(unacked_, unacked) };


            // unconfirmed Field Functions 
            bool hasUnconfirmed() const { return this->unconfirmed_ != nullptr;};
            void deleteUnconfirmed() { this->unconfirmed_ = nullptr;};
            inline int32_t getUnconfirmed() const { DARABONBA_PTR_GET_DEFAULT(unconfirmed_, 0) };
            inline ChannelStatistics& setUnconfirmed(int32_t unconfirmed) { DARABONBA_PTR_SET_VALUE(unconfirmed_, unconfirmed) };


          protected:
            shared_ptr<float> ackQps_ {};
            shared_ptr<float> confirmQps_ {};
            shared_ptr<float> deliverQps_ {};
            shared_ptr<float> getQps_ {};
            shared_ptr<int32_t> prefetch_ {};
            shared_ptr<float> publishQps_ {};
            shared_ptr<int32_t> state_ {};
            shared_ptr<int32_t> unacked_ {};
            shared_ptr<int32_t> unconfirmed_ {};
          };

          virtual bool empty() const override { return this->channelStatistics_ == nullptr; };
          // channelStatistics Field Functions 
          bool hasChannelStatistics() const { return this->channelStatistics_ != nullptr;};
          void deleteChannelStatistics() { this->channelStatistics_ = nullptr;};
          inline const vector<ChannelStatisticsList::ChannelStatistics> & getChannelStatistics() const { DARABONBA_PTR_GET_CONST(channelStatistics_, vector<ChannelStatisticsList::ChannelStatistics>) };
          inline vector<ChannelStatisticsList::ChannelStatistics> getChannelStatistics() { DARABONBA_PTR_GET(channelStatistics_, vector<ChannelStatisticsList::ChannelStatistics>) };
          inline ChannelStatisticsList& setChannelStatistics(const vector<ChannelStatisticsList::ChannelStatistics> & channelStatistics) { DARABONBA_PTR_SET_VALUE(channelStatistics_, channelStatistics) };
          inline ChannelStatisticsList& setChannelStatistics(vector<ChannelStatisticsList::ChannelStatistics> && channelStatistics) { DARABONBA_PTR_SET_RVALUE(channelStatistics_, channelStatistics) };


        protected:
          shared_ptr<vector<ChannelStatisticsList::ChannelStatistics>> channelStatistics_ {};
        };

        virtual bool empty() const override { return this->accessKey_ == nullptr
        && this->channelNum_ == nullptr && this->channelStatisticsList_ == nullptr && this->connectionName_ == nullptr && this->deliverQps_ == nullptr && this->protocol_ == nullptr
        && this->publishQps_ == nullptr && this->remoteAddress_ == nullptr && this->securityTransport_ == nullptr && this->state_ == nullptr; };
        // accessKey Field Functions 
        bool hasAccessKey() const { return this->accessKey_ != nullptr;};
        void deleteAccessKey() { this->accessKey_ = nullptr;};
        inline string getAccessKey() const { DARABONBA_PTR_GET_DEFAULT(accessKey_, "") };
        inline ConnectionStatistics& setAccessKey(string accessKey) { DARABONBA_PTR_SET_VALUE(accessKey_, accessKey) };


        // channelNum Field Functions 
        bool hasChannelNum() const { return this->channelNum_ != nullptr;};
        void deleteChannelNum() { this->channelNum_ = nullptr;};
        inline int32_t getChannelNum() const { DARABONBA_PTR_GET_DEFAULT(channelNum_, 0) };
        inline ConnectionStatistics& setChannelNum(int32_t channelNum) { DARABONBA_PTR_SET_VALUE(channelNum_, channelNum) };


        // channelStatisticsList Field Functions 
        bool hasChannelStatisticsList() const { return this->channelStatisticsList_ != nullptr;};
        void deleteChannelStatisticsList() { this->channelStatisticsList_ = nullptr;};
        inline const ConnectionStatistics::ChannelStatisticsList & getChannelStatisticsList() const { DARABONBA_PTR_GET_CONST(channelStatisticsList_, ConnectionStatistics::ChannelStatisticsList) };
        inline ConnectionStatistics::ChannelStatisticsList getChannelStatisticsList() { DARABONBA_PTR_GET(channelStatisticsList_, ConnectionStatistics::ChannelStatisticsList) };
        inline ConnectionStatistics& setChannelStatisticsList(const ConnectionStatistics::ChannelStatisticsList & channelStatisticsList) { DARABONBA_PTR_SET_VALUE(channelStatisticsList_, channelStatisticsList) };
        inline ConnectionStatistics& setChannelStatisticsList(ConnectionStatistics::ChannelStatisticsList && channelStatisticsList) { DARABONBA_PTR_SET_RVALUE(channelStatisticsList_, channelStatisticsList) };


        // connectionName Field Functions 
        bool hasConnectionName() const { return this->connectionName_ != nullptr;};
        void deleteConnectionName() { this->connectionName_ = nullptr;};
        inline string getConnectionName() const { DARABONBA_PTR_GET_DEFAULT(connectionName_, "") };
        inline ConnectionStatistics& setConnectionName(string connectionName) { DARABONBA_PTR_SET_VALUE(connectionName_, connectionName) };


        // deliverQps Field Functions 
        bool hasDeliverQps() const { return this->deliverQps_ != nullptr;};
        void deleteDeliverQps() { this->deliverQps_ = nullptr;};
        inline float getDeliverQps() const { DARABONBA_PTR_GET_DEFAULT(deliverQps_, 0.0) };
        inline ConnectionStatistics& setDeliverQps(float deliverQps) { DARABONBA_PTR_SET_VALUE(deliverQps_, deliverQps) };


        // protocol Field Functions 
        bool hasProtocol() const { return this->protocol_ != nullptr;};
        void deleteProtocol() { this->protocol_ = nullptr;};
        inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
        inline ConnectionStatistics& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


        // publishQps Field Functions 
        bool hasPublishQps() const { return this->publishQps_ != nullptr;};
        void deletePublishQps() { this->publishQps_ = nullptr;};
        inline float getPublishQps() const { DARABONBA_PTR_GET_DEFAULT(publishQps_, 0.0) };
        inline ConnectionStatistics& setPublishQps(float publishQps) { DARABONBA_PTR_SET_VALUE(publishQps_, publishQps) };


        // remoteAddress Field Functions 
        bool hasRemoteAddress() const { return this->remoteAddress_ != nullptr;};
        void deleteRemoteAddress() { this->remoteAddress_ = nullptr;};
        inline string getRemoteAddress() const { DARABONBA_PTR_GET_DEFAULT(remoteAddress_, "") };
        inline ConnectionStatistics& setRemoteAddress(string remoteAddress) { DARABONBA_PTR_SET_VALUE(remoteAddress_, remoteAddress) };


        // securityTransport Field Functions 
        bool hasSecurityTransport() const { return this->securityTransport_ != nullptr;};
        void deleteSecurityTransport() { this->securityTransport_ = nullptr;};
        inline bool getSecurityTransport() const { DARABONBA_PTR_GET_DEFAULT(securityTransport_, false) };
        inline ConnectionStatistics& setSecurityTransport(bool securityTransport) { DARABONBA_PTR_SET_VALUE(securityTransport_, securityTransport) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline int32_t getState() const { DARABONBA_PTR_GET_DEFAULT(state_, 0) };
        inline ConnectionStatistics& setState(int32_t state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      protected:
        shared_ptr<string> accessKey_ {};
        shared_ptr<int32_t> channelNum_ {};
        shared_ptr<ConnectionStatistics::ChannelStatisticsList> channelStatisticsList_ {};
        shared_ptr<string> connectionName_ {};
        shared_ptr<float> deliverQps_ {};
        shared_ptr<string> protocol_ {};
        shared_ptr<float> publishQps_ {};
        shared_ptr<string> remoteAddress_ {};
        shared_ptr<bool> securityTransport_ {};
        shared_ptr<int32_t> state_ {};
      };

      virtual bool empty() const override { return this->connectionStatistics_ == nullptr; };
      // connectionStatistics Field Functions 
      bool hasConnectionStatistics() const { return this->connectionStatistics_ != nullptr;};
      void deleteConnectionStatistics() { this->connectionStatistics_ = nullptr;};
      inline const vector<Data::ConnectionStatistics> & getConnectionStatistics() const { DARABONBA_PTR_GET_CONST(connectionStatistics_, vector<Data::ConnectionStatistics>) };
      inline vector<Data::ConnectionStatistics> getConnectionStatistics() { DARABONBA_PTR_GET(connectionStatistics_, vector<Data::ConnectionStatistics>) };
      inline Data& setConnectionStatistics(const vector<Data::ConnectionStatistics> & connectionStatistics) { DARABONBA_PTR_SET_VALUE(connectionStatistics_, connectionStatistics) };
      inline Data& setConnectionStatistics(vector<Data::ConnectionStatistics> && connectionStatistics) { DARABONBA_PTR_SET_RVALUE(connectionStatistics_, connectionStatistics) };


    protected:
      shared_ptr<vector<Data::ConnectionStatistics>> connectionStatistics_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetStatisticsByVhostResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetStatisticsByVhostResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetStatisticsByVhostResponseBody::Data) };
    inline GetStatisticsByVhostResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetStatisticsByVhostResponseBody::Data) };
    inline GetStatisticsByVhostResponseBody& setData(const GetStatisticsByVhostResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetStatisticsByVhostResponseBody& setData(GetStatisticsByVhostResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetStatisticsByVhostResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetStatisticsByVhostResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetStatisticsByVhostResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<GetStatisticsByVhostResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
