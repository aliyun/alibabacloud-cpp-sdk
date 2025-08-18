// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKUSERPROJECTNAMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKUSERPROJECTNAMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CheckUserProjectNameResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckUserProjectNameResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Check, check_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckUserProjectNameResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Check, check_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CheckUserProjectNameResponseBody() = default ;
    CheckUserProjectNameResponseBody(const CheckUserProjectNameResponseBody &) = default ;
    CheckUserProjectNameResponseBody(CheckUserProjectNameResponseBody &&) = default ;
    CheckUserProjectNameResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckUserProjectNameResponseBody() = default ;
    CheckUserProjectNameResponseBody& operator=(const CheckUserProjectNameResponseBody &) = default ;
    CheckUserProjectNameResponseBody& operator=(CheckUserProjectNameResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->check_ != nullptr
        && this->description_ != nullptr && this->projectName_ != nullptr && this->requestId_ != nullptr; };
    // check Field Functions 
    bool hasCheck() const { return this->check_ != nullptr;};
    void deleteCheck() { this->check_ = nullptr;};
    inline bool check() const { DARABONBA_PTR_GET_DEFAULT(check_, false) };
    inline CheckUserProjectNameResponseBody& setCheck(bool check) { DARABONBA_PTR_SET_VALUE(check_, check) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CheckUserProjectNameResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CheckUserProjectNameResponseBody& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckUserProjectNameResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether the name is valid. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> check_ = nullptr;
    // The reason why the name passed or failed the check.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the real-time log delivery task.
    std::shared_ptr<string> projectName_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
