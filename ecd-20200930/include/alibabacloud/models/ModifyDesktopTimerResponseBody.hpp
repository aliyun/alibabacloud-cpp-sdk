// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDESKTOPTIMERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDESKTOPTIMERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyDesktopTimerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDesktopTimerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopIds, desktopIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDesktopTimerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopIds, desktopIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyDesktopTimerResponseBody() = default ;
    ModifyDesktopTimerResponseBody(const ModifyDesktopTimerResponseBody &) = default ;
    ModifyDesktopTimerResponseBody(ModifyDesktopTimerResponseBody &&) = default ;
    ModifyDesktopTimerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDesktopTimerResponseBody() = default ;
    ModifyDesktopTimerResponseBody& operator=(const ModifyDesktopTimerResponseBody &) = default ;
    ModifyDesktopTimerResponseBody& operator=(ModifyDesktopTimerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desktopIds_ == nullptr
        && this->requestId_ == nullptr; };
    // desktopIds Field Functions 
    bool hasDesktopIds() const { return this->desktopIds_ != nullptr;};
    void deleteDesktopIds() { this->desktopIds_ = nullptr;};
    inline const vector<string> & getDesktopIds() const { DARABONBA_PTR_GET_CONST(desktopIds_, vector<string>) };
    inline vector<string> getDesktopIds() { DARABONBA_PTR_GET(desktopIds_, vector<string>) };
    inline ModifyDesktopTimerResponseBody& setDesktopIds(const vector<string> & desktopIds) { DARABONBA_PTR_SET_VALUE(desktopIds_, desktopIds) };
    inline ModifyDesktopTimerResponseBody& setDesktopIds(vector<string> && desktopIds) { DARABONBA_PTR_SET_RVALUE(desktopIds_, desktopIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyDesktopTimerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The IDs of the cloud computers for which you successfully configure the scheduled task.
    shared_ptr<vector<string>> desktopIds_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
