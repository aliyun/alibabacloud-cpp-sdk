// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATETRACEDIAGNOSEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATETRACEDIAGNOSEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GenerateTraceDiagnoseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateTraceDiagnoseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateTraceDiagnoseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    GenerateTraceDiagnoseRequest() = default ;
    GenerateTraceDiagnoseRequest(const GenerateTraceDiagnoseRequest &) = default ;
    GenerateTraceDiagnoseRequest(GenerateTraceDiagnoseRequest &&) = default ;
    GenerateTraceDiagnoseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateTraceDiagnoseRequest() = default ;
    GenerateTraceDiagnoseRequest& operator=(const GenerateTraceDiagnoseRequest &) = default ;
    GenerateTraceDiagnoseRequest& operator=(GenerateTraceDiagnoseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->source_ == nullptr
        && this->url_ == nullptr; };
    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline GenerateTraceDiagnoseRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GenerateTraceDiagnoseRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The source of the request.
    shared_ptr<string> source_ {};
    // The URL to diagnose.
    // 
    // This parameter is required.
    shared_ptr<string> url_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
