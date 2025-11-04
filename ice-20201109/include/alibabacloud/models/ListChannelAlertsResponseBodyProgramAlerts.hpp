// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHANNELALERTSRESPONSEBODYPROGRAMALERTS_HPP_
#define ALIBABACLOUD_MODELS_LISTCHANNELALERTSRESPONSEBODYPROGRAMALERTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListChannelAlertsResponseBodyProgramAlerts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListChannelAlertsResponseBodyProgramAlerts& obj) { 
      DARABONBA_PTR_TO_JSON(Arn, arn_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(ProgramName, programName_);
    };
    friend void from_json(const Darabonba::Json& j, ListChannelAlertsResponseBodyProgramAlerts& obj) { 
      DARABONBA_PTR_FROM_JSON(Arn, arn_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(ProgramName, programName_);
    };
    ListChannelAlertsResponseBodyProgramAlerts() = default ;
    ListChannelAlertsResponseBodyProgramAlerts(const ListChannelAlertsResponseBodyProgramAlerts &) = default ;
    ListChannelAlertsResponseBodyProgramAlerts(ListChannelAlertsResponseBodyProgramAlerts &&) = default ;
    ListChannelAlertsResponseBodyProgramAlerts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListChannelAlertsResponseBodyProgramAlerts() = default ;
    ListChannelAlertsResponseBodyProgramAlerts& operator=(const ListChannelAlertsResponseBodyProgramAlerts &) = default ;
    ListChannelAlertsResponseBodyProgramAlerts& operator=(ListChannelAlertsResponseBodyProgramAlerts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arn_ == nullptr
        && return this->category_ == nullptr && return this->count_ == nullptr && return this->gmtModified_ == nullptr && return this->programName_ == nullptr; };
    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline string arn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
    inline ListChannelAlertsResponseBodyProgramAlerts& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ListChannelAlertsResponseBodyProgramAlerts& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ListChannelAlertsResponseBodyProgramAlerts& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListChannelAlertsResponseBodyProgramAlerts& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // programName Field Functions 
    bool hasProgramName() const { return this->programName_ != nullptr;};
    void deleteProgramName() { this->programName_ = nullptr;};
    inline string programName() const { DARABONBA_PTR_GET_DEFAULT(programName_, "") };
    inline ListChannelAlertsResponseBodyProgramAlerts& setProgramName(string programName) { DARABONBA_PTR_SET_VALUE(programName_, programName) };


  protected:
    // The ARN of the program.
    std::shared_ptr<string> arn_ = nullptr;
    // The alert type.
    std::shared_ptr<string> category_ = nullptr;
    // The number of alerts.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The time when the alert was last modified in UTC.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The name of the program.
    std::shared_ptr<string> programName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
