// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYREIMBURSEMENTORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYREIMBURSEMENTORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class QueryReimbursementOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryReimbursementOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(reimb_order_no, reimbOrderNo_);
      DARABONBA_PTR_TO_JSON(sub_corp_id, subCorpId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryReimbursementOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(reimb_order_no, reimbOrderNo_);
      DARABONBA_PTR_FROM_JSON(sub_corp_id, subCorpId_);
    };
    QueryReimbursementOrderRequest() = default ;
    QueryReimbursementOrderRequest(const QueryReimbursementOrderRequest &) = default ;
    QueryReimbursementOrderRequest(QueryReimbursementOrderRequest &&) = default ;
    QueryReimbursementOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryReimbursementOrderRequest() = default ;
    QueryReimbursementOrderRequest& operator=(const QueryReimbursementOrderRequest &) = default ;
    QueryReimbursementOrderRequest& operator=(QueryReimbursementOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->reimbOrderNo_ != nullptr
        && this->subCorpId_ != nullptr; };
    // reimbOrderNo Field Functions 
    bool hasReimbOrderNo() const { return this->reimbOrderNo_ != nullptr;};
    void deleteReimbOrderNo() { this->reimbOrderNo_ = nullptr;};
    inline string reimbOrderNo() const { DARABONBA_PTR_GET_DEFAULT(reimbOrderNo_, "") };
    inline QueryReimbursementOrderRequest& setReimbOrderNo(string reimbOrderNo) { DARABONBA_PTR_SET_VALUE(reimbOrderNo_, reimbOrderNo) };


    // subCorpId Field Functions 
    bool hasSubCorpId() const { return this->subCorpId_ != nullptr;};
    void deleteSubCorpId() { this->subCorpId_ = nullptr;};
    inline string subCorpId() const { DARABONBA_PTR_GET_DEFAULT(subCorpId_, "") };
    inline QueryReimbursementOrderRequest& setSubCorpId(string subCorpId) { DARABONBA_PTR_SET_VALUE(subCorpId_, subCorpId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> reimbOrderNo_ = nullptr;
    std::shared_ptr<string> subCorpId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
