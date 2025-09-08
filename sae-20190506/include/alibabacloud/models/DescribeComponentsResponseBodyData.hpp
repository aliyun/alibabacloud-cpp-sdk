// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMPONENTSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMPONENTSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeComponentsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeComponentsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentDescription, componentDescription_);
      DARABONBA_PTR_TO_JSON(ComponentKey, componentKey_);
      DARABONBA_PTR_TO_JSON(Expired, expired_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeComponentsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentDescription, componentDescription_);
      DARABONBA_PTR_FROM_JSON(ComponentKey, componentKey_);
      DARABONBA_PTR_FROM_JSON(Expired, expired_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeComponentsResponseBodyData() = default ;
    DescribeComponentsResponseBodyData(const DescribeComponentsResponseBodyData &) = default ;
    DescribeComponentsResponseBodyData(DescribeComponentsResponseBodyData &&) = default ;
    DescribeComponentsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeComponentsResponseBodyData() = default ;
    DescribeComponentsResponseBodyData& operator=(const DescribeComponentsResponseBodyData &) = default ;
    DescribeComponentsResponseBodyData& operator=(DescribeComponentsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->componentDescription_ != nullptr
        && this->componentKey_ != nullptr && this->expired_ != nullptr && this->type_ != nullptr; };
    // componentDescription Field Functions 
    bool hasComponentDescription() const { return this->componentDescription_ != nullptr;};
    void deleteComponentDescription() { this->componentDescription_ = nullptr;};
    inline string componentDescription() const { DARABONBA_PTR_GET_DEFAULT(componentDescription_, "") };
    inline DescribeComponentsResponseBodyData& setComponentDescription(string componentDescription) { DARABONBA_PTR_SET_VALUE(componentDescription_, componentDescription) };


    // componentKey Field Functions 
    bool hasComponentKey() const { return this->componentKey_ != nullptr;};
    void deleteComponentKey() { this->componentKey_ = nullptr;};
    inline string componentKey() const { DARABONBA_PTR_GET_DEFAULT(componentKey_, "") };
    inline DescribeComponentsResponseBodyData& setComponentKey(string componentKey) { DARABONBA_PTR_SET_VALUE(componentKey_, componentKey) };


    // expired Field Functions 
    bool hasExpired() const { return this->expired_ != nullptr;};
    void deleteExpired() { this->expired_ = nullptr;};
    inline bool expired() const { DARABONBA_PTR_GET_DEFAULT(expired_, false) };
    inline DescribeComponentsResponseBodyData& setExpired(bool expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeComponentsResponseBodyData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The description of the component.
    std::shared_ptr<string> componentDescription_ = nullptr;
    // The component ID.
    std::shared_ptr<string> componentKey_ = nullptr;
    // Indicates whether the component is expired. Valid values:
    // 
    // *   **true**: The component is expired.
    // *   **false**: The component is not expired.
    std::shared_ptr<bool> expired_ = nullptr;
    // The type of the component.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
