// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMODIFICATIONPRICEREQUESTRESOURCESPECS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMODIFICATIONPRICEREQUESTRESOURCESPECS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeModificationPriceRequestResourceSpecs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeModificationPriceRequestResourceSpecs& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(RootDiskSizeGib, rootDiskSizeGib_);
      DARABONBA_PTR_TO_JSON(UserDiskSizeGib, userDiskSizeGib_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeModificationPriceRequestResourceSpecs& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(RootDiskSizeGib, rootDiskSizeGib_);
      DARABONBA_PTR_FROM_JSON(UserDiskSizeGib, userDiskSizeGib_);
    };
    DescribeModificationPriceRequestResourceSpecs() = default ;
    DescribeModificationPriceRequestResourceSpecs(const DescribeModificationPriceRequestResourceSpecs &) = default ;
    DescribeModificationPriceRequestResourceSpecs(DescribeModificationPriceRequestResourceSpecs &&) = default ;
    DescribeModificationPriceRequestResourceSpecs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeModificationPriceRequestResourceSpecs() = default ;
    DescribeModificationPriceRequestResourceSpecs& operator=(const DescribeModificationPriceRequestResourceSpecs &) = default ;
    DescribeModificationPriceRequestResourceSpecs& operator=(DescribeModificationPriceRequestResourceSpecs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desktopId_ == nullptr
        && return this->rootDiskSizeGib_ == nullptr && return this->userDiskSizeGib_ == nullptr; };
    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline string desktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
    inline DescribeModificationPriceRequestResourceSpecs& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


    // rootDiskSizeGib Field Functions 
    bool hasRootDiskSizeGib() const { return this->rootDiskSizeGib_ != nullptr;};
    void deleteRootDiskSizeGib() { this->rootDiskSizeGib_ = nullptr;};
    inline int32_t rootDiskSizeGib() const { DARABONBA_PTR_GET_DEFAULT(rootDiskSizeGib_, 0) };
    inline DescribeModificationPriceRequestResourceSpecs& setRootDiskSizeGib(int32_t rootDiskSizeGib) { DARABONBA_PTR_SET_VALUE(rootDiskSizeGib_, rootDiskSizeGib) };


    // userDiskSizeGib Field Functions 
    bool hasUserDiskSizeGib() const { return this->userDiskSizeGib_ != nullptr;};
    void deleteUserDiskSizeGib() { this->userDiskSizeGib_ = nullptr;};
    inline int32_t userDiskSizeGib() const { DARABONBA_PTR_GET_DEFAULT(userDiskSizeGib_, 0) };
    inline DescribeModificationPriceRequestResourceSpecs& setUserDiskSizeGib(int32_t userDiskSizeGib) { DARABONBA_PTR_SET_VALUE(userDiskSizeGib_, userDiskSizeGib) };


  protected:
    std::shared_ptr<string> desktopId_ = nullptr;
    std::shared_ptr<int32_t> rootDiskSizeGib_ = nullptr;
    std::shared_ptr<int32_t> userDiskSizeGib_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
