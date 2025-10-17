// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTROLLERDETECTIONRESPONSEBODYDETECTIONITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTROLLERDETECTIONRESPONSEBODYDETECTIONITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeControllerDetectionResponseBodyDetectionItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeControllerDetectionResponseBodyDetectionItems& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeControllerDetectionResponseBodyDetectionItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeControllerDetectionResponseBodyDetectionItems() = default ;
    DescribeControllerDetectionResponseBodyDetectionItems(const DescribeControllerDetectionResponseBodyDetectionItems &) = default ;
    DescribeControllerDetectionResponseBodyDetectionItems(DescribeControllerDetectionResponseBodyDetectionItems &&) = default ;
    DescribeControllerDetectionResponseBodyDetectionItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeControllerDetectionResponseBodyDetectionItems() = default ;
    DescribeControllerDetectionResponseBodyDetectionItems& operator=(const DescribeControllerDetectionResponseBodyDetectionItems &) = default ;
    DescribeControllerDetectionResponseBodyDetectionItems& operator=(DescribeControllerDetectionResponseBodyDetectionItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->message_ == nullptr
        && return this->name_ == nullptr && return this->status_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeControllerDetectionResponseBodyDetectionItems& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeControllerDetectionResponseBodyDetectionItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeControllerDetectionResponseBodyDetectionItems& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The information about the detection result.
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
