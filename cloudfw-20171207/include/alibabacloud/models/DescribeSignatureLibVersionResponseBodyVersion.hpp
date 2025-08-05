// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESIGNATURELIBVERSIONRESPONSEBODYVERSION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESIGNATURELIBVERSIONRESPONSEBODYVERSION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeSignatureLibVersionResponseBodyVersion : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSignatureLibVersionResponseBodyVersion& obj) { 
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSignatureLibVersionResponseBodyVersion& obj) { 
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    DescribeSignatureLibVersionResponseBodyVersion() = default ;
    DescribeSignatureLibVersionResponseBodyVersion(const DescribeSignatureLibVersionResponseBodyVersion &) = default ;
    DescribeSignatureLibVersionResponseBodyVersion(DescribeSignatureLibVersionResponseBodyVersion &&) = default ;
    DescribeSignatureLibVersionResponseBodyVersion(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSignatureLibVersionResponseBodyVersion() = default ;
    DescribeSignatureLibVersionResponseBodyVersion& operator=(const DescribeSignatureLibVersionResponseBodyVersion &) = default ;
    DescribeSignatureLibVersionResponseBodyVersion& operator=(DescribeSignatureLibVersionResponseBodyVersion &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->type_ != nullptr
        && this->updateTime_ != nullptr && this->version_ != nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeSignatureLibVersionResponseBodyVersion& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline DescribeSignatureLibVersionResponseBodyVersion& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribeSignatureLibVersionResponseBodyVersion& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The type.
    // 
    // Valid values:
    // 
    // *   ips
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     Basic Rules and Virtual Patching
    // 
    //     <!-- -->
    // 
    //     .
    // 
    // *   intelligence
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     Threat Intelligence
    // 
    //     <!-- -->
    std::shared_ptr<string> type_ = nullptr;
    // Update time.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
    // The version number.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
