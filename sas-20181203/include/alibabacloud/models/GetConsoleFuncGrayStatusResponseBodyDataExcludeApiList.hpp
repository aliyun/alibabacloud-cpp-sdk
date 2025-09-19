// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONSOLEFUNCGRAYSTATUSRESPONSEBODYDATAEXCLUDEAPILIST_HPP_
#define ALIBABACLOUD_MODELS_GETCONSOLEFUNCGRAYSTATUSRESPONSEBODYDATAEXCLUDEAPILIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetConsoleFuncGrayStatusResponseBodyDataExcludeApiList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConsoleFuncGrayStatusResponseBodyDataExcludeApiList& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetConsoleFuncGrayStatusResponseBodyDataExcludeApiList& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    GetConsoleFuncGrayStatusResponseBodyDataExcludeApiList() = default ;
    GetConsoleFuncGrayStatusResponseBodyDataExcludeApiList(const GetConsoleFuncGrayStatusResponseBodyDataExcludeApiList &) = default ;
    GetConsoleFuncGrayStatusResponseBodyDataExcludeApiList(GetConsoleFuncGrayStatusResponseBodyDataExcludeApiList &&) = default ;
    GetConsoleFuncGrayStatusResponseBodyDataExcludeApiList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConsoleFuncGrayStatusResponseBodyDataExcludeApiList() = default ;
    GetConsoleFuncGrayStatusResponseBodyDataExcludeApiList& operator=(const GetConsoleFuncGrayStatusResponseBodyDataExcludeApiList &) = default ;
    GetConsoleFuncGrayStatusResponseBodyDataExcludeApiList& operator=(GetConsoleFuncGrayStatusResponseBodyDataExcludeApiList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->action_ != nullptr
        && this->code_ != nullptr && this->version_ != nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline GetConsoleFuncGrayStatusResponseBodyDataExcludeApiList& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetConsoleFuncGrayStatusResponseBodyDataExcludeApiList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetConsoleFuncGrayStatusResponseBodyDataExcludeApiList& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // Action corresponding to the API.
    std::shared_ptr<string> action_ = nullptr;
    // Product Code.
    std::shared_ptr<string> code_ = nullptr;
    // API version.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
