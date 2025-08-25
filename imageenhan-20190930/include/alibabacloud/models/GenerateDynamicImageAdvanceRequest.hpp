// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEDYNAMICIMAGEADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEDYNAMICIMAGEADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
namespace Models
{
  class GenerateDynamicImageAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateDynamicImageAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Operation, operation_);
      DARABONBA_TO_JSON(Url, urlObject_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateDynamicImageAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Operation, operation_);
      DARABONBA_FROM_JSON(Url, urlObject_);
    };
    GenerateDynamicImageAdvanceRequest() = default ;
    GenerateDynamicImageAdvanceRequest(const GenerateDynamicImageAdvanceRequest &) = default ;
    GenerateDynamicImageAdvanceRequest(GenerateDynamicImageAdvanceRequest &&) = default ;
    GenerateDynamicImageAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateDynamicImageAdvanceRequest() = default ;
    GenerateDynamicImageAdvanceRequest& operator=(const GenerateDynamicImageAdvanceRequest &) = default ;
    GenerateDynamicImageAdvanceRequest& operator=(GenerateDynamicImageAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->operation_ != nullptr
        && this->urlObject_ != nullptr; };
    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string operation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline GenerateDynamicImageAdvanceRequest& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    // urlObject Field Functions 
    bool hasUrlObject() const { return this->urlObject_ != nullptr;};
    void deleteUrlObject() { this->urlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> urlObject() const { DARABONBA_GET(urlObject_) };
    inline GenerateDynamicImageAdvanceRequest& setUrlObject(shared_ptr<Darabonba::IStream> urlObject) { DARABONBA_SET_VALUE(urlObject_, urlObject) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> operation_ = nullptr;
    // This parameter is required.
    shared_ptr<Darabonba::IStream> urlObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
