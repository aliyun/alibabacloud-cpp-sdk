// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYUSERWAFLOGSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYUSERWAFLOGSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class ModifyUserWafLogStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyUserWafLogStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyUserWafLogStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyUserWafLogStatusResponseBody() = default ;
    ModifyUserWafLogStatusResponseBody(const ModifyUserWafLogStatusResponseBody &) = default ;
    ModifyUserWafLogStatusResponseBody(ModifyUserWafLogStatusResponseBody &&) = default ;
    ModifyUserWafLogStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyUserWafLogStatusResponseBody() = default ;
    ModifyUserWafLogStatusResponseBody& operator=(const ModifyUserWafLogStatusResponseBody &) = default ;
    ModifyUserWafLogStatusResponseBody& operator=(ModifyUserWafLogStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logStoreName_ == nullptr
        && return this->projectName_ == nullptr && return this->requestId_ == nullptr; };
    // logStoreName Field Functions 
    bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
    void deleteLogStoreName() { this->logStoreName_ = nullptr;};
    inline string logStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
    inline ModifyUserWafLogStatusResponseBody& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline bool projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, false) };
    inline ModifyUserWafLogStatusResponseBody& setProjectName(bool projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyUserWafLogStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> logStoreName_ = nullptr;
    std::shared_ptr<bool> projectName_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
