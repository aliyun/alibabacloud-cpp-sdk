// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCOUNTLABELRESPONSEBODYACCOUNTLABELLIST_HPP_
#define ALIBABACLOUD_MODELS_GETACCOUNTLABELRESPONSEBODYACCOUNTLABELLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAccountLabelResponseBodyAccountLabelList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccountLabelResponseBodyAccountLabelList& obj) { 
      DARABONBA_PTR_TO_JSON(LabelSeries, labelSeries_);
      DARABONBA_PTR_TO_JSON(LabelStatus, labelStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccountLabelResponseBodyAccountLabelList& obj) { 
      DARABONBA_PTR_FROM_JSON(LabelSeries, labelSeries_);
      DARABONBA_PTR_FROM_JSON(LabelStatus, labelStatus_);
    };
    GetAccountLabelResponseBodyAccountLabelList() = default ;
    GetAccountLabelResponseBodyAccountLabelList(const GetAccountLabelResponseBodyAccountLabelList &) = default ;
    GetAccountLabelResponseBodyAccountLabelList(GetAccountLabelResponseBodyAccountLabelList &&) = default ;
    GetAccountLabelResponseBodyAccountLabelList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccountLabelResponseBodyAccountLabelList() = default ;
    GetAccountLabelResponseBodyAccountLabelList& operator=(const GetAccountLabelResponseBodyAccountLabelList &) = default ;
    GetAccountLabelResponseBodyAccountLabelList& operator=(GetAccountLabelResponseBodyAccountLabelList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->labelSeries_ != nullptr
        && this->labelStatus_ != nullptr; };
    // labelSeries Field Functions 
    bool hasLabelSeries() const { return this->labelSeries_ != nullptr;};
    void deleteLabelSeries() { this->labelSeries_ = nullptr;};
    inline string labelSeries() const { DARABONBA_PTR_GET_DEFAULT(labelSeries_, "") };
    inline GetAccountLabelResponseBodyAccountLabelList& setLabelSeries(string labelSeries) { DARABONBA_PTR_SET_VALUE(labelSeries_, labelSeries) };


    // labelStatus Field Functions 
    bool hasLabelStatus() const { return this->labelStatus_ != nullptr;};
    void deleteLabelStatus() { this->labelStatus_ = nullptr;};
    inline bool labelStatus() const { DARABONBA_PTR_GET_DEFAULT(labelStatus_, false) };
    inline GetAccountLabelResponseBodyAccountLabelList& setLabelStatus(bool labelStatus) { DARABONBA_PTR_SET_VALUE(labelStatus_, labelStatus) };


  protected:
    // The tag information.
    std::shared_ptr<string> labelSeries_ = nullptr;
    // Indicates whether the tag is valid.
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> labelStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
