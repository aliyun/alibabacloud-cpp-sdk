// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEDASCONTAINERSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEDASCONTAINERSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeEdasContainersResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEdasContainersResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Disabled, disabled_);
      DARABONBA_PTR_TO_JSON(EdasContainerVersion, edasContainerVersion_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEdasContainersResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Disabled, disabled_);
      DARABONBA_PTR_FROM_JSON(EdasContainerVersion, edasContainerVersion_);
    };
    DescribeEdasContainersResponseBodyData() = default ;
    DescribeEdasContainersResponseBodyData(const DescribeEdasContainersResponseBodyData &) = default ;
    DescribeEdasContainersResponseBodyData(DescribeEdasContainersResponseBodyData &&) = default ;
    DescribeEdasContainersResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEdasContainersResponseBodyData() = default ;
    DescribeEdasContainersResponseBodyData& operator=(const DescribeEdasContainersResponseBodyData &) = default ;
    DescribeEdasContainersResponseBodyData& operator=(DescribeEdasContainersResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->disabled_ != nullptr
        && this->edasContainerVersion_ != nullptr; };
    // disabled Field Functions 
    bool hasDisabled() const { return this->disabled_ != nullptr;};
    void deleteDisabled() { this->disabled_ = nullptr;};
    inline bool disabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, false) };
    inline DescribeEdasContainersResponseBodyData& setDisabled(bool disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


    // edasContainerVersion Field Functions 
    bool hasEdasContainerVersion() const { return this->edasContainerVersion_ != nullptr;};
    void deleteEdasContainerVersion() { this->edasContainerVersion_ = nullptr;};
    inline string edasContainerVersion() const { DARABONBA_PTR_GET_DEFAULT(edasContainerVersion_, "") };
    inline DescribeEdasContainersResponseBodyData& setEdasContainerVersion(string edasContainerVersion) { DARABONBA_PTR_SET_VALUE(edasContainerVersion_, edasContainerVersion) };


  protected:
    // Indicates whether the component is disabled. Valid values:
    // 
    // *   **true**: The component is disabled.
    // *   **false**: The component is not disabled.
    std::shared_ptr<bool> disabled_ = nullptr;
    // The version of the container, such as Ali-Tomcat, in which an application that is developed based on High-speed Service Framework (HSF) is deployed.
    std::shared_ptr<string> edasContainerVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
