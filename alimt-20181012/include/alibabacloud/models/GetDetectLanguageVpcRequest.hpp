// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDETECTLANGUAGEVPCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDETECTLANGUAGEVPCREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alimt20181012
{
namespace Models
{
  class GetDetectLanguageVpcRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDetectLanguageVpcRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SourceText, sourceText_);
    };
    friend void from_json(const Darabonba::Json& j, GetDetectLanguageVpcRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceText, sourceText_);
    };
    GetDetectLanguageVpcRequest() = default ;
    GetDetectLanguageVpcRequest(const GetDetectLanguageVpcRequest &) = default ;
    GetDetectLanguageVpcRequest(GetDetectLanguageVpcRequest &&) = default ;
    GetDetectLanguageVpcRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDetectLanguageVpcRequest() = default ;
    GetDetectLanguageVpcRequest& operator=(const GetDetectLanguageVpcRequest &) = default ;
    GetDetectLanguageVpcRequest& operator=(GetDetectLanguageVpcRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sourceText_ == nullptr; };
    // sourceText Field Functions 
    bool hasSourceText() const { return this->sourceText_ != nullptr;};
    void deleteSourceText() { this->sourceText_ = nullptr;};
    inline string sourceText() const { DARABONBA_PTR_GET_DEFAULT(sourceText_, "") };
    inline GetDetectLanguageVpcRequest& setSourceText(string sourceText) { DARABONBA_PTR_SET_VALUE(sourceText_, sourceText) };


  protected:
    std::shared_ptr<string> sourceText_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alimt20181012
#endif
