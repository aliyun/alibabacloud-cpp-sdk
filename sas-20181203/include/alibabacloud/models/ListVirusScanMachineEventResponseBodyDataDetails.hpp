// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVIRUSSCANMACHINEEVENTRESPONSEBODYDATADETAILS_HPP_
#define ALIBABACLOUD_MODELS_LISTVIRUSSCANMACHINEEVENTRESPONSEBODYDATADETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListVirusScanMachineEventResponseBodyDataDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVirusScanMachineEventResponseBodyDataDetails& obj) { 
      DARABONBA_PTR_TO_JSON(InfoType, infoType_);
      DARABONBA_PTR_TO_JSON(NameDisplay, nameDisplay_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(ValueDisplay, valueDisplay_);
    };
    friend void from_json(const Darabonba::Json& j, ListVirusScanMachineEventResponseBodyDataDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(InfoType, infoType_);
      DARABONBA_PTR_FROM_JSON(NameDisplay, nameDisplay_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(ValueDisplay, valueDisplay_);
    };
    ListVirusScanMachineEventResponseBodyDataDetails() = default ;
    ListVirusScanMachineEventResponseBodyDataDetails(const ListVirusScanMachineEventResponseBodyDataDetails &) = default ;
    ListVirusScanMachineEventResponseBodyDataDetails(ListVirusScanMachineEventResponseBodyDataDetails &&) = default ;
    ListVirusScanMachineEventResponseBodyDataDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVirusScanMachineEventResponseBodyDataDetails() = default ;
    ListVirusScanMachineEventResponseBodyDataDetails& operator=(const ListVirusScanMachineEventResponseBodyDataDetails &) = default ;
    ListVirusScanMachineEventResponseBodyDataDetails& operator=(ListVirusScanMachineEventResponseBodyDataDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->infoType_ == nullptr
        && return this->nameDisplay_ == nullptr && return this->type_ == nullptr && return this->valueDisplay_ == nullptr; };
    // infoType Field Functions 
    bool hasInfoType() const { return this->infoType_ != nullptr;};
    void deleteInfoType() { this->infoType_ = nullptr;};
    inline string infoType() const { DARABONBA_PTR_GET_DEFAULT(infoType_, "") };
    inline ListVirusScanMachineEventResponseBodyDataDetails& setInfoType(string infoType) { DARABONBA_PTR_SET_VALUE(infoType_, infoType) };


    // nameDisplay Field Functions 
    bool hasNameDisplay() const { return this->nameDisplay_ != nullptr;};
    void deleteNameDisplay() { this->nameDisplay_ = nullptr;};
    inline string nameDisplay() const { DARABONBA_PTR_GET_DEFAULT(nameDisplay_, "") };
    inline ListVirusScanMachineEventResponseBodyDataDetails& setNameDisplay(string nameDisplay) { DARABONBA_PTR_SET_VALUE(nameDisplay_, nameDisplay) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListVirusScanMachineEventResponseBodyDataDetails& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // valueDisplay Field Functions 
    bool hasValueDisplay() const { return this->valueDisplay_ != nullptr;};
    void deleteValueDisplay() { this->valueDisplay_ = nullptr;};
    inline string valueDisplay() const { DARABONBA_PTR_GET_DEFAULT(valueDisplay_, "") };
    inline ListVirusScanMachineEventResponseBodyDataDetails& setValueDisplay(string valueDisplay) { DARABONBA_PTR_SET_VALUE(valueDisplay_, valueDisplay) };


  protected:
    // The display type of the value for ValueDisplay. Valid value:
    // 
    // *   **download_url**, which indicates a download URL.
    std::shared_ptr<string> infoType_ = nullptr;
    // The display name of the alert event.
    std::shared_ptr<string> nameDisplay_ = nullptr;
    // The format in which the details of the exception are displayed.
    // 
    // Valid values:
    // 
    // *   **text**
    // *   **html**
    std::shared_ptr<string> type_ = nullptr;
    // The attribute information about the exception. The information includes the logon time or location of an alert triggered by an unusual logon, and the trojan file path or trojan type of an alert.
    std::shared_ptr<string> valueDisplay_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
