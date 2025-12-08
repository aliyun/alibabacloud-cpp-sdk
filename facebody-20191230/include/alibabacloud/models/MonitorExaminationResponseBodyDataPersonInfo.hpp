// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MONITOREXAMINATIONRESPONSEBODYDATAPERSONINFO_HPP_
#define ALIBABACLOUD_MODELS_MONITOREXAMINATIONRESPONSEBODYDATAPERSONINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MonitorExaminationResponseBodyDataPersonInfoCellPhone.hpp>
#include <alibabacloud/models/MonitorExaminationResponseBodyDataPersonInfoEarPhone.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class MonitorExaminationResponseBodyDataPersonInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MonitorExaminationResponseBodyDataPersonInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CellPhone, cellPhone_);
      DARABONBA_PTR_TO_JSON(EarPhone, earPhone_);
      DARABONBA_PTR_TO_JSON(PersonNumber, personNumber_);
    };
    friend void from_json(const Darabonba::Json& j, MonitorExaminationResponseBodyDataPersonInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CellPhone, cellPhone_);
      DARABONBA_PTR_FROM_JSON(EarPhone, earPhone_);
      DARABONBA_PTR_FROM_JSON(PersonNumber, personNumber_);
    };
    MonitorExaminationResponseBodyDataPersonInfo() = default ;
    MonitorExaminationResponseBodyDataPersonInfo(const MonitorExaminationResponseBodyDataPersonInfo &) = default ;
    MonitorExaminationResponseBodyDataPersonInfo(MonitorExaminationResponseBodyDataPersonInfo &&) = default ;
    MonitorExaminationResponseBodyDataPersonInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MonitorExaminationResponseBodyDataPersonInfo() = default ;
    MonitorExaminationResponseBodyDataPersonInfo& operator=(const MonitorExaminationResponseBodyDataPersonInfo &) = default ;
    MonitorExaminationResponseBodyDataPersonInfo& operator=(MonitorExaminationResponseBodyDataPersonInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cellPhone_ == nullptr
        && return this->earPhone_ == nullptr && return this->personNumber_ == nullptr; };
    // cellPhone Field Functions 
    bool hasCellPhone() const { return this->cellPhone_ != nullptr;};
    void deleteCellPhone() { this->cellPhone_ = nullptr;};
    inline const Models::MonitorExaminationResponseBodyDataPersonInfoCellPhone & cellPhone() const { DARABONBA_PTR_GET_CONST(cellPhone_, Models::MonitorExaminationResponseBodyDataPersonInfoCellPhone) };
    inline Models::MonitorExaminationResponseBodyDataPersonInfoCellPhone cellPhone() { DARABONBA_PTR_GET(cellPhone_, Models::MonitorExaminationResponseBodyDataPersonInfoCellPhone) };
    inline MonitorExaminationResponseBodyDataPersonInfo& setCellPhone(const Models::MonitorExaminationResponseBodyDataPersonInfoCellPhone & cellPhone) { DARABONBA_PTR_SET_VALUE(cellPhone_, cellPhone) };
    inline MonitorExaminationResponseBodyDataPersonInfo& setCellPhone(Models::MonitorExaminationResponseBodyDataPersonInfoCellPhone && cellPhone) { DARABONBA_PTR_SET_RVALUE(cellPhone_, cellPhone) };


    // earPhone Field Functions 
    bool hasEarPhone() const { return this->earPhone_ != nullptr;};
    void deleteEarPhone() { this->earPhone_ = nullptr;};
    inline const Models::MonitorExaminationResponseBodyDataPersonInfoEarPhone & earPhone() const { DARABONBA_PTR_GET_CONST(earPhone_, Models::MonitorExaminationResponseBodyDataPersonInfoEarPhone) };
    inline Models::MonitorExaminationResponseBodyDataPersonInfoEarPhone earPhone() { DARABONBA_PTR_GET(earPhone_, Models::MonitorExaminationResponseBodyDataPersonInfoEarPhone) };
    inline MonitorExaminationResponseBodyDataPersonInfo& setEarPhone(const Models::MonitorExaminationResponseBodyDataPersonInfoEarPhone & earPhone) { DARABONBA_PTR_SET_VALUE(earPhone_, earPhone) };
    inline MonitorExaminationResponseBodyDataPersonInfo& setEarPhone(Models::MonitorExaminationResponseBodyDataPersonInfoEarPhone && earPhone) { DARABONBA_PTR_SET_RVALUE(earPhone_, earPhone) };


    // personNumber Field Functions 
    bool hasPersonNumber() const { return this->personNumber_ != nullptr;};
    void deletePersonNumber() { this->personNumber_ = nullptr;};
    inline int64_t personNumber() const { DARABONBA_PTR_GET_DEFAULT(personNumber_, 0L) };
    inline MonitorExaminationResponseBodyDataPersonInfo& setPersonNumber(int64_t personNumber) { DARABONBA_PTR_SET_VALUE(personNumber_, personNumber) };


  protected:
    std::shared_ptr<Models::MonitorExaminationResponseBodyDataPersonInfoCellPhone> cellPhone_ = nullptr;
    std::shared_ptr<Models::MonitorExaminationResponseBodyDataPersonInfoEarPhone> earPhone_ = nullptr;
    std::shared_ptr<int64_t> personNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
