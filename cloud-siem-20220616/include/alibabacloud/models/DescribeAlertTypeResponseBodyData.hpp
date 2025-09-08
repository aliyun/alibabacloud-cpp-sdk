// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALERTTYPERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALERTTYPERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeAlertTypeResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlertTypeResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AlertType, alertType_);
      DARABONBA_PTR_TO_JSON(AlertTypeMds, alertTypeMds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlertTypeResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertType, alertType_);
      DARABONBA_PTR_FROM_JSON(AlertTypeMds, alertTypeMds_);
    };
    DescribeAlertTypeResponseBodyData() = default ;
    DescribeAlertTypeResponseBodyData(const DescribeAlertTypeResponseBodyData &) = default ;
    DescribeAlertTypeResponseBodyData(DescribeAlertTypeResponseBodyData &&) = default ;
    DescribeAlertTypeResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlertTypeResponseBodyData() = default ;
    DescribeAlertTypeResponseBodyData& operator=(const DescribeAlertTypeResponseBodyData &) = default ;
    DescribeAlertTypeResponseBodyData& operator=(DescribeAlertTypeResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertType_ != nullptr
        && this->alertTypeMds_ != nullptr; };
    // alertType Field Functions 
    bool hasAlertType() const { return this->alertType_ != nullptr;};
    void deleteAlertType() { this->alertType_ = nullptr;};
    inline string alertType() const { DARABONBA_PTR_GET_DEFAULT(alertType_, "") };
    inline DescribeAlertTypeResponseBodyData& setAlertType(string alertType) { DARABONBA_PTR_SET_VALUE(alertType_, alertType) };


    // alertTypeMds Field Functions 
    bool hasAlertTypeMds() const { return this->alertTypeMds_ != nullptr;};
    void deleteAlertTypeMds() { this->alertTypeMds_ = nullptr;};
    inline string alertTypeMds() const { DARABONBA_PTR_GET_DEFAULT(alertTypeMds_, "") };
    inline DescribeAlertTypeResponseBodyData& setAlertTypeMds(string alertTypeMds) { DARABONBA_PTR_SET_VALUE(alertTypeMds_, alertTypeMds) };


  protected:
    // The type of the risk.
    std::shared_ptr<string> alertType_ = nullptr;
    // The internal code of the risk type.
    std::shared_ptr<string> alertTypeMds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
