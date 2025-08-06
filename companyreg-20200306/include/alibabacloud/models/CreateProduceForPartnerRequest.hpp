// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPRODUCEFORPARTNERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPRODUCEFORPARTNERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Companyreg20200306
{
namespace Models
{
  class CreateProduceForPartnerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProduceForPartnerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(ExtInfo, extInfo_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProduceForPartnerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(ExtInfo, extInfo_);
    };
    CreateProduceForPartnerRequest() = default ;
    CreateProduceForPartnerRequest(const CreateProduceForPartnerRequest &) = default ;
    CreateProduceForPartnerRequest(CreateProduceForPartnerRequest &&) = default ;
    CreateProduceForPartnerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProduceForPartnerRequest() = default ;
    CreateProduceForPartnerRequest& operator=(const CreateProduceForPartnerRequest &) = default ;
    CreateProduceForPartnerRequest& operator=(CreateProduceForPartnerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizId_ != nullptr
        && this->bizType_ != nullptr && this->extInfo_ != nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline CreateProduceForPartnerRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline CreateProduceForPartnerRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // extInfo Field Functions 
    bool hasExtInfo() const { return this->extInfo_ != nullptr;};
    void deleteExtInfo() { this->extInfo_ = nullptr;};
    inline string extInfo() const { DARABONBA_PTR_GET_DEFAULT(extInfo_, "") };
    inline CreateProduceForPartnerRequest& setExtInfo(string extInfo) { DARABONBA_PTR_SET_VALUE(extInfo_, extInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> bizId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> bizType_ = nullptr;
    std::shared_ptr<string> extInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Companyreg20200306
#endif
