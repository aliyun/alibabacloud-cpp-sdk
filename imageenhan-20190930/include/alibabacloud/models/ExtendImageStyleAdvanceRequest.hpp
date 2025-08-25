// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXTENDIMAGESTYLEADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXTENDIMAGESTYLEADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
namespace Models
{
  class ExtendImageStyleAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExtendImageStyleAdvanceRequest& obj) { 
      DARABONBA_TO_JSON(MajorUrl, majorUrlObject_);
      DARABONBA_TO_JSON(StyleUrl, styleUrlObject_);
    };
    friend void from_json(const Darabonba::Json& j, ExtendImageStyleAdvanceRequest& obj) { 
      DARABONBA_FROM_JSON(MajorUrl, majorUrlObject_);
      DARABONBA_FROM_JSON(StyleUrl, styleUrlObject_);
    };
    ExtendImageStyleAdvanceRequest() = default ;
    ExtendImageStyleAdvanceRequest(const ExtendImageStyleAdvanceRequest &) = default ;
    ExtendImageStyleAdvanceRequest(ExtendImageStyleAdvanceRequest &&) = default ;
    ExtendImageStyleAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExtendImageStyleAdvanceRequest() = default ;
    ExtendImageStyleAdvanceRequest& operator=(const ExtendImageStyleAdvanceRequest &) = default ;
    ExtendImageStyleAdvanceRequest& operator=(ExtendImageStyleAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->majorUrlObject_ != nullptr
        && this->styleUrlObject_ != nullptr; };
    // majorUrlObject Field Functions 
    bool hasMajorUrlObject() const { return this->majorUrlObject_ != nullptr;};
    void deleteMajorUrlObject() { this->majorUrlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> majorUrlObject() const { DARABONBA_GET(majorUrlObject_) };
    inline ExtendImageStyleAdvanceRequest& setMajorUrlObject(shared_ptr<Darabonba::IStream> majorUrlObject) { DARABONBA_SET_VALUE(majorUrlObject_, majorUrlObject) };


    // styleUrlObject Field Functions 
    bool hasStyleUrlObject() const { return this->styleUrlObject_ != nullptr;};
    void deleteStyleUrlObject() { this->styleUrlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> styleUrlObject() const { DARABONBA_GET(styleUrlObject_) };
    inline ExtendImageStyleAdvanceRequest& setStyleUrlObject(shared_ptr<Darabonba::IStream> styleUrlObject) { DARABONBA_SET_VALUE(styleUrlObject_, styleUrlObject) };


  protected:
    // This parameter is required.
    shared_ptr<Darabonba::IStream> majorUrlObject_ = nullptr;
    // This parameter is required.
    shared_ptr<Darabonba::IStream> styleUrlObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
