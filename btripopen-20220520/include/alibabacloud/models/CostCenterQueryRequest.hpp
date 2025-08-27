// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COSTCENTERQUERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COSTCENTERQUERYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class CostCenterQueryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CostCenterQueryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(disable, disable_);
      DARABONBA_PTR_TO_JSON(need_org_entity, needOrgEntity_);
      DARABONBA_PTR_TO_JSON(thirdpart_id, thirdpartId_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
    };
    friend void from_json(const Darabonba::Json& j, CostCenterQueryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(disable, disable_);
      DARABONBA_PTR_FROM_JSON(need_org_entity, needOrgEntity_);
      DARABONBA_PTR_FROM_JSON(thirdpart_id, thirdpartId_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
    };
    CostCenterQueryRequest() = default ;
    CostCenterQueryRequest(const CostCenterQueryRequest &) = default ;
    CostCenterQueryRequest(CostCenterQueryRequest &&) = default ;
    CostCenterQueryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CostCenterQueryRequest() = default ;
    CostCenterQueryRequest& operator=(const CostCenterQueryRequest &) = default ;
    CostCenterQueryRequest& operator=(CostCenterQueryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->disable_ != nullptr
        && this->needOrgEntity_ != nullptr && this->thirdpartId_ != nullptr && this->title_ != nullptr && this->userId_ != nullptr; };
    // disable Field Functions 
    bool hasDisable() const { return this->disable_ != nullptr;};
    void deleteDisable() { this->disable_ = nullptr;};
    inline int64_t disable() const { DARABONBA_PTR_GET_DEFAULT(disable_, 0L) };
    inline CostCenterQueryRequest& setDisable(int64_t disable) { DARABONBA_PTR_SET_VALUE(disable_, disable) };


    // needOrgEntity Field Functions 
    bool hasNeedOrgEntity() const { return this->needOrgEntity_ != nullptr;};
    void deleteNeedOrgEntity() { this->needOrgEntity_ = nullptr;};
    inline bool needOrgEntity() const { DARABONBA_PTR_GET_DEFAULT(needOrgEntity_, false) };
    inline CostCenterQueryRequest& setNeedOrgEntity(bool needOrgEntity) { DARABONBA_PTR_SET_VALUE(needOrgEntity_, needOrgEntity) };


    // thirdpartId Field Functions 
    bool hasThirdpartId() const { return this->thirdpartId_ != nullptr;};
    void deleteThirdpartId() { this->thirdpartId_ = nullptr;};
    inline string thirdpartId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartId_, "") };
    inline CostCenterQueryRequest& setThirdpartId(string thirdpartId) { DARABONBA_PTR_SET_VALUE(thirdpartId_, thirdpartId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CostCenterQueryRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CostCenterQueryRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<int64_t> disable_ = nullptr;
    std::shared_ptr<bool> needOrgEntity_ = nullptr;
    std::shared_ptr<string> thirdpartId_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
