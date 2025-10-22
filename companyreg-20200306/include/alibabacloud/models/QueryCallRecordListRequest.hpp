// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCALLRECORDLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCALLRECORDLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Companyreg20200306
{
namespace Models
{
  class QueryCallRecordListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCallRecordListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(SkillType, skillType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCallRecordListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(SkillType, skillType_);
    };
    QueryCallRecordListRequest() = default ;
    QueryCallRecordListRequest(const QueryCallRecordListRequest &) = default ;
    QueryCallRecordListRequest(QueryCallRecordListRequest &&) = default ;
    QueryCallRecordListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCallRecordListRequest() = default ;
    QueryCallRecordListRequest& operator=(const QueryCallRecordListRequest &) = default ;
    QueryCallRecordListRequest& operator=(QueryCallRecordListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && return this->bizType_ == nullptr && return this->skillType_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline QueryCallRecordListRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline QueryCallRecordListRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // skillType Field Functions 
    bool hasSkillType() const { return this->skillType_ != nullptr;};
    void deleteSkillType() { this->skillType_ = nullptr;};
    inline int64_t skillType() const { DARABONBA_PTR_GET_DEFAULT(skillType_, 0L) };
    inline QueryCallRecordListRequest& setSkillType(int64_t skillType) { DARABONBA_PTR_SET_VALUE(skillType_, skillType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> bizId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> bizType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> skillType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Companyreg20200306
#endif
