// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDGETOBCDRREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLOUDGETOBCDRREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudGetObCdrRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudGetObCdrRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(UniqueId, uniqueId_);
    };
    friend void from_json(const Darabonba::Json& j, CloudGetObCdrRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(UniqueId, uniqueId_);
    };
    CloudGetObCdrRequest() = default ;
    CloudGetObCdrRequest(const CloudGetObCdrRequest &) = default ;
    CloudGetObCdrRequest(CloudGetObCdrRequest &&) = default ;
    CloudGetObCdrRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudGetObCdrRequest() = default ;
    CloudGetObCdrRequest& operator=(const CloudGetObCdrRequest &) = default ;
    CloudGetObCdrRequest& operator=(CloudGetObCdrRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enterpriseId_ == nullptr
        && this->uniqueId_ == nullptr; };
    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline CloudGetObCdrRequest& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // uniqueId Field Functions 
    bool hasUniqueId() const { return this->uniqueId_ != nullptr;};
    void deleteUniqueId() { this->uniqueId_ = nullptr;};
    inline string getUniqueId() const { DARABONBA_PTR_GET_DEFAULT(uniqueId_, "") };
    inline CloudGetObCdrRequest& setUniqueId(string uniqueId) { DARABONBA_PTR_SET_VALUE(uniqueId_, uniqueId) };


  protected:
    // 呼叫中心 id
    // 
    // This parameter is required.
    shared_ptr<int64_t> enterpriseId_ {};
    // 电话唯一标识；对应座席外呼通话记录的uniqueId
    // 
    // This parameter is required.
    shared_ptr<string> uniqueId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
