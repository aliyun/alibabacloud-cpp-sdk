// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSFERPRODUCEOWNERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRANSFERPRODUCEOWNERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Companyreg20200306
{
namespace Models
{
  class TransferProduceOwnerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TransferProduceOwnerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(PersonId, personId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
    };
    friend void from_json(const Darabonba::Json& j, TransferProduceOwnerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(PersonId, personId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
    };
    TransferProduceOwnerRequest() = default ;
    TransferProduceOwnerRequest(const TransferProduceOwnerRequest &) = default ;
    TransferProduceOwnerRequest(TransferProduceOwnerRequest &&) = default ;
    TransferProduceOwnerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TransferProduceOwnerRequest() = default ;
    TransferProduceOwnerRequest& operator=(const TransferProduceOwnerRequest &) = default ;
    TransferProduceOwnerRequest& operator=(TransferProduceOwnerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && return this->bizType_ == nullptr && return this->personId_ == nullptr && return this->remark_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline TransferProduceOwnerRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline TransferProduceOwnerRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // personId Field Functions 
    bool hasPersonId() const { return this->personId_ != nullptr;};
    void deletePersonId() { this->personId_ = nullptr;};
    inline int32_t personId() const { DARABONBA_PTR_GET_DEFAULT(personId_, 0) };
    inline TransferProduceOwnerRequest& setPersonId(int32_t personId) { DARABONBA_PTR_SET_VALUE(personId_, personId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline TransferProduceOwnerRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> bizId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> bizType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> personId_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Companyreg20200306
#endif
