// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPROVALDETAILRESPONSEBODYAPPROVALDETAILREASONLIST_HPP_
#define ALIBABACLOUD_MODELS_GETAPPROVALDETAILRESPONSEBODYAPPROVALDETAILREASONLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetApprovalDetailResponseBodyApprovalDetailReasonList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApprovalDetailResponseBodyApprovalDetailReasonList& obj) { 
      DARABONBA_PTR_TO_JSON(Reasons, reasons_);
    };
    friend void from_json(const Darabonba::Json& j, GetApprovalDetailResponseBodyApprovalDetailReasonList& obj) { 
      DARABONBA_PTR_FROM_JSON(Reasons, reasons_);
    };
    GetApprovalDetailResponseBodyApprovalDetailReasonList() = default ;
    GetApprovalDetailResponseBodyApprovalDetailReasonList(const GetApprovalDetailResponseBodyApprovalDetailReasonList &) = default ;
    GetApprovalDetailResponseBodyApprovalDetailReasonList(GetApprovalDetailResponseBodyApprovalDetailReasonList &&) = default ;
    GetApprovalDetailResponseBodyApprovalDetailReasonList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApprovalDetailResponseBodyApprovalDetailReasonList() = default ;
    GetApprovalDetailResponseBodyApprovalDetailReasonList& operator=(const GetApprovalDetailResponseBodyApprovalDetailReasonList &) = default ;
    GetApprovalDetailResponseBodyApprovalDetailReasonList& operator=(GetApprovalDetailResponseBodyApprovalDetailReasonList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->reasons_ == nullptr; };
    // reasons Field Functions 
    bool hasReasons() const { return this->reasons_ != nullptr;};
    void deleteReasons() { this->reasons_ = nullptr;};
    inline const vector<string> & reasons() const { DARABONBA_PTR_GET_CONST(reasons_, vector<string>) };
    inline vector<string> reasons() { DARABONBA_PTR_GET(reasons_, vector<string>) };
    inline GetApprovalDetailResponseBodyApprovalDetailReasonList& setReasons(const vector<string> & reasons) { DARABONBA_PTR_SET_VALUE(reasons_, reasons) };
    inline GetApprovalDetailResponseBodyApprovalDetailReasonList& setReasons(vector<string> && reasons) { DARABONBA_PTR_SET_RVALUE(reasons_, reasons) };


  protected:
    std::shared_ptr<vector<string>> reasons_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
