// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYQUERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPLYQUERYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ApplyQueryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyQueryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(apply_id, applyId_);
      DARABONBA_PTR_TO_JSON(apply_show_id, applyShowId_);
      DARABONBA_PTR_TO_JSON(sub_corp_id, subCorpId_);
      DARABONBA_PTR_TO_JSON(thirdpart_apply_id, thirdpartApplyId_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyQueryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(apply_id, applyId_);
      DARABONBA_PTR_FROM_JSON(apply_show_id, applyShowId_);
      DARABONBA_PTR_FROM_JSON(sub_corp_id, subCorpId_);
      DARABONBA_PTR_FROM_JSON(thirdpart_apply_id, thirdpartApplyId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ApplyQueryRequest() = default ;
    ApplyQueryRequest(const ApplyQueryRequest &) = default ;
    ApplyQueryRequest(ApplyQueryRequest &&) = default ;
    ApplyQueryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyQueryRequest() = default ;
    ApplyQueryRequest& operator=(const ApplyQueryRequest &) = default ;
    ApplyQueryRequest& operator=(ApplyQueryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyId_ != nullptr
        && this->applyShowId_ != nullptr && this->subCorpId_ != nullptr && this->thirdpartApplyId_ != nullptr && this->type_ != nullptr; };
    // applyId Field Functions 
    bool hasApplyId() const { return this->applyId_ != nullptr;};
    void deleteApplyId() { this->applyId_ = nullptr;};
    inline int32_t applyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, 0) };
    inline ApplyQueryRequest& setApplyId(int32_t applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


    // applyShowId Field Functions 
    bool hasApplyShowId() const { return this->applyShowId_ != nullptr;};
    void deleteApplyShowId() { this->applyShowId_ = nullptr;};
    inline string applyShowId() const { DARABONBA_PTR_GET_DEFAULT(applyShowId_, "") };
    inline ApplyQueryRequest& setApplyShowId(string applyShowId) { DARABONBA_PTR_SET_VALUE(applyShowId_, applyShowId) };


    // subCorpId Field Functions 
    bool hasSubCorpId() const { return this->subCorpId_ != nullptr;};
    void deleteSubCorpId() { this->subCorpId_ = nullptr;};
    inline string subCorpId() const { DARABONBA_PTR_GET_DEFAULT(subCorpId_, "") };
    inline ApplyQueryRequest& setSubCorpId(string subCorpId) { DARABONBA_PTR_SET_VALUE(subCorpId_, subCorpId) };


    // thirdpartApplyId Field Functions 
    bool hasThirdpartApplyId() const { return this->thirdpartApplyId_ != nullptr;};
    void deleteThirdpartApplyId() { this->thirdpartApplyId_ = nullptr;};
    inline string thirdpartApplyId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartApplyId_, "") };
    inline ApplyQueryRequest& setThirdpartApplyId(string thirdpartApplyId) { DARABONBA_PTR_SET_VALUE(thirdpartApplyId_, thirdpartApplyId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline ApplyQueryRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<int32_t> applyId_ = nullptr;
    std::shared_ptr<string> applyShowId_ = nullptr;
    std::shared_ptr<string> subCorpId_ = nullptr;
    std::shared_ptr<string> thirdpartApplyId_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
