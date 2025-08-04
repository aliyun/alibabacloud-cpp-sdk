// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDESKTOPSPOLICYGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDESKTOPSPOLICYGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyDesktopsPolicyGroupResponseBodyModifyResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyDesktopsPolicyGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDesktopsPolicyGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ModifyResults, modifyResults_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDesktopsPolicyGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ModifyResults, modifyResults_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyDesktopsPolicyGroupResponseBody() = default ;
    ModifyDesktopsPolicyGroupResponseBody(const ModifyDesktopsPolicyGroupResponseBody &) = default ;
    ModifyDesktopsPolicyGroupResponseBody(ModifyDesktopsPolicyGroupResponseBody &&) = default ;
    ModifyDesktopsPolicyGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDesktopsPolicyGroupResponseBody() = default ;
    ModifyDesktopsPolicyGroupResponseBody& operator=(const ModifyDesktopsPolicyGroupResponseBody &) = default ;
    ModifyDesktopsPolicyGroupResponseBody& operator=(ModifyDesktopsPolicyGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->modifyResults_ != nullptr
        && this->requestId_ != nullptr; };
    // modifyResults Field Functions 
    bool hasModifyResults() const { return this->modifyResults_ != nullptr;};
    void deleteModifyResults() { this->modifyResults_ = nullptr;};
    inline const vector<ModifyDesktopsPolicyGroupResponseBodyModifyResults> & modifyResults() const { DARABONBA_PTR_GET_CONST(modifyResults_, vector<ModifyDesktopsPolicyGroupResponseBodyModifyResults>) };
    inline vector<ModifyDesktopsPolicyGroupResponseBodyModifyResults> modifyResults() { DARABONBA_PTR_GET(modifyResults_, vector<ModifyDesktopsPolicyGroupResponseBodyModifyResults>) };
    inline ModifyDesktopsPolicyGroupResponseBody& setModifyResults(const vector<ModifyDesktopsPolicyGroupResponseBodyModifyResults> & modifyResults) { DARABONBA_PTR_SET_VALUE(modifyResults_, modifyResults) };
    inline ModifyDesktopsPolicyGroupResponseBody& setModifyResults(vector<ModifyDesktopsPolicyGroupResponseBodyModifyResults> && modifyResults) { DARABONBA_PTR_SET_RVALUE(modifyResults_, modifyResults) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyDesktopsPolicyGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The request results.
    std::shared_ptr<vector<ModifyDesktopsPolicyGroupResponseBodyModifyResults>> modifyResults_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
