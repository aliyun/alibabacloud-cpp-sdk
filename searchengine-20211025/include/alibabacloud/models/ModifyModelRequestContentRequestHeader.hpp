// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYMODELREQUESTCONTENTREQUESTHEADER_HPP_
#define ALIBABACLOUD_MODELS_MODIFYMODELREQUESTCONTENTREQUESTHEADER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ModifyModelRequestContentRequestHeader : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyModelRequestContentRequestHeader& obj) { 
      DARABONBA_PTR_TO_JSON(Authorization, authorization_);
      DARABONBA_PTR_TO_JSON(Content-Type, contentType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyModelRequestContentRequestHeader& obj) { 
      DARABONBA_PTR_FROM_JSON(Authorization, authorization_);
      DARABONBA_PTR_FROM_JSON(Content-Type, contentType_);
    };
    ModifyModelRequestContentRequestHeader() = default ;
    ModifyModelRequestContentRequestHeader(const ModifyModelRequestContentRequestHeader &) = default ;
    ModifyModelRequestContentRequestHeader(ModifyModelRequestContentRequestHeader &&) = default ;
    ModifyModelRequestContentRequestHeader(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyModelRequestContentRequestHeader() = default ;
    ModifyModelRequestContentRequestHeader& operator=(const ModifyModelRequestContentRequestHeader &) = default ;
    ModifyModelRequestContentRequestHeader& operator=(ModifyModelRequestContentRequestHeader &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authorization_ != nullptr
        && this->contentType_ != nullptr; };
    // authorization Field Functions 
    bool hasAuthorization() const { return this->authorization_ != nullptr;};
    void deleteAuthorization() { this->authorization_ = nullptr;};
    inline string authorization() const { DARABONBA_PTR_GET_DEFAULT(authorization_, "") };
    inline ModifyModelRequestContentRequestHeader& setAuthorization(string authorization) { DARABONBA_PTR_SET_VALUE(authorization_, authorization) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string contentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline ModifyModelRequestContentRequestHeader& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


  protected:
    std::shared_ptr<string> authorization_ = nullptr;
    std::shared_ptr<string> contentType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
