// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBIZMETRICBYNAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETBIZMETRICBYNAMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetBizMetricByNameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBizMetricByNameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizMetricByNameQuery, bizMetricByNameQuery_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, GetBizMetricByNameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizMetricByNameQuery, bizMetricByNameQuery_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    GetBizMetricByNameRequest() = default ;
    GetBizMetricByNameRequest(const GetBizMetricByNameRequest &) = default ;
    GetBizMetricByNameRequest(GetBizMetricByNameRequest &&) = default ;
    GetBizMetricByNameRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBizMetricByNameRequest() = default ;
    GetBizMetricByNameRequest& operator=(const GetBizMetricByNameRequest &) = default ;
    GetBizMetricByNameRequest& operator=(GetBizMetricByNameRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BizMetricByNameQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BizMetricByNameQuery& obj) { 
        DARABONBA_PTR_TO_JSON(Draft, draft_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, BizMetricByNameQuery& obj) { 
        DARABONBA_PTR_FROM_JSON(Draft, draft_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      BizMetricByNameQuery() = default ;
      BizMetricByNameQuery(const BizMetricByNameQuery &) = default ;
      BizMetricByNameQuery(BizMetricByNameQuery &&) = default ;
      BizMetricByNameQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BizMetricByNameQuery() = default ;
      BizMetricByNameQuery& operator=(const BizMetricByNameQuery &) = default ;
      BizMetricByNameQuery& operator=(BizMetricByNameQuery &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->draft_ == nullptr
        && this->name_ == nullptr; };
      // draft Field Functions 
      bool hasDraft() const { return this->draft_ != nullptr;};
      void deleteDraft() { this->draft_ = nullptr;};
      inline bool getDraft() const { DARABONBA_PTR_GET_DEFAULT(draft_, false) };
      inline BizMetricByNameQuery& setDraft(bool draft) { DARABONBA_PTR_SET_VALUE(draft_, draft) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline BizMetricByNameQuery& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // This parameter is required.
      shared_ptr<bool> draft_ {};
      // This parameter is required.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->bizMetricByNameQuery_ == nullptr
        && this->opTenantId_ == nullptr; };
    // bizMetricByNameQuery Field Functions 
    bool hasBizMetricByNameQuery() const { return this->bizMetricByNameQuery_ != nullptr;};
    void deleteBizMetricByNameQuery() { this->bizMetricByNameQuery_ = nullptr;};
    inline const GetBizMetricByNameRequest::BizMetricByNameQuery & getBizMetricByNameQuery() const { DARABONBA_PTR_GET_CONST(bizMetricByNameQuery_, GetBizMetricByNameRequest::BizMetricByNameQuery) };
    inline GetBizMetricByNameRequest::BizMetricByNameQuery getBizMetricByNameQuery() { DARABONBA_PTR_GET(bizMetricByNameQuery_, GetBizMetricByNameRequest::BizMetricByNameQuery) };
    inline GetBizMetricByNameRequest& setBizMetricByNameQuery(const GetBizMetricByNameRequest::BizMetricByNameQuery & bizMetricByNameQuery) { DARABONBA_PTR_SET_VALUE(bizMetricByNameQuery_, bizMetricByNameQuery) };
    inline GetBizMetricByNameRequest& setBizMetricByNameQuery(GetBizMetricByNameRequest::BizMetricByNameQuery && bizMetricByNameQuery) { DARABONBA_PTR_SET_RVALUE(bizMetricByNameQuery_, bizMetricByNameQuery) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetBizMetricByNameRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<GetBizMetricByNameRequest::BizMetricByNameQuery> bizMetricByNameQuery_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
