// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FILTERUSERSRESPONSEBODYUSERSEXTERNALINFO_HPP_
#define ALIBABACLOUD_MODELS_FILTERUSERSRESPONSEBODYUSERSEXTERNALINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class FilterUsersResponseBodyUsersExternalInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FilterUsersResponseBodyUsersExternalInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ExternalName, externalName_);
      DARABONBA_PTR_TO_JSON(JobNumber, jobNumber_);
    };
    friend void from_json(const Darabonba::Json& j, FilterUsersResponseBodyUsersExternalInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ExternalName, externalName_);
      DARABONBA_PTR_FROM_JSON(JobNumber, jobNumber_);
    };
    FilterUsersResponseBodyUsersExternalInfo() = default ;
    FilterUsersResponseBodyUsersExternalInfo(const FilterUsersResponseBodyUsersExternalInfo &) = default ;
    FilterUsersResponseBodyUsersExternalInfo(FilterUsersResponseBodyUsersExternalInfo &&) = default ;
    FilterUsersResponseBodyUsersExternalInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FilterUsersResponseBodyUsersExternalInfo() = default ;
    FilterUsersResponseBodyUsersExternalInfo& operator=(const FilterUsersResponseBodyUsersExternalInfo &) = default ;
    FilterUsersResponseBodyUsersExternalInfo& operator=(FilterUsersResponseBodyUsersExternalInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->externalName_ == nullptr
        && return this->jobNumber_ == nullptr; };
    // externalName Field Functions 
    bool hasExternalName() const { return this->externalName_ != nullptr;};
    void deleteExternalName() { this->externalName_ = nullptr;};
    inline string externalName() const { DARABONBA_PTR_GET_DEFAULT(externalName_, "") };
    inline FilterUsersResponseBodyUsersExternalInfo& setExternalName(string externalName) { DARABONBA_PTR_SET_VALUE(externalName_, externalName) };


    // jobNumber Field Functions 
    bool hasJobNumber() const { return this->jobNumber_ != nullptr;};
    void deleteJobNumber() { this->jobNumber_ = nullptr;};
    inline string jobNumber() const { DARABONBA_PTR_GET_DEFAULT(jobNumber_, "") };
    inline FilterUsersResponseBodyUsersExternalInfo& setJobNumber(string jobNumber) { DARABONBA_PTR_SET_VALUE(jobNumber_, jobNumber) };


  protected:
    // The account that is associated with the convenience user.
    std::shared_ptr<string> externalName_ = nullptr;
    // The account, student ID, or employee ID that is associated with the convenience user.
    std::shared_ptr<string> jobNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
