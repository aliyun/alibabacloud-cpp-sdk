// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDESKTOPOVERSOLDGROUPSALEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDESKTOPOVERSOLDGROUPSALEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyDesktopOversoldGroupSaleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDesktopOversoldGroupSaleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConcurrenceCount, concurrenceCount_);
      DARABONBA_PTR_TO_JSON(OversoldGroupId, oversoldGroupId_);
      DARABONBA_PTR_TO_JSON(OversoldUserCount, oversoldUserCount_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDesktopOversoldGroupSaleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConcurrenceCount, concurrenceCount_);
      DARABONBA_PTR_FROM_JSON(OversoldGroupId, oversoldGroupId_);
      DARABONBA_PTR_FROM_JSON(OversoldUserCount, oversoldUserCount_);
    };
    ModifyDesktopOversoldGroupSaleRequest() = default ;
    ModifyDesktopOversoldGroupSaleRequest(const ModifyDesktopOversoldGroupSaleRequest &) = default ;
    ModifyDesktopOversoldGroupSaleRequest(ModifyDesktopOversoldGroupSaleRequest &&) = default ;
    ModifyDesktopOversoldGroupSaleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDesktopOversoldGroupSaleRequest() = default ;
    ModifyDesktopOversoldGroupSaleRequest& operator=(const ModifyDesktopOversoldGroupSaleRequest &) = default ;
    ModifyDesktopOversoldGroupSaleRequest& operator=(ModifyDesktopOversoldGroupSaleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->concurrenceCount_ == nullptr
        && return this->oversoldGroupId_ == nullptr && return this->oversoldUserCount_ == nullptr; };
    // concurrenceCount Field Functions 
    bool hasConcurrenceCount() const { return this->concurrenceCount_ != nullptr;};
    void deleteConcurrenceCount() { this->concurrenceCount_ = nullptr;};
    inline int32_t concurrenceCount() const { DARABONBA_PTR_GET_DEFAULT(concurrenceCount_, 0) };
    inline ModifyDesktopOversoldGroupSaleRequest& setConcurrenceCount(int32_t concurrenceCount) { DARABONBA_PTR_SET_VALUE(concurrenceCount_, concurrenceCount) };


    // oversoldGroupId Field Functions 
    bool hasOversoldGroupId() const { return this->oversoldGroupId_ != nullptr;};
    void deleteOversoldGroupId() { this->oversoldGroupId_ = nullptr;};
    inline string oversoldGroupId() const { DARABONBA_PTR_GET_DEFAULT(oversoldGroupId_, "") };
    inline ModifyDesktopOversoldGroupSaleRequest& setOversoldGroupId(string oversoldGroupId) { DARABONBA_PTR_SET_VALUE(oversoldGroupId_, oversoldGroupId) };


    // oversoldUserCount Field Functions 
    bool hasOversoldUserCount() const { return this->oversoldUserCount_ != nullptr;};
    void deleteOversoldUserCount() { this->oversoldUserCount_ = nullptr;};
    inline int32_t oversoldUserCount() const { DARABONBA_PTR_GET_DEFAULT(oversoldUserCount_, 0) };
    inline ModifyDesktopOversoldGroupSaleRequest& setOversoldUserCount(int32_t oversoldUserCount) { DARABONBA_PTR_SET_VALUE(oversoldUserCount_, oversoldUserCount) };


  protected:
    std::shared_ptr<int32_t> concurrenceCount_ = nullptr;
    std::shared_ptr<string> oversoldGroupId_ = nullptr;
    std::shared_ptr<int32_t> oversoldUserCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
