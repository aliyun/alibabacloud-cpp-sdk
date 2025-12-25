// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPREPAYNAMESPACESPECREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPREPAYNAMESPACESPECREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyPrepayNamespaceSpecRequestModifyPrepayNamespaceSpecRequest.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20190601
{
namespace Models
{
  class ModifyPrepayNamespaceSpecRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPrepayNamespaceSpecRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ModifyPrepayNamespaceSpecRequest, modifyPrepayNamespaceSpecRequest_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPrepayNamespaceSpecRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ModifyPrepayNamespaceSpecRequest, modifyPrepayNamespaceSpecRequest_);
    };
    ModifyPrepayNamespaceSpecRequest() = default ;
    ModifyPrepayNamespaceSpecRequest(const ModifyPrepayNamespaceSpecRequest &) = default ;
    ModifyPrepayNamespaceSpecRequest(ModifyPrepayNamespaceSpecRequest &&) = default ;
    ModifyPrepayNamespaceSpecRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPrepayNamespaceSpecRequest() = default ;
    ModifyPrepayNamespaceSpecRequest& operator=(const ModifyPrepayNamespaceSpecRequest &) = default ;
    ModifyPrepayNamespaceSpecRequest& operator=(ModifyPrepayNamespaceSpecRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modifyPrepayNamespaceSpecRequest_ == nullptr; };
    // modifyPrepayNamespaceSpecRequest Field Functions 
    bool hasModifyPrepayNamespaceSpecRequest() const { return this->modifyPrepayNamespaceSpecRequest_ != nullptr;};
    void deleteModifyPrepayNamespaceSpecRequest() { this->modifyPrepayNamespaceSpecRequest_ = nullptr;};
    inline const ModifyPrepayNamespaceSpecRequestModifyPrepayNamespaceSpecRequest & modifyPrepayNamespaceSpecRequest() const { DARABONBA_PTR_GET_CONST(modifyPrepayNamespaceSpecRequest_, ModifyPrepayNamespaceSpecRequestModifyPrepayNamespaceSpecRequest) };
    inline ModifyPrepayNamespaceSpecRequestModifyPrepayNamespaceSpecRequest modifyPrepayNamespaceSpecRequest() { DARABONBA_PTR_GET(modifyPrepayNamespaceSpecRequest_, ModifyPrepayNamespaceSpecRequestModifyPrepayNamespaceSpecRequest) };
    inline ModifyPrepayNamespaceSpecRequest& setModifyPrepayNamespaceSpecRequest(const ModifyPrepayNamespaceSpecRequestModifyPrepayNamespaceSpecRequest & modifyPrepayNamespaceSpecRequest) { DARABONBA_PTR_SET_VALUE(modifyPrepayNamespaceSpecRequest_, modifyPrepayNamespaceSpecRequest) };
    inline ModifyPrepayNamespaceSpecRequest& setModifyPrepayNamespaceSpecRequest(ModifyPrepayNamespaceSpecRequestModifyPrepayNamespaceSpecRequest && modifyPrepayNamespaceSpecRequest) { DARABONBA_PTR_SET_RVALUE(modifyPrepayNamespaceSpecRequest_, modifyPrepayNamespaceSpecRequest) };


  protected:
    // This parameter is required.
    std::shared_ptr<ModifyPrepayNamespaceSpecRequestModifyPrepayNamespaceSpecRequest> modifyPrepayNamespaceSpecRequest_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20190601
#endif
