// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COSTCENTERMODIFYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COSTCENTERMODIFYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class CostCenterModifyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CostCenterModifyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(alipay_no, alipayNo_);
      DARABONBA_PTR_TO_JSON(disable, disable_);
      DARABONBA_PTR_TO_JSON(number, number_);
      DARABONBA_PTR_TO_JSON(scope, scope_);
      DARABONBA_PTR_TO_JSON(thirdpart_id, thirdpartId_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, CostCenterModifyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(alipay_no, alipayNo_);
      DARABONBA_PTR_FROM_JSON(disable, disable_);
      DARABONBA_PTR_FROM_JSON(number, number_);
      DARABONBA_PTR_FROM_JSON(scope, scope_);
      DARABONBA_PTR_FROM_JSON(thirdpart_id, thirdpartId_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    CostCenterModifyRequest() = default ;
    CostCenterModifyRequest(const CostCenterModifyRequest &) = default ;
    CostCenterModifyRequest(CostCenterModifyRequest &&) = default ;
    CostCenterModifyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CostCenterModifyRequest() = default ;
    CostCenterModifyRequest& operator=(const CostCenterModifyRequest &) = default ;
    CostCenterModifyRequest& operator=(CostCenterModifyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alipayNo_ != nullptr
        && this->disable_ != nullptr && this->number_ != nullptr && this->scope_ != nullptr && this->thirdpartId_ != nullptr && this->title_ != nullptr; };
    // alipayNo Field Functions 
    bool hasAlipayNo() const { return this->alipayNo_ != nullptr;};
    void deleteAlipayNo() { this->alipayNo_ = nullptr;};
    inline string alipayNo() const { DARABONBA_PTR_GET_DEFAULT(alipayNo_, "") };
    inline CostCenterModifyRequest& setAlipayNo(string alipayNo) { DARABONBA_PTR_SET_VALUE(alipayNo_, alipayNo) };


    // disable Field Functions 
    bool hasDisable() const { return this->disable_ != nullptr;};
    void deleteDisable() { this->disable_ = nullptr;};
    inline int64_t disable() const { DARABONBA_PTR_GET_DEFAULT(disable_, 0L) };
    inline CostCenterModifyRequest& setDisable(int64_t disable) { DARABONBA_PTR_SET_VALUE(disable_, disable) };


    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline string number() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
    inline CostCenterModifyRequest& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline int64_t scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, 0L) };
    inline CostCenterModifyRequest& setScope(int64_t scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // thirdpartId Field Functions 
    bool hasThirdpartId() const { return this->thirdpartId_ != nullptr;};
    void deleteThirdpartId() { this->thirdpartId_ = nullptr;};
    inline string thirdpartId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartId_, "") };
    inline CostCenterModifyRequest& setThirdpartId(string thirdpartId) { DARABONBA_PTR_SET_VALUE(thirdpartId_, thirdpartId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CostCenterModifyRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> alipayNo_ = nullptr;
    std::shared_ptr<int64_t> disable_ = nullptr;
    std::shared_ptr<string> number_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> scope_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> thirdpartId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
