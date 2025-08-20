// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMPACTIONSERVICESWITCHRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMPACTIONSERVICESWITCHRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeCompactionServiceSwitchResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCompactionServiceSwitchResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(EnableCompactionService, enableCompactionService_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCompactionServiceSwitchResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableCompactionService, enableCompactionService_);
    };
    DescribeCompactionServiceSwitchResponseBodyData() = default ;
    DescribeCompactionServiceSwitchResponseBodyData(const DescribeCompactionServiceSwitchResponseBodyData &) = default ;
    DescribeCompactionServiceSwitchResponseBodyData(DescribeCompactionServiceSwitchResponseBodyData &&) = default ;
    DescribeCompactionServiceSwitchResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCompactionServiceSwitchResponseBodyData() = default ;
    DescribeCompactionServiceSwitchResponseBodyData& operator=(const DescribeCompactionServiceSwitchResponseBodyData &) = default ;
    DescribeCompactionServiceSwitchResponseBodyData& operator=(DescribeCompactionServiceSwitchResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enableCompactionService_ != nullptr; };
    // enableCompactionService Field Functions 
    bool hasEnableCompactionService() const { return this->enableCompactionService_ != nullptr;};
    void deleteEnableCompactionService() { this->enableCompactionService_ = nullptr;};
    inline bool enableCompactionService() const { DARABONBA_PTR_GET_DEFAULT(enableCompactionService_, false) };
    inline DescribeCompactionServiceSwitchResponseBodyData& setEnableCompactionService(bool enableCompactionService) { DARABONBA_PTR_SET_VALUE(enableCompactionService_, enableCompactionService) };


  protected:
    // Indicates whether the remote build feature is enabled.
    // 
    // Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> enableCompactionService_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
