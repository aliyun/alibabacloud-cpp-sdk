// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDAGENTUNLINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLOUDAGENTUNLINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudAgentUnlinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudAgentUnlinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cno, cno_);
      DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(RequestUniqueId, requestUniqueId_);
      DARABONBA_PTR_TO_JSON(Side, side_);
      DARABONBA_PTR_TO_JSON(UniqueId, uniqueId_);
    };
    friend void from_json(const Darabonba::Json& j, CloudAgentUnlinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cno, cno_);
      DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(RequestUniqueId, requestUniqueId_);
      DARABONBA_PTR_FROM_JSON(Side, side_);
      DARABONBA_PTR_FROM_JSON(UniqueId, uniqueId_);
    };
    CloudAgentUnlinkRequest() = default ;
    CloudAgentUnlinkRequest(const CloudAgentUnlinkRequest &) = default ;
    CloudAgentUnlinkRequest(CloudAgentUnlinkRequest &&) = default ;
    CloudAgentUnlinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudAgentUnlinkRequest() = default ;
    CloudAgentUnlinkRequest& operator=(const CloudAgentUnlinkRequest &) = default ;
    CloudAgentUnlinkRequest& operator=(CloudAgentUnlinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cno_ == nullptr
        && this->enterpriseId_ == nullptr && this->requestUniqueId_ == nullptr && this->side_ == nullptr && this->uniqueId_ == nullptr; };
    // cno Field Functions 
    bool hasCno() const { return this->cno_ != nullptr;};
    void deleteCno() { this->cno_ = nullptr;};
    inline string getCno() const { DARABONBA_PTR_GET_DEFAULT(cno_, "") };
    inline CloudAgentUnlinkRequest& setCno(string cno) { DARABONBA_PTR_SET_VALUE(cno_, cno) };


    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline CloudAgentUnlinkRequest& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // requestUniqueId Field Functions 
    bool hasRequestUniqueId() const { return this->requestUniqueId_ != nullptr;};
    void deleteRequestUniqueId() { this->requestUniqueId_ = nullptr;};
    inline string getRequestUniqueId() const { DARABONBA_PTR_GET_DEFAULT(requestUniqueId_, "") };
    inline CloudAgentUnlinkRequest& setRequestUniqueId(string requestUniqueId) { DARABONBA_PTR_SET_VALUE(requestUniqueId_, requestUniqueId) };


    // side Field Functions 
    bool hasSide() const { return this->side_ != nullptr;};
    void deleteSide() { this->side_ = nullptr;};
    inline int64_t getSide() const { DARABONBA_PTR_GET_DEFAULT(side_, 0L) };
    inline CloudAgentUnlinkRequest& setSide(int64_t side) { DARABONBA_PTR_SET_VALUE(side_, side) };


    // uniqueId Field Functions 
    bool hasUniqueId() const { return this->uniqueId_ != nullptr;};
    void deleteUniqueId() { this->uniqueId_ = nullptr;};
    inline string getUniqueId() const { DARABONBA_PTR_GET_DEFAULT(uniqueId_, "") };
    inline CloudAgentUnlinkRequest& setUniqueId(string uniqueId) { DARABONBA_PTR_SET_VALUE(uniqueId_, uniqueId) };


  protected:
    // 座席工号；取值3-10位正整数，参数cno,uniqueId和requestUniqueId三选一
    shared_ptr<string> cno_ {};
    // 呼叫中心 id
    // 
    // This parameter is required.
    shared_ptr<int64_t> enterpriseId_ {};
    // 请求唯一标识；参数cno,uniqueId和requestUniqueId三选一。注意：requestUniqueId挂机功能只在呼叫类型为webcall时生效，且需提前在管理后台将功能开启
    shared_ptr<string> requestUniqueId_ {};
    // 是否座席侧挂机；取值范围：1,2（数字含义，座席侧，非座席侧)，默认座席侧
    shared_ptr<int64_t> side_ {};
    // 通话唯一标识；参数cno,uniqueId和requestUniqueId三选一
    shared_ptr<string> uniqueId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
