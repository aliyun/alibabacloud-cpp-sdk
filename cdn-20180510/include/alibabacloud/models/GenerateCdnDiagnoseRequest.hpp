// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATECDNDIAGNOSEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATECDNDIAGNOSEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class GenerateCdnDiagnoseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateCdnDiagnoseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateCdnDiagnoseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    GenerateCdnDiagnoseRequest() = default ;
    GenerateCdnDiagnoseRequest(const GenerateCdnDiagnoseRequest &) = default ;
    GenerateCdnDiagnoseRequest(GenerateCdnDiagnoseRequest &&) = default ;
    GenerateCdnDiagnoseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateCdnDiagnoseRequest() = default ;
    GenerateCdnDiagnoseRequest& operator=(const GenerateCdnDiagnoseRequest &) = default ;
    GenerateCdnDiagnoseRequest& operator=(GenerateCdnDiagnoseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->url_ == nullptr; };
    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GenerateCdnDiagnoseRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    shared_ptr<string> url_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
