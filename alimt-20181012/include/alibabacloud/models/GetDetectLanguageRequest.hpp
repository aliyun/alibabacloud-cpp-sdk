// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDETECTLANGUAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDETECTLANGUAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alimt20181012
{
namespace Models
{
  class GetDetectLanguageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDetectLanguageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SourceText, sourceText_);
    };
    friend void from_json(const Darabonba::Json& j, GetDetectLanguageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceText, sourceText_);
    };
    GetDetectLanguageRequest() = default ;
    GetDetectLanguageRequest(const GetDetectLanguageRequest &) = default ;
    GetDetectLanguageRequest(GetDetectLanguageRequest &&) = default ;
    GetDetectLanguageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDetectLanguageRequest() = default ;
    GetDetectLanguageRequest& operator=(const GetDetectLanguageRequest &) = default ;
    GetDetectLanguageRequest& operator=(GetDetectLanguageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sourceText_ == nullptr; };
    // sourceText Field Functions 
    bool hasSourceText() const { return this->sourceText_ != nullptr;};
    void deleteSourceText() { this->sourceText_ = nullptr;};
    inline string sourceText() const { DARABONBA_PTR_GET_DEFAULT(sourceText_, "") };
    inline GetDetectLanguageRequest& setSourceText(string sourceText) { DARABONBA_PTR_SET_VALUE(sourceText_, sourceText) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> sourceText_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alimt20181012
#endif
