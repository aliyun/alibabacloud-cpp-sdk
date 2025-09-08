// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENTITYINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENTITYINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeEntityInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEntityInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(EntityId, entityId_);
      DARABONBA_ANY_TO_JSON(EntityInfo, entityInfo_);
      DARABONBA_PTR_TO_JSON(EntityType, entityType_);
      DARABONBA_ANY_TO_JSON(TipInfo, tipInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEntityInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
      DARABONBA_ANY_FROM_JSON(EntityInfo, entityInfo_);
      DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
      DARABONBA_ANY_FROM_JSON(TipInfo, tipInfo_);
    };
    DescribeEntityInfoResponseBodyData() = default ;
    DescribeEntityInfoResponseBodyData(const DescribeEntityInfoResponseBodyData &) = default ;
    DescribeEntityInfoResponseBodyData(DescribeEntityInfoResponseBodyData &&) = default ;
    DescribeEntityInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEntityInfoResponseBodyData() = default ;
    DescribeEntityInfoResponseBodyData& operator=(const DescribeEntityInfoResponseBodyData &) = default ;
    DescribeEntityInfoResponseBodyData& operator=(DescribeEntityInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->entityId_ != nullptr
        && this->entityInfo_ != nullptr && this->entityType_ != nullptr && this->tipInfo_ != nullptr; };
    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline int64_t entityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, 0L) };
    inline DescribeEntityInfoResponseBodyData& setEntityId(int64_t entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // entityInfo Field Functions 
    bool hasEntityInfo() const { return this->entityInfo_ != nullptr;};
    void deleteEntityInfo() { this->entityInfo_ = nullptr;};
    inline     const Darabonba::Json & entityInfo() const { DARABONBA_GET(entityInfo_) };
    Darabonba::Json & entityInfo() { DARABONBA_GET(entityInfo_) };
    inline DescribeEntityInfoResponseBodyData& setEntityInfo(const Darabonba::Json & entityInfo) { DARABONBA_SET_VALUE(entityInfo_, entityInfo) };
    inline DescribeEntityInfoResponseBodyData& setEntityInfo(Darabonba::Json & entityInfo) { DARABONBA_SET_RVALUE(entityInfo_, entityInfo) };


    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline string entityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
    inline DescribeEntityInfoResponseBodyData& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    // tipInfo Field Functions 
    bool hasTipInfo() const { return this->tipInfo_ != nullptr;};
    void deleteTipInfo() { this->tipInfo_ = nullptr;};
    inline     const Darabonba::Json & tipInfo() const { DARABONBA_GET(tipInfo_) };
    Darabonba::Json & tipInfo() { DARABONBA_GET(tipInfo_) };
    inline DescribeEntityInfoResponseBodyData& setTipInfo(const Darabonba::Json & tipInfo) { DARABONBA_SET_VALUE(tipInfo_, tipInfo) };
    inline DescribeEntityInfoResponseBodyData& setTipInfo(Darabonba::Json & tipInfo) { DARABONBA_SET_RVALUE(tipInfo_, tipInfo) };


  protected:
    // The logical ID of the entity.
    std::shared_ptr<int64_t> entityId_ = nullptr;
    // The information about the entry.
    Darabonba::Json entityInfo_ = nullptr;
    // The type of the entity. Valid values:
    // 
    // *   ip
    // *   domain
    // *   url
    // *   process
    // *   file
    // *   host
    std::shared_ptr<string> entityType_ = nullptr;
    // The information about the risk Intelligence.
    Darabonba::Json tipInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
