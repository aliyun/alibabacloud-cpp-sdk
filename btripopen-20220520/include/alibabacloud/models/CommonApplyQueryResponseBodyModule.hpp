// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMMONAPPLYQUERYRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_COMMONAPPLYQUERYRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class CommonApplyQueryResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CommonApplyQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(apply_id, applyId_);
      DARABONBA_PTR_TO_JSON(biz_category, bizCategory_);
      DARABONBA_PTR_TO_JSON(cause, cause_);
      DARABONBA_PTR_TO_JSON(corp_id, corpId_);
      DARABONBA_PTR_TO_JSON(extend_value, extendValue_);
      DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(thirdpart_corp_id, thirdpartCorpId_);
      DARABONBA_PTR_TO_JSON(thirdpart_id, thirdpartId_);
      DARABONBA_PTR_TO_JSON(trip_cause, tripCause_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
      DARABONBA_PTR_TO_JSON(user_name, userName_);
    };
    friend void from_json(const Darabonba::Json& j, CommonApplyQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(apply_id, applyId_);
      DARABONBA_PTR_FROM_JSON(biz_category, bizCategory_);
      DARABONBA_PTR_FROM_JSON(cause, cause_);
      DARABONBA_PTR_FROM_JSON(corp_id, corpId_);
      DARABONBA_PTR_FROM_JSON(extend_value, extendValue_);
      DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(thirdpart_corp_id, thirdpartCorpId_);
      DARABONBA_PTR_FROM_JSON(thirdpart_id, thirdpartId_);
      DARABONBA_PTR_FROM_JSON(trip_cause, tripCause_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
      DARABONBA_PTR_FROM_JSON(user_name, userName_);
    };
    CommonApplyQueryResponseBodyModule() = default ;
    CommonApplyQueryResponseBodyModule(const CommonApplyQueryResponseBodyModule &) = default ;
    CommonApplyQueryResponseBodyModule(CommonApplyQueryResponseBodyModule &&) = default ;
    CommonApplyQueryResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CommonApplyQueryResponseBodyModule() = default ;
    CommonApplyQueryResponseBodyModule& operator=(const CommonApplyQueryResponseBodyModule &) = default ;
    CommonApplyQueryResponseBodyModule& operator=(CommonApplyQueryResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyId_ != nullptr
        && this->bizCategory_ != nullptr && this->cause_ != nullptr && this->corpId_ != nullptr && this->extendValue_ != nullptr && this->gmtCreate_ != nullptr
        && this->status_ != nullptr && this->thirdpartCorpId_ != nullptr && this->thirdpartId_ != nullptr && this->tripCause_ != nullptr && this->userId_ != nullptr
        && this->userName_ != nullptr; };
    // applyId Field Functions 
    bool hasApplyId() const { return this->applyId_ != nullptr;};
    void deleteApplyId() { this->applyId_ = nullptr;};
    inline int64_t applyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, 0L) };
    inline CommonApplyQueryResponseBodyModule& setApplyId(int64_t applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


    // bizCategory Field Functions 
    bool hasBizCategory() const { return this->bizCategory_ != nullptr;};
    void deleteBizCategory() { this->bizCategory_ = nullptr;};
    inline int32_t bizCategory() const { DARABONBA_PTR_GET_DEFAULT(bizCategory_, 0) };
    inline CommonApplyQueryResponseBodyModule& setBizCategory(int32_t bizCategory) { DARABONBA_PTR_SET_VALUE(bizCategory_, bizCategory) };


    // cause Field Functions 
    bool hasCause() const { return this->cause_ != nullptr;};
    void deleteCause() { this->cause_ = nullptr;};
    inline string cause() const { DARABONBA_PTR_GET_DEFAULT(cause_, "") };
    inline CommonApplyQueryResponseBodyModule& setCause(string cause) { DARABONBA_PTR_SET_VALUE(cause_, cause) };


    // corpId Field Functions 
    bool hasCorpId() const { return this->corpId_ != nullptr;};
    void deleteCorpId() { this->corpId_ = nullptr;};
    inline string corpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
    inline CommonApplyQueryResponseBodyModule& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


    // extendValue Field Functions 
    bool hasExtendValue() const { return this->extendValue_ != nullptr;};
    void deleteExtendValue() { this->extendValue_ = nullptr;};
    inline string extendValue() const { DARABONBA_PTR_GET_DEFAULT(extendValue_, "") };
    inline CommonApplyQueryResponseBodyModule& setExtendValue(string extendValue) { DARABONBA_PTR_SET_VALUE(extendValue_, extendValue) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline CommonApplyQueryResponseBodyModule& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline CommonApplyQueryResponseBodyModule& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // thirdpartCorpId Field Functions 
    bool hasThirdpartCorpId() const { return this->thirdpartCorpId_ != nullptr;};
    void deleteThirdpartCorpId() { this->thirdpartCorpId_ = nullptr;};
    inline string thirdpartCorpId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartCorpId_, "") };
    inline CommonApplyQueryResponseBodyModule& setThirdpartCorpId(string thirdpartCorpId) { DARABONBA_PTR_SET_VALUE(thirdpartCorpId_, thirdpartCorpId) };


    // thirdpartId Field Functions 
    bool hasThirdpartId() const { return this->thirdpartId_ != nullptr;};
    void deleteThirdpartId() { this->thirdpartId_ = nullptr;};
    inline string thirdpartId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartId_, "") };
    inline CommonApplyQueryResponseBodyModule& setThirdpartId(string thirdpartId) { DARABONBA_PTR_SET_VALUE(thirdpartId_, thirdpartId) };


    // tripCause Field Functions 
    bool hasTripCause() const { return this->tripCause_ != nullptr;};
    void deleteTripCause() { this->tripCause_ = nullptr;};
    inline string tripCause() const { DARABONBA_PTR_GET_DEFAULT(tripCause_, "") };
    inline CommonApplyQueryResponseBodyModule& setTripCause(string tripCause) { DARABONBA_PTR_SET_VALUE(tripCause_, tripCause) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CommonApplyQueryResponseBodyModule& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline CommonApplyQueryResponseBodyModule& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    std::shared_ptr<int64_t> applyId_ = nullptr;
    std::shared_ptr<int32_t> bizCategory_ = nullptr;
    std::shared_ptr<string> cause_ = nullptr;
    std::shared_ptr<string> corpId_ = nullptr;
    std::shared_ptr<string> extendValue_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> thirdpartCorpId_ = nullptr;
    std::shared_ptr<string> thirdpartId_ = nullptr;
    std::shared_ptr<string> tripCause_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
