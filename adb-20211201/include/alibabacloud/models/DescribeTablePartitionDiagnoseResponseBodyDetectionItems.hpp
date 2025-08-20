// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETABLEPARTITIONDIAGNOSERESPONSEBODYDETECTIONITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETABLEPARTITIONDIAGNOSERESPONSEBODYDETECTIONITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeTablePartitionDiagnoseResponseBodyDetectionItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTablePartitionDiagnoseResponseBodyDetectionItems& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTablePartitionDiagnoseResponseBodyDetectionItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeTablePartitionDiagnoseResponseBodyDetectionItems() = default ;
    DescribeTablePartitionDiagnoseResponseBodyDetectionItems(const DescribeTablePartitionDiagnoseResponseBodyDetectionItems &) = default ;
    DescribeTablePartitionDiagnoseResponseBodyDetectionItems(DescribeTablePartitionDiagnoseResponseBodyDetectionItems &&) = default ;
    DescribeTablePartitionDiagnoseResponseBodyDetectionItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTablePartitionDiagnoseResponseBodyDetectionItems() = default ;
    DescribeTablePartitionDiagnoseResponseBodyDetectionItems& operator=(const DescribeTablePartitionDiagnoseResponseBodyDetectionItems &) = default ;
    DescribeTablePartitionDiagnoseResponseBodyDetectionItems& operator=(DescribeTablePartitionDiagnoseResponseBodyDetectionItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->message_ != nullptr
        && this->name_ != nullptr && this->status_ != nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeTablePartitionDiagnoseResponseBodyDetectionItems& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeTablePartitionDiagnoseResponseBodyDetectionItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeTablePartitionDiagnoseResponseBodyDetectionItems& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The detection result.
    std::shared_ptr<string> message_ = nullptr;
    // The name of the detection item.
    std::shared_ptr<string> name_ = nullptr;
    // The severity level of the detection result. Valid values:
    // 
    // *   NORMAL
    // *   WARNING
    // *   CRITICAL
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
