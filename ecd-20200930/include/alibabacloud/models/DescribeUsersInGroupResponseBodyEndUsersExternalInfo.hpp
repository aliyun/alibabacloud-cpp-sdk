// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERSINGROUPRESPONSEBODYENDUSERSEXTERNALINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERSINGROUPRESPONSEBODYENDUSERSEXTERNALINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeUsersInGroupResponseBodyEndUsersExternalInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUsersInGroupResponseBodyEndUsersExternalInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ExternalName, externalName_);
      DARABONBA_PTR_TO_JSON(JobNumber, jobNumber_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUsersInGroupResponseBodyEndUsersExternalInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ExternalName, externalName_);
      DARABONBA_PTR_FROM_JSON(JobNumber, jobNumber_);
    };
    DescribeUsersInGroupResponseBodyEndUsersExternalInfo() = default ;
    DescribeUsersInGroupResponseBodyEndUsersExternalInfo(const DescribeUsersInGroupResponseBodyEndUsersExternalInfo &) = default ;
    DescribeUsersInGroupResponseBodyEndUsersExternalInfo(DescribeUsersInGroupResponseBodyEndUsersExternalInfo &&) = default ;
    DescribeUsersInGroupResponseBodyEndUsersExternalInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUsersInGroupResponseBodyEndUsersExternalInfo() = default ;
    DescribeUsersInGroupResponseBodyEndUsersExternalInfo& operator=(const DescribeUsersInGroupResponseBodyEndUsersExternalInfo &) = default ;
    DescribeUsersInGroupResponseBodyEndUsersExternalInfo& operator=(DescribeUsersInGroupResponseBodyEndUsersExternalInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->externalName_ != nullptr
        && this->jobNumber_ != nullptr; };
    // externalName Field Functions 
    bool hasExternalName() const { return this->externalName_ != nullptr;};
    void deleteExternalName() { this->externalName_ = nullptr;};
    inline string externalName() const { DARABONBA_PTR_GET_DEFAULT(externalName_, "") };
    inline DescribeUsersInGroupResponseBodyEndUsersExternalInfo& setExternalName(string externalName) { DARABONBA_PTR_SET_VALUE(externalName_, externalName) };


    // jobNumber Field Functions 
    bool hasJobNumber() const { return this->jobNumber_ != nullptr;};
    void deleteJobNumber() { this->jobNumber_ = nullptr;};
    inline string jobNumber() const { DARABONBA_PTR_GET_DEFAULT(jobNumber_, "") };
    inline DescribeUsersInGroupResponseBodyEndUsersExternalInfo& setJobNumber(string jobNumber) { DARABONBA_PTR_SET_VALUE(jobNumber_, jobNumber) };


  protected:
    // The external name.
    std::shared_ptr<string> externalName_ = nullptr;
    // The employee ID.
    std::shared_ptr<string> jobNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
