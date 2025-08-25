// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEDYNAMICIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEDYNAMICIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
namespace Models
{
  class GenerateDynamicImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateDynamicImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Operation, operation_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateDynamicImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Operation, operation_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    GenerateDynamicImageRequest() = default ;
    GenerateDynamicImageRequest(const GenerateDynamicImageRequest &) = default ;
    GenerateDynamicImageRequest(GenerateDynamicImageRequest &&) = default ;
    GenerateDynamicImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateDynamicImageRequest() = default ;
    GenerateDynamicImageRequest& operator=(const GenerateDynamicImageRequest &) = default ;
    GenerateDynamicImageRequest& operator=(GenerateDynamicImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->operation_ != nullptr
        && this->url_ != nullptr; };
    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string operation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline GenerateDynamicImageRequest& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GenerateDynamicImageRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> operation_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
