// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRECEIVERBYPARAMRESPONSEBODYDATARECEIVER_HPP_
#define ALIBABACLOUD_MODELS_QUERYRECEIVERBYPARAMRESPONSEBODYDATARECEIVER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class QueryReceiverByParamResponseBodyDataReceiver : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryReceiverByParamResponseBodyDataReceiver& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Desc, desc_);
      DARABONBA_PTR_TO_JSON(ReceiverId, receiverId_);
      DARABONBA_PTR_TO_JSON(ReceiversAlias, receiversAlias_);
      DARABONBA_PTR_TO_JSON(ReceiversName, receiversName_);
      DARABONBA_PTR_TO_JSON(ReceiversStatus, receiversStatus_);
      DARABONBA_PTR_TO_JSON(UtcCreateTime, utcCreateTime_);
    };
    friend void from_json(const Darabonba::Json& j, QueryReceiverByParamResponseBodyDataReceiver& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Desc, desc_);
      DARABONBA_PTR_FROM_JSON(ReceiverId, receiverId_);
      DARABONBA_PTR_FROM_JSON(ReceiversAlias, receiversAlias_);
      DARABONBA_PTR_FROM_JSON(ReceiversName, receiversName_);
      DARABONBA_PTR_FROM_JSON(ReceiversStatus, receiversStatus_);
      DARABONBA_PTR_FROM_JSON(UtcCreateTime, utcCreateTime_);
    };
    QueryReceiverByParamResponseBodyDataReceiver() = default ;
    QueryReceiverByParamResponseBodyDataReceiver(const QueryReceiverByParamResponseBodyDataReceiver &) = default ;
    QueryReceiverByParamResponseBodyDataReceiver(QueryReceiverByParamResponseBodyDataReceiver &&) = default ;
    QueryReceiverByParamResponseBodyDataReceiver(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryReceiverByParamResponseBodyDataReceiver() = default ;
    QueryReceiverByParamResponseBodyDataReceiver& operator=(const QueryReceiverByParamResponseBodyDataReceiver &) = default ;
    QueryReceiverByParamResponseBodyDataReceiver& operator=(QueryReceiverByParamResponseBodyDataReceiver &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->createTime_ != nullptr && this->desc_ != nullptr && this->receiverId_ != nullptr && this->receiversAlias_ != nullptr && this->receiversName_ != nullptr
        && this->receiversStatus_ != nullptr && this->utcCreateTime_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline string count() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
    inline QueryReceiverByParamResponseBodyDataReceiver& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline QueryReceiverByParamResponseBodyDataReceiver& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline QueryReceiverByParamResponseBodyDataReceiver& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // receiverId Field Functions 
    bool hasReceiverId() const { return this->receiverId_ != nullptr;};
    void deleteReceiverId() { this->receiverId_ = nullptr;};
    inline string receiverId() const { DARABONBA_PTR_GET_DEFAULT(receiverId_, "") };
    inline QueryReceiverByParamResponseBodyDataReceiver& setReceiverId(string receiverId) { DARABONBA_PTR_SET_VALUE(receiverId_, receiverId) };


    // receiversAlias Field Functions 
    bool hasReceiversAlias() const { return this->receiversAlias_ != nullptr;};
    void deleteReceiversAlias() { this->receiversAlias_ = nullptr;};
    inline string receiversAlias() const { DARABONBA_PTR_GET_DEFAULT(receiversAlias_, "") };
    inline QueryReceiverByParamResponseBodyDataReceiver& setReceiversAlias(string receiversAlias) { DARABONBA_PTR_SET_VALUE(receiversAlias_, receiversAlias) };


    // receiversName Field Functions 
    bool hasReceiversName() const { return this->receiversName_ != nullptr;};
    void deleteReceiversName() { this->receiversName_ = nullptr;};
    inline string receiversName() const { DARABONBA_PTR_GET_DEFAULT(receiversName_, "") };
    inline QueryReceiverByParamResponseBodyDataReceiver& setReceiversName(string receiversName) { DARABONBA_PTR_SET_VALUE(receiversName_, receiversName) };


    // receiversStatus Field Functions 
    bool hasReceiversStatus() const { return this->receiversStatus_ != nullptr;};
    void deleteReceiversStatus() { this->receiversStatus_ = nullptr;};
    inline string receiversStatus() const { DARABONBA_PTR_GET_DEFAULT(receiversStatus_, "") };
    inline QueryReceiverByParamResponseBodyDataReceiver& setReceiversStatus(string receiversStatus) { DARABONBA_PTR_SET_VALUE(receiversStatus_, receiversStatus) };


    // utcCreateTime Field Functions 
    bool hasUtcCreateTime() const { return this->utcCreateTime_ != nullptr;};
    void deleteUtcCreateTime() { this->utcCreateTime_ = nullptr;};
    inline int64_t utcCreateTime() const { DARABONBA_PTR_GET_DEFAULT(utcCreateTime_, 0L) };
    inline QueryReceiverByParamResponseBodyDataReceiver& setUtcCreateTime(int64_t utcCreateTime) { DARABONBA_PTR_SET_VALUE(utcCreateTime_, utcCreateTime) };


  protected:
    // Total number of recipient addresses
    std::shared_ptr<string> count_ = nullptr;
    // Creation time
    std::shared_ptr<string> createTime_ = nullptr;
    // Description
    std::shared_ptr<string> desc_ = nullptr;
    // Recipient list ID
    std::shared_ptr<string> receiverId_ = nullptr;
    // Recipient list alias
    std::shared_ptr<string> receiversAlias_ = nullptr;
    // Recipient list name
    std::shared_ptr<string> receiversName_ = nullptr;
    // List status. Values:
    // 
    // - 0: Uploading
    // - 1: Upload completed
    std::shared_ptr<string> receiversStatus_ = nullptr;
    // UTC formatted creation time
    std::shared_ptr<int64_t> utcCreateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
