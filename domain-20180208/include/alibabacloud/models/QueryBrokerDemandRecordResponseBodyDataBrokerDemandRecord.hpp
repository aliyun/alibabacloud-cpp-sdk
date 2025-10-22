// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYBROKERDEMANDRECORDRESPONSEBODYDATABROKERDEMANDRECORD_HPP_
#define ALIBABACLOUD_MODELS_QUERYBROKERDEMANDRECORDRESPONSEBODYDATABROKERDEMANDRECORD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class QueryBrokerDemandRecordResponseBodyDataBrokerDemandRecord : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryBrokerDemandRecordResponseBodyDataBrokerDemandRecord& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
    };
    friend void from_json(const Darabonba::Json& j, QueryBrokerDemandRecordResponseBodyDataBrokerDemandRecord& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
    };
    QueryBrokerDemandRecordResponseBodyDataBrokerDemandRecord() = default ;
    QueryBrokerDemandRecordResponseBodyDataBrokerDemandRecord(const QueryBrokerDemandRecordResponseBodyDataBrokerDemandRecord &) = default ;
    QueryBrokerDemandRecordResponseBodyDataBrokerDemandRecord(QueryBrokerDemandRecordResponseBodyDataBrokerDemandRecord &&) = default ;
    QueryBrokerDemandRecordResponseBodyDataBrokerDemandRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryBrokerDemandRecordResponseBodyDataBrokerDemandRecord() = default ;
    QueryBrokerDemandRecordResponseBodyDataBrokerDemandRecord& operator=(const QueryBrokerDemandRecordResponseBodyDataBrokerDemandRecord &) = default ;
    QueryBrokerDemandRecordResponseBodyDataBrokerDemandRecord& operator=(QueryBrokerDemandRecordResponseBodyDataBrokerDemandRecord &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && return this->createTime_ == nullptr && return this->description_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline QueryBrokerDemandRecordResponseBodyDataBrokerDemandRecord& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline QueryBrokerDemandRecordResponseBodyDataBrokerDemandRecord& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline QueryBrokerDemandRecordResponseBodyDataBrokerDemandRecord& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


  protected:
    std::shared_ptr<string> bizId_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
