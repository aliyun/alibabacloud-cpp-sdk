// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGECHECKCUSTOMCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHANGECHECKCUSTOMCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ChangeCheckCustomConfigResponseBodyIllegalCustomConfigs.hpp>
#include <alibabacloud/models/ChangeCheckCustomConfigResponseBodyIllegalRepairConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ChangeCheckCustomConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeCheckCustomConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IllegalCustomConfigs, illegalCustomConfigs_);
      DARABONBA_PTR_TO_JSON(IllegalRepairConfigs, illegalRepairConfigs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeCheckCustomConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IllegalCustomConfigs, illegalCustomConfigs_);
      DARABONBA_PTR_FROM_JSON(IllegalRepairConfigs, illegalRepairConfigs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ChangeCheckCustomConfigResponseBody() = default ;
    ChangeCheckCustomConfigResponseBody(const ChangeCheckCustomConfigResponseBody &) = default ;
    ChangeCheckCustomConfigResponseBody(ChangeCheckCustomConfigResponseBody &&) = default ;
    ChangeCheckCustomConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeCheckCustomConfigResponseBody() = default ;
    ChangeCheckCustomConfigResponseBody& operator=(const ChangeCheckCustomConfigResponseBody &) = default ;
    ChangeCheckCustomConfigResponseBody& operator=(ChangeCheckCustomConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->illegalCustomConfigs_ != nullptr
        && this->illegalRepairConfigs_ != nullptr && this->requestId_ != nullptr; };
    // illegalCustomConfigs Field Functions 
    bool hasIllegalCustomConfigs() const { return this->illegalCustomConfigs_ != nullptr;};
    void deleteIllegalCustomConfigs() { this->illegalCustomConfigs_ = nullptr;};
    inline const vector<ChangeCheckCustomConfigResponseBodyIllegalCustomConfigs> & illegalCustomConfigs() const { DARABONBA_PTR_GET_CONST(illegalCustomConfigs_, vector<ChangeCheckCustomConfigResponseBodyIllegalCustomConfigs>) };
    inline vector<ChangeCheckCustomConfigResponseBodyIllegalCustomConfigs> illegalCustomConfigs() { DARABONBA_PTR_GET(illegalCustomConfigs_, vector<ChangeCheckCustomConfigResponseBodyIllegalCustomConfigs>) };
    inline ChangeCheckCustomConfigResponseBody& setIllegalCustomConfigs(const vector<ChangeCheckCustomConfigResponseBodyIllegalCustomConfigs> & illegalCustomConfigs) { DARABONBA_PTR_SET_VALUE(illegalCustomConfigs_, illegalCustomConfigs) };
    inline ChangeCheckCustomConfigResponseBody& setIllegalCustomConfigs(vector<ChangeCheckCustomConfigResponseBodyIllegalCustomConfigs> && illegalCustomConfigs) { DARABONBA_PTR_SET_RVALUE(illegalCustomConfigs_, illegalCustomConfigs) };


    // illegalRepairConfigs Field Functions 
    bool hasIllegalRepairConfigs() const { return this->illegalRepairConfigs_ != nullptr;};
    void deleteIllegalRepairConfigs() { this->illegalRepairConfigs_ = nullptr;};
    inline const vector<ChangeCheckCustomConfigResponseBodyIllegalRepairConfigs> & illegalRepairConfigs() const { DARABONBA_PTR_GET_CONST(illegalRepairConfigs_, vector<ChangeCheckCustomConfigResponseBodyIllegalRepairConfigs>) };
    inline vector<ChangeCheckCustomConfigResponseBodyIllegalRepairConfigs> illegalRepairConfigs() { DARABONBA_PTR_GET(illegalRepairConfigs_, vector<ChangeCheckCustomConfigResponseBodyIllegalRepairConfigs>) };
    inline ChangeCheckCustomConfigResponseBody& setIllegalRepairConfigs(const vector<ChangeCheckCustomConfigResponseBodyIllegalRepairConfigs> & illegalRepairConfigs) { DARABONBA_PTR_SET_VALUE(illegalRepairConfigs_, illegalRepairConfigs) };
    inline ChangeCheckCustomConfigResponseBody& setIllegalRepairConfigs(vector<ChangeCheckCustomConfigResponseBodyIllegalRepairConfigs> && illegalRepairConfigs) { DARABONBA_PTR_SET_RVALUE(illegalRepairConfigs_, illegalRepairConfigs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ChangeCheckCustomConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the invalid custom configuration items of the check item.
    std::shared_ptr<vector<ChangeCheckCustomConfigResponseBodyIllegalCustomConfigs>> illegalCustomConfigs_ = nullptr;
    // An array that consists of the invalid parameters required for fixing risk items.
    std::shared_ptr<vector<ChangeCheckCustomConfigResponseBodyIllegalRepairConfigs>> illegalRepairConfigs_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
