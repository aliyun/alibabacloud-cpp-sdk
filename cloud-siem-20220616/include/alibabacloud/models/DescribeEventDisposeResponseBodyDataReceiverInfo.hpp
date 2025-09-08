// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTDISPOSERESPONSEBODYDATARECEIVERINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTDISPOSERESPONSEBODYDATARECEIVERINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeEventDisposeResponseBodyDataReceiverInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventDisposeResponseBodyDataReceiverInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Channel, channel_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IncidentUuid, incidentUuid_);
      DARABONBA_PTR_TO_JSON(MessageTitle, messageTitle_);
      DARABONBA_PTR_TO_JSON(Receiver, receiver_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventDisposeResponseBodyDataReceiverInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Channel, channel_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IncidentUuid, incidentUuid_);
      DARABONBA_PTR_FROM_JSON(MessageTitle, messageTitle_);
      DARABONBA_PTR_FROM_JSON(Receiver, receiver_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeEventDisposeResponseBodyDataReceiverInfo() = default ;
    DescribeEventDisposeResponseBodyDataReceiverInfo(const DescribeEventDisposeResponseBodyDataReceiverInfo &) = default ;
    DescribeEventDisposeResponseBodyDataReceiverInfo(DescribeEventDisposeResponseBodyDataReceiverInfo &&) = default ;
    DescribeEventDisposeResponseBodyDataReceiverInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventDisposeResponseBodyDataReceiverInfo() = default ;
    DescribeEventDisposeResponseBodyDataReceiverInfo& operator=(const DescribeEventDisposeResponseBodyDataReceiverInfo &) = default ;
    DescribeEventDisposeResponseBodyDataReceiverInfo& operator=(DescribeEventDisposeResponseBodyDataReceiverInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->channel_ != nullptr
        && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->id_ != nullptr && this->incidentUuid_ != nullptr && this->messageTitle_ != nullptr
        && this->receiver_ != nullptr && this->status_ != nullptr; };
    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string channel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline DescribeEventDisposeResponseBodyDataReceiverInfo& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline DescribeEventDisposeResponseBodyDataReceiverInfo& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeEventDisposeResponseBodyDataReceiverInfo& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeEventDisposeResponseBodyDataReceiverInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // incidentUuid Field Functions 
    bool hasIncidentUuid() const { return this->incidentUuid_ != nullptr;};
    void deleteIncidentUuid() { this->incidentUuid_ = nullptr;};
    inline string incidentUuid() const { DARABONBA_PTR_GET_DEFAULT(incidentUuid_, "") };
    inline DescribeEventDisposeResponseBodyDataReceiverInfo& setIncidentUuid(string incidentUuid) { DARABONBA_PTR_SET_VALUE(incidentUuid_, incidentUuid) };


    // messageTitle Field Functions 
    bool hasMessageTitle() const { return this->messageTitle_ != nullptr;};
    void deleteMessageTitle() { this->messageTitle_ = nullptr;};
    inline string messageTitle() const { DARABONBA_PTR_GET_DEFAULT(messageTitle_, "") };
    inline DescribeEventDisposeResponseBodyDataReceiverInfo& setMessageTitle(string messageTitle) { DARABONBA_PTR_SET_VALUE(messageTitle_, messageTitle) };


    // receiver Field Functions 
    bool hasReceiver() const { return this->receiver_ != nullptr;};
    void deleteReceiver() { this->receiver_ = nullptr;};
    inline string receiver() const { DARABONBA_PTR_GET_DEFAULT(receiver_, "") };
    inline DescribeEventDisposeResponseBodyDataReceiverInfo& setReceiver(string receiver) { DARABONBA_PTR_SET_VALUE(receiver_, receiver) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeEventDisposeResponseBodyDataReceiverInfo& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The channel of the contact information. Valid values:
    // 
    // *   message
    // *   mail
    std::shared_ptr<string> channel_ = nullptr;
    // The creation time.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The modification time.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The ID of the recipient who receives the event handling result.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The UUID of the event.
    std::shared_ptr<string> incidentUuid_ = nullptr;
    // The message title.
    std::shared_ptr<string> messageTitle_ = nullptr;
    // The contact information of the recipient.
    std::shared_ptr<string> receiver_ = nullptr;
    // Indicates whether the message is sent. Valid values:
    // 
    // *   0: not sent
    // *   1: sent
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
