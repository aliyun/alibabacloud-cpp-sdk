// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRIVACYRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPRIVACYRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class ListPrivacyRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrivacyRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Num, num_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrivacyRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Num, num_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    ListPrivacyRuleRequest() = default ;
    ListPrivacyRuleRequest(const ListPrivacyRuleRequest &) = default ;
    ListPrivacyRuleRequest(ListPrivacyRuleRequest &&) = default ;
    ListPrivacyRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrivacyRuleRequest() = default ;
    ListPrivacyRuleRequest& operator=(const ListPrivacyRuleRequest &) = default ;
    ListPrivacyRuleRequest& operator=(ListPrivacyRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->num_ == nullptr
        && return this->regionId_ == nullptr && return this->size_ == nullptr; };
    // num Field Functions 
    bool hasNum() const { return this->num_ != nullptr;};
    void deleteNum() { this->num_ = nullptr;};
    inline int32_t num() const { DARABONBA_PTR_GET_DEFAULT(num_, 0) };
    inline ListPrivacyRuleRequest& setNum(int32_t num) { DARABONBA_PTR_SET_VALUE(num_, num) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListPrivacyRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ListPrivacyRuleRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // This parameter is required.
    std::shared_ptr<int32_t> num_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
