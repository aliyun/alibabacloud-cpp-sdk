// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREPORTTEMPLATEBYNAMERESPONSEBODYDEFAULTRECEIVERS_HPP_
#define ALIBABACLOUD_MODELS_GETREPORTTEMPLATEBYNAMERESPONSEBODYDEFAULTRECEIVERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetReportTemplateByNameResponseBodyDefaultReceivers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetReportTemplateByNameResponseBodyDefaultReceivers& obj) { 
      DARABONBA_PTR_TO_JSON(UserName, userName_);
      DARABONBA_PTR_TO_JSON(Userid, userid_);
    };
    friend void from_json(const Darabonba::Json& j, GetReportTemplateByNameResponseBodyDefaultReceivers& obj) { 
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
      DARABONBA_PTR_FROM_JSON(Userid, userid_);
    };
    GetReportTemplateByNameResponseBodyDefaultReceivers() = default ;
    GetReportTemplateByNameResponseBodyDefaultReceivers(const GetReportTemplateByNameResponseBodyDefaultReceivers &) = default ;
    GetReportTemplateByNameResponseBodyDefaultReceivers(GetReportTemplateByNameResponseBodyDefaultReceivers &&) = default ;
    GetReportTemplateByNameResponseBodyDefaultReceivers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetReportTemplateByNameResponseBodyDefaultReceivers() = default ;
    GetReportTemplateByNameResponseBodyDefaultReceivers& operator=(const GetReportTemplateByNameResponseBodyDefaultReceivers &) = default ;
    GetReportTemplateByNameResponseBodyDefaultReceivers& operator=(GetReportTemplateByNameResponseBodyDefaultReceivers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userName_ == nullptr
        && return this->userid_ == nullptr; };
    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline GetReportTemplateByNameResponseBodyDefaultReceivers& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // userid Field Functions 
    bool hasUserid() const { return this->userid_ != nullptr;};
    void deleteUserid() { this->userid_ = nullptr;};
    inline string userid() const { DARABONBA_PTR_GET_DEFAULT(userid_, "") };
    inline GetReportTemplateByNameResponseBodyDefaultReceivers& setUserid(string userid) { DARABONBA_PTR_SET_VALUE(userid_, userid) };


  protected:
    std::shared_ptr<string> userName_ = nullptr;
    std::shared_ptr<string> userid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
