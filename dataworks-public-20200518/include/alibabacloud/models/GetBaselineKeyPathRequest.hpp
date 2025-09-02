// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBASELINEKEYPATHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETBASELINEKEYPATHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetBaselineKeyPathRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBaselineKeyPathRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_TO_JSON(Bizdate, bizdate_);
      DARABONBA_PTR_TO_JSON(InGroupId, inGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, GetBaselineKeyPathRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_FROM_JSON(Bizdate, bizdate_);
      DARABONBA_PTR_FROM_JSON(InGroupId, inGroupId_);
    };
    GetBaselineKeyPathRequest() = default ;
    GetBaselineKeyPathRequest(const GetBaselineKeyPathRequest &) = default ;
    GetBaselineKeyPathRequest(GetBaselineKeyPathRequest &&) = default ;
    GetBaselineKeyPathRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBaselineKeyPathRequest() = default ;
    GetBaselineKeyPathRequest& operator=(const GetBaselineKeyPathRequest &) = default ;
    GetBaselineKeyPathRequest& operator=(GetBaselineKeyPathRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baselineId_ != nullptr
        && this->bizdate_ != nullptr && this->inGroupId_ != nullptr; };
    // baselineId Field Functions 
    bool hasBaselineId() const { return this->baselineId_ != nullptr;};
    void deleteBaselineId() { this->baselineId_ = nullptr;};
    inline int64_t baselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, 0L) };
    inline GetBaselineKeyPathRequest& setBaselineId(int64_t baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


    // bizdate Field Functions 
    bool hasBizdate() const { return this->bizdate_ != nullptr;};
    void deleteBizdate() { this->bizdate_ = nullptr;};
    inline string bizdate() const { DARABONBA_PTR_GET_DEFAULT(bizdate_, "") };
    inline GetBaselineKeyPathRequest& setBizdate(string bizdate) { DARABONBA_PTR_SET_VALUE(bizdate_, bizdate) };


    // inGroupId Field Functions 
    bool hasInGroupId() const { return this->inGroupId_ != nullptr;};
    void deleteInGroupId() { this->inGroupId_ = nullptr;};
    inline int32_t inGroupId() const { DARABONBA_PTR_GET_DEFAULT(inGroupId_, 0) };
    inline GetBaselineKeyPathRequest& setInGroupId(int32_t inGroupId) { DARABONBA_PTR_SET_VALUE(inGroupId_, inGroupId) };


  protected:
    // The name of the event.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> baselineId_ = nullptr;
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> bizdate_ = nullptr;
    // The ID of the event.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> inGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
