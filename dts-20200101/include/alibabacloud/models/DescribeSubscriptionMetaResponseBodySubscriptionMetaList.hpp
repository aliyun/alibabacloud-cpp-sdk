// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUBSCRIPTIONMETARESPONSEBODYSUBSCRIPTIONMETALIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUBSCRIPTIONMETARESPONSEBODYSUBSCRIPTIONMETALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeSubscriptionMetaResponseBodySubscriptionMetaList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSubscriptionMetaResponseBodySubscriptionMetaList& obj) { 
      DARABONBA_PTR_TO_JSON(Checkpoint, checkpoint_);
      DARABONBA_PTR_TO_JSON(DBList, DBList_);
      DARABONBA_PTR_TO_JSON(DProxyUrl, DProxyUrl_);
      DARABONBA_PTR_TO_JSON(Sid, sid_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSubscriptionMetaResponseBodySubscriptionMetaList& obj) { 
      DARABONBA_PTR_FROM_JSON(Checkpoint, checkpoint_);
      DARABONBA_PTR_FROM_JSON(DBList, DBList_);
      DARABONBA_PTR_FROM_JSON(DProxyUrl, DProxyUrl_);
      DARABONBA_PTR_FROM_JSON(Sid, sid_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
    };
    DescribeSubscriptionMetaResponseBodySubscriptionMetaList() = default ;
    DescribeSubscriptionMetaResponseBodySubscriptionMetaList(const DescribeSubscriptionMetaResponseBodySubscriptionMetaList &) = default ;
    DescribeSubscriptionMetaResponseBodySubscriptionMetaList(DescribeSubscriptionMetaResponseBodySubscriptionMetaList &&) = default ;
    DescribeSubscriptionMetaResponseBodySubscriptionMetaList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSubscriptionMetaResponseBodySubscriptionMetaList() = default ;
    DescribeSubscriptionMetaResponseBodySubscriptionMetaList& operator=(const DescribeSubscriptionMetaResponseBodySubscriptionMetaList &) = default ;
    DescribeSubscriptionMetaResponseBodySubscriptionMetaList& operator=(DescribeSubscriptionMetaResponseBodySubscriptionMetaList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkpoint_ == nullptr
        && return this->DBList_ == nullptr && return this->DProxyUrl_ == nullptr && return this->sid_ == nullptr && return this->topic_ == nullptr; };
    // checkpoint Field Functions 
    bool hasCheckpoint() const { return this->checkpoint_ != nullptr;};
    void deleteCheckpoint() { this->checkpoint_ = nullptr;};
    inline int64_t checkpoint() const { DARABONBA_PTR_GET_DEFAULT(checkpoint_, 0L) };
    inline DescribeSubscriptionMetaResponseBodySubscriptionMetaList& setCheckpoint(int64_t checkpoint) { DARABONBA_PTR_SET_VALUE(checkpoint_, checkpoint) };


    // DBList Field Functions 
    bool hasDBList() const { return this->DBList_ != nullptr;};
    void deleteDBList() { this->DBList_ = nullptr;};
    inline string DBList() const { DARABONBA_PTR_GET_DEFAULT(DBList_, "") };
    inline DescribeSubscriptionMetaResponseBodySubscriptionMetaList& setDBList(string DBList) { DARABONBA_PTR_SET_VALUE(DBList_, DBList) };


    // DProxyUrl Field Functions 
    bool hasDProxyUrl() const { return this->DProxyUrl_ != nullptr;};
    void deleteDProxyUrl() { this->DProxyUrl_ = nullptr;};
    inline string DProxyUrl() const { DARABONBA_PTR_GET_DEFAULT(DProxyUrl_, "") };
    inline DescribeSubscriptionMetaResponseBodySubscriptionMetaList& setDProxyUrl(string DProxyUrl) { DARABONBA_PTR_SET_VALUE(DProxyUrl_, DProxyUrl) };


    // sid Field Functions 
    bool hasSid() const { return this->sid_ != nullptr;};
    void deleteSid() { this->sid_ = nullptr;};
    inline string sid() const { DARABONBA_PTR_GET_DEFAULT(sid_, "") };
    inline DescribeSubscriptionMetaResponseBodySubscriptionMetaList& setSid(string sid) { DARABONBA_PTR_SET_VALUE(sid_, sid) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline DescribeSubscriptionMetaResponseBodySubscriptionMetaList& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


  protected:
    // The consumer offset of the subtask. It is a UNIX timestamp that is generated when the client consumes the first data record. Unit: seconds.
    // 
    // >  You can use a search engine to obtain a UNIX timestamp converter.
    std::shared_ptr<int64_t> checkpoint_ = nullptr;
    // The objects of the subtask. For more information, see [Objects of DTS tasks](https://help.aliyun.com/document_detail/209545.html).
    std::shared_ptr<string> DBList_ = nullptr;
    // The endpoint and port number of the change tracking instance.
    std::shared_ptr<string> DProxyUrl_ = nullptr;
    // The consumer group ID of the subtask.
    std::shared_ptr<string> sid_ = nullptr;
    // The topic of the subtask.
    std::shared_ptr<string> topic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
