// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSUREORDERCREATERESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_INSUREORDERCREATERESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/InsureOrderCreateResponseBodyModuleInsureOrderDetailList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class InsureOrderCreateResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsureOrderCreateResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(copies, copies_);
      DARABONBA_PTR_TO_JSON(insure_order_detail_list, insureOrderDetailList_);
      DARABONBA_PTR_TO_JSON(insure_order_id, insureOrderId_);
      DARABONBA_PTR_TO_JSON(premium, premium_);
    };
    friend void from_json(const Darabonba::Json& j, InsureOrderCreateResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(copies, copies_);
      DARABONBA_PTR_FROM_JSON(insure_order_detail_list, insureOrderDetailList_);
      DARABONBA_PTR_FROM_JSON(insure_order_id, insureOrderId_);
      DARABONBA_PTR_FROM_JSON(premium, premium_);
    };
    InsureOrderCreateResponseBodyModule() = default ;
    InsureOrderCreateResponseBodyModule(const InsureOrderCreateResponseBodyModule &) = default ;
    InsureOrderCreateResponseBodyModule(InsureOrderCreateResponseBodyModule &&) = default ;
    InsureOrderCreateResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsureOrderCreateResponseBodyModule() = default ;
    InsureOrderCreateResponseBodyModule& operator=(const InsureOrderCreateResponseBodyModule &) = default ;
    InsureOrderCreateResponseBodyModule& operator=(InsureOrderCreateResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->copies_ != nullptr
        && this->insureOrderDetailList_ != nullptr && this->insureOrderId_ != nullptr && this->premium_ != nullptr; };
    // copies Field Functions 
    bool hasCopies() const { return this->copies_ != nullptr;};
    void deleteCopies() { this->copies_ = nullptr;};
    inline int32_t copies() const { DARABONBA_PTR_GET_DEFAULT(copies_, 0) };
    inline InsureOrderCreateResponseBodyModule& setCopies(int32_t copies) { DARABONBA_PTR_SET_VALUE(copies_, copies) };


    // insureOrderDetailList Field Functions 
    bool hasInsureOrderDetailList() const { return this->insureOrderDetailList_ != nullptr;};
    void deleteInsureOrderDetailList() { this->insureOrderDetailList_ = nullptr;};
    inline const vector<Models::InsureOrderCreateResponseBodyModuleInsureOrderDetailList> & insureOrderDetailList() const { DARABONBA_PTR_GET_CONST(insureOrderDetailList_, vector<Models::InsureOrderCreateResponseBodyModuleInsureOrderDetailList>) };
    inline vector<Models::InsureOrderCreateResponseBodyModuleInsureOrderDetailList> insureOrderDetailList() { DARABONBA_PTR_GET(insureOrderDetailList_, vector<Models::InsureOrderCreateResponseBodyModuleInsureOrderDetailList>) };
    inline InsureOrderCreateResponseBodyModule& setInsureOrderDetailList(const vector<Models::InsureOrderCreateResponseBodyModuleInsureOrderDetailList> & insureOrderDetailList) { DARABONBA_PTR_SET_VALUE(insureOrderDetailList_, insureOrderDetailList) };
    inline InsureOrderCreateResponseBodyModule& setInsureOrderDetailList(vector<Models::InsureOrderCreateResponseBodyModuleInsureOrderDetailList> && insureOrderDetailList) { DARABONBA_PTR_SET_RVALUE(insureOrderDetailList_, insureOrderDetailList) };


    // insureOrderId Field Functions 
    bool hasInsureOrderId() const { return this->insureOrderId_ != nullptr;};
    void deleteInsureOrderId() { this->insureOrderId_ = nullptr;};
    inline string insureOrderId() const { DARABONBA_PTR_GET_DEFAULT(insureOrderId_, "") };
    inline InsureOrderCreateResponseBodyModule& setInsureOrderId(string insureOrderId) { DARABONBA_PTR_SET_VALUE(insureOrderId_, insureOrderId) };


    // premium Field Functions 
    bool hasPremium() const { return this->premium_ != nullptr;};
    void deletePremium() { this->premium_ = nullptr;};
    inline int64_t premium() const { DARABONBA_PTR_GET_DEFAULT(premium_, 0L) };
    inline InsureOrderCreateResponseBodyModule& setPremium(int64_t premium) { DARABONBA_PTR_SET_VALUE(premium_, premium) };


  protected:
    std::shared_ptr<int32_t> copies_ = nullptr;
    std::shared_ptr<vector<Models::InsureOrderCreateResponseBodyModuleInsureOrderDetailList>> insureOrderDetailList_ = nullptr;
    std::shared_ptr<string> insureOrderId_ = nullptr;
    std::shared_ptr<int64_t> premium_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
