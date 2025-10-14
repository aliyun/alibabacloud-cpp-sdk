// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVENDORSRESPONSEBODYVENDORS_HPP_
#define ALIBABACLOUD_MODELS_LISTVENDORSRESPONSEBODYVENDORS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListVendorsResponseBodyVendors : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVendorsResponseBodyVendors& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(VendorId, vendorId_);
      DARABONBA_PTR_TO_JSON(VendorName, vendorName_);
      DARABONBA_PTR_TO_JSON(VendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, ListVendorsResponseBodyVendors& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(VendorId, vendorId_);
      DARABONBA_PTR_FROM_JSON(VendorName, vendorName_);
      DARABONBA_PTR_FROM_JSON(VendorType, vendorType_);
    };
    ListVendorsResponseBodyVendors() = default ;
    ListVendorsResponseBodyVendors(const ListVendorsResponseBodyVendors &) = default ;
    ListVendorsResponseBodyVendors(ListVendorsResponseBodyVendors &&) = default ;
    ListVendorsResponseBodyVendors(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVendorsResponseBodyVendors() = default ;
    ListVendorsResponseBodyVendors& operator=(const ListVendorsResponseBodyVendors &) = default ;
    ListVendorsResponseBodyVendors& operator=(ListVendorsResponseBodyVendors &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->updateTime_ == nullptr && return this->vendorId_ == nullptr && return this->vendorName_ == nullptr && return this->vendorType_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListVendorsResponseBodyVendors& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline ListVendorsResponseBodyVendors& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // vendorId Field Functions 
    bool hasVendorId() const { return this->vendorId_ != nullptr;};
    void deleteVendorId() { this->vendorId_ = nullptr;};
    inline string vendorId() const { DARABONBA_PTR_GET_DEFAULT(vendorId_, "") };
    inline ListVendorsResponseBodyVendors& setVendorId(string vendorId) { DARABONBA_PTR_SET_VALUE(vendorId_, vendorId) };


    // vendorName Field Functions 
    bool hasVendorName() const { return this->vendorName_ != nullptr;};
    void deleteVendorName() { this->vendorName_ = nullptr;};
    inline string vendorName() const { DARABONBA_PTR_GET_DEFAULT(vendorName_, "") };
    inline ListVendorsResponseBodyVendors& setVendorName(string vendorName) { DARABONBA_PTR_SET_VALUE(vendorName_, vendorName) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string vendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline ListVendorsResponseBodyVendors& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<int64_t> updateTime_ = nullptr;
    std::shared_ptr<string> vendorId_ = nullptr;
    std::shared_ptr<string> vendorName_ = nullptr;
    std::shared_ptr<string> vendorType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
