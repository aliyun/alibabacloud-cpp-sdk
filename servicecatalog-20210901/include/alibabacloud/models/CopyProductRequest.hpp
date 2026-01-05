// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COPYPRODUCTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COPYPRODUCTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{
namespace Models
{
  class CopyProductRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CopyProductRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SourceProductArn, sourceProductArn_);
      DARABONBA_PTR_TO_JSON(TargetProductName, targetProductName_);
    };
    friend void from_json(const Darabonba::Json& j, CopyProductRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceProductArn, sourceProductArn_);
      DARABONBA_PTR_FROM_JSON(TargetProductName, targetProductName_);
    };
    CopyProductRequest() = default ;
    CopyProductRequest(const CopyProductRequest &) = default ;
    CopyProductRequest(CopyProductRequest &&) = default ;
    CopyProductRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CopyProductRequest() = default ;
    CopyProductRequest& operator=(const CopyProductRequest &) = default ;
    CopyProductRequest& operator=(CopyProductRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sourceProductArn_ == nullptr
        && this->targetProductName_ == nullptr; };
    // sourceProductArn Field Functions 
    bool hasSourceProductArn() const { return this->sourceProductArn_ != nullptr;};
    void deleteSourceProductArn() { this->sourceProductArn_ = nullptr;};
    inline string getSourceProductArn() const { DARABONBA_PTR_GET_DEFAULT(sourceProductArn_, "") };
    inline CopyProductRequest& setSourceProductArn(string sourceProductArn) { DARABONBA_PTR_SET_VALUE(sourceProductArn_, sourceProductArn) };


    // targetProductName Field Functions 
    bool hasTargetProductName() const { return this->targetProductName_ != nullptr;};
    void deleteTargetProductName() { this->targetProductName_ = nullptr;};
    inline string getTargetProductName() const { DARABONBA_PTR_GET_DEFAULT(targetProductName_, "") };
    inline CopyProductRequest& setTargetProductName(string targetProductName) { DARABONBA_PTR_SET_VALUE(targetProductName_, targetProductName) };


  protected:
    // The Alibaba Cloud Resource Name (ARN) of the source product.
    // 
    // > The source product can belong to the current account or belong to a product portfolio that is shared by another account.
    // 
    // This parameter is required.
    shared_ptr<string> sourceProductArn_ {};
    // The name of the destination product.
    shared_ptr<string> targetProductName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
