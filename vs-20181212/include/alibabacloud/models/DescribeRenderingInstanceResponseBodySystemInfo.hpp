// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERENDERINGINSTANCERESPONSEBODYSYSTEMINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERENDERINGINSTANCERESPONSEBODYSYSTEMINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeRenderingInstanceResponseBodySystemInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRenderingInstanceResponseBodySystemInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Frequency, frequency_);
      DARABONBA_PTR_TO_JSON(Resolution, resolution_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRenderingInstanceResponseBodySystemInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Frequency, frequency_);
      DARABONBA_PTR_FROM_JSON(Resolution, resolution_);
    };
    DescribeRenderingInstanceResponseBodySystemInfo() = default ;
    DescribeRenderingInstanceResponseBodySystemInfo(const DescribeRenderingInstanceResponseBodySystemInfo &) = default ;
    DescribeRenderingInstanceResponseBodySystemInfo(DescribeRenderingInstanceResponseBodySystemInfo &&) = default ;
    DescribeRenderingInstanceResponseBodySystemInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRenderingInstanceResponseBodySystemInfo() = default ;
    DescribeRenderingInstanceResponseBodySystemInfo& operator=(const DescribeRenderingInstanceResponseBodySystemInfo &) = default ;
    DescribeRenderingInstanceResponseBodySystemInfo& operator=(DescribeRenderingInstanceResponseBodySystemInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->frequency_ == nullptr
        && return this->resolution_ == nullptr; };
    // frequency Field Functions 
    bool hasFrequency() const { return this->frequency_ != nullptr;};
    void deleteFrequency() { this->frequency_ = nullptr;};
    inline int32_t frequency() const { DARABONBA_PTR_GET_DEFAULT(frequency_, 0) };
    inline DescribeRenderingInstanceResponseBodySystemInfo& setFrequency(int32_t frequency) { DARABONBA_PTR_SET_VALUE(frequency_, frequency) };


    // resolution Field Functions 
    bool hasResolution() const { return this->resolution_ != nullptr;};
    void deleteResolution() { this->resolution_ = nullptr;};
    inline string resolution() const { DARABONBA_PTR_GET_DEFAULT(resolution_, "") };
    inline DescribeRenderingInstanceResponseBodySystemInfo& setResolution(string resolution) { DARABONBA_PTR_SET_VALUE(resolution_, resolution) };


  protected:
    std::shared_ptr<int32_t> frequency_ = nullptr;
    std::shared_ptr<string> resolution_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
