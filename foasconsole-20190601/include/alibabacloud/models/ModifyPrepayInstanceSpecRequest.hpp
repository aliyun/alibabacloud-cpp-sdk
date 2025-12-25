// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPREPAYINSTANCESPECREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPREPAYINSTANCESPECREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyPrepayInstanceSpecRequestModifyPrepayInstanceSpecRequest.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20190601
{
namespace Models
{
  class ModifyPrepayInstanceSpecRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPrepayInstanceSpecRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ModifyPrepayInstanceSpecRequest, modifyPrepayInstanceSpecRequest_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPrepayInstanceSpecRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ModifyPrepayInstanceSpecRequest, modifyPrepayInstanceSpecRequest_);
    };
    ModifyPrepayInstanceSpecRequest() = default ;
    ModifyPrepayInstanceSpecRequest(const ModifyPrepayInstanceSpecRequest &) = default ;
    ModifyPrepayInstanceSpecRequest(ModifyPrepayInstanceSpecRequest &&) = default ;
    ModifyPrepayInstanceSpecRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPrepayInstanceSpecRequest() = default ;
    ModifyPrepayInstanceSpecRequest& operator=(const ModifyPrepayInstanceSpecRequest &) = default ;
    ModifyPrepayInstanceSpecRequest& operator=(ModifyPrepayInstanceSpecRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modifyPrepayInstanceSpecRequest_ == nullptr; };
    // modifyPrepayInstanceSpecRequest Field Functions 
    bool hasModifyPrepayInstanceSpecRequest() const { return this->modifyPrepayInstanceSpecRequest_ != nullptr;};
    void deleteModifyPrepayInstanceSpecRequest() { this->modifyPrepayInstanceSpecRequest_ = nullptr;};
    inline const ModifyPrepayInstanceSpecRequestModifyPrepayInstanceSpecRequest & modifyPrepayInstanceSpecRequest() const { DARABONBA_PTR_GET_CONST(modifyPrepayInstanceSpecRequest_, ModifyPrepayInstanceSpecRequestModifyPrepayInstanceSpecRequest) };
    inline ModifyPrepayInstanceSpecRequestModifyPrepayInstanceSpecRequest modifyPrepayInstanceSpecRequest() { DARABONBA_PTR_GET(modifyPrepayInstanceSpecRequest_, ModifyPrepayInstanceSpecRequestModifyPrepayInstanceSpecRequest) };
    inline ModifyPrepayInstanceSpecRequest& setModifyPrepayInstanceSpecRequest(const ModifyPrepayInstanceSpecRequestModifyPrepayInstanceSpecRequest & modifyPrepayInstanceSpecRequest) { DARABONBA_PTR_SET_VALUE(modifyPrepayInstanceSpecRequest_, modifyPrepayInstanceSpecRequest) };
    inline ModifyPrepayInstanceSpecRequest& setModifyPrepayInstanceSpecRequest(ModifyPrepayInstanceSpecRequestModifyPrepayInstanceSpecRequest && modifyPrepayInstanceSpecRequest) { DARABONBA_PTR_SET_RVALUE(modifyPrepayInstanceSpecRequest_, modifyPrepayInstanceSpecRequest) };


  protected:
    // This parameter is required.
    std::shared_ptr<ModifyPrepayInstanceSpecRequestModifyPrepayInstanceSpecRequest> modifyPrepayInstanceSpecRequest_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20190601
#endif
